/*
** Automatically generated from `ml_lookup_switch.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 153 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__pseudo_2;

#line 156 "ml_backend.ml_lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1;

#line 159 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2;

#line 162 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 165 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 168 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 171 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 174 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 177 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 180 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct3 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__mlds__type_ctor_info_mlds_rval_0unit__type_ctor_info_unit_0;

#line 183 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 186 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0;

#line 192 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_0_0[3];

#line 195 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_0_0[3];

#line 198 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0;

#line 201 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_0_0[1];

#line 204 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_0[1];

#line 207 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_0[1];

#line 210 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_0[1];

#line 213 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 216 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0[6];

#line 219 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0[6];

#line 222 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0;

#line 225 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0[1];

#line 228 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0[1];

#line 231 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0[1];

#line 234 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0[1];

#line 237 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0_10001(
#line 240 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 242 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2);

#line 245 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0_10001(
#line 248 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 250 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 252 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 255 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001(
#line 258 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 260 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2);

#line 263 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001(
#line 266 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 268 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 270 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 781 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3(
#line 781 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 781 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 768 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2(
#line 768 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 768 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 756 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1(
#line 756 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 756 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 718 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(
#line 718 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_2,
#line 718 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_3,
#line 718 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_6,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_7,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_8,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9,
#line 718 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11,
#line 718 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13,
#line 718 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14);

#line 713 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2(
#line 713 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 713 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 707 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1(
#line 707 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 707 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 698 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(
#line 698 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__StructType_2,
#line 698 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_3,
#line 698 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_4,
#line 698 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 698 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6);

#line 662 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 662 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 662 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_2,
#line 662 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__WordBits_3,
#line 662 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 662 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5);

#line 596 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(
#line 596 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_10,
#line 596 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_11,
#line 596 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_12,
#line 596 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseVals_13,
#line 596 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_14,
#line 596 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__CheckRval_16,
#line 596 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30,
#line 596 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31);

#line 178 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(
#line 178 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 178 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 178 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__4_4,
#line 178 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 178 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6,
#line 178 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7,
#line 178 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_8);

#line 169 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1(
#line 169 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 169 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 242 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 242 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);

#line 242 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 242 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);

#line 237 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1(
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 237 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 223 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6);

#line 237 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1(
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 237 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 223 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6);

#line 455 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__455__1_2_p_0(
#line 455 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
#line 455 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_77);

#line 451 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__451__1_2_p_0(
#line 451 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
#line 451 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_82);

#line 335 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__335__1_2_p_0(
#line 335 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 335 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_86);

#line 333 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__333__1_2_p_0(
#line 333 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 333 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_81);

#line 277 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__277__1_2_p_0(
#line 277 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_16,
#line 277 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_46);

#line 220 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__220__1_2_p_0(
#line 220 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_16,
#line 220 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_9);

#line 807 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2(
#line 807 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 807 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 806 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1(
#line 806 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 806 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 801 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(
#line 801 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_5,
#line 801 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_6,
#line 801 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14,
#line 801 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15);

#line 678 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(
#line 678 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 678 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Count_2,
#line 678 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 678 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__4_4);

#line 455 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2(
#line 455 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 451 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1(
#line 451 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 400 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_13,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_14,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_15,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseSolns_16,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_17,
#line 400 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_18,
#line 400 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_19,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_20,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_21,
#line 400 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_22,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60,
#line 400 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_61);

#line 335 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_2(
#line 335 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 333 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1(
#line 333 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 289 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_14,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_15,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_16,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseValues_17,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_18,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_19,
#line 289 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_20,
#line 289 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_21,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 289 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_24,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52,
#line 289 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);

#line 242 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_16,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_17,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GetTag_6,
#line 242 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__SolnConsts_7,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 242 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);

#line 237 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1(
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 237 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 223 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_Key_34,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_35,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6);

#line 796 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1(
#line 796 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 796 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 220 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3(
#line 220 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 277 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2(
#line 277 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 220 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1(
#line 220 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 220 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1(
#line 220 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);


static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_1[15][2];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_2[1][4];

static /* final */ const MR_Integer ml_backend__ml_lookup_switch_scalar_common_3[2][3];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_4[7][5];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_5[4][1];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_6[9][3];

static /* final */ const MR_Float ml_backend__ml_lookup_switch_scalar_common_7[1];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_8[1][10];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_9[2][7];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_10[2][6];




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
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_lookup_switch_scalar_common_5[0])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_lookup_switch_scalar_common_5[1])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    (MR_Box) &ml_backend__ml_lookup_switch_scalar_common_7[0]
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[11])))
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

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Integer ml_backend__ml_lookup_switch_scalar_common_3[2][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 33
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_4[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__pseudo_2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_bit_vec_check_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_bit_vec_check_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_5[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_5[2]))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_6[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[6])),
    ((MR_Box) (ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[6])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Float ml_backend__ml_lookup_switch_scalar_common_7[1] = {
  /* row 0 */
  (MR_Float) 0.0000000000000000,
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_3[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_9[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_10[2][6] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1081 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1090 "ml_backend.ml_lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1100 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1109 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1117 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1125 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1134 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1142 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1150 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1159 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct3 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__mlds__type_ctor_info_mlds_rval_0unit__type_ctor_info_unit_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 1169 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1177 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1185 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

#line 1193 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__mlds__type_ctor_info_mlds_rval_0unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0
};

#line 1200 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_0_0[3] = {
  (MR_String) "mllsi_cases",
  (MR_String) "mllsi_out_variables",
  (MR_String) "mllsi_out_types"
};

#line 1207 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0 = {
  (MR_String) "ml_lookup_switch_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_0_0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_0_0,
  NULL,
  NULL
};

#line 1222 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_0_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0
};

#line 1227 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_0_0
  }
};

#line 1236 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0
};

#line 1241 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_0[1] = {
  (MR_Integer) 0
};

#line 1246 "ml_backend.ml_lookup_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_lookup_switch_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0_10001)),
  (MR_String) "ml_backend.ml_lookup_switch",
  (MR_String) "ml_lookup_switch_info",
  {     ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_0 },
  {     ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_0
};

#line 1263 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1271 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0[6] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0
};

#line 1281 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0[6] = {
  (MR_String) "msslv_num_later_solns_var",
  (MR_String) "msslv_later_slot_var",
  (MR_String) "msslv_limit_var",
  (MR_String) "msslv_limit_assign_statement",
  (MR_String) "msslv_incr_later_slot_statement",
  (MR_String) "msslv_denfs"
};

#line 1291 "ml_backend.ml_lookup_switch.c"
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

#line 1306 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0
};

#line 1311 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0
  }
};

#line 1320 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0
};

#line 1325 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0[1] = {
  (MR_Integer) 0
};

#line 1330 "ml_backend.ml_lookup_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_several_soln_lookup_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001)),
  ((MR_Box) (ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001)),
  (MR_String) "ml_backend.ml_lookup_switch",
  (MR_String) "ml_several_soln_lookup_vars",
  {     ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0 },
  {     ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0
};

#line 1347 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0_10001(
#line 1350 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1352 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2)
#line 1354 "ml_backend.ml_lookup_switch.c"
{
#line 1356 "ml_backend.ml_lookup_switch.c"
  {
#line 1358 "ml_backend.ml_lookup_switch.c"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 1361 "ml_backend.ml_lookup_switch.c"
    {
#line 1363 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2));
    }
#line 1366 "ml_backend.ml_lookup_switch.c"
    return ml_backend__ml_lookup_switch__succeeded;
#line 1368 "ml_backend.ml_lookup_switch.c"
  }
#line 1370 "ml_backend.ml_lookup_switch.c"
}

#line 1373 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0_10001(
#line 1376 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1378 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 1380 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 1382 "ml_backend.ml_lookup_switch.c"
{
#line 1384 "ml_backend.ml_lookup_switch.c"
  {
#line 1386 "ml_backend.ml_lookup_switch.c"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__1_1;

#line 1389 "ml_backend.ml_lookup_switch.c"
    {
#line 1391 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0(&ml_backend__ml_lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_3));
    }
#line 1394 "ml_backend.ml_lookup_switch.c"
    *ml_backend__ml_lookup_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__1_1));
#line 1396 "ml_backend.ml_lookup_switch.c"
  }
#line 1398 "ml_backend.ml_lookup_switch.c"
}

#line 1401 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001(
#line 1404 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1406 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2)
#line 1408 "ml_backend.ml_lookup_switch.c"
{
#line 1410 "ml_backend.ml_lookup_switch.c"
  {
#line 1412 "ml_backend.ml_lookup_switch.c"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 1415 "ml_backend.ml_lookup_switch.c"
    {
#line 1417 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2));
    }
#line 1420 "ml_backend.ml_lookup_switch.c"
    return ml_backend__ml_lookup_switch__succeeded;
#line 1422 "ml_backend.ml_lookup_switch.c"
  }
#line 1424 "ml_backend.ml_lookup_switch.c"
}

#line 1427 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001(
#line 1430 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1432 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 1434 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 1436 "ml_backend.ml_lookup_switch.c"
{
#line 1438 "ml_backend.ml_lookup_switch.c"
  {
#line 1440 "ml_backend.ml_lookup_switch.c"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__1_1;

#line 1443 "ml_backend.ml_lookup_switch.c"
    {
#line 1445 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0(&ml_backend__ml_lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_3));
    }
#line 1448 "ml_backend.ml_lookup_switch.c"
    *ml_backend__ml_lookup_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__1_1));
#line 1450 "ml_backend.ml_lookup_switch.c"
  }
#line 1452 "ml_backend.ml_lookup_switch.c"
}

#line 781 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3(
#line 781 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 781 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 781 "ml_lookup_switch.m"
{
#line 781 "ml_lookup_switch.m"
  {
#line 781 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 781 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 781 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv2_RowInitializer_6;

#line 781 "ml_lookup_switch.m"
    {
#line 781 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv2_RowInitializer_6 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 781 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv2_RowInitializer_6));
#line 781 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 781 "ml_lookup_switch.m"
  }
#line 781 "ml_lookup_switch.m"
}

#line 768 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2(
#line 768 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 768 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 768 "ml_lookup_switch.m"
{
#line 768 "ml_lookup_switch.m"
  {
#line 768 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 768 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 768 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

#line 768 "ml_lookup_switch.m"
    {
#line 768 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 768 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
#line 768 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 768 "ml_lookup_switch.m"
  }
#line 768 "ml_lookup_switch.m"
}

#line 756 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1(
#line 756 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 756 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 756 "ml_lookup_switch.m"
{
#line 756 "ml_lookup_switch.m"
  {
#line 756 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 756 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 756 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__2_2;

#line 756 "ml_lookup_switch.m"
    {
#line 756 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 756 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__2_2));
#line 756 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 756 "ml_lookup_switch.m"
  }
#line 756 "ml_lookup_switch.m"
}

#line 718 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(
#line 718 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_2,
#line 718 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_3,
#line 718 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_6,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_7,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_8,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9,
#line 718 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11,
#line 718 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12,
#line 718 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13,
#line 718 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14)
#line 718 "ml_lookup_switch.m"
{
#line 729 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 729 "ml_lookup_switch.m"
    {
#line 729 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 729 "ml_lookup_switch.m"
      {
#line 729 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 729 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 732 "ml_lookup_switch.m"
          {
#line 730 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_2 > ml_backend__ml_lookup_switch__EndVal_3);
#line 732 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 731 "ml_lookup_switch.m"
              {
#line 731 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13;
#line 731 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
#line 731 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9;
#line 731 "ml_lookup_switch.m"
              }
#line 732 "ml_lookup_switch.m"
            else
#line 734 "ml_lookup_switch.m"
              {
#line 734 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32;
#line 734 "ml_lookup_switch.m"
                MR_Integer ml_backend__ml_lookup_switch__V_34_34;

#line 733 "ml_lookup_switch.m"
                {
#line 733 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(ml_backend__ml_lookup_switch__FirstSolnStructType_6, ml_backend__ml_lookup_switch__FieldTypes_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9, &ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32);
                }
#line 736 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__V_34_34 = (ml_backend__ml_lookup_switch__CurIndex_2 + (MR_Integer) 1);
#line 736 "ml_lookup_switch.m"
                /* direct tailcall eliminated */
#line 736 "ml_lookup_switch.m"
                {
#line 736 "ml_lookup_switch.m"
                  MR_Integer ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2 = ml_backend__ml_lookup_switch__V_34_34;
#line 736 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32;

#line 736 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13 = (MR_Integer) 1;
#line 736 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9;
#line 736 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 736 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__CurIndex_2 = ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2;
#line 736 "ml_lookup_switch.m"
                }
#line 736 "ml_lookup_switch.m"
                continue;
#line 734 "ml_lookup_switch.m"
              }
#line 732 "ml_lookup_switch.m"
          }
#line 729 "ml_lookup_switch.m"
        else
#line 746 "ml_lookup_switch.m"
          {
#line 746 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Pair_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
#line 746 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Pairs_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
#line 746 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Index_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_44, (MR_Integer) 0)));
#line 746 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Soln_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_44, (MR_Integer) 1)));
#line 746 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__NextPairs_54;
#line 746 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72;
#line 746 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73;
#line 746 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78;
#line 746 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80;
#line 746 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__V_86_86;

#line 748 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_2 < ml_backend__ml_lookup_switch__Index_52);
#line 753 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 750 "ml_lookup_switch.m"
              {
#line 749 "ml_lookup_switch.m"
                {
#line 749 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(ml_backend__ml_lookup_switch__FirstSolnStructType_6, ml_backend__ml_lookup_switch__FieldTypes_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9, &ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72);
                }
#line 751 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73 = (MR_Integer) 1;
#line 752 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__NextPairs_54 = ml_backend__ml_lookup_switch__HeadVar__5_5;
#line 750 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
#line 750 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4;
#line 750 "ml_lookup_switch.m"
              }
#line 753 "ml_lookup_switch.m"
            else
#line 786 "ml_lookup_switch.m"
              {
#line 766 "ml_lookup_switch.m"
                if (((MR_tag((MR_Word) ml_backend__ml_lookup_switch__Soln_53)) == (MR_mktag((MR_Integer) 0))))
#line 755 "ml_lookup_switch.m"
                  {
#line 755 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FieldRvals_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 0)));
#line 755 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_56;
#line 755 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57;
#line 755 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58;
#line 755 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59;
#line 755 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60;
#line 755 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_84_84;

#line 756 "ml_lookup_switch.m"
                    {
#line 756 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FieldInitializers_56 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[7], ml_backend__ml_lookup_switch__FieldRvals_55);
                    }
#line 757 "ml_lookup_switch.m"
                    {
#line 757 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
                    }
#line 758 "ml_lookup_switch.m"
                    {
#line 758 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
                    }
#line 761 "ml_lookup_switch.m"
                    {
#line 761 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58));
#line 761 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_56));
#line 761 "ml_lookup_switch.m"
                    }
#line 760 "ml_lookup_switch.m"
                    {
#line 760 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57));
#line 760 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_84_84));
#line 760 "ml_lookup_switch.m"
                    }
#line 762 "ml_lookup_switch.m"
                    {
#line 762 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_6));
#line 762 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59));
#line 762 "ml_lookup_switch.m"
                    }
#line 764 "ml_lookup_switch.m"
                    {
#line 764 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60));
#line 764 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9));
#line 764 "ml_lookup_switch.m"
                    }
#line 755 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4;
#line 755 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
#line 755 "ml_lookup_switch.m"
                  }
#line 766 "ml_lookup_switch.m"
                else
#line 767 "ml_lookup_switch.m"
                  {
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_101_101 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeInfo_104_104;
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRvals_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 0)));
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterSolns_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 1)));
#line 767 "ml_lookup_switch.m"
                    MR_Integer ml_backend__ml_lookup_switch__NumLaterSolns_63;
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64;
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_75_75;
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_77_77;
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_79_79;
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_91;
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92;
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93;
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94;
#line 767 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95;

#line 768 "ml_lookup_switch.m"
                    {
#line 768 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FieldInitializers_91 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[8], ml_backend__ml_lookup_switch__FirstSolnRvals_61);
                    }
#line 1820 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__TypeInfo_104_104 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1];
#line 769 "ml_lookup_switch.m"
                    {
#line 769 "ml_lookup_switch.m"
                      mercury__list__length_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_104_104, ml_backend__ml_lookup_switch__LaterSolns_62, &ml_backend__ml_lookup_switch__NumLaterSolns_63);
                    }
#line 770 "ml_lookup_switch.m"
                    {
#line 770 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_lookup_switch__NumLaterSolns_63);
                    }
#line 771 "ml_lookup_switch.m"
                    {
#line 771 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4);
                    }
#line 774 "ml_lookup_switch.m"
                    {
#line 774 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_75_75, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93));
#line 774 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_75_75, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_91));
#line 774 "ml_lookup_switch.m"
                    }
#line 773 "ml_lookup_switch.m"
                    {
#line 773 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92));
#line 773 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_75_75));
#line 773 "ml_lookup_switch.m"
                    }
#line 775 "ml_lookup_switch.m"
                    {
#line 775 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_6));
#line 775 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94));
#line 775 "ml_lookup_switch.m"
                    }
#line 777 "ml_lookup_switch.m"
                    {
#line 777 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95));
#line 777 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9));
#line 777 "ml_lookup_switch.m"
                    }
#line 781 "ml_lookup_switch.m"
                    {
#line 781 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 781 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[1]));
#line 781 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3));
#line 781 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 781 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSolnStructType_7));
#line 781 "ml_lookup_switch.m"
                    }
#line 780 "ml_lookup_switch.m"
                    {
#line 780 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64 = mercury__list__map_2_f_0(ml_backend__ml_lookup_switch__TypeInfo_104_104, ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__V_77_77, ml_backend__ml_lookup_switch__LaterSolns_62);
                    }
#line 784 "ml_lookup_switch.m"
                    {
#line 784 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_79_79 = mercury__cord__from_list_1_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64);
                    }
#line 783 "ml_lookup_switch.m"
                    {
#line 783 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = mercury__cord__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11, ml_backend__ml_lookup_switch__V_79_79);
                    }
#line 785 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = (ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4 + ml_backend__ml_lookup_switch__NumLaterSolns_63);
#line 767 "ml_lookup_switch.m"
                  }
#line 787 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__NextPairs_54 = ml_backend__ml_lookup_switch__Pairs_45;
#line 786 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13;
#line 786 "ml_lookup_switch.m"
              }
#line 789 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_86_86 = (ml_backend__ml_lookup_switch__CurIndex_2 + (MR_Integer) 1);
#line 789 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 789 "ml_lookup_switch.m"
            {
#line 789 "ml_lookup_switch.m"
              MR_Integer ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2 = ml_backend__ml_lookup_switch__V_86_86;
#line 789 "ml_lookup_switch.m"
              MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0__tmp_copy_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80;
#line 789 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5 = ml_backend__ml_lookup_switch__NextPairs_54;
#line 789 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72;
#line 789 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_11 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78;
#line 789 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0__tmp_copy_13 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73;

#line 789 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0__tmp_copy_13;
#line 789 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_11;
#line 789 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9;
#line 789 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__5_5 = ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5;
#line 789 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0__tmp_copy_4;
#line 789 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__CurIndex_2 = ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2;
#line 789 "ml_lookup_switch.m"
            }
#line 789 "ml_lookup_switch.m"
            continue;
#line 746 "ml_lookup_switch.m"
          }
#line 729 "ml_lookup_switch.m"
      }
#line 729 "ml_lookup_switch.m"
      break;
#line 729 "ml_lookup_switch.m"
    }
#line 718 "ml_lookup_switch.m"
}

#line 713 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2(
#line 713 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 713 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 713 "ml_lookup_switch.m"
{
#line 713 "ml_lookup_switch.m"
  {
#line 713 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 713 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 713 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

#line 713 "ml_lookup_switch.m"
    {
#line 713 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 713 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
#line 713 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 713 "ml_lookup_switch.m"
  }
#line 713 "ml_lookup_switch.m"
}

#line 707 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1(
#line 707 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 707 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 707 "ml_lookup_switch.m"
{
#line 707 "ml_lookup_switch.m"
  {
#line 707 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 707 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 707 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_DefaultRval_4;

#line 707 "ml_lookup_switch.m"
    {
#line 707 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_DefaultRval_4 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 707 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_DefaultRval_4));
#line 707 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 707 "ml_lookup_switch.m"
  }
#line 707 "ml_lookup_switch.m"
}

#line 698 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(
#line 698 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__StructType_2,
#line 698 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_3,
#line 698 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_4,
#line 698 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 698 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6)
#line 698 "ml_lookup_switch.m"
{
#line 702 "ml_lookup_switch.m"
  {
#line 702 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 702 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 702 "ml_lookup_switch.m"
    else
#line 704 "ml_lookup_switch.m"
      {
#line 704 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Pair_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
#line 704 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Pairs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
#line 704 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RowInitializer_17;
#line 704 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RowInitializers_18;
#line 704 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__Index_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_15, (MR_Integer) 0)));
#line 704 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rvals_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_15, (MR_Integer) 1)));
#line 704 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__FieldRvals_21;
#line 704 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RemainingPairs_22;
#line 704 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__FieldInitializers_23;
#line 704 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__V_26_26;

#line 706 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_4 < ml_backend__ml_lookup_switch__Index_19);
#line 709 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 707 "ml_lookup_switch.m"
          {
#line 707 "ml_lookup_switch.m"
            {
#line 707 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__FieldRvals_21 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[5], ml_backend__ml_lookup_switch__FieldTypes_3);
            }
#line 708 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__RemainingPairs_22 = ml_backend__ml_lookup_switch__HeadVar__5_5;
#line 707 "ml_lookup_switch.m"
          }
#line 709 "ml_lookup_switch.m"
        else
#line 710 "ml_lookup_switch.m"
          {
#line 710 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__FieldRvals_21 = ml_backend__ml_lookup_switch__Rvals_20;
#line 711 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__RemainingPairs_22 = ml_backend__ml_lookup_switch__Pairs_16;
#line 710 "ml_lookup_switch.m"
          }
#line 713 "ml_lookup_switch.m"
        {
#line 713 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__FieldInitializers_23 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[6], ml_backend__ml_lookup_switch__FieldRvals_21);
        }
#line 714 "ml_lookup_switch.m"
        {
#line 714 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__RowInitializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_17, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StructType_2));
#line 714 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_17, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_23));
#line 714 "ml_lookup_switch.m"
        }
#line 716 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_26_26 = (ml_backend__ml_lookup_switch__CurIndex_4 + (MR_Integer) 1);
#line 715 "ml_lookup_switch.m"
        {
#line 715 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(ml_backend__ml_lookup_switch__StructType_2, ml_backend__ml_lookup_switch__FieldTypes_3, ml_backend__ml_lookup_switch__V_26_26, ml_backend__ml_lookup_switch__RemainingPairs_22, &ml_backend__ml_lookup_switch__RowInitializers_18);
        }
#line 704 "ml_lookup_switch.m"
        {
#line 704 "ml_lookup_switch.m"
          MR_Word base;
#line 704 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__6_6 = base;
#line 704 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RowInitializer_17));
#line 704 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__RowInitializers_18));
#line 704 "ml_lookup_switch.m"
        }
#line 704 "ml_lookup_switch.m"
      }
#line 702 "ml_lookup_switch.m"
  }
#line 698 "ml_lookup_switch.m"
}

#line 662 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 662 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 662 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_2,
#line 662 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__WordBits_3,
#line 662 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 662 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5)
#line 662 "ml_lookup_switch.m"
{
#line 665 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 665 "ml_lookup_switch.m"
    {
#line 665 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 665 "ml_lookup_switch.m"
      {
#line 665 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 665 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4;
#line 665 "ml_lookup_switch.m"
        else
#line 666 "ml_lookup_switch.m"
          {
#line 666 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Tag_11;
#line 666 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 666 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Val_17;
#line 666 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__WordNum_18;
#line 666 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Offset_19;
#line 666 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__X1_21;
#line 666 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 666 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28;
#line 666 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__V_12_12;
#line 672 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__X0_20;
#line 670 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv0_X0_20;

#line 666 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Tag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_24_24, (MR_Integer) 0)));
#line 666 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_12_12 = (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_24_24, (MR_Integer) 1));
#line 667 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Val_17 = (ml_backend__ml_lookup_switch__Tag_11 - ml_backend__ml_lookup_switch__Start_2);
#line 668 "ml_lookup_switch.m"
            {
#line 668 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__WordNum_18 = mercury__int__f_47_47_2_f_0(ml_backend__ml_lookup_switch__Val_17, ml_backend__ml_lookup_switch__WordBits_3);
            }
#line 669 "ml_lookup_switch.m"
            {
#line 669 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__Offset_19 = mercury__int__mod_2_f_0(ml_backend__ml_lookup_switch__Val_17, ml_backend__ml_lookup_switch__WordBits_3);
            }
#line 670 "ml_lookup_switch.m"
            {
#line 670 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4, ml_backend__ml_lookup_switch__WordNum_18, &ml_backend__ml_lookup_switch__conv0_X0_20);
            }
#line 670 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 670 "ml_lookup_switch.m"
              {
#line 670 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__X0_20 = ((MR_Integer) ml_backend__ml_lookup_switch__conv0_X0_20);
#line 670 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 670 "ml_lookup_switch.m"
              }
#line 672 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 671 "ml_lookup_switch.m"
              {
#line 671 "ml_lookup_switch.m"
                MR_Integer ml_backend__ml_lookup_switch__V_25_25;

#line 671 "ml_lookup_switch.m"
                {
#line 671 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__V_25_25 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ml_backend__ml_lookup_switch__Offset_19);
                }
#line 671 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__X1_21 = (ml_backend__ml_lookup_switch__X0_20 | ml_backend__ml_lookup_switch__V_25_25);
#line 671 "ml_lookup_switch.m"
              }
#line 672 "ml_lookup_switch.m"
            else
#line 673 "ml_lookup_switch.m"
              {
#line 673 "ml_lookup_switch.m"
                {
#line 673 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__X1_21 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ml_backend__ml_lookup_switch__Offset_19);
                }
#line 673 "ml_lookup_switch.m"
              }
#line 675 "ml_lookup_switch.m"
            {
#line 675 "ml_lookup_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__WordNum_18, ((MR_Box) (ml_backend__ml_lookup_switch__X1_21)), ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4, &ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28);
            }
#line 676 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 676 "ml_lookup_switch.m"
            {
#line 676 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__1__tmp_copy_1 = ml_backend__ml_lookup_switch__Rest_13;
#line 676 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28;

#line 676 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4;
#line 676 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__HeadVar__1__tmp_copy_1;
#line 676 "ml_lookup_switch.m"
            }
#line 676 "ml_lookup_switch.m"
            continue;
#line 666 "ml_lookup_switch.m"
          }
#line 665 "ml_lookup_switch.m"
      }
#line 665 "ml_lookup_switch.m"
      break;
#line 665 "ml_lookup_switch.m"
    }
#line 662 "ml_lookup_switch.m"
}

#line 596 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(
#line 596 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_10,
#line 596 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_11,
#line 596 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_12,
#line 596 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseVals_13,
#line 596 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_14,
#line 596 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__CheckRval_16,
#line 596 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30,
#line 596 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31)
#line 596 "ml_lookup_switch.m"
{
#line 601 "ml_lookup_switch.m"
  {
#line 601 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_31_71;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Globals_18;
#line 601 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__WordBits_19;
#line 601 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__Log2WordBits_20;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData0_21;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitVecArgRvals_22;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitVecRval_23;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData_24;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__WordRval_26;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitNumRval_27;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_45_45;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitMap0_61;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitMap_62;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__WordVals_63;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__WordInitializers_64;
#line 601 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Initializer_65;
#line 615 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SingleWordRval_25;
#line 611 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_32_32;

#line 602 "ml_lookup_switch.m"
    {
#line 602 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, &ml_backend__ml_lookup_switch__Globals_18);
    }
#line 603 "ml_lookup_switch.m"
    {
#line 603 "ml_lookup_switch.m"
      backend_libs__switch_util__get_word_bits_3_p_0(ml_backend__ml_lookup_switch__Globals_18, &ml_backend__ml_lookup_switch__WordBits_19, &ml_backend__ml_lookup_switch__Log2WordBits_20);
    }
#line 604 "ml_lookup_switch.m"
    {
#line 604 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, &ml_backend__ml_lookup_switch__GlobalData0_21);
    }
#line 2368 "ml_backend.ml_lookup_switch.c"
    ml_backend__ml_lookup_switch__TypeCtorInfo_31_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 652 "ml_lookup_switch.m"
    {
#line 652 "ml_lookup_switch.m"
      mercury__map__init_1_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, &ml_backend__ml_lookup_switch__BitMap0_61);
    }
#line 653 "ml_lookup_switch.m"
    {
#line 653 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(ml_backend__ml_lookup_switch__CaseVals_13, ml_backend__ml_lookup_switch__Start_14, ml_backend__ml_lookup_switch__WordBits_19, ml_backend__ml_lookup_switch__BitMap0_61, &ml_backend__ml_lookup_switch__BitMap_62);
    }
#line 654 "ml_lookup_switch.m"
    {
#line 654 "ml_lookup_switch.m"
      mercury__map__to_assoc_list_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__BitMap_62, &ml_backend__ml_lookup_switch__WordVals_63);
    }
#line 655 "ml_lookup_switch.m"
    {
#line 655 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(ml_backend__ml_lookup_switch__WordVals_63, (MR_Integer) 0, &ml_backend__ml_lookup_switch__BitVecArgRvals_22, &ml_backend__ml_lookup_switch__WordInitializers_64);
    }
#line 656 "ml_lookup_switch.m"
    {
#line 656 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__Initializer_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 656 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Initializer_65, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__WordInitializers_64));
#line 656 "ml_lookup_switch.m"
    }
#line 659 "ml_lookup_switch.m"
    {
#line 659 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_10, (MR_String) "bit_vector", (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[14]), ml_backend__ml_lookup_switch__Initializer_65, ml_backend__ml_lookup_switch__Context_11, &ml_backend__ml_lookup_switch__BitVecRval_23, ml_backend__ml_lookup_switch__GlobalData0_21, &ml_backend__ml_lookup_switch__GlobalData_24);
    }
#line 611 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_lookup_switch__BitVecArgRvals_22)) == (MR_mktag((MR_Integer) 1)));
#line 611 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 611 "ml_lookup_switch.m"
      {
#line 611 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__SingleWordRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__BitVecArgRvals_22, (MR_Integer) 0)));
#line 611 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__BitVecArgRvals_22, (MR_Integer) 1)));
#line 611 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "ml_lookup_switch.m"
      }
#line 615 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 613 "ml_lookup_switch.m"
      {
#line 613 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__WordRval_26 = ml_backend__ml_lookup_switch__SingleWordRval_25;
#line 614 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__BitNumRval_27 = ml_backend__ml_lookup_switch__IndexRval_12;
#line 613 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30;
#line 613 "ml_lookup_switch.m"
      }
#line 615 "ml_lookup_switch.m"
    else
#line 618 "ml_lookup_switch.m"
      {
#line 618 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__WordNumRval_28;
#line 618 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_35_35;
#line 618 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_36_36;
#line 618 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_40_40;
#line 618 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_41_41;
#line 618 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__V_42_42;

#line 618 "ml_lookup_switch.m"
        {
#line 618 "ml_lookup_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_24, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31);
        }
#line 625 "ml_lookup_switch.m"
        {
#line 625 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 625 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_36_36, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Log2WordBits_20));
#line 625 "ml_lookup_switch.m"
        }
#line 625 "ml_lookup_switch.m"
        {
#line 625 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 625 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_35_35, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_36_36));
#line 625 "ml_lookup_switch.m"
        }
#line 624 "ml_lookup_switch.m"
        {
#line 624 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__WordNumRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 624 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 624 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 624 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_12));
#line 624 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_35_35));
#line 624 "ml_lookup_switch.m"
        }
#line 628 "ml_lookup_switch.m"
        {
#line 628 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__WordRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 628 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 628 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_lookup_switch_scalar_common_5[3])));
#line 628 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecRval_23));
#line 628 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__WordNumRval_28));
#line 628 "ml_lookup_switch.m"
        }
#line 636 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_42_42 = (ml_backend__ml_lookup_switch__WordBits_19 - (MR_Integer) 1);
#line 636 "ml_lookup_switch.m"
        {
#line 636 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_41_41, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__V_42_42));
#line 636 "ml_lookup_switch.m"
        }
#line 636 "ml_lookup_switch.m"
        {
#line 636 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 636 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_40_40, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_41_41));
#line 636 "ml_lookup_switch.m"
        }
#line 635 "ml_lookup_switch.m"
        {
#line 635 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__BitNumRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 635 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 635 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 635 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_12));
#line 635 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_40_40));
#line 635 "ml_lookup_switch.m"
        }
#line 618 "ml_lookup_switch.m"
      }
#line 639 "ml_lookup_switch.m"
    {
#line 639 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 639 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 639 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 639 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[7])));
#line 639 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__BitNumRval_27));
#line 639 "ml_lookup_switch.m"
    }
#line 638 "ml_lookup_switch.m"
    {
#line 638 "ml_lookup_switch.m"
      MR_Word base;
#line 638 "ml_lookup_switch.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 638 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__CheckRval_16 = base;
#line 638 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 638 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 638 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__WordRval_26));
#line 638 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_45_45));
#line 638 "ml_lookup_switch.m"
    }
#line 601 "ml_lookup_switch.m"
  }
#line 596 "ml_lookup_switch.m"
}

#line 178 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(
#line 178 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 178 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 178 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__4_4,
#line 178 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 178 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6,
#line 178 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7,
#line 178 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_8)
#line 178 "ml_lookup_switch.m"
{
#line 184 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 184 "ml_lookup_switch.m"
    {
#line 184 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 184 "ml_lookup_switch.m"
      {
#line 184 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 184 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "ml_lookup_switch.m"
          {
#line 185 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_8 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7;
#line 185 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__HeadVar__6_6 = ml_backend__ml_lookup_switch__HeadVar__5_5;
#line 184 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 184 "ml_lookup_switch.m"
          }
#line 184 "ml_lookup_switch.m"
        else
#line 187 "ml_lookup_switch.m"
          {
#line 187 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__4_4, (MR_Integer) 0)));
#line 187 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__4_4, (MR_Integer) 1)));
#line 187 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__CaseId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 2)));
#line 187 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Goal_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 3)));
#line 187 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__GoalExpr_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Goal_28, (MR_Integer) 0)));
#line 187 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43;
#line 187 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44;
#line 188 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___TaggedMainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 0)));
#line 188 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___TaggedOtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 1)));
#line 190 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Goal_28, (MR_Integer) 1)));
#line 205 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Disjuncts_31;

#line 191 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_lookup_switch__GoalExpr_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__GoalExpr_29, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 191 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 191 "ml_lookup_switch.m"
              {
#line 191 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__Disjuncts_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__GoalExpr_29, (MR_Integer) 1)));
#line 194 "ml_lookup_switch.m"
                if ((ml_backend__ml_lookup_switch__Disjuncts_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "ml_lookup_switch.m"
                  {
#line 193 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44 = ml_backend__ml_lookup_switch__HeadVar__5_5;
#line 193 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7;
#line 193 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 193 "ml_lookup_switch.m"
                  }
#line 194 "ml_lookup_switch.m"
                else
#line 195 "ml_lookup_switch.m"
                  {
#line 195 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_50_50;
#line 195 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeInfo_51_51;
#line 195 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstDisjunct_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Disjuncts_31, (MR_Integer) 0)));
#line 195 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterDisjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Disjuncts_31, (MR_Integer) 1)));
#line 195 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSoln_34;
#line 195 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterSolns_35;
#line 195 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__SolnConsts_36;
#line 195 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_42_42;

#line 196 "ml_lookup_switch.m"
                    {
#line 196 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__FirstDisjunct_32);
                    }
#line 195 "ml_lookup_switch.m"
                    if (ml_backend__ml_lookup_switch__succeeded)
#line 195 "ml_lookup_switch.m"
                      {
#line 197 "ml_lookup_switch.m"
                        {
#line 197 "ml_lookup_switch.m"
                          ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__LaterDisjuncts_33);
                        }
#line 195 "ml_lookup_switch.m"
                        if (ml_backend__ml_lookup_switch__succeeded)
#line 195 "ml_lookup_switch.m"
                          {
#line 198 "ml_lookup_switch.m"
                            {
#line 198 "ml_lookup_switch.m"
                              ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(ml_backend__ml_lookup_switch__HeadVar__2_2, ml_backend__ml_lookup_switch__FirstDisjunct_32, &ml_backend__ml_lookup_switch__FirstSoln_34, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_42_42);
                            }
#line 200 "ml_lookup_switch.m"
                            {
#line 200 "ml_lookup_switch.m"
                              ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(ml_backend__ml_lookup_switch__HeadVar__2_2, ml_backend__ml_lookup_switch__LaterDisjuncts_33, &ml_backend__ml_lookup_switch__LaterSolns_35, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_42_42, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43);
                            }
#line 2708 "ml_backend.ml_lookup_switch.c"
                            ml_backend__ml_lookup_switch__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
#line 2710 "ml_backend.ml_lookup_switch.c"
                            ml_backend__ml_lookup_switch__TypeInfo_51_51 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 202 "ml_lookup_switch.m"
                            {
#line 202 "ml_lookup_switch.m"
                              ml_backend__ml_lookup_switch__SolnConsts_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SolnConsts_36, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSoln_34));
#line 202 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SolnConsts_36, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSolns_35));
#line 202 "ml_lookup_switch.m"
                            }
#line 203 "ml_lookup_switch.m"
                            {
#line 203 "ml_lookup_switch.m"
                              mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_50_50, ml_backend__ml_lookup_switch__TypeInfo_51_51, ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_27)), ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_36)), ml_backend__ml_lookup_switch__HeadVar__5_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44);
                            }
#line 203 "ml_lookup_switch.m"
                            ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 195 "ml_lookup_switch.m"
                          }
#line 195 "ml_lookup_switch.m"
                      }
#line 195 "ml_lookup_switch.m"
                  }
#line 191 "ml_lookup_switch.m"
              }
#line 191 "ml_lookup_switch.m"
            else
#line 206 "ml_lookup_switch.m"
              {
#line 206 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_52_52;
#line 206 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__TypeInfo_53_53;
#line 206 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__Soln_37;
#line 206 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__SolnConsts_49;

#line 206 "ml_lookup_switch.m"
                {
#line 206 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__Goal_28);
                }
#line 206 "ml_lookup_switch.m"
                if (ml_backend__ml_lookup_switch__succeeded)
#line 206 "ml_lookup_switch.m"
                  {
#line 207 "ml_lookup_switch.m"
                    {
#line 207 "ml_lookup_switch.m"
                      ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(ml_backend__ml_lookup_switch__HeadVar__2_2, ml_backend__ml_lookup_switch__Goal_28, &ml_backend__ml_lookup_switch__Soln_37, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43);
                    }
#line 2764 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
#line 2766 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__TypeInfo_53_53 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 208 "ml_lookup_switch.m"
                    {
#line 208 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__SolnConsts_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 208 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SolnConsts_49, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Soln_37));
#line 208 "ml_lookup_switch.m"
                    }
#line 209 "ml_lookup_switch.m"
                    {
#line 209 "ml_lookup_switch.m"
                      mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_52_52, ml_backend__ml_lookup_switch__TypeInfo_53_53, ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_27)), ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_49)), ml_backend__ml_lookup_switch__HeadVar__5_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44);
                    }
#line 209 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 206 "ml_lookup_switch.m"
                  }
#line 206 "ml_lookup_switch.m"
              }
#line 187 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 211 "ml_lookup_switch.m"
              {
#line 211 "ml_lookup_switch.m"
                /* direct tailcall eliminated */
#line 211 "ml_lookup_switch.m"
                {
#line 211 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__HeadVar__4__tmp_copy_4 = ml_backend__ml_lookup_switch__TaggedCases_22;
#line 211 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44;
#line 211 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0__tmp_copy_7 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43;

#line 211 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 211 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__HeadVar__5_5 = ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5;
#line 211 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__HeadVar__4_4 = ml_backend__ml_lookup_switch__HeadVar__4__tmp_copy_4;
#line 211 "ml_lookup_switch.m"
                }
#line 211 "ml_lookup_switch.m"
                continue;
#line 211 "ml_lookup_switch.m"
              }
#line 187 "ml_lookup_switch.m"
          }
#line 184 "ml_lookup_switch.m"
        return ml_backend__ml_lookup_switch__succeeded;
#line 184 "ml_lookup_switch.m"
      }
#line 184 "ml_lookup_switch.m"
      break;
#line 184 "ml_lookup_switch.m"
    }
#line 178 "ml_lookup_switch.m"
}

#line 169 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1(
#line 169 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 169 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 169 "ml_lookup_switch.m"
{
#line 169 "ml_lookup_switch.m"
  {
#line 169 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 169 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 169 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__3_3;

#line 169 "ml_lookup_switch.m"
    {
#line 169 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_HeadVar__3_3 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 169 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__3_3));
#line 169 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 169 "ml_lookup_switch.m"
  }
#line 169 "ml_lookup_switch.m"
}

#line 56 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0(
#line 56 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_8,
#line 56 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_9,
#line 56 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GoalInfo_10,
#line 56 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12,
#line 56 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27,
#line 56 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28)
#line 56 "ml_lookup_switch.m"
{
#line 141 "ml_lookup_switch.m"
  {
#line 141 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 141 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_35_35;
#line 141 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NonLocals_14;
#line 141 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OtherNonLocals_15;
#line 141 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OutVars_16;
#line 141 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_17;
#line 141 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Globals_18;
#line 141 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__StaticGroundCells_19;
#line 173 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CaseSolnMap_20;
#line 173 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31;
#line 152 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_36_36;
#line 152 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeInfo_37_37;
#line 152 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_30_30;

#line 142 "ml_lookup_switch.m"
    {
#line 142 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_lookup_switch__GoalInfo_10);
    }
#line 2910 "ml_backend.ml_lookup_switch.c"
    ml_backend__ml_lookup_switch__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 145 "ml_lookup_switch.m"
    {
#line 145 "ml_lookup_switch.m"
      parse_tree__set_of_var__delete_3_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_35_35, ml_backend__ml_lookup_switch__SwitchVar_8, ml_backend__ml_lookup_switch__NonLocals_14, &ml_backend__ml_lookup_switch__OtherNonLocals_15);
    }
#line 146 "ml_lookup_switch.m"
    {
#line 146 "ml_lookup_switch.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_35_35, ml_backend__ml_lookup_switch__OtherNonLocals_15, &ml_backend__ml_lookup_switch__OutVars_16);
    }
#line 147 "ml_lookup_switch.m"
    {
#line 147 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27, &ml_backend__ml_lookup_switch__ModuleInfo_17);
    }
#line 148 "ml_lookup_switch.m"
    {
#line 148 "ml_lookup_switch.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_lookup_switch__ModuleInfo_17, &ml_backend__ml_lookup_switch__Globals_18);
    }
#line 149 "ml_lookup_switch.m"
    {
#line 149 "ml_lookup_switch.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_lookup_switch__Globals_18, (MR_Integer) 443, &ml_backend__ml_lookup_switch__StaticGroundCells_19);
    }
#line 152 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__StaticGroundCells_19 == (MR_Integer) 1);
#line 152 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 152 "ml_lookup_switch.m"
      {
#line 2943 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
#line 2945 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__TypeInfo_37_37 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 154 "ml_lookup_switch.m"
        {
#line 154 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_30_30 = mercury__map__init_0_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_36_36, ml_backend__ml_lookup_switch__TypeInfo_37_37);
        }
#line 153 "ml_lookup_switch.m"
        {
#line 153 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(ml_backend__ml_lookup_switch__OutVars_16, ml_backend__ml_lookup_switch__OtherNonLocals_15, ml_backend__ml_lookup_switch__TaggedCases_9, ml_backend__ml_lookup_switch__V_30_30, &ml_backend__ml_lookup_switch__CaseSolnMap_20, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31);
        }
#line 152 "ml_lookup_switch.m"
      }
#line 173 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 166 "ml_lookup_switch.m"
      {
#line 166 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__CaseConsts_22;
#line 166 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__VarTypes_23;
#line 166 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__OutTypes_24;
#line 166 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__FieldTypes_25;
#line 166 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__LookupSwitchInfo_26;
#line 166 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_33_33;
#line 164 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__CaseValuePairMap_21;

#line 166 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31;
#line 162 "ml_lookup_switch.m"
        {
#line 162 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__succeeded = backend_libs__switch_util__project_all_to_one_solution_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_lookup_switch__CaseSolnMap_20, &ml_backend__ml_lookup_switch__CaseValuePairMap_21);
        }
#line 164 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 163 "ml_lookup_switch.m"
          {
#line 163 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__CaseConsts_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 163 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__CaseConsts_22, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseValuePairMap_21));
#line 163 "ml_lookup_switch.m"
          }
#line 164 "ml_lookup_switch.m"
        else
#line 165 "ml_lookup_switch.m"
          {
#line 165 "ml_lookup_switch.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 165 "ml_lookup_switch.m"
            {
#line 165 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__CaseConsts_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseConsts_22, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseSolnMap_20));
#line 165 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseConsts_22, 1) = NULL;
#line 165 "ml_lookup_switch.m"
            }
#line 165 "ml_lookup_switch.m"
          }
#line 167 "ml_lookup_switch.m"
        {
#line 167 "ml_lookup_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31, &ml_backend__ml_lookup_switch__VarTypes_23);
        }
#line 168 "ml_lookup_switch.m"
        {
#line 168 "ml_lookup_switch.m"
          hlds__vartypes__lookup_var_types_3_p_0(ml_backend__ml_lookup_switch__VarTypes_23, ml_backend__ml_lookup_switch__OutVars_16, &ml_backend__ml_lookup_switch__OutTypes_24);
        }
#line 169 "ml_lookup_switch.m"
        {
#line 169 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 169 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[0]));
#line 169 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1));
#line 169 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 169 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__ModuleInfo_17));
#line 169 "ml_lookup_switch.m"
        }
#line 169 "ml_lookup_switch.m"
        {
#line 169 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__FieldTypes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_lookup_switch__V_33_33, ml_backend__ml_lookup_switch__OutTypes_24);
        }
#line 170 "ml_lookup_switch.m"
        {
#line 170 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__LookupSwitchInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 170 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_26, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseConsts_22));
#line 170 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_26, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OutVars_16));
#line 170 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_26, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldTypes_25));
#line 170 "ml_lookup_switch.m"
        }
#line 172 "ml_lookup_switch.m"
        {
#line 172 "ml_lookup_switch.m"
          MR_Word base;
#line 172 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 172 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12 = base;
#line 172 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSwitchInfo_26));
#line 172 "ml_lookup_switch.m"
        }
#line 166 "ml_lookup_switch.m"
      }
#line 173 "ml_lookup_switch.m"
    else
#line 175 "ml_lookup_switch.m"
      {
#line 175 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 175 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27;
#line 175 "ml_lookup_switch.m"
      }
#line 141 "ml_lookup_switch.m"
  }
#line 56 "ml_lookup_switch.m"
}

#line 242 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 242 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14)
#line 242 "ml_lookup_switch.m"
{
#line 247 "ml_lookup_switch.m"
  {
#line 247 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 247 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
#line 247 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__Index_12;
#line 248 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 0)));

#line 249 "ml_lookup_switch.m"
    {
#line 249 "ml_lookup_switch.m"
      backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_11, &ml_backend__ml_lookup_switch__Index_12);
    }
#line 250 "ml_lookup_switch.m"
    {
#line 250 "ml_lookup_switch.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ml_backend__ml_lookup_switch__Index_12, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_7)), ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);
#line 250 "ml_lookup_switch.m"
      return;
    }
#line 247 "ml_lookup_switch.m"
  }
#line 242 "ml_lookup_switch.m"
}

#line 242 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 242 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14)
#line 242 "ml_lookup_switch.m"
{
#line 247 "ml_lookup_switch.m"
  {
#line 247 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 247 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
#line 247 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__Index_12;
#line 248 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 0)));

#line 249 "ml_lookup_switch.m"
    {
#line 249 "ml_lookup_switch.m"
      backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_11, &ml_backend__ml_lookup_switch__Index_12);
    }
#line 250 "ml_lookup_switch.m"
    {
#line 250 "ml_lookup_switch.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ml_backend__ml_lookup_switch__Index_12, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_7)), ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);
#line 250 "ml_lookup_switch.m"
      return;
    }
#line 247 "ml_lookup_switch.m"
  }
#line 242 "ml_lookup_switch.m"
}

#line 237 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1(
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 237 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 237 "ml_lookup_switch.m"
{
#line 237 "ml_lookup_switch.m"
  {
#line 237 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 237 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14;

#line 237 "ml_lookup_switch.m"
    {
#line 237 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), &ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14);
    }
#line 237 "ml_lookup_switch.m"
    *ml_backend__ml_lookup_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14));
#line 237 "ml_lookup_switch.m"
  }
#line 237 "ml_lookup_switch.m"
}

#line 223 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6)
#line 223 "ml_lookup_switch.m"
{
#line 228 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 228 "ml_lookup_switch.m"
    {
#line 228 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 228 "ml_lookup_switch.m"
      {
#line 228 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 228 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "ml_lookup_switch.m"
          {
#line 229 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5;
#line 229 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3;
#line 228 "ml_lookup_switch.m"
          }
#line 228 "ml_lookup_switch.m"
        else
#line 231 "ml_lookup_switch.m"
          {
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedMainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 0)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedOtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 1)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__CaseId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 2)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__SolnConsts_23;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_30_30;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__ConsTag_54;
#line 231 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Index_55;
#line 232 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 3)));
#line 234 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv0_SolnConsts_23;
#line 248 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___ConsId_53;
#line 237 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31;

#line 234 "ml_lookup_switch.m"
            {
#line 234 "ml_lookup_switch.m"
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_21)), &ml_backend__ml_lookup_switch__conv0_SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28);
            }
#line 234 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__SolnConsts_23 = ((MR_Word) ml_backend__ml_lookup_switch__conv0_SolnConsts_23);
#line 248 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch___ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 0)));
#line 248 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__ConsTag_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 1)));
#line 249 "ml_lookup_switch.m"
            {
#line 249 "ml_lookup_switch.m"
              backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_54, &ml_backend__ml_lookup_switch__Index_55);
            }
#line 250 "ml_lookup_switch.m"
            {
#line 250 "ml_lookup_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ml_backend__ml_lookup_switch__Index_55, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23)), ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29);
            }
#line 237 "ml_lookup_switch.m"
            {
#line 237 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_9[1]));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23));
#line 237 "ml_lookup_switch.m"
            }
#line 237 "ml_lookup_switch.m"
            {
#line 237 "ml_lookup_switch.m"
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[4], ml_backend__ml_lookup_switch__V_30_30, ml_backend__ml_lookup_switch__TaggedOtherConsIds_20, ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29)), &ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            }
#line 237 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31 = ((MR_Word) ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
#line 239 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 239 "ml_lookup_switch.m"
            {
#line 239 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2 = ml_backend__ml_lookup_switch__TaggedCases_16;
#line 239 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 239 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;

#line 239 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5;
#line 239 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3;
#line 239 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__2_2 = ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2;
#line 239 "ml_lookup_switch.m"
            }
#line 239 "ml_lookup_switch.m"
            continue;
#line 231 "ml_lookup_switch.m"
          }
#line 228 "ml_lookup_switch.m"
      }
#line 228 "ml_lookup_switch.m"
      break;
#line 228 "ml_lookup_switch.m"
    }
#line 223 "ml_lookup_switch.m"
}

#line 237 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1(
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 237 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 237 "ml_lookup_switch.m"
{
#line 237 "ml_lookup_switch.m"
  {
#line 237 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 237 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14;

#line 237 "ml_lookup_switch.m"
    {
#line 237 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), &ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14);
    }
#line 237 "ml_lookup_switch.m"
    *ml_backend__ml_lookup_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14));
#line 237 "ml_lookup_switch.m"
  }
#line 237 "ml_lookup_switch.m"
}

#line 223 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6)
#line 223 "ml_lookup_switch.m"
{
#line 228 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 228 "ml_lookup_switch.m"
    {
#line 228 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 228 "ml_lookup_switch.m"
      {
#line 228 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 228 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "ml_lookup_switch.m"
          {
#line 229 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5;
#line 229 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3;
#line 228 "ml_lookup_switch.m"
          }
#line 228 "ml_lookup_switch.m"
        else
#line 231 "ml_lookup_switch.m"
          {
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedMainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 0)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedOtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 1)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__CaseId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 2)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__SolnConsts_23;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_30_30;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__ConsTag_54;
#line 231 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Index_55;
#line 232 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 3)));
#line 234 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv0_SolnConsts_23;
#line 248 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___ConsId_53;
#line 237 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31;

#line 234 "ml_lookup_switch.m"
            {
#line 234 "ml_lookup_switch.m"
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_21)), &ml_backend__ml_lookup_switch__conv0_SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28);
            }
#line 234 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__SolnConsts_23 = ((MR_Word) ml_backend__ml_lookup_switch__conv0_SolnConsts_23);
#line 248 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch___ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 0)));
#line 248 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__ConsTag_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 1)));
#line 249 "ml_lookup_switch.m"
            {
#line 249 "ml_lookup_switch.m"
              backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_54, &ml_backend__ml_lookup_switch__Index_55);
            }
#line 250 "ml_lookup_switch.m"
            {
#line 250 "ml_lookup_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ml_backend__ml_lookup_switch__Index_55, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23)), ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29);
            }
#line 237 "ml_lookup_switch.m"
            {
#line 237 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_9[0]));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23));
#line 237 "ml_lookup_switch.m"
            }
#line 237 "ml_lookup_switch.m"
            {
#line 237 "ml_lookup_switch.m"
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[3], ml_backend__ml_lookup_switch__V_30_30, ml_backend__ml_lookup_switch__TaggedOtherConsIds_20, ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29)), &ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            }
#line 237 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31 = ((MR_Word) ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
#line 239 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 239 "ml_lookup_switch.m"
            {
#line 239 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2 = ml_backend__ml_lookup_switch__TaggedCases_16;
#line 239 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 239 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;

#line 239 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5;
#line 239 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3;
#line 239 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__2_2 = ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2;
#line 239 "ml_lookup_switch.m"
            }
#line 239 "ml_lookup_switch.m"
            continue;
#line 231 "ml_lookup_switch.m"
          }
#line 228 "ml_lookup_switch.m"
      }
#line 228 "ml_lookup_switch.m"
      break;
#line 228 "ml_lookup_switch.m"
    }
#line 223 "ml_lookup_switch.m"
}

#line 455 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__455__1_2_p_0(
#line 455 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
#line 455 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_77)
#line 455 "ml_lookup_switch.m"
{
#line 455 "ml_lookup_switch.m"
  {
#line 455 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__HadDummyRows_46 == ml_backend__ml_lookup_switch__HeadVar__2_77);

#line 455 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 455 "ml_lookup_switch.m"
  }
#line 455 "ml_lookup_switch.m"
}

#line 451 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__451__1_2_p_0(
#line 451 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
#line 451 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_82)
#line 451 "ml_lookup_switch.m"
{
#line 451 "ml_lookup_switch.m"
  {
#line 451 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__HadDummyRows_46 == ml_backend__ml_lookup_switch__HeadVar__2_82);

#line 451 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 451 "ml_lookup_switch.m"
  }
#line 451 "ml_lookup_switch.m"
}

#line 335 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__335__1_2_p_0(
#line 335 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 335 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_86)
#line 335 "ml_lookup_switch.m"
{
#line 335 "ml_lookup_switch.m"
  {
#line 335 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__NeedBitVecCheck_22 == ml_backend__ml_lookup_switch__HeadVar__2_86);

#line 335 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 335 "ml_lookup_switch.m"
  }
#line 335 "ml_lookup_switch.m"
}

#line 333 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__333__1_2_p_0(
#line 333 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 333 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_81)
#line 333 "ml_lookup_switch.m"
{
#line 333 "ml_lookup_switch.m"
  {
#line 333 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__NeedRangeCheck_23 == ml_backend__ml_lookup_switch__HeadVar__2_81);

#line 333 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 333 "ml_lookup_switch.m"
  }
#line 333 "ml_lookup_switch.m"
}

#line 277 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__277__1_2_p_0(
#line 277 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_16,
#line 277 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_46)
#line 277 "ml_lookup_switch.m"
{
#line 277 "ml_lookup_switch.m"
  {
#line 277 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CodeModel_16 == ml_backend__ml_lookup_switch__HeadVar__2_46);

#line 277 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 277 "ml_lookup_switch.m"
  }
#line 277 "ml_lookup_switch.m"
}

#line 220 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__220__1_2_p_0(
#line 220 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_16,
#line 220 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_9)
#line 220 "ml_lookup_switch.m"
{
#line 220 "ml_lookup_switch.m"
  {
#line 220 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 220 "ml_lookup_switch.m"
    {
#line 220 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_16, ml_backend__ml_lookup_switch__DepletedCaseIdMap_9);
    }
#line 220 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 220 "ml_lookup_switch.m"
  }
#line 220 "ml_lookup_switch.m"
}

#line 94 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0(
#line 94 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 94 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 94 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3)
#line 94 "ml_lookup_switch.m"
{
#line 94 "ml_lookup_switch.m"
  {
#line 94 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 94 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_21 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;
#line 94 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_22 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__3_3;

#line 94 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_21 == ml_backend__ml_lookup_switch__CastY_22);
#line 94 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 3678 "ml_backend.ml_lookup_switch.c"
      *ml_backend__ml_lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 94 "ml_lookup_switch.m"
    else
#line 94 "ml_lookup_switch.m"
      {
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 4)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 5)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_16_16;

#line 94 "ml_lookup_switch.m"
        {
#line 94 "ml_lookup_switch.m"
          ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_16_16, ml_backend__ml_lookup_switch__V_4_4, ml_backend__ml_lookup_switch__V_10_10);
        }
#line 3716 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_16_16 == (MR_Integer) 0);
#line 94 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 94 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 94 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_16_16;
#line 94 "ml_lookup_switch.m"
        else
#line 94 "ml_lookup_switch.m"
          {
#line 94 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_17_17;

#line 94 "ml_lookup_switch.m"
            {
#line 94 "ml_lookup_switch.m"
              ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_17_17, ml_backend__ml_lookup_switch__V_5_5, ml_backend__ml_lookup_switch__V_11_11);
            }
#line 3736 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_17_17 == (MR_Integer) 0);
#line 94 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 94 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 94 "ml_lookup_switch.m"
              *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_17_17;
#line 94 "ml_lookup_switch.m"
            else
#line 94 "ml_lookup_switch.m"
              {
#line 94 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_18_18;

#line 94 "ml_lookup_switch.m"
                {
#line 94 "ml_lookup_switch.m"
                  ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_18_18, ml_backend__ml_lookup_switch__V_6_6, ml_backend__ml_lookup_switch__V_12_12);
                }
#line 3756 "ml_backend.ml_lookup_switch.c"
                ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_18_18 == (MR_Integer) 0);
#line 94 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 94 "ml_lookup_switch.m"
                if (ml_backend__ml_lookup_switch__succeeded)
#line 94 "ml_lookup_switch.m"
                  *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_18_18;
#line 94 "ml_lookup_switch.m"
                else
#line 94 "ml_lookup_switch.m"
                  {
#line 94 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_19_19;

#line 94 "ml_lookup_switch.m"
                    {
#line 94 "ml_lookup_switch.m"
                      ml_backend__mlds____Compare____statement_0_0(&ml_backend__ml_lookup_switch__V_19_19, ml_backend__ml_lookup_switch__V_7_7, ml_backend__ml_lookup_switch__V_13_13);
                    }
#line 3776 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_19_19 == (MR_Integer) 0);
#line 94 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 94 "ml_lookup_switch.m"
                    if (ml_backend__ml_lookup_switch__succeeded)
#line 94 "ml_lookup_switch.m"
                      *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_19_19;
#line 94 "ml_lookup_switch.m"
                    else
#line 94 "ml_lookup_switch.m"
                      {
#line 94 "ml_lookup_switch.m"
                        MR_Word ml_backend__ml_lookup_switch__V_20_20;

#line 94 "ml_lookup_switch.m"
                        {
#line 94 "ml_lookup_switch.m"
                          ml_backend__mlds____Compare____statement_0_0(&ml_backend__ml_lookup_switch__V_20_20, ml_backend__ml_lookup_switch__V_8_8, ml_backend__ml_lookup_switch__V_14_14);
                        }
#line 3796 "ml_backend.ml_lookup_switch.c"
                        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_20_20 == (MR_Integer) 0);
#line 94 "ml_lookup_switch.m"
                        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 94 "ml_lookup_switch.m"
                        if (ml_backend__ml_lookup_switch__succeeded)
#line 94 "ml_lookup_switch.m"
                          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_20_20;
#line 94 "ml_lookup_switch.m"
                        else
#line 94 "ml_lookup_switch.m"
                          {
#line 94 "ml_lookup_switch.m"
                            {
#line 94 "ml_lookup_switch.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[5], ml_backend__ml_lookup_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_lookup_switch__V_9_9)), ((MR_Box) (ml_backend__ml_lookup_switch__V_15_15)));
#line 94 "ml_lookup_switch.m"
                              return;
                            }
#line 94 "ml_lookup_switch.m"
                          }
#line 94 "ml_lookup_switch.m"
                      }
#line 94 "ml_lookup_switch.m"
                  }
#line 94 "ml_lookup_switch.m"
              }
#line 94 "ml_lookup_switch.m"
          }
#line 94 "ml_lookup_switch.m"
      }
#line 94 "ml_lookup_switch.m"
  }
#line 94 "ml_lookup_switch.m"
}

#line 94 "ml_lookup_switch.m"
MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0(
#line 94 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 94 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2)
#line 94 "ml_lookup_switch.m"
{
#line 94 "ml_lookup_switch.m"
  {
#line 94 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 94 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_15 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__1_1;
#line 94 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_16 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;

#line 94 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_15 == ml_backend__ml_lookup_switch__CastY_16);
#line 94 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 94 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 94 "ml_lookup_switch.m"
    else
#line 94 "ml_lookup_switch.m"
      {
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_22_22;
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 4)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 5)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 94 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 5)));

#line 3887 "ml_backend.ml_lookup_switch.c"
        {
#line 3889 "ml_backend.ml_lookup_switch.c"
          ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_3_3, ml_backend__ml_lookup_switch__V_9_9);
        }
#line 94 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 94 "ml_lookup_switch.m"
          {
#line 3896 "ml_backend.ml_lookup_switch.c"
            {
#line 3898 "ml_backend.ml_lookup_switch.c"
              ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_4_4, ml_backend__ml_lookup_switch__V_10_10);
            }
#line 94 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 94 "ml_lookup_switch.m"
              {
#line 3905 "ml_backend.ml_lookup_switch.c"
                {
#line 3907 "ml_backend.ml_lookup_switch.c"
                  ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_5_5, ml_backend__ml_lookup_switch__V_11_11);
                }
#line 94 "ml_lookup_switch.m"
                if (ml_backend__ml_lookup_switch__succeeded)
#line 94 "ml_lookup_switch.m"
                  {
#line 3914 "ml_backend.ml_lookup_switch.c"
                    {
#line 3916 "ml_backend.ml_lookup_switch.c"
                      ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____statement_0_0(ml_backend__ml_lookup_switch__V_6_6, ml_backend__ml_lookup_switch__V_12_12);
                    }
#line 94 "ml_lookup_switch.m"
                    if (ml_backend__ml_lookup_switch__succeeded)
#line 94 "ml_lookup_switch.m"
                      {
#line 3923 "ml_backend.ml_lookup_switch.c"
                        {
#line 3925 "ml_backend.ml_lookup_switch.c"
                          ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____statement_0_0(ml_backend__ml_lookup_switch__V_7_7, ml_backend__ml_lookup_switch__V_13_13);
                        }
#line 94 "ml_lookup_switch.m"
                        if (ml_backend__ml_lookup_switch__succeeded)
#line 94 "ml_lookup_switch.m"
                          {
#line 3932 "ml_backend.ml_lookup_switch.c"
                            ml_backend__ml_lookup_switch__TypeInfo_22_22 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[5];
#line 3934 "ml_backend.ml_lookup_switch.c"
                            {
#line 3936 "ml_backend.ml_lookup_switch.c"
                              return ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_22_22, ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)), ((MR_Box) (ml_backend__ml_lookup_switch__V_14_14)));
                            }
#line 94 "ml_lookup_switch.m"
                          }
#line 94 "ml_lookup_switch.m"
                      }
#line 94 "ml_lookup_switch.m"
                  }
#line 94 "ml_lookup_switch.m"
              }
#line 94 "ml_lookup_switch.m"
          }
#line 94 "ml_lookup_switch.m"
      }
#line 94 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 94 "ml_lookup_switch.m"
  }
#line 94 "ml_lookup_switch.m"
}

#line 39 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0(
#line 39 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 39 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 39 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3)
#line 39 "ml_lookup_switch.m"
{
#line 39 "ml_lookup_switch.m"
  {
#line 39 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 39 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_12 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;
#line 39 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_13 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__3_3;

#line 39 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_12 == ml_backend__ml_lookup_switch__CastY_13);
#line 39 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 3982 "ml_backend.ml_lookup_switch.c"
      *ml_backend__ml_lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "ml_lookup_switch.m"
    else
#line 39 "ml_lookup_switch.m"
      {
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_10_10;

#line 39 "ml_lookup_switch.m"
        {
#line 39 "ml_lookup_switch.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_2[0], &ml_backend__ml_lookup_switch__V_10_10, ((MR_Box) (ml_backend__ml_lookup_switch__V_4_4)), ((MR_Box) (ml_backend__ml_lookup_switch__V_7_7)));
        }
#line 4008 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_10_10 == (MR_Integer) 0);
#line 39 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 39 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 39 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_10_10;
#line 39 "ml_lookup_switch.m"
        else
#line 39 "ml_lookup_switch.m"
          {
#line 39 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_11_11;

#line 39 "ml_lookup_switch.m"
            {
#line 39 "ml_lookup_switch.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[3], &ml_backend__ml_lookup_switch__V_11_11, ((MR_Box) (ml_backend__ml_lookup_switch__V_5_5)), ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)));
            }
#line 4028 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_11_11 == (MR_Integer) 0);
#line 39 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 39 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 39 "ml_lookup_switch.m"
              *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_11_11;
#line 39 "ml_lookup_switch.m"
            else
#line 39 "ml_lookup_switch.m"
              {
#line 39 "ml_lookup_switch.m"
                {
#line 39 "ml_lookup_switch.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[4], ml_backend__ml_lookup_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_lookup_switch__V_6_6)), ((MR_Box) (ml_backend__ml_lookup_switch__V_9_9)));
#line 39 "ml_lookup_switch.m"
                  return;
                }
#line 39 "ml_lookup_switch.m"
              }
#line 39 "ml_lookup_switch.m"
          }
#line 39 "ml_lookup_switch.m"
      }
#line 39 "ml_lookup_switch.m"
  }
#line 39 "ml_lookup_switch.m"
}

#line 39 "ml_lookup_switch.m"
MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0(
#line 39 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 39 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2)
#line 39 "ml_lookup_switch.m"
{
#line 39 "ml_lookup_switch.m"
  {
#line 39 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 39 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_9 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__1_1;
#line 39 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_10 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;

#line 39 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_9 == ml_backend__ml_lookup_switch__CastY_10);
#line 39 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 39 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 39 "ml_lookup_switch.m"
    else
#line 39 "ml_lookup_switch.m"
      {
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_12_12;
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_13_13;
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));

#line 4103 "ml_backend.ml_lookup_switch.c"
        {
#line 4105 "ml_backend.ml_lookup_switch.c"
          ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_2[0], ((MR_Box) (ml_backend__ml_lookup_switch__V_3_3)), ((MR_Box) (ml_backend__ml_lookup_switch__V_6_6)));
        }
#line 39 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 39 "ml_lookup_switch.m"
          {
#line 4112 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__TypeInfo_12_12 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[3];
#line 4114 "ml_backend.ml_lookup_switch.c"
            {
#line 4116 "ml_backend.ml_lookup_switch.c"
              ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_12_12, ((MR_Box) (ml_backend__ml_lookup_switch__V_4_4)), ((MR_Box) (ml_backend__ml_lookup_switch__V_7_7)));
            }
#line 39 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 39 "ml_lookup_switch.m"
              {
#line 4123 "ml_backend.ml_lookup_switch.c"
                ml_backend__ml_lookup_switch__TypeInfo_13_13 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[4];
#line 4125 "ml_backend.ml_lookup_switch.c"
                {
#line 4127 "ml_backend.ml_lookup_switch.c"
                  return ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_13_13, ((MR_Box) (ml_backend__ml_lookup_switch__V_5_5)), ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)));
                }
#line 39 "ml_lookup_switch.m"
              }
#line 39 "ml_lookup_switch.m"
          }
#line 39 "ml_lookup_switch.m"
      }
#line 39 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 39 "ml_lookup_switch.m"
  }
#line 39 "ml_lookup_switch.m"
}

#line 807 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2(
#line 807 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 807 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 807 "ml_lookup_switch.m"
{
#line 807 "ml_lookup_switch.m"
  {
#line 807 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 807 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 807 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

#line 807 "ml_lookup_switch.m"
    {
#line 807 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 807 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
#line 807 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 807 "ml_lookup_switch.m"
  }
#line 807 "ml_lookup_switch.m"
}

#line 806 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1(
#line 806 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 806 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 806 "ml_lookup_switch.m"
{
#line 806 "ml_lookup_switch.m"
  {
#line 806 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 806 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 806 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_DefaultRval_4;

#line 806 "ml_lookup_switch.m"
    {
#line 806 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_DefaultRval_4 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 806 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_DefaultRval_4));
#line 806 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 806 "ml_lookup_switch.m"
  }
#line 806 "ml_lookup_switch.m"
}

#line 801 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(
#line 801 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_5,
#line 801 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_6,
#line 801 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14,
#line 801 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15)
#line 801 "ml_lookup_switch.m"
{
#line 805 "ml_lookup_switch.m"
  {
#line 805 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 805 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_23_23 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 805 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldRvals_8;
#line 805 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_9;
#line 805 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10;
#line 805 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11;
#line 805 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12;
#line 805 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13;
#line 805 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_20_20;

#line 806 "ml_lookup_switch.m"
    {
#line 806 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FieldRvals_8 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_lookup_switch__TypeCtorInfo_23_23, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[1], ml_backend__ml_lookup_switch__FieldTypes_6);
    }
#line 807 "ml_lookup_switch.m"
    {
#line 807 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FieldInitializers_9 = mercury__list__map_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_23_23, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[2], ml_backend__ml_lookup_switch__FieldRvals_8);
    }
#line 808 "ml_lookup_switch.m"
    {
#line 808 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
    }
#line 809 "ml_lookup_switch.m"
    {
#line 809 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
    }
#line 812 "ml_lookup_switch.m"
    {
#line 812 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_20_20, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11));
#line 812 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_20_20, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_9));
#line 812 "ml_lookup_switch.m"
    }
#line 811 "ml_lookup_switch.m"
    {
#line 811 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10));
#line 811 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_20_20));
#line 811 "ml_lookup_switch.m"
    }
#line 813 "ml_lookup_switch.m"
    {
#line 813 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_5));
#line 813 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12));
#line 813 "ml_lookup_switch.m"
    }
#line 815 "ml_lookup_switch.m"
    {
#line 815 "ml_lookup_switch.m"
      MR_Word base;
#line 815 "ml_lookup_switch.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15 = base;
#line 815 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13));
#line 815 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14));
#line 815 "ml_lookup_switch.m"
    }
#line 805 "ml_lookup_switch.m"
  }
#line 801 "ml_lookup_switch.m"
}

#line 678 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(
#line 678 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 678 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Count_2,
#line 678 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 678 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__4_4)
#line 678 "ml_lookup_switch.m"
{
#line 681 "ml_lookup_switch.m"
  {
#line 681 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 681 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 681 "ml_lookup_switch.m"
      {
#line 681 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 681 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 681 "ml_lookup_switch.m"
      }
#line 681 "ml_lookup_switch.m"
    else
#line 683 "ml_lookup_switch.m"
      {
#line 683 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__WordNum_7;
#line 683 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__Bits_8;
#line 683 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 683 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rval_11;
#line 683 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rvals_12;
#line 683 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Initializer_13;
#line 683 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Initializers_14;
#line 683 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__WordVal_15;
#line 683 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Remainder_16;
#line 683 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 683 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_18_18;
#line 683 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__V_19_19;

#line 682 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__WordNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_17_17, (MR_Integer) 0)));
#line 682 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__Bits_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_17_17, (MR_Integer) 1)));
#line 684 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__Count_2 < ml_backend__ml_lookup_switch__WordNum_7);
#line 687 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 685 "ml_lookup_switch.m"
          {
#line 685 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__WordVal_15 = (MR_Integer) 0;
#line 686 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Remainder_16 = ml_backend__ml_lookup_switch__HeadVar__1_1;
#line 685 "ml_lookup_switch.m"
          }
#line 687 "ml_lookup_switch.m"
        else
#line 688 "ml_lookup_switch.m"
          {
#line 688 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__WordVal_15 = ml_backend__ml_lookup_switch__Bits_8;
#line 689 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Remainder_16 = ml_backend__ml_lookup_switch__Rest_9;
#line 688 "ml_lookup_switch.m"
          }
#line 691 "ml_lookup_switch.m"
        {
#line 691 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 691 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_18_18, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__WordVal_15));
#line 691 "ml_lookup_switch.m"
        }
#line 691 "ml_lookup_switch.m"
        {
#line 691 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 691 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Rval_11, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_18_18));
#line 691 "ml_lookup_switch.m"
        }
#line 692 "ml_lookup_switch.m"
        {
#line 692 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__Initializer_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 692 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Initializer_13, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Rval_11));
#line 692 "ml_lookup_switch.m"
        }
#line 693 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_19_19 = (ml_backend__ml_lookup_switch__Count_2 + (MR_Integer) 1);
#line 693 "ml_lookup_switch.m"
        {
#line 693 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(ml_backend__ml_lookup_switch__Remainder_16, ml_backend__ml_lookup_switch__V_19_19, &ml_backend__ml_lookup_switch__Rvals_12, &ml_backend__ml_lookup_switch__Initializers_14);
        }
#line 683 "ml_lookup_switch.m"
        {
#line 683 "ml_lookup_switch.m"
          MR_Word base;
#line 683 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__3_3 = base;
#line 683 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Rval_11));
#line 683 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__Rvals_12));
#line 683 "ml_lookup_switch.m"
        }
#line 683 "ml_lookup_switch.m"
        {
#line 683 "ml_lookup_switch.m"
          MR_Word base;
#line 683 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__4_4 = base;
#line 683 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Initializer_13));
#line 683 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__Initializers_14));
#line 683 "ml_lookup_switch.m"
        }
#line 683 "ml_lookup_switch.m"
      }
#line 681 "ml_lookup_switch.m"
  }
#line 678 "ml_lookup_switch.m"
}

#line 455 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2(
#line 455 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 455 "ml_lookup_switch.m"
{
#line 455 "ml_lookup_switch.m"
  {
#line 455 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 455 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 455 "ml_lookup_switch.m"
    {
#line 455 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__455__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 455 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 455 "ml_lookup_switch.m"
  }
#line 455 "ml_lookup_switch.m"
}

#line 451 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1(
#line 451 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 451 "ml_lookup_switch.m"
{
#line 451 "ml_lookup_switch.m"
  {
#line 451 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 451 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 451 "ml_lookup_switch.m"
    {
#line 451 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__451__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 451 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 451 "ml_lookup_switch.m"
  }
#line 451 "ml_lookup_switch.m"
}

#line 400 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_13,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_14,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_15,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseSolns_16,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_17,
#line 400 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_18,
#line 400 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_19,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_20,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_21,
#line 400 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_22,
#line 400 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60,
#line 400 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_61)
#line 400 "ml_lookup_switch.m"
{
#line 408 "ml_lookup_switch.m"
  {
#line 408 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_88_88;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_24;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleName_25;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_26;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_Context_27;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Target_28;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_IntType_29;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData0_31;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_32;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_33;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData1_35;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_36;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_37;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_38;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData2_39;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_41;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_42;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_43;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_44;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_45;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializers_47;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializers_48;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnVectorCommon_49;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData3_50;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnVectorCommon_51;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData_52;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MatchDefns_53;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__InRangeStatements_54;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__InRangeStmt_55;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__InRangeStatement_56;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_62_62;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_70_70;
#line 408 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_72_72;

#line 409 "ml_lookup_switch.m"
    {
#line 409 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__ModuleInfo_24);
    }
#line 410 "ml_lookup_switch.m"
    {
#line 410 "ml_lookup_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_lookup_switch__ModuleInfo_24, &ml_backend__ml_lookup_switch__ModuleName_25);
    }
#line 411 "ml_lookup_switch.m"
    {
#line 411 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_ModuleName_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_lookup_switch__ModuleName_25);
    }
#line 412 "ml_lookup_switch.m"
    {
#line 412 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_Context_27 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_lookup_switch__Context_17);
    }
#line 413 "ml_lookup_switch.m"
    {
#line 413 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__Target_28);
    }
#line 415 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__MLDS_IntType_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 416 "ml_lookup_switch.m"
    {
#line 416 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_62_62, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_IntType_29));
#line 416 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_62_62, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OutTypes_15));
#line 416 "ml_lookup_switch.m"
    }
#line 416 "ml_lookup_switch.m"
    {
#line 416 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_IntType_29));
#line 416 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_62_62));
#line 416 "ml_lookup_switch.m"
    }
#line 418 "ml_lookup_switch.m"
    {
#line 418 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__GlobalData0_31);
    }
#line 419 "ml_lookup_switch.m"
    {
#line 419 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__MLDS_Context_27, ml_backend__ml_lookup_switch__Target_28, ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30, &ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_32, &ml_backend__ml_lookup_switch__FirstSolnStructType_33, &ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34, ml_backend__ml_lookup_switch__GlobalData0_31, &ml_backend__ml_lookup_switch__GlobalData1_35);
    }
#line 422 "ml_lookup_switch.m"
    {
#line 422 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__MLDS_Context_27, ml_backend__ml_lookup_switch__Target_28, ml_backend__ml_lookup_switch__OutTypes_15, &ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_36, &ml_backend__ml_lookup_switch__LaterSolnStructType_37, &ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_38, ml_backend__ml_lookup_switch__GlobalData1_35, &ml_backend__ml_lookup_switch__GlobalData2_39);
    }
#line 430 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "ml_lookup_switch.m"
      {
#line 429 "ml_lookup_switch.m"
        {
#line 429 "ml_lookup_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "not enough field_ids");
#line 429 "ml_lookup_switch.m"
          return;
        }
#line 428 "ml_lookup_switch.m"
      }
#line 430 "ml_lookup_switch.m"
    else
#line 430 "ml_lookup_switch.m"
      {
#line 430 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34, (MR_Integer) 1)));
#line 430 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34, (MR_Integer) 0)));

#line 430 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__V_97_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "ml_lookup_switch.m"
          {
#line 429 "ml_lookup_switch.m"
            {
#line 429 "ml_lookup_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "not enough field_ids");
#line 429 "ml_lookup_switch.m"
              return;
            }
#line 428 "ml_lookup_switch.m"
          }
#line 430 "ml_lookup_switch.m"
        else
#line 431 "ml_lookup_switch.m"
          {
#line 432 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_41 = ml_backend__ml_lookup_switch__V_98_98;
#line 433 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_97_97, (MR_Integer) 0)));
#line 433 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_97_97, (MR_Integer) 1)));
#line 431 "ml_lookup_switch.m"
          }
#line 430 "ml_lookup_switch.m"
      }
#line 4730 "ml_backend.ml_lookup_switch.c"
    ml_backend__ml_lookup_switch__TypeCtorInfo_88_88 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 438 "ml_lookup_switch.m"
    {
#line 438 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_70_70 = mercury__cord__init_0_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_88_88);
    }
#line 435 "ml_lookup_switch.m"
    {
#line 435 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(ml_backend__ml_lookup_switch__StartVal_18, ml_backend__ml_lookup_switch__EndVal_19, (MR_Integer) 0, ml_backend__ml_lookup_switch__CaseSolns_16, ml_backend__ml_lookup_switch__FirstSolnStructType_33, ml_backend__ml_lookup_switch__LaterSolnStructType_37, ml_backend__ml_lookup_switch__OutTypes_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_44, ml_backend__ml_lookup_switch__V_70_70, &ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_45, (MR_Integer) 0, &ml_backend__ml_lookup_switch__HadDummyRows_46);
    }
#line 439 "ml_lookup_switch.m"
    {
#line 439 "ml_lookup_switch.m"
      mercury__list__reverse_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_88_88, ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_44, &ml_backend__ml_lookup_switch__FirstSolnRowInitializers_47);
    }
#line 440 "ml_lookup_switch.m"
    {
#line 440 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSolnRowInitializers_48 = mercury__cord__list_1_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_88_88, ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_45);
    }
#line 441 "ml_lookup_switch.m"
    {
#line 441 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_32, ml_backend__ml_lookup_switch__FirstSolnRowInitializers_47, &ml_backend__ml_lookup_switch__FirstSolnVectorCommon_49, ml_backend__ml_lookup_switch__GlobalData2_39, &ml_backend__ml_lookup_switch__GlobalData3_50);
    }
#line 444 "ml_lookup_switch.m"
    {
#line 444 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_36, ml_backend__ml_lookup_switch__LaterSolnRowInitializers_48, &ml_backend__ml_lookup_switch__LaterSolnVectorCommon_51, ml_backend__ml_lookup_switch__GlobalData3_50, &ml_backend__ml_lookup_switch__GlobalData_52);
    }
#line 447 "ml_lookup_switch.m"
    {
#line 447 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_52, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_72_72);
    }
#line 453 "ml_lookup_switch.m"
#line 453 "ml_lookup_switch.m"
    switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_20) {
#line 453 "ml_lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 453 "ml_lookup_switch.m"
      case (MR_Integer) 1:
#line 450 "ml_lookup_switch.m"
        {
#line 450 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_78_78;

#line 451 "ml_lookup_switch.m"
          {
#line 451 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 451 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[5]));
#line 451 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1));
#line 451 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 451 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__HadDummyRows_46));
#line 451 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 4) = ((MR_Box) ((MR_Integer) 0));
#line 451 "ml_lookup_switch.m"
          }
#line 451 "ml_lookup_switch.m"
          {
#line 451 "ml_lookup_switch.m"
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_78_78, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "bad dont_need_bit_vec_check");
          }
#line 450 "ml_lookup_switch.m"
        }
#line 453 "ml_lookup_switch.m"
        break;
#line 453 "ml_lookup_switch.m"
      case (MR_Integer) 0:
#line 454 "ml_lookup_switch.m"
        {
#line 454 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_73_73;

#line 455 "ml_lookup_switch.m"
          {
#line 455 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 455 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[5]));
#line 455 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2));
#line 455 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 455 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__HadDummyRows_46));
#line 455 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 4) = ((MR_Box) ((MR_Integer) 1));
#line 455 "ml_lookup_switch.m"
          }
#line 455 "ml_lookup_switch.m"
          {
#line 455 "ml_lookup_switch.m"
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_73_73, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "bad need_bit_vec_check");
          }
#line 454 "ml_lookup_switch.m"
        }
#line 453 "ml_lookup_switch.m"
        break;
#line 453 "ml_lookup_switch.m"
    }
#line 459 "ml_lookup_switch.m"
    {
#line 459 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_18_p_0(ml_backend__ml_lookup_switch__Context_17, ml_backend__ml_lookup_switch__MLDS_Context_27, ml_backend__ml_lookup_switch__IndexRval_13, ml_backend__ml_lookup_switch__OutVars_14, ml_backend__ml_lookup_switch__OutTypes_15, ml_backend__ml_lookup_switch__FirstSolnStructType_33, ml_backend__ml_lookup_switch__LaterSolnStructType_37, ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_41, ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_42, ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_43, ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_38, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_49, ml_backend__ml_lookup_switch__LaterSolnVectorCommon_51, ml_backend__ml_lookup_switch__NeedBitVecCheck_20, &ml_backend__ml_lookup_switch__MatchDefns_53, &ml_backend__ml_lookup_switch__InRangeStatements_54, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_72_72, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_61);
    }
#line 465 "ml_lookup_switch.m"
    {
#line 465 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__InRangeStmt_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStmt_55, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MatchDefns_53));
#line 465 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStmt_55, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStatements_54));
#line 465 "ml_lookup_switch.m"
    }
#line 466 "ml_lookup_switch.m"
    {
#line 466 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__InRangeStatement_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStatement_56, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStmt_55));
#line 466 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStatement_56, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 466 "ml_lookup_switch.m"
    }
#line 471 "ml_lookup_switch.m"
#line 471 "ml_lookup_switch.m"
    switch (ml_backend__ml_lookup_switch__NeedRangeCheck_21) {
#line 471 "ml_lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 471 "ml_lookup_switch.m"
      case (MR_Integer) 1:
#line 469 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__Statement_22 = ml_backend__ml_lookup_switch__InRangeStatement_56;
#line 471 "ml_lookup_switch.m"
        break;
#line 471 "ml_lookup_switch.m"
      case (MR_Integer) 0:
#line 472 "ml_lookup_switch.m"
        {
#line 472 "ml_lookup_switch.m"
          MR_Integer ml_backend__ml_lookup_switch__Difference_57 = (ml_backend__ml_lookup_switch__EndVal_19 - ml_backend__ml_lookup_switch__StartVal_18);
#line 472 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__RangeCheckCond_58;
#line 472 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__Stmt_59;
#line 472 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_85_85;
#line 472 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_86_86;

#line 476 "ml_lookup_switch.m"
          {
#line 476 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 476 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_86_86, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Difference_57));
#line 476 "ml_lookup_switch.m"
          }
#line 476 "ml_lookup_switch.m"
          {
#line 476 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 476 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_85_85, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_86_86));
#line 476 "ml_lookup_switch.m"
          }
#line 475 "ml_lookup_switch.m"
          {
#line 475 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__RangeCheckCond_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 475 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 475 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))));
#line 475 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_13));
#line 475 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_85_85));
#line 475 "ml_lookup_switch.m"
          }
#line 478 "ml_lookup_switch.m"
          {
#line 478 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Stmt_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 478 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_59, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckCond_58));
#line 478 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_59, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStatement_56));
#line 478 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_59, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "ml_lookup_switch.m"
          }
#line 479 "ml_lookup_switch.m"
          {
#line 479 "ml_lookup_switch.m"
            MR_Word base;
#line 479 "ml_lookup_switch.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__Statement_22 = base;
#line 479 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_59));
#line 479 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 479 "ml_lookup_switch.m"
          }
#line 472 "ml_lookup_switch.m"
        }
#line 471 "ml_lookup_switch.m"
        break;
#line 471 "ml_lookup_switch.m"
    }
#line 408 "ml_lookup_switch.m"
  }
#line 400 "ml_lookup_switch.m"
}

#line 335 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_2(
#line 335 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 335 "ml_lookup_switch.m"
{
#line 335 "ml_lookup_switch.m"
  {
#line 335 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 335 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 335 "ml_lookup_switch.m"
    {
#line 335 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__335__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 335 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 335 "ml_lookup_switch.m"
  }
#line 335 "ml_lookup_switch.m"
}

#line 333 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1(
#line 333 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 333 "ml_lookup_switch.m"
{
#line 333 "ml_lookup_switch.m"
  {
#line 333 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 333 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 333 "ml_lookup_switch.m"
    {
#line 333 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__333__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 333 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 333 "ml_lookup_switch.m"
  }
#line 333 "ml_lookup_switch.m"
}

#line 289 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_14,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_15,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_16,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseValues_17,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_18,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_19,
#line 289 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_20,
#line 289 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_21,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 289 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_24,
#line 289 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52,
#line 289 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53)
#line 289 "ml_lookup_switch.m"
{
#line 297 "ml_lookup_switch.m"
  {
#line 297 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 297 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_26;
#line 297 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleName_27;
#line 297 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_28;
#line 297 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_Context_29;
#line 297 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Target_30;
#line 297 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LookupStatements_31;
#line 297 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;

#line 298 "ml_lookup_switch.m"
    {
#line 298 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__ModuleInfo_26);
    }
#line 299 "ml_lookup_switch.m"
    {
#line 299 "ml_lookup_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_lookup_switch__ModuleInfo_26, &ml_backend__ml_lookup_switch__ModuleName_27);
    }
#line 300 "ml_lookup_switch.m"
    {
#line 300 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_lookup_switch__ModuleName_27);
    }
#line 301 "ml_lookup_switch.m"
    {
#line 301 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_Context_29 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_lookup_switch__Context_19);
    }
#line 302 "ml_lookup_switch.m"
    {
#line 302 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__Target_30);
    }
#line 313 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__OutTypes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "ml_lookup_switch.m"
      {
#line 312 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__LookupStatements_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 305 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52;
#line 305 "ml_lookup_switch.m"
      }
#line 313 "ml_lookup_switch.m"
    else
#line 314 "ml_lookup_switch.m"
      {
#line 314 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__GlobalData0_34;
#line 314 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__StructTypeNum_35;
#line 314 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__StructType_36;
#line 314 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__FieldIds_37;
#line 314 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__GlobalData1_38;
#line 314 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RowInitializers_39;
#line 314 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__VectorCommon_40;
#line 314 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__GlobalData_41;
#line 314 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54;

#line 315 "ml_lookup_switch.m"
        {
#line 315 "ml_lookup_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__GlobalData0_34);
        }
#line 316 "ml_lookup_switch.m"
        {
#line 316 "ml_lookup_switch.m"
          ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__MLDS_Context_29, ml_backend__ml_lookup_switch__Target_30, ml_backend__ml_lookup_switch__OutTypes_16, &ml_backend__ml_lookup_switch__StructTypeNum_35, &ml_backend__ml_lookup_switch__StructType_36, &ml_backend__ml_lookup_switch__FieldIds_37, ml_backend__ml_lookup_switch__GlobalData0_34, &ml_backend__ml_lookup_switch__GlobalData1_38);
        }
#line 320 "ml_lookup_switch.m"
        {
#line 320 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(ml_backend__ml_lookup_switch__StructType_36, ml_backend__ml_lookup_switch__OutTypes_16, ml_backend__ml_lookup_switch__StartVal_20, ml_backend__ml_lookup_switch__CaseValues_17, &ml_backend__ml_lookup_switch__RowInitializers_39);
        }
#line 323 "ml_lookup_switch.m"
        {
#line 323 "ml_lookup_switch.m"
          ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__StructTypeNum_35, ml_backend__ml_lookup_switch__RowInitializers_39, &ml_backend__ml_lookup_switch__VectorCommon_40, ml_backend__ml_lookup_switch__GlobalData1_38, &ml_backend__ml_lookup_switch__GlobalData_41);
        }
#line 325 "ml_lookup_switch.m"
        {
#line 325 "ml_lookup_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_41, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54);
        }
#line 327 "ml_lookup_switch.m"
        {
#line 327 "ml_lookup_switch.m"
          ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_15, ml_backend__ml_lookup_switch__OutTypes_16, ml_backend__ml_lookup_switch__FieldIds_37, ml_backend__ml_lookup_switch__VectorCommon_40, ml_backend__ml_lookup_switch__StructType_36, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__MLDS_Context_29, &ml_backend__ml_lookup_switch__LookupStatements_31, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55);
        }
#line 314 "ml_lookup_switch.m"
      }
#line 339 "ml_lookup_switch.m"
#line 339 "ml_lookup_switch.m"
    switch (ml_backend__ml_lookup_switch__CodeModel_18) {
#line 339 "ml_lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 339 "ml_lookup_switch.m"
      case (MR_Integer) 0:
#line 332 "ml_lookup_switch.m"
        {
#line 332 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__Stmt_42;
#line 332 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_77_77;
#line 332 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_82_82;

#line 333 "ml_lookup_switch.m"
          {
#line 333 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 333 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[3]));
#line 333 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1));
#line 333 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 333 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NeedRangeCheck_23));
#line 333 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 4) = ((MR_Box) ((MR_Integer) 1));
#line 333 "ml_lookup_switch.m"
          }
#line 333 "ml_lookup_switch.m"
          {
#line 333 "ml_lookup_switch.m"
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_77_77, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_det need_range_check");
          }
#line 335 "ml_lookup_switch.m"
          {
#line 335 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 335 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[4]));
#line 335 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_2));
#line 335 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 335 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NeedBitVecCheck_22));
#line 335 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 4) = ((MR_Box) ((MR_Integer) 1));
#line 335 "ml_lookup_switch.m"
          }
#line 335 "ml_lookup_switch.m"
          {
#line 335 "ml_lookup_switch.m"
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_82_82, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_det need_bit_vec_check");
          }
#line 337 "ml_lookup_switch.m"
          {
#line 337 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Stmt_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Stmt_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Stmt_42, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupStatements_31));
#line 337 "ml_lookup_switch.m"
          }
#line 338 "ml_lookup_switch.m"
          {
#line 338 "ml_lookup_switch.m"
            MR_Word base;
#line 338 "ml_lookup_switch.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 338 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__Statement_24 = base;
#line 338 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_42));
#line 338 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 338 "ml_lookup_switch.m"
          }
#line 332 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
#line 332 "ml_lookup_switch.m"
        }
#line 339 "ml_lookup_switch.m"
        break;
#line 339 "ml_lookup_switch.m"
      case (MR_Integer) 2:
#line 392 "ml_lookup_switch.m"
        {
#line 395 "ml_lookup_switch.m"
          {
#line 395 "ml_lookup_switch.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_non");
#line 395 "ml_lookup_switch.m"
            return;
          }
#line 392 "ml_lookup_switch.m"
        }
#line 339 "ml_lookup_switch.m"
        break;
#line 339 "ml_lookup_switch.m"
      case (MR_Integer) 1:
#line 340 "ml_lookup_switch.m"
        {
#line 340 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43;
#line 340 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__LookupSucceedStmt_44;
#line 340 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
#line 340 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_62_62;
#line 340 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_63_63;

#line 341 "ml_lookup_switch.m"
          {
#line 341 "ml_lookup_switch.m"
            ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[13]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43);
          }
#line 344 "ml_lookup_switch.m"
          {
#line 344 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_63_63, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43));
#line 344 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "ml_lookup_switch.m"
          }
#line 344 "ml_lookup_switch.m"
          {
#line 344 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_62_62 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_lookup_switch__LookupStatements_31, ml_backend__ml_lookup_switch__V_63_63);
          }
#line 343 "ml_lookup_switch.m"
          {
#line 343 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__LookupSucceedStmt_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 343 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStmt_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 343 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStmt_44, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_62_62));
#line 343 "ml_lookup_switch.m"
          }
#line 345 "ml_lookup_switch.m"
          {
#line 345 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__LookupSucceedStatement_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 345 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStatement_45, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStmt_44));
#line 345 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStatement_45, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 345 "ml_lookup_switch.m"
          }
#line 363 "ml_lookup_switch.m"
#line 363 "ml_lookup_switch.m"
          switch (ml_backend__ml_lookup_switch__NeedRangeCheck_23) {
#line 363 "ml_lookup_switch.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 363 "ml_lookup_switch.m"
            case (MR_Integer) 1:
#line 351 "ml_lookup_switch.m"
#line 351 "ml_lookup_switch.m"
              switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_22) {
#line 351 "ml_lookup_switch.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 351 "ml_lookup_switch.m"
                case (MR_Integer) 1:
#line 349 "ml_lookup_switch.m"
                  {
#line 350 "ml_lookup_switch.m"
                    *ml_backend__ml_lookup_switch__Statement_24 = ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
#line 349 "ml_lookup_switch.m"
                    *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
#line 349 "ml_lookup_switch.m"
                  }
#line 351 "ml_lookup_switch.m"
                  break;
#line 351 "ml_lookup_switch.m"
                case (MR_Integer) 0:
#line 352 "ml_lookup_switch.m"
                  {
#line 352 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__BitVecCheckCond_46;
#line 352 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47;
#line 352 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_76_76;
#line 352 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__Stmt_88;

#line 353 "ml_lookup_switch.m"
                    {
#line 353 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__Context_19, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__CaseValues_17, ml_backend__ml_lookup_switch__StartVal_20, &ml_backend__ml_lookup_switch__BitVecCheckCond_46, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);
                    }
#line 356 "ml_lookup_switch.m"
                    {
#line 356 "ml_lookup_switch.m"
                      ml_backend__ml_code_util__ml_gen_set_success_4_p_0(*ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[8]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47);
                    }
#line 360 "ml_lookup_switch.m"
                    {
#line 360 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 360 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_76_76, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47));
#line 360 "ml_lookup_switch.m"
                    }
#line 359 "ml_lookup_switch.m"
                    {
#line 359 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__Stmt_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 359 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecCheckCond_46));
#line 359 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStatement_45));
#line 359 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_76_76));
#line 359 "ml_lookup_switch.m"
                    }
#line 361 "ml_lookup_switch.m"
                    {
#line 361 "ml_lookup_switch.m"
                      MR_Word base;
#line 361 "ml_lookup_switch.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "ml_lookup_switch.m"
                      *ml_backend__ml_lookup_switch__Statement_24 = base;
#line 361 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_88));
#line 361 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 361 "ml_lookup_switch.m"
                    }
#line 352 "ml_lookup_switch.m"
                  }
#line 351 "ml_lookup_switch.m"
                  break;
#line 351 "ml_lookup_switch.m"
              }
#line 363 "ml_lookup_switch.m"
              break;
#line 363 "ml_lookup_switch.m"
            case (MR_Integer) 0:
#line 364 "ml_lookup_switch.m"
              {
#line 364 "ml_lookup_switch.m"
                MR_Integer ml_backend__ml_lookup_switch__Difference_48 = (ml_backend__ml_lookup_switch__EndVal_21 - ml_backend__ml_lookup_switch__StartVal_20);
#line 364 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__RangeCheckCond_49;
#line 364 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50;
#line 364 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_66_66;
#line 364 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_67_67;
#line 364 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_72_72;
#line 364 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__Stmt_93;
#line 364 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95;

#line 367 "ml_lookup_switch.m"
                {
#line 367 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 367 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_67_67, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Difference_48));
#line 367 "ml_lookup_switch.m"
                }
#line 367 "ml_lookup_switch.m"
                {
#line 367 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 367 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_66_66, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_67_67));
#line 367 "ml_lookup_switch.m"
                }
#line 366 "ml_lookup_switch.m"
                {
#line 366 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__RangeCheckCond_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 366 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 366 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))));
#line 366 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_14));
#line 366 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_66_66));
#line 366 "ml_lookup_switch.m"
                }
#line 368 "ml_lookup_switch.m"
                {
#line 368 "ml_lookup_switch.m"
                  ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[8]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95);
                }
#line 373 "ml_lookup_switch.m"
#line 373 "ml_lookup_switch.m"
                switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_22) {
#line 373 "ml_lookup_switch.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 373 "ml_lookup_switch.m"
                  case (MR_Integer) 1:
#line 371 "ml_lookup_switch.m"
                    {
#line 372 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50 = ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
#line 371 "ml_lookup_switch.m"
                      *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
#line 371 "ml_lookup_switch.m"
                    }
#line 373 "ml_lookup_switch.m"
                    break;
#line 373 "ml_lookup_switch.m"
                  case (MR_Integer) 0:
#line 374 "ml_lookup_switch.m"
                    {
#line 374 "ml_lookup_switch.m"
                      MR_Word ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51;
#line 374 "ml_lookup_switch.m"
                      MR_Word ml_backend__ml_lookup_switch__V_71_71;
#line 374 "ml_lookup_switch.m"
                      MR_Word ml_backend__ml_lookup_switch__BitVecCheckCond_91;

#line 375 "ml_lookup_switch.m"
                      {
#line 375 "ml_lookup_switch.m"
                        ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__Context_19, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__CaseValues_17, ml_backend__ml_lookup_switch__StartVal_20, &ml_backend__ml_lookup_switch__BitVecCheckCond_91, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);
                      }
#line 379 "ml_lookup_switch.m"
                      {
#line 379 "ml_lookup_switch.m"
                        ml_backend__ml_lookup_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 379 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_71_71, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95));
#line 379 "ml_lookup_switch.m"
                      }
#line 378 "ml_lookup_switch.m"
                      {
#line 378 "ml_lookup_switch.m"
                        ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 378 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecCheckCond_91));
#line 378 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStatement_45));
#line 378 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_71_71));
#line 378 "ml_lookup_switch.m"
                      }
#line 380 "ml_lookup_switch.m"
                      {
#line 380 "ml_lookup_switch.m"
                        ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51));
#line 380 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 380 "ml_lookup_switch.m"
                      }
#line 374 "ml_lookup_switch.m"
                    }
#line 373 "ml_lookup_switch.m"
                    break;
#line 373 "ml_lookup_switch.m"
                }
#line 388 "ml_lookup_switch.m"
                {
#line 388 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 388 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95));
#line 388 "ml_lookup_switch.m"
                }
#line 387 "ml_lookup_switch.m"
                {
#line 387 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__Stmt_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckCond_49));
#line 387 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50));
#line 387 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_72_72));
#line 387 "ml_lookup_switch.m"
                }
#line 389 "ml_lookup_switch.m"
                {
#line 389 "ml_lookup_switch.m"
                  MR_Word base;
#line 389 "ml_lookup_switch.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "ml_lookup_switch.m"
                  *ml_backend__ml_lookup_switch__Statement_24 = base;
#line 389 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_93));
#line 389 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 389 "ml_lookup_switch.m"
                }
#line 364 "ml_lookup_switch.m"
              }
#line 363 "ml_lookup_switch.m"
              break;
#line 363 "ml_lookup_switch.m"
          }
#line 340 "ml_lookup_switch.m"
        }
#line 339 "ml_lookup_switch.m"
        break;
#line 339 "ml_lookup_switch.m"
    }
#line 297 "ml_lookup_switch.m"
  }
#line 289 "ml_lookup_switch.m"
}

#line 242 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_16,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_17,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GetTag_6,
#line 242 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__SolnConsts_7,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 242 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 242 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14)
#line 242 "ml_lookup_switch.m"
{
#line 247 "ml_lookup_switch.m"
  {
#line 247 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 247 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
#line 247 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__Index_12;
#line 248 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 0)));
#line 249 "ml_lookup_switch.m"
    void MR_CALL (* ml_backend__ml_lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__GetTag_6, (MR_Integer) 1)));

#line 249 "ml_lookup_switch.m"
    {
#line 249 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__func_0(((MR_Box) ml_backend__ml_lookup_switch__GetTag_6), ((MR_Box) (ml_backend__ml_lookup_switch__ConsTag_11)), &ml_backend__ml_lookup_switch__Index_12);
    }
#line 250 "ml_lookup_switch.m"
    {
#line 250 "ml_lookup_switch.m"
      mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_16, ml_backend__ml_lookup_switch__TypeInfo_for_V_17, ml_backend__ml_lookup_switch__Index_12, ml_backend__ml_lookup_switch__SolnConsts_7, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);
#line 250 "ml_lookup_switch.m"
      return;
    }
#line 247 "ml_lookup_switch.m"
  }
#line 242 "ml_lookup_switch.m"
}

#line 237 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1(
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 237 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 237 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 237 "ml_lookup_switch.m"
{
#line 237 "ml_lookup_switch.m"
  {
#line 237 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 237 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14;

#line 237 "ml_lookup_switch.m"
    {
#line 237 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 5))), (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 6)), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), &ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14);
    }
#line 237 "ml_lookup_switch.m"
    *ml_backend__ml_lookup_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14));
#line 237 "ml_lookup_switch.m"
  }
#line 237 "ml_lookup_switch.m"
}

#line 223 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_Key_34,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_35,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 223 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 223 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6)
#line 223 "ml_lookup_switch.m"
{
#line 228 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 228 "ml_lookup_switch.m"
    {
#line 228 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 228 "ml_lookup_switch.m"
      {
#line 228 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 228 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "ml_lookup_switch.m"
          {
#line 229 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5;
#line 229 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3;
#line 228 "ml_lookup_switch.m"
          }
#line 228 "ml_lookup_switch.m"
        else
#line 231 "ml_lookup_switch.m"
          {
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TypeInfo_42_42;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedMainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 0)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedOtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 1)));
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__CaseId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 2)));
#line 231 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__SolnConsts_23;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_30_30;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;
#line 231 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__ConsTag_50;
#line 231 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__Index_51;
#line 232 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 3)));
#line 248 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___ConsId_49;
#line 249 "ml_lookup_switch.m"
            void MR_CALL (* ml_backend__ml_lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *);
#line 237 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31;

#line 234 "ml_lookup_switch.m"
            {
#line 234 "ml_lookup_switch.m"
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_35, ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_21)), &ml_backend__ml_lookup_switch__SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28);
            }
#line 248 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch___ConsId_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 0)));
#line 248 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__ConsTag_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 1)));
#line 249 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 249 "ml_lookup_switch.m"
            {
#line 249 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__func_0(((MR_Box) ml_backend__ml_lookup_switch__HeadVar__1_1), ((MR_Box) (ml_backend__ml_lookup_switch__ConsTag_50)), &ml_backend__ml_lookup_switch__Index_51);
            }
#line 250 "ml_lookup_switch.m"
            {
#line 250 "ml_lookup_switch.m"
              mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_Key_34, ml_backend__ml_lookup_switch__TypeInfo_for_V_35, ml_backend__ml_lookup_switch__Index_51, ml_backend__ml_lookup_switch__SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29);
            }
#line 237 "ml_lookup_switch.m"
            {
#line 237 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_8[0]));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_Key_34));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_35));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 5) = ((MR_Box) (ml_backend__ml_lookup_switch__HeadVar__1_1));
#line 237 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 6) = ml_backend__ml_lookup_switch__SolnConsts_23;
#line 237 "ml_lookup_switch.m"
            }
#line 5778 "ml_backend.ml_lookup_switch.c"
            {
#line 5780 "ml_backend.ml_lookup_switch.c"
              ml_backend__ml_lookup_switch__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5782 "ml_backend.ml_lookup_switch.c"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_42_42, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 5784 "ml_backend.ml_lookup_switch.c"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_42_42, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_Key_34));
#line 5786 "ml_backend.ml_lookup_switch.c"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_42_42, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_35));
#line 5788 "ml_backend.ml_lookup_switch.c"
            }
#line 237 "ml_lookup_switch.m"
            {
#line 237 "ml_lookup_switch.m"
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, ml_backend__ml_lookup_switch__TypeInfo_42_42, (MR_Word) ml_backend__ml_lookup_switch__V_30_30, ml_backend__ml_lookup_switch__TaggedOtherConsIds_20, ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29)), &ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            }
#line 237 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31 = ((MR_Word) ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
#line 239 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 239 "ml_lookup_switch.m"
            {
#line 239 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2 = ml_backend__ml_lookup_switch__TaggedCases_16;
#line 239 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 239 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;

#line 239 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5;
#line 239 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3;
#line 239 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__2_2 = ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2;
#line 239 "ml_lookup_switch.m"
            }
#line 239 "ml_lookup_switch.m"
            continue;
#line 231 "ml_lookup_switch.m"
          }
#line 228 "ml_lookup_switch.m"
      }
#line 228 "ml_lookup_switch.m"
      break;
#line 228 "ml_lookup_switch.m"
    }
#line 223 "ml_lookup_switch.m"
}

#line 113 "ml_lookup_switch.m"
MR_Word MR_CALL 
ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(
#line 113 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_Type_3)
#line 113 "ml_lookup_switch.m"
{
#line 820 "ml_lookup_switch.m"
  {
#line 820 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 820 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__DefaultRval_4;

#line 820 "ml_lookup_switch.m"
#line 820 "ml_lookup_switch.m"
    switch (MR_tag((MR_Word) ml_backend__ml_lookup_switch__MLDS_Type_3)) {
#line 820 "ml_lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 820 "ml_lookup_switch.m"
      case (MR_Integer) 0:
#line 820 "ml_lookup_switch.m"
#line 820 "ml_lookup_switch.m"
        switch (MR_unmkbody(ml_backend__ml_lookup_switch__MLDS_Type_3)) {
#line 820 "ml_lookup_switch.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 0:
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 6:
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 9:
#line 852 "ml_lookup_switch.m"
            {
#line 853 "ml_lookup_switch.m"
              {
#line 853 "ml_lookup_switch.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "function \140ml_backend.ml_lookup_switch.ml_default_value_for_type\'/1", (MR_String) "unexpected MLDS_Type");
              }
#line 852 "ml_lookup_switch.m"
            }
#line 820 "ml_lookup_switch.m"
            break;
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 1:
#line 826 "ml_lookup_switch.m"
            {
#line 827 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[8]);
#line 826 "ml_lookup_switch.m"
            }
#line 820 "ml_lookup_switch.m"
            break;
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 2:
#line 820 "ml_lookup_switch.m"
            {
#line 821 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6]);
#line 820 "ml_lookup_switch.m"
            }
#line 820 "ml_lookup_switch.m"
            break;
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 3:
#line 829 "ml_lookup_switch.m"
            {
#line 830 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[12]);
#line 829 "ml_lookup_switch.m"
            }
#line 820 "ml_lookup_switch.m"
            break;
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 4:
#line 823 "ml_lookup_switch.m"
            {
#line 824 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[10]);
#line 823 "ml_lookup_switch.m"
            }
#line 820 "ml_lookup_switch.m"
            break;
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 5:
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 7:
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 8:
#line 842 "ml_lookup_switch.m"
            {
#line 842 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__V_23_23;

#line 843 "ml_lookup_switch.m"
              {
#line 843 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 843 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
#line 843 "ml_lookup_switch.m"
              }
#line 843 "ml_lookup_switch.m"
              {
#line 843 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 843 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 843 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
#line 843 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 843 "ml_lookup_switch.m"
              }
#line 842 "ml_lookup_switch.m"
            }
#line 820 "ml_lookup_switch.m"
            break;
#line 820 "ml_lookup_switch.m"
        }
#line 820 "ml_lookup_switch.m"
        break;
#line 820 "ml_lookup_switch.m"
      case (MR_Integer) 1:
#line 842 "ml_lookup_switch.m"
        {
#line 842 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_23_23;

#line 843 "ml_lookup_switch.m"
          {
#line 843 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 843 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
#line 843 "ml_lookup_switch.m"
          }
#line 843 "ml_lookup_switch.m"
          {
#line 843 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 843 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 843 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
#line 843 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 843 "ml_lookup_switch.m"
          }
#line 842 "ml_lookup_switch.m"
        }
#line 820 "ml_lookup_switch.m"
        break;
#line 820 "ml_lookup_switch.m"
      case (MR_Integer) 2:
#line 842 "ml_lookup_switch.m"
        {
#line 842 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_23_23;

#line 843 "ml_lookup_switch.m"
          {
#line 843 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 843 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
#line 843 "ml_lookup_switch.m"
          }
#line 843 "ml_lookup_switch.m"
          {
#line 843 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 843 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 843 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
#line 843 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 843 "ml_lookup_switch.m"
          }
#line 842 "ml_lookup_switch.m"
        }
#line 820 "ml_lookup_switch.m"
        break;
#line 820 "ml_lookup_switch.m"
      case (MR_Integer) 3:
#line 820 "ml_lookup_switch.m"
#line 820 "ml_lookup_switch.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MLDS_Type_3, (MR_Integer) 0)))) {
#line 820 "ml_lookup_switch.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 0:
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 2:
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 3:
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 4:
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 5:
#line 842 "ml_lookup_switch.m"
            {
#line 842 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__V_23_23;

#line 843 "ml_lookup_switch.m"
              {
#line 843 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 843 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
#line 843 "ml_lookup_switch.m"
              }
#line 843 "ml_lookup_switch.m"
              {
#line 843 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 843 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 843 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
#line 843 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 843 "ml_lookup_switch.m"
              }
#line 842 "ml_lookup_switch.m"
            }
#line 820 "ml_lookup_switch.m"
            break;
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 1:
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 6:
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 7:
#line 820 "ml_lookup_switch.m"
          case (MR_Integer) 8:
#line 852 "ml_lookup_switch.m"
            {
#line 853 "ml_lookup_switch.m"
              {
#line 853 "ml_lookup_switch.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "function \140ml_backend.ml_lookup_switch.ml_default_value_for_type\'/1", (MR_String) "unexpected MLDS_Type");
              }
#line 852 "ml_lookup_switch.m"
            }
#line 820 "ml_lookup_switch.m"
            break;
#line 820 "ml_lookup_switch.m"
        }
#line 820 "ml_lookup_switch.m"
        break;
#line 820 "ml_lookup_switch.m"
    }
#line 820 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__DefaultRval_4;
#line 820 "ml_lookup_switch.m"
  }
#line 113 "ml_lookup_switch.m"
}

#line 796 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1(
#line 796 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 796 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 796 "ml_lookup_switch.m"
{
#line 796 "ml_lookup_switch.m"
  {
#line 796 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 796 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 796 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__2_2;

#line 796 "ml_lookup_switch.m"
    {
#line 796 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 796 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__2_2));
#line 796 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 796 "ml_lookup_switch.m"
  }
#line 796 "ml_lookup_switch.m"
}

#line 110 "ml_lookup_switch.m"
MR_Word MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(
#line 110 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__StructType_4,
#line 110 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Rvals_5)
#line 110 "ml_lookup_switch.m"
{
#line 795 "ml_lookup_switch.m"
  {
#line 795 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 795 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__RowInitializer_6;
#line 795 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_7;

#line 796 "ml_lookup_switch.m"
    {
#line 796 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FieldInitializers_7 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[0], ml_backend__ml_lookup_switch__Rvals_5);
    }
#line 797 "ml_lookup_switch.m"
    {
#line 797 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__RowInitializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_6, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StructType_4));
#line 797 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_6, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_7));
#line 797 "ml_lookup_switch.m"
    }
#line 795 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__RowInitializer_6;
#line 795 "ml_lookup_switch.m"
  }
#line 110 "ml_lookup_switch.m"
}

#line 104 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(
#line 104 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_Context_5,
#line 104 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__SeveralSolnLookupVars_6,
#line 104 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_24,
#line 104 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25)
#line 104 "ml_lookup_switch.m"
{
#line 552 "ml_lookup_switch.m"
  {
#line 552 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVar_8;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVar_11;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarDefn_12;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarLval_13;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVar_14;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarDefn_15;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarLval_16;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Defns_17;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarRval_18;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStmt_20;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStatement_21;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_28_28;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_34_34;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_40_40;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_44_44;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_45_45;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_47_47;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_48_48;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_50_50;
#line 552 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_51_51;

#line 553 "ml_lookup_switch.m"
    {
#line 553 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "num_later_solns", &ml_backend__ml_lookup_switch__NumLaterSolnsVar_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_24, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27);
    }
#line 556 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__NumLaterSolnsVar_8);
#line 555 "ml_lookup_switch.m"
    {
#line 555 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_28_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
#line 558 "ml_lookup_switch.m"
    {
#line 558 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27, ml_backend__ml_lookup_switch__NumLaterSolnsVar_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10);
    }
#line 561 "ml_lookup_switch.m"
    {
#line 561 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "later_slot", &ml_backend__ml_lookup_switch__LaterSlotVar_11, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33);
    }
#line 563 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__LaterSlotVar_11);
#line 563 "ml_lookup_switch.m"
    {
#line 563 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSlotVarDefn_12 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_34_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
#line 565 "ml_lookup_switch.m"
    {
#line 565 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33, ml_backend__ml_lookup_switch__LaterSlotVar_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__LaterSlotVarLval_13);
    }
#line 568 "ml_lookup_switch.m"
    {
#line 568 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "limit", &ml_backend__ml_lookup_switch__LimitVar_14, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25);
    }
#line 570 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__LimitVar_14);
#line 570 "ml_lookup_switch.m"
    {
#line 570 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitVarDefn_15 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_40_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
#line 572 "ml_lookup_switch.m"
    {
#line 572 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(*ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25, ml_backend__ml_lookup_switch__LimitVar_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__LimitVarLval_16);
    }
#line 574 "ml_lookup_switch.m"
    {
#line 574 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_45_45, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarDefn_15));
#line 574 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "ml_lookup_switch.m"
    }
#line 574 "ml_lookup_switch.m"
    {
#line 574 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_44_44, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarDefn_12));
#line 574 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_44_44, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_45_45));
#line 574 "ml_lookup_switch.m"
    }
#line 574 "ml_lookup_switch.m"
    {
#line 574 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__Defns_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Defns_17, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9));
#line 574 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Defns_17, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_44_44));
#line 574 "ml_lookup_switch.m"
    }
#line 576 "ml_lookup_switch.m"
    {
#line 576 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSlotVarRval_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 576 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LaterSlotVarRval_18, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
#line 576 "ml_lookup_switch.m"
    }
#line 577 "ml_lookup_switch.m"
    {
#line 577 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10));
#line 577 "ml_lookup_switch.m"
    }
#line 579 "ml_lookup_switch.m"
    {
#line 579 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 579 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 579 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_18));
#line 579 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19));
#line 579 "ml_lookup_switch.m"
    }
#line 578 "ml_lookup_switch.m"
    {
#line 578 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_47_47, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_16));
#line 578 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_47_47, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_48_48));
#line 578 "ml_lookup_switch.m"
    }
#line 578 "ml_lookup_switch.m"
    {
#line 578 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitAssignStmt_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__LimitAssignStmt_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 578 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__LimitAssignStmt_20, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_47_47));
#line 578 "ml_lookup_switch.m"
    }
#line 580 "ml_lookup_switch.m"
    {
#line 580 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitAssignStatement_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 580 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LimitAssignStatement_21, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStmt_20));
#line 580 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LimitAssignStatement_21, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_5));
#line 580 "ml_lookup_switch.m"
    }
#line 582 "ml_lookup_switch.m"
    {
#line 582 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 582 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 582 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_18));
#line 582 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[7])));
#line 582 "ml_lookup_switch.m"
    }
#line 581 "ml_lookup_switch.m"
    {
#line 581 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_50_50, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
#line 581 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_50_50, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_51_51));
#line 581 "ml_lookup_switch.m"
    }
#line 581 "ml_lookup_switch.m"
    {
#line 581 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 581 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_50_50));
#line 581 "ml_lookup_switch.m"
    }
#line 583 "ml_lookup_switch.m"
    {
#line 583 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 583 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22));
#line 583 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_5));
#line 583 "ml_lookup_switch.m"
    }
#line 585 "ml_lookup_switch.m"
    {
#line 585 "ml_lookup_switch.m"
      MR_Word base;
#line 585 "ml_lookup_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 585 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__SeveralSolnLookupVars_6 = base;
#line 585 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10));
#line 585 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
#line 585 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_16));
#line 585 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStatement_21));
#line 585 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23));
#line 585 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_lookup_switch__Defns_17));
#line 585 "ml_lookup_switch.m"
    }
#line 552 "ml_lookup_switch.m"
  }
#line 104 "ml_lookup_switch.m"
}

#line 86 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_18_p_0(
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_19,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_Context_20,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SlotVarRval_21,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_22,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_23,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_24,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_25,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_26,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_27,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_28,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_29,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnVectorCommon_31,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_32,
#line 86 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__MatchDefns_33,
#line 86 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statements_34,
#line 86 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_64,
#line 86 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_65)
#line 86 "ml_lookup_switch.m"
{
#line 489 "ml_lookup_switch.m"
  {
#line 489 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_95_95;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarLval_38;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarLval_39;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStatement_40;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_41;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarRval_43;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarRval_44;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_IntType_45;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarAssignStatement_47;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnLookupStatements_48;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnLookupStatements_49;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CallContStatement_50;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_66_66;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_67_67;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_68_68;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_69_69;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_70_70;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_73_73;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_74_74;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_77_77;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_78_78;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_79_79;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_83_83;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_84_84;
#line 489 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_85_85;

#line 490 "ml_lookup_switch.m"
    {
#line 490 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_64, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_66_66);
    }
#line 491 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 0)));
#line 491 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__LaterSlotVarLval_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 1)));
#line 491 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__LimitVarLval_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 2)));
#line 491 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__LimitAssignStatement_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 3)));
#line 491 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 4)));
#line 491 "ml_lookup_switch.m"
    *ml_backend__ml_lookup_switch__MatchDefns_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 5)));
#line 495 "ml_lookup_switch.m"
    {
#line 495 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37));
#line 495 "ml_lookup_switch.m"
    }
#line 496 "ml_lookup_switch.m"
    {
#line 496 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSlotVarRval_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 496 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LaterSlotVarRval_43, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_38));
#line 496 "ml_lookup_switch.m"
    }
#line 497 "ml_lookup_switch.m"
    {
#line 497 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitVarRval_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LimitVarRval_44, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_39));
#line 497 "ml_lookup_switch.m"
    }
#line 498 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__MLDS_IntType_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 500 "ml_lookup_switch.m"
    {
#line 500 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37, ml_backend__ml_lookup_switch__MLDS_IntType_45, ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_26, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30, ml_backend__ml_lookup_switch__FirstSolnStructType_24, ml_backend__ml_lookup_switch__SlotVarRval_21, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_66_66, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_67_67);
    }
#line 503 "ml_lookup_switch.m"
    {
#line 503 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_lookup_switch__LaterSlotVarLval_38, ml_backend__ml_lookup_switch__MLDS_IntType_45, ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_27, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30, ml_backend__ml_lookup_switch__FirstSolnStructType_24, ml_backend__ml_lookup_switch__SlotVarRval_21, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__LaterSlotVarAssignStatement_47, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_67_67, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_68_68);
    }
#line 506 "ml_lookup_switch.m"
    {
#line 506 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_22, ml_backend__ml_lookup_switch__OutTypes_23, ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_28, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30, ml_backend__ml_lookup_switch__FirstSolnStructType_24, ml_backend__ml_lookup_switch__SlotVarRval_21, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__FirstSolnLookupStatements_48, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_68_68, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_69_69);
    }
#line 509 "ml_lookup_switch.m"
    {
#line 509 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_22, ml_backend__ml_lookup_switch__OutTypes_23, ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_29, ml_backend__ml_lookup_switch__LaterSolnVectorCommon_31, ml_backend__ml_lookup_switch__LaterSolnStructType_25, ml_backend__ml_lookup_switch__LaterSlotVarRval_43, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__LaterSolnLookupStatements_49, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_69_69, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_70_70);
    }
#line 513 "ml_lookup_switch.m"
    {
#line 513 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__CallContStatement_50, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_70_70, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_65);
    }
#line 6635 "ml_backend.ml_lookup_switch.c"
    ml_backend__ml_lookup_switch__TypeCtorInfo_95_95 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 515 "ml_lookup_switch.m"
    {
#line 515 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_74_74, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CallContStatement_50));
#line 515 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "ml_lookup_switch.m"
    }
#line 515 "ml_lookup_switch.m"
    {
#line 515 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_73_73 = mercury__list__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_95_95, ml_backend__ml_lookup_switch__FirstSolnLookupStatements_48, ml_backend__ml_lookup_switch__V_74_74);
    }
#line 514 "ml_lookup_switch.m"
    {
#line 514 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 514 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 514 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_73_73));
#line 514 "ml_lookup_switch.m"
    }
#line 516 "ml_lookup_switch.m"
    {
#line 516 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 516 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51));
#line 516 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
#line 516 "ml_lookup_switch.m"
    }
#line 521 "ml_lookup_switch.m"
    {
#line 521 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_79_79, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_41));
#line 521 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 521 "ml_lookup_switch.m"
    }
#line 521 "ml_lookup_switch.m"
    {
#line 521 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_78_78, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CallContStatement_50));
#line 521 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_78_78, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_79_79));
#line 521 "ml_lookup_switch.m"
    }
#line 520 "ml_lookup_switch.m"
    {
#line 520 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_77_77 = mercury__list__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_95_95, ml_backend__ml_lookup_switch__LaterSolnLookupStatements_49, ml_backend__ml_lookup_switch__V_78_78);
    }
#line 519 "ml_lookup_switch.m"
    {
#line 519 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_77_77));
#line 519 "ml_lookup_switch.m"
    }
#line 522 "ml_lookup_switch.m"
    {
#line 522 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 522 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53));
#line 522 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
#line 522 "ml_lookup_switch.m"
    }
#line 525 "ml_lookup_switch.m"
    {
#line 525 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 525 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 525 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 525 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_43));
#line 525 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarRval_44));
#line 525 "ml_lookup_switch.m"
    }
#line 526 "ml_lookup_switch.m"
    {
#line 526 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 526 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56, 0) = ((MR_Box) ((MR_Integer) 0));
#line 526 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55));
#line 526 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54));
#line 526 "ml_lookup_switch.m"
    }
#line 528 "ml_lookup_switch.m"
    {
#line 528 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56));
#line 528 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
#line 528 "ml_lookup_switch.m"
    }
#line 532 "ml_lookup_switch.m"
    {
#line 532 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_85_85, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57));
#line 532 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "ml_lookup_switch.m"
    }
#line 531 "ml_lookup_switch.m"
    {
#line 531 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStatement_40));
#line 531 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_85_85));
#line 531 "ml_lookup_switch.m"
    }
#line 531 "ml_lookup_switch.m"
    {
#line 531 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_83_83, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarAssignStatement_47));
#line 531 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_83_83, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_84_84));
#line 531 "ml_lookup_switch.m"
    }
#line 530 "ml_lookup_switch.m"
    {
#line 530 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52));
#line 530 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_83_83));
#line 530 "ml_lookup_switch.m"
    }
#line 536 "ml_lookup_switch.m"
#line 536 "ml_lookup_switch.m"
    switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_32) {
#line 536 "ml_lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 536 "ml_lookup_switch.m"
      case (MR_Integer) 1:
#line 535 "ml_lookup_switch.m"
        {
#line 535 "ml_lookup_switch.m"
          MR_Word base;
#line 535 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__Statements_34 = base;
#line 535 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46));
#line 535 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58));
#line 535 "ml_lookup_switch.m"
        }
#line 536 "ml_lookup_switch.m"
        break;
#line 536 "ml_lookup_switch.m"
      case (MR_Integer) 0:
#line 537 "ml_lookup_switch.m"
        {
#line 537 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59;
#line 537 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60;
#line 537 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__AnySolnsCond_61;
#line 537 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62;
#line 537 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63;
#line 537 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_93_93;

#line 538 "ml_lookup_switch.m"
          {
#line 538 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 538 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 538 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58));
#line 538 "ml_lookup_switch.m"
          }
#line 539 "ml_lookup_switch.m"
          {
#line 539 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59));
#line 539 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
#line 539 "ml_lookup_switch.m"
          }
#line 542 "ml_lookup_switch.m"
          {
#line 542 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__AnySolnsCond_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 542 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 542 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 542 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42));
#line 542 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 542 "ml_lookup_switch.m"
          }
#line 544 "ml_lookup_switch.m"
          {
#line 544 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 544 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__AnySolnsCond_61));
#line 544 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60));
#line 544 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "ml_lookup_switch.m"
          }
#line 546 "ml_lookup_switch.m"
          {
#line 546 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 546 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62));
#line 546 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
#line 546 "ml_lookup_switch.m"
          }
#line 549 "ml_lookup_switch.m"
          {
#line 549 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_93_93, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63));
#line 549 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 549 "ml_lookup_switch.m"
          }
#line 549 "ml_lookup_switch.m"
          {
#line 549 "ml_lookup_switch.m"
            MR_Word base;
#line 549 "ml_lookup_switch.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__Statements_34 = base;
#line 549 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46));
#line 549 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_93_93));
#line 549 "ml_lookup_switch.m"
          }
#line 537 "ml_lookup_switch.m"
        }
#line 536 "ml_lookup_switch.m"
        break;
#line 536 "ml_lookup_switch.m"
    }
#line 489 "ml_lookup_switch.m"
  }
#line 86 "ml_lookup_switch.m"
}

#line 220 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3(
#line 220 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 220 "ml_lookup_switch.m"
{
#line 220 "ml_lookup_switch.m"
  {
#line 220 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 220 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 220 "ml_lookup_switch.m"
    {
#line 220 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__220__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 220 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 220 "ml_lookup_switch.m"
  }
#line 220 "ml_lookup_switch.m"
}

#line 277 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2(
#line 277 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 277 "ml_lookup_switch.m"
{
#line 277 "ml_lookup_switch.m"
  {
#line 277 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 277 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 277 "ml_lookup_switch.m"
    {
#line 277 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__277__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 277 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 277 "ml_lookup_switch.m"
  }
#line 277 "ml_lookup_switch.m"
}

#line 220 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1(
#line 220 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 220 "ml_lookup_switch.m"
{
#line 220 "ml_lookup_switch.m"
  {
#line 220 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 220 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 220 "ml_lookup_switch.m"
    {
#line 220 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__220__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 220 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 220 "ml_lookup_switch.m"
  }
#line 220 "ml_lookup_switch.m"
}

#line 74 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0(
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_13,
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_14,
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LookupSwitchInfo_15,
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_16,
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_17,
#line 74 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_18,
#line 74 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_19,
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_20,
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_21,
#line 74 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_22,
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38,
#line 74 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_39)
#line 74 "ml_lookup_switch.m"
{
#line 256 "ml_lookup_switch.m"
  {
#line 256 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 256 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CaseIdConstMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_15, (MR_Integer) 0)));
#line 256 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OutVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_15, (MR_Integer) 1)));
#line 256 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldTypes_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_15, (MR_Integer) 2)));
#line 256 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SwitchVarLval_27;
#line 256 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SwitchVarRval_28;
#line 256 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IndexRval_29;

#line 259 "ml_lookup_switch.m"
    {
#line 259 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38, ml_backend__ml_lookup_switch__SwitchVar_13, &ml_backend__ml_lookup_switch__SwitchVarLval_27);
    }
#line 260 "ml_lookup_switch.m"
    {
#line 260 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__SwitchVarRval_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 260 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SwitchVarRval_28, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SwitchVarLval_27));
#line 260 "ml_lookup_switch.m"
    }
#line 261 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__StartVal_18 == (MR_Integer) 0);
#line 263 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 262 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__IndexRval_29 = ml_backend__ml_lookup_switch__SwitchVarRval_28;
#line 263 "ml_lookup_switch.m"
    else
#line 264 "ml_lookup_switch.m"
      {
#line 264 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__StartRval_30;
#line 264 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_40_40;

#line 264 "ml_lookup_switch.m"
        {
#line 264 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_40_40, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StartVal_18));
#line 264 "ml_lookup_switch.m"
        }
#line 264 "ml_lookup_switch.m"
        {
#line 264 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__StartRval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__StartRval_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 264 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__StartRval_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_40_40));
#line 264 "ml_lookup_switch.m"
        }
#line 265 "ml_lookup_switch.m"
        {
#line 265 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__IndexRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 265 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 265 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 265 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__SwitchVarRval_28));
#line 265 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__StartRval_30));
#line 265 "ml_lookup_switch.m"
        }
#line 264 "ml_lookup_switch.m"
      }
#line 275 "ml_lookup_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_lookup_switch__CaseIdConstMap_24)) == (MR_mktag((MR_Integer) 0))))
#line 268 "ml_lookup_switch.m"
      {
#line 268 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_72 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1];
#line 268 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__CaseIdValueMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__CaseIdConstMap_24, (MR_Integer) 0)));
#line 268 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__IntValueMap_32;
#line 268 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__IntValues_33;
#line 268 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_65;
#line 268 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_66_66;
#line 268 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_67_67;

#line 219 "ml_lookup_switch.m"
        {
#line 219 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_66_66 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_72);
        }
#line 218 "ml_lookup_switch.m"
        {
#line 218 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(ml_backend__ml_lookup_switch__TaggedCases_14, ml_backend__ml_lookup_switch__CaseIdValueMap_31, &ml_backend__ml_lookup_switch__DepletedCaseIdMap_65, ml_backend__ml_lookup_switch__V_66_66, &ml_backend__ml_lookup_switch__IntValueMap_32);
        }
#line 220 "ml_lookup_switch.m"
        {
#line 220 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 220 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[0]));
#line 220 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1));
#line 220 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 220 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_72));
#line 220 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__DepletedCaseIdMap_65));
#line 220 "ml_lookup_switch.m"
        }
#line 220 "ml_lookup_switch.m"
        {
#line 220 "ml_lookup_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_67_67, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
        }
#line 271 "ml_lookup_switch.m"
        {
#line 271 "ml_lookup_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ml_backend__ml_lookup_switch__IntValueMap_32, &ml_backend__ml_lookup_switch__IntValues_33);
        }
#line 272 "ml_lookup_switch.m"
        {
#line 272 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(ml_backend__ml_lookup_switch__IndexRval_29, ml_backend__ml_lookup_switch__OutVars_25, ml_backend__ml_lookup_switch__FieldTypes_26, ml_backend__ml_lookup_switch__IntValues_33, ml_backend__ml_lookup_switch__CodeModel_16, ml_backend__ml_lookup_switch__Context_17, ml_backend__ml_lookup_switch__StartVal_18, ml_backend__ml_lookup_switch__EndVal_19, ml_backend__ml_lookup_switch__NeedBitVecCheck_20, ml_backend__ml_lookup_switch__NeedRangeCheck_21, ml_backend__ml_lookup_switch__Statement_22, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_39);
#line 272 "ml_lookup_switch.m"
          return;
        }
#line 268 "ml_lookup_switch.m"
      }
#line 275 "ml_lookup_switch.m"
    else
#line 276 "ml_lookup_switch.m"
      {
#line 276 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_86;
#line 276 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__CaseIdSolnMap_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseIdConstMap_24, (MR_Integer) 0)));
#line 276 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__IntSolnMap_36;
#line 276 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__IntSolns_37;
#line 276 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_42_42;
#line 276 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_79;
#line 276 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_80_80;
#line 276 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_81_81;

#line 277 "ml_lookup_switch.m"
        {
#line 277 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 277 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[1]));
#line 277 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2));
#line 277 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 277 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__CodeModel_16));
#line 277 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 4) = ((MR_Box) ((MR_Integer) 2));
#line 277 "ml_lookup_switch.m"
        }
#line 277 "ml_lookup_switch.m"
        {
#line 277 "ml_lookup_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_42_42, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_atomic_lookup_switch\'/12", (MR_String) "CodeModel != model_non");
        }
#line 7216 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__TypeInfo_for_V_86 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 219 "ml_lookup_switch.m"
        {
#line 219 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_80_80 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_86);
        }
#line 218 "ml_lookup_switch.m"
        {
#line 218 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(ml_backend__ml_lookup_switch__TaggedCases_14, ml_backend__ml_lookup_switch__CaseIdSolnMap_34, &ml_backend__ml_lookup_switch__DepletedCaseIdMap_79, ml_backend__ml_lookup_switch__V_80_80, &ml_backend__ml_lookup_switch__IntSolnMap_36);
        }
#line 220 "ml_lookup_switch.m"
        {
#line 220 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 220 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[0]));
#line 220 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3));
#line 220 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 220 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_86));
#line 220 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__DepletedCaseIdMap_79));
#line 220 "ml_lookup_switch.m"
        }
#line 220 "ml_lookup_switch.m"
        {
#line 220 "ml_lookup_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_81_81, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
        }
#line 281 "ml_lookup_switch.m"
        {
#line 281 "ml_lookup_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ml_backend__ml_lookup_switch__IntSolnMap_36, &ml_backend__ml_lookup_switch__IntSolns_37);
        }
#line 282 "ml_lookup_switch.m"
        {
#line 282 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(ml_backend__ml_lookup_switch__IndexRval_29, ml_backend__ml_lookup_switch__OutVars_25, ml_backend__ml_lookup_switch__FieldTypes_26, ml_backend__ml_lookup_switch__IntSolns_37, ml_backend__ml_lookup_switch__Context_17, ml_backend__ml_lookup_switch__StartVal_18, ml_backend__ml_lookup_switch__EndVal_19, ml_backend__ml_lookup_switch__NeedBitVecCheck_20, ml_backend__ml_lookup_switch__NeedRangeCheck_21, ml_backend__ml_lookup_switch__Statement_22, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_39);
#line 282 "ml_lookup_switch.m"
          return;
        }
#line 276 "ml_lookup_switch.m"
      }
#line 256 "ml_lookup_switch.m"
  }
#line 74 "ml_lookup_switch.m"
}

#line 220 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1(
#line 220 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 220 "ml_lookup_switch.m"
{
#line 220 "ml_lookup_switch.m"
  {
#line 220 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 220 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 220 "ml_lookup_switch.m"
    {
#line 220 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__220__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 220 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 220 "ml_lookup_switch.m"
  }
#line 220 "ml_lookup_switch.m"
}

#line 66 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0(
#line 66 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_15,
#line 66 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_16,
#line 66 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GetTag_5,
#line 66 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_6,
#line 66 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseIdMap_7,
#line 66 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__TagMap_8)
#line 66 "ml_lookup_switch.m"
{
#line 217 "ml_lookup_switch.m"
  {
#line 217 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 217 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_9;
#line 217 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_10_10;
#line 217 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_11_11;

#line 219 "ml_lookup_switch.m"
    {
#line 219 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_10_10 = mercury__map__init_0_f_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_15, ml_backend__ml_lookup_switch__TypeInfo_for_V_16);
    }
#line 218 "ml_lookup_switch.m"
    {
#line 218 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_15, ml_backend__ml_lookup_switch__TypeInfo_for_V_16, ml_backend__ml_lookup_switch__GetTag_5, ml_backend__ml_lookup_switch__TaggedCases_6, ml_backend__ml_lookup_switch__CaseIdMap_7, &ml_backend__ml_lookup_switch__DepletedCaseIdMap_9, ml_backend__ml_lookup_switch__V_10_10, ml_backend__ml_lookup_switch__TagMap_8);
    }
#line 220 "ml_lookup_switch.m"
    {
#line 220 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 220 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[0]));
#line 220 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1));
#line 220 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 220 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_16));
#line 220 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__DepletedCaseIdMap_9));
#line 220 "ml_lookup_switch.m"
    }
#line 220 "ml_lookup_switch.m"
    {
#line 220 "ml_lookup_switch.m"
      mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_11_11, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
#line 220 "ml_lookup_switch.m"
      return;
    }
#line 217 "ml_lookup_switch.m"
  }
#line 66 "ml_lookup_switch.m"
}

#line 56 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(
#line 56 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_8,
#line 56 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_9,
#line 56 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GoalInfo_10,
#line 56 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_11,
#line 56 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12,
#line 56 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27,
#line 56 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28)
#line 56 "ml_lookup_switch.m"
{
#line 141 "ml_lookup_switch.m"
  {
#line 141 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 141 "ml_lookup_switch.m"
    {
#line 141 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0(ml_backend__ml_lookup_switch__SwitchVar_8, ml_backend__ml_lookup_switch__TaggedCases_9, ml_backend__ml_lookup_switch__GoalInfo_10, ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28);
#line 141 "ml_lookup_switch.m"
      return;
    }
#line 141 "ml_lookup_switch.m"
  }
#line 56 "ml_lookup_switch.m"
}

void mercury__ml_backend__ml_lookup_switch__init(void)
{
}

void mercury__ml_backend__ml_lookup_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_lookup_switch_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_several_soln_lookup_vars_0);
}

void mercury__ml_backend__ml_lookup_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_lookup_switch. */
