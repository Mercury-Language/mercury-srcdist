/*
** Automatically generated from `ml_lookup_switch.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "transform_hlds.mih"
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
#include "parse_tree.maybe_error.mih"
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




#line 156 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__pseudo_2;

#line 159 "ml_backend.ml_lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1;

#line 162 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2;

#line 165 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 168 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 171 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 174 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 177 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 180 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 183 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct3 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__mlds__type_ctor_info_mlds_rval_0unit__type_ctor_info_unit_0;

#line 186 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 192 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0;

#line 195 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_0_0[3];

#line 198 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_0_0[3];

#line 201 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0;

#line 204 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_0_0[1];

#line 207 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_0[1];

#line 210 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_0[1];

#line 213 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_0[1];

#line 216 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 219 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0[6];

#line 222 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0[6];

#line 225 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0;

#line 228 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0[1];

#line 231 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0[1];

#line 234 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0[1];

#line 237 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0[1];

#line 240 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0_10001(
#line 243 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 245 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2);

#line 248 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0_10001(
#line 251 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 253 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 255 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 258 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001(
#line 261 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 263 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2);

#line 266 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001(
#line 269 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 271 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 273 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 785 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3(
#line 785 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 785 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 772 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2(
#line 772 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 772 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 760 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1(
#line 760 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 760 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 722 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(
#line 722 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_2,
#line 722 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_3,
#line 722 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_6,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_7,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_8,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9,
#line 722 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11,
#line 722 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13,
#line 722 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14);

#line 717 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2(
#line 717 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 717 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 711 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1(
#line 711 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 711 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 702 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(
#line 702 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__StructType_2,
#line 702 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_3,
#line 702 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_4,
#line 702 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 702 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6);

#line 666 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 666 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 666 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_2,
#line 666 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__WordBits_3,
#line 666 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 666 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5);

#line 600 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(
#line 600 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_10,
#line 600 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_11,
#line 600 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_12,
#line 600 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseVals_13,
#line 600 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_14,
#line 600 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__CheckRval_16,
#line 600 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30,
#line 600 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31);

#line 182 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(
#line 182 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 182 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 182 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__4_4,
#line 182 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 182 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6,
#line 182 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7,
#line 182 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_8);

#line 173 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1(
#line 173 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 173 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 246 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 246 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);

#line 246 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 246 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);

#line 241 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1(
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 241 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 227 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6);

#line 241 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1(
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 241 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 227 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6);

#line 459 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__459__1_2_p_0(
#line 459 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
#line 459 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_77);

#line 455 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__455__1_2_p_0(
#line 455 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
#line 455 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_82);

#line 339 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__339__1_2_p_0(
#line 339 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 339 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_86);

#line 337 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__337__1_2_p_0(
#line 337 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 337 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_81);

#line 281 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__281__1_2_p_0(
#line 281 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_16,
#line 281 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_46);

#line 224 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__224__1_2_p_0(
#line 224 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_16,
#line 224 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_9);

#line 811 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2(
#line 811 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 811 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 810 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1(
#line 810 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 810 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 805 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(
#line 805 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_5,
#line 805 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_6,
#line 805 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14,
#line 805 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15);

#line 682 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(
#line 682 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 682 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Count_2,
#line 682 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 682 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__4_4);

#line 459 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2(
#line 459 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 455 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1(
#line 455 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 404 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_13,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_14,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_15,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseSolns_16,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_17,
#line 404 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_18,
#line 404 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_19,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_20,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_21,
#line 404 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_22,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60,
#line 404 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_61);

#line 339 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_2(
#line 339 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 337 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1(
#line 337 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 293 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_14,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_15,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_16,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseValues_17,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_18,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_19,
#line 293 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_20,
#line 293 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_21,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 293 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_24,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52,
#line 293 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);

#line 246 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_16,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_17,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GetTag_6,
#line 246 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__SolnConsts_7,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 246 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);

#line 241 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1(
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 241 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 227 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_Key_34,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_35,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6);

#line 800 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1(
#line 800 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 800 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 224 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3(
#line 224 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 281 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2(
#line 281 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 224 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1(
#line 224 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 224 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1(
#line 224 "ml_lookup_switch.m"
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



#line 1084 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1093 "ml_backend.ml_lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1103 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1112 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1120 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1128 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1137 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1145 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1153 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1162 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct3 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__mlds__type_ctor_info_mlds_rval_0unit__type_ctor_info_unit_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 1172 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1180 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1188 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

#line 1196 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__mlds__type_ctor_info_mlds_rval_0unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0
};

#line 1203 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_0_0[3] = {
  (MR_String) "mllsi_cases",
  (MR_String) "mllsi_out_variables",
  (MR_String) "mllsi_out_types"
};

#line 1210 "ml_backend.ml_lookup_switch.c"
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

#line 1225 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_0_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0
};

#line 1230 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_0_0
  }
};

#line 1239 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0
};

#line 1244 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_0[1] = {
  (MR_Integer) 0
};

#line 1249 "ml_backend.ml_lookup_switch.c"
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

#line 1266 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1274 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0[6] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0
};

#line 1284 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0[6] = {
  (MR_String) "msslv_num_later_solns_var",
  (MR_String) "msslv_later_slot_var",
  (MR_String) "msslv_limit_var",
  (MR_String) "msslv_limit_assign_statement",
  (MR_String) "msslv_incr_later_slot_statement",
  (MR_String) "msslv_denfs"
};

#line 1294 "ml_backend.ml_lookup_switch.c"
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

#line 1309 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0
};

#line 1314 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0
  }
};

#line 1323 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0
};

#line 1328 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0[1] = {
  (MR_Integer) 0
};

#line 1333 "ml_backend.ml_lookup_switch.c"
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

#line 1350 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0_10001(
#line 1353 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1355 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2)
#line 1357 "ml_backend.ml_lookup_switch.c"
{
#line 1359 "ml_backend.ml_lookup_switch.c"
  {
#line 1361 "ml_backend.ml_lookup_switch.c"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 1364 "ml_backend.ml_lookup_switch.c"
    {
#line 1366 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2));
    }
#line 1369 "ml_backend.ml_lookup_switch.c"
    return ml_backend__ml_lookup_switch__succeeded;
#line 1371 "ml_backend.ml_lookup_switch.c"
  }
#line 1373 "ml_backend.ml_lookup_switch.c"
}

#line 1376 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0_10001(
#line 1379 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1381 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 1383 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 1385 "ml_backend.ml_lookup_switch.c"
{
#line 1387 "ml_backend.ml_lookup_switch.c"
  {
#line 1389 "ml_backend.ml_lookup_switch.c"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__1_1;

#line 1392 "ml_backend.ml_lookup_switch.c"
    {
#line 1394 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0(&ml_backend__ml_lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_3));
    }
#line 1397 "ml_backend.ml_lookup_switch.c"
    *ml_backend__ml_lookup_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__1_1));
#line 1399 "ml_backend.ml_lookup_switch.c"
  }
#line 1401 "ml_backend.ml_lookup_switch.c"
}

#line 1404 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001(
#line 1407 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1409 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2)
#line 1411 "ml_backend.ml_lookup_switch.c"
{
#line 1413 "ml_backend.ml_lookup_switch.c"
  {
#line 1415 "ml_backend.ml_lookup_switch.c"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 1418 "ml_backend.ml_lookup_switch.c"
    {
#line 1420 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2));
    }
#line 1423 "ml_backend.ml_lookup_switch.c"
    return ml_backend__ml_lookup_switch__succeeded;
#line 1425 "ml_backend.ml_lookup_switch.c"
  }
#line 1427 "ml_backend.ml_lookup_switch.c"
}

#line 1430 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001(
#line 1433 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1435 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 1437 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 1439 "ml_backend.ml_lookup_switch.c"
{
#line 1441 "ml_backend.ml_lookup_switch.c"
  {
#line 1443 "ml_backend.ml_lookup_switch.c"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__1_1;

#line 1446 "ml_backend.ml_lookup_switch.c"
    {
#line 1448 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0(&ml_backend__ml_lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_3));
    }
#line 1451 "ml_backend.ml_lookup_switch.c"
    *ml_backend__ml_lookup_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__1_1));
#line 1453 "ml_backend.ml_lookup_switch.c"
  }
#line 1455 "ml_backend.ml_lookup_switch.c"
}

#line 785 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3(
#line 785 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 785 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 785 "ml_lookup_switch.m"
{
#line 785 "ml_lookup_switch.m"
  {
#line 785 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 785 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 785 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv2_RowInitializer_6;

#line 785 "ml_lookup_switch.m"
    {
#line 785 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv2_RowInitializer_6 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 785 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv2_RowInitializer_6));
#line 785 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 785 "ml_lookup_switch.m"
  }
#line 785 "ml_lookup_switch.m"
}

#line 772 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2(
#line 772 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 772 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 772 "ml_lookup_switch.m"
{
#line 772 "ml_lookup_switch.m"
  {
#line 772 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 772 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 772 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

#line 772 "ml_lookup_switch.m"
    {
#line 772 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 772 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
#line 772 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 772 "ml_lookup_switch.m"
  }
#line 772 "ml_lookup_switch.m"
}

#line 760 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1(
#line 760 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 760 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 760 "ml_lookup_switch.m"
{
#line 760 "ml_lookup_switch.m"
  {
#line 760 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 760 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 760 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__2_2;

#line 760 "ml_lookup_switch.m"
    {
#line 760 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 760 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__2_2));
#line 760 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 760 "ml_lookup_switch.m"
  }
#line 760 "ml_lookup_switch.m"
}

#line 722 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(
#line 722 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_2,
#line 722 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_3,
#line 722 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_6,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_7,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_8,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9,
#line 722 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11,
#line 722 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13,
#line 722 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14)
#line 722 "ml_lookup_switch.m"
{
#line 733 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 733 "ml_lookup_switch.m"
    {
#line 733 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 733 "ml_lookup_switch.m"
      {
#line 733 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 733 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 734 "ml_lookup_switch.m"
          {
#line 734 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_2 > ml_backend__ml_lookup_switch__EndVal_3);
#line 734 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 735 "ml_lookup_switch.m"
              {
#line 735 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13;
#line 735 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
#line 735 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9;
#line 735 "ml_lookup_switch.m"
              }
#line 734 "ml_lookup_switch.m"
            else
#line 738 "ml_lookup_switch.m"
              {
#line 738 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32;
#line 738 "ml_lookup_switch.m"
                MR_Integer ml_backend__ml_lookup_switch__V_34_34;

#line 737 "ml_lookup_switch.m"
                {
#line 737 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(ml_backend__ml_lookup_switch__FirstSolnStructType_6, ml_backend__ml_lookup_switch__FieldTypes_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9, &ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32);
                }
#line 740 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__V_34_34 = (ml_backend__ml_lookup_switch__CurIndex_2 + (MR_Integer) 1);
#line 740 "ml_lookup_switch.m"
                /* direct tailcall eliminated */
#line 740 "ml_lookup_switch.m"
                {
#line 740 "ml_lookup_switch.m"
                  MR_Integer ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2 = ml_backend__ml_lookup_switch__V_34_34;
#line 740 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32;

#line 740 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13 = (MR_Integer) 1;
#line 740 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9;
#line 740 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__CurIndex_2 = ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2;
#line 740 "ml_lookup_switch.m"
                }
#line 740 "ml_lookup_switch.m"
                continue;
#line 738 "ml_lookup_switch.m"
              }
#line 734 "ml_lookup_switch.m"
          }
#line 733 "ml_lookup_switch.m"
        else
#line 750 "ml_lookup_switch.m"
          {
#line 750 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Pair_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
#line 750 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Pairs_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
#line 750 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Index_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_44, (MR_Integer) 0)));
#line 750 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Soln_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_44, (MR_Integer) 1)));
#line 750 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__NextPairs_54;
#line 750 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72;
#line 750 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73;
#line 750 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78;
#line 750 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80;
#line 750 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__V_86_86;

#line 752 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_2 < ml_backend__ml_lookup_switch__Index_52);
#line 752 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 754 "ml_lookup_switch.m"
              {
#line 753 "ml_lookup_switch.m"
                {
#line 753 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(ml_backend__ml_lookup_switch__FirstSolnStructType_6, ml_backend__ml_lookup_switch__FieldTypes_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9, &ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72);
                }
#line 755 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73 = (MR_Integer) 1;
#line 756 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__NextPairs_54 = ml_backend__ml_lookup_switch__HeadVar__5_5;
#line 754 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
#line 754 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4;
#line 754 "ml_lookup_switch.m"
              }
#line 752 "ml_lookup_switch.m"
            else
#line 790 "ml_lookup_switch.m"
              {
#line 770 "ml_lookup_switch.m"
                if (((MR_tag((MR_Word) ml_backend__ml_lookup_switch__Soln_53)) == (MR_mktag((MR_Integer) 0))))
#line 759 "ml_lookup_switch.m"
                  {
#line 759 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FieldRvals_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 0)));
#line 759 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_56;
#line 759 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57;
#line 759 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58;
#line 759 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59;
#line 759 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60;
#line 759 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_84_84;

#line 760 "ml_lookup_switch.m"
                    {
#line 760 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FieldInitializers_56 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[7], ml_backend__ml_lookup_switch__FieldRvals_55);
                    }
#line 761 "ml_lookup_switch.m"
                    {
#line 761 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
                    }
#line 762 "ml_lookup_switch.m"
                    {
#line 762 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
                    }
#line 765 "ml_lookup_switch.m"
                    {
#line 765 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58));
#line 765 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_56));
#line 765 "ml_lookup_switch.m"
                    }
#line 764 "ml_lookup_switch.m"
                    {
#line 764 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57));
#line 764 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_84_84));
#line 764 "ml_lookup_switch.m"
                    }
#line 766 "ml_lookup_switch.m"
                    {
#line 766 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_6));
#line 766 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59));
#line 766 "ml_lookup_switch.m"
                    }
#line 768 "ml_lookup_switch.m"
                    {
#line 768 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60));
#line 768 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9));
#line 768 "ml_lookup_switch.m"
                    }
#line 759 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4;
#line 759 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
#line 759 "ml_lookup_switch.m"
                  }
#line 770 "ml_lookup_switch.m"
                else
#line 771 "ml_lookup_switch.m"
                  {
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_101_101 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeInfo_104_104;
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRvals_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 0)));
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterSolns_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 1)));
#line 771 "ml_lookup_switch.m"
                    MR_Integer ml_backend__ml_lookup_switch__NumLaterSolns_63;
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64;
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_75_75;
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_77_77;
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_79_79;
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_91;
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92;
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93;
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94;
#line 771 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95;

#line 772 "ml_lookup_switch.m"
                    {
#line 772 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FieldInitializers_91 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[8], ml_backend__ml_lookup_switch__FirstSolnRvals_61);
                    }
#line 1823 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__TypeInfo_104_104 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1];
#line 773 "ml_lookup_switch.m"
                    {
#line 773 "ml_lookup_switch.m"
                      mercury__list__length_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_104_104, ml_backend__ml_lookup_switch__LaterSolns_62, &ml_backend__ml_lookup_switch__NumLaterSolns_63);
                    }
#line 774 "ml_lookup_switch.m"
                    {
#line 774 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_lookup_switch__NumLaterSolns_63);
                    }
#line 775 "ml_lookup_switch.m"
                    {
#line 775 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4);
                    }
#line 778 "ml_lookup_switch.m"
                    {
#line 778 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_75_75, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93));
#line 778 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_75_75, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_91));
#line 778 "ml_lookup_switch.m"
                    }
#line 777 "ml_lookup_switch.m"
                    {
#line 777 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92));
#line 777 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_75_75));
#line 777 "ml_lookup_switch.m"
                    }
#line 779 "ml_lookup_switch.m"
                    {
#line 779 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_6));
#line 779 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94));
#line 779 "ml_lookup_switch.m"
                    }
#line 781 "ml_lookup_switch.m"
                    {
#line 781 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95));
#line 781 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9));
#line 781 "ml_lookup_switch.m"
                    }
#line 785 "ml_lookup_switch.m"
                    {
#line 785 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 785 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[1]));
#line 785 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3));
#line 785 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 785 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSolnStructType_7));
#line 785 "ml_lookup_switch.m"
                    }
#line 784 "ml_lookup_switch.m"
                    {
#line 784 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64 = mercury__list__map_2_f_0(ml_backend__ml_lookup_switch__TypeInfo_104_104, ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__V_77_77, ml_backend__ml_lookup_switch__LaterSolns_62);
                    }
#line 788 "ml_lookup_switch.m"
                    {
#line 788 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_79_79 = mercury__cord__from_list_1_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64);
                    }
#line 787 "ml_lookup_switch.m"
                    {
#line 787 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = mercury__cord__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11, ml_backend__ml_lookup_switch__V_79_79);
                    }
#line 789 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = (ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4 + ml_backend__ml_lookup_switch__NumLaterSolns_63);
#line 771 "ml_lookup_switch.m"
                  }
#line 791 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__NextPairs_54 = ml_backend__ml_lookup_switch__Pairs_45;
#line 790 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13;
#line 790 "ml_lookup_switch.m"
              }
#line 793 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_86_86 = (ml_backend__ml_lookup_switch__CurIndex_2 + (MR_Integer) 1);
#line 793 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 793 "ml_lookup_switch.m"
            {
#line 793 "ml_lookup_switch.m"
              MR_Integer ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2 = ml_backend__ml_lookup_switch__V_86_86;
#line 793 "ml_lookup_switch.m"
              MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0__tmp_copy_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80;
#line 793 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5 = ml_backend__ml_lookup_switch__NextPairs_54;
#line 793 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72;
#line 793 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_11 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78;
#line 793 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0__tmp_copy_13 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73;

#line 793 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0__tmp_copy_13;
#line 793 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_11;
#line 793 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9;
#line 793 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__5_5 = ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5;
#line 793 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0__tmp_copy_4;
#line 793 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__CurIndex_2 = ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2;
#line 793 "ml_lookup_switch.m"
            }
#line 793 "ml_lookup_switch.m"
            continue;
#line 750 "ml_lookup_switch.m"
          }
#line 733 "ml_lookup_switch.m"
      }
#line 733 "ml_lookup_switch.m"
      break;
#line 733 "ml_lookup_switch.m"
    }
#line 722 "ml_lookup_switch.m"
}

#line 717 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2(
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
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

#line 717 "ml_lookup_switch.m"
    {
#line 717 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 717 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
#line 717 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 717 "ml_lookup_switch.m"
  }
#line 717 "ml_lookup_switch.m"
}

#line 711 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1(
#line 711 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 711 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 711 "ml_lookup_switch.m"
{
#line 711 "ml_lookup_switch.m"
  {
#line 711 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 711 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 711 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_DefaultRval_4;

#line 711 "ml_lookup_switch.m"
    {
#line 711 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_DefaultRval_4 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 711 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_DefaultRval_4));
#line 711 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 711 "ml_lookup_switch.m"
  }
#line 711 "ml_lookup_switch.m"
}

#line 702 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(
#line 702 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__StructType_2,
#line 702 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_3,
#line 702 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_4,
#line 702 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 702 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6)
#line 702 "ml_lookup_switch.m"
{
#line 706 "ml_lookup_switch.m"
  {
#line 706 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 706 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 706 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 706 "ml_lookup_switch.m"
    else
#line 708 "ml_lookup_switch.m"
      {
#line 708 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Pair_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
#line 708 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Pairs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
#line 708 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RowInitializer_17;
#line 708 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RowInitializers_18;
#line 708 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__Index_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_15, (MR_Integer) 0)));
#line 708 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rvals_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_15, (MR_Integer) 1)));
#line 708 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__FieldRvals_21;
#line 708 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RemainingPairs_22;
#line 708 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__FieldInitializers_23;
#line 708 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__V_26_26;

#line 710 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_4 < ml_backend__ml_lookup_switch__Index_19);
#line 710 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 711 "ml_lookup_switch.m"
          {
#line 711 "ml_lookup_switch.m"
            {
#line 711 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__FieldRvals_21 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[5], ml_backend__ml_lookup_switch__FieldTypes_3);
            }
#line 712 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__RemainingPairs_22 = ml_backend__ml_lookup_switch__HeadVar__5_5;
#line 711 "ml_lookup_switch.m"
          }
#line 710 "ml_lookup_switch.m"
        else
#line 714 "ml_lookup_switch.m"
          {
#line 714 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__FieldRvals_21 = ml_backend__ml_lookup_switch__Rvals_20;
#line 715 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__RemainingPairs_22 = ml_backend__ml_lookup_switch__Pairs_16;
#line 714 "ml_lookup_switch.m"
          }
#line 717 "ml_lookup_switch.m"
        {
#line 717 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__FieldInitializers_23 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[6], ml_backend__ml_lookup_switch__FieldRvals_21);
        }
#line 718 "ml_lookup_switch.m"
        {
#line 718 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__RowInitializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_17, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StructType_2));
#line 718 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_17, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_23));
#line 718 "ml_lookup_switch.m"
        }
#line 720 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_26_26 = (ml_backend__ml_lookup_switch__CurIndex_4 + (MR_Integer) 1);
#line 719 "ml_lookup_switch.m"
        {
#line 719 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(ml_backend__ml_lookup_switch__StructType_2, ml_backend__ml_lookup_switch__FieldTypes_3, ml_backend__ml_lookup_switch__V_26_26, ml_backend__ml_lookup_switch__RemainingPairs_22, &ml_backend__ml_lookup_switch__RowInitializers_18);
        }
#line 708 "ml_lookup_switch.m"
        {
#line 708 "ml_lookup_switch.m"
          MR_Word base;
#line 708 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__6_6 = base;
#line 708 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RowInitializer_17));
#line 708 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__RowInitializers_18));
#line 708 "ml_lookup_switch.m"
        }
#line 708 "ml_lookup_switch.m"
      }
#line 706 "ml_lookup_switch.m"
  }
#line 702 "ml_lookup_switch.m"
}

#line 666 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 666 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 666 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_2,
#line 666 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__WordBits_3,
#line 666 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 666 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5)
#line 666 "ml_lookup_switch.m"
{
#line 669 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 669 "ml_lookup_switch.m"
    {
#line 669 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 669 "ml_lookup_switch.m"
      {
#line 669 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 669 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 669 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4;
#line 669 "ml_lookup_switch.m"
        else
#line 670 "ml_lookup_switch.m"
          {
#line 670 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Tag_11;
#line 670 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 670 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Val_17;
#line 670 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__WordNum_18;
#line 670 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Offset_19;
#line 670 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__X1_21;
#line 670 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 670 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28;
#line 670 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__V_12_12;
#line 674 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__X0_20;
#line 674 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv0_X0_20;

#line 670 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Tag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_24_24, (MR_Integer) 0)));
#line 670 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_12_12 = (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_24_24, (MR_Integer) 1));
#line 671 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Val_17 = (ml_backend__ml_lookup_switch__Tag_11 - ml_backend__ml_lookup_switch__Start_2);
#line 672 "ml_lookup_switch.m"
            {
#line 672 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__WordNum_18 = mercury__int__f_47_47_2_f_0(ml_backend__ml_lookup_switch__Val_17, ml_backend__ml_lookup_switch__WordBits_3);
            }
#line 673 "ml_lookup_switch.m"
            {
#line 673 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__Offset_19 = mercury__int__mod_2_f_0(ml_backend__ml_lookup_switch__Val_17, ml_backend__ml_lookup_switch__WordBits_3);
            }
#line 674 "ml_lookup_switch.m"
            {
#line 674 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4, ml_backend__ml_lookup_switch__WordNum_18, &ml_backend__ml_lookup_switch__conv0_X0_20);
            }
#line 674 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 674 "ml_lookup_switch.m"
              {
#line 674 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__X0_20 = ((MR_Integer) ml_backend__ml_lookup_switch__conv0_X0_20);
#line 674 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 674 "ml_lookup_switch.m"
              }
#line 674 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 675 "ml_lookup_switch.m"
              {
#line 675 "ml_lookup_switch.m"
                MR_Integer ml_backend__ml_lookup_switch__V_25_25;

#line 675 "ml_lookup_switch.m"
                {
#line 675 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__V_25_25 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ml_backend__ml_lookup_switch__Offset_19);
                }
#line 675 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__X1_21 = (ml_backend__ml_lookup_switch__X0_20 | ml_backend__ml_lookup_switch__V_25_25);
#line 675 "ml_lookup_switch.m"
              }
#line 674 "ml_lookup_switch.m"
            else
#line 677 "ml_lookup_switch.m"
              {
#line 677 "ml_lookup_switch.m"
                {
#line 677 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__X1_21 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ml_backend__ml_lookup_switch__Offset_19);
                }
#line 677 "ml_lookup_switch.m"
              }
#line 679 "ml_lookup_switch.m"
            {
#line 679 "ml_lookup_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__WordNum_18, ((MR_Box) (ml_backend__ml_lookup_switch__X1_21)), ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4, &ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28);
            }
#line 680 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 680 "ml_lookup_switch.m"
            {
#line 680 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__1__tmp_copy_1 = ml_backend__ml_lookup_switch__Rest_13;
#line 680 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28;

#line 680 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4;
#line 680 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__HeadVar__1__tmp_copy_1;
#line 680 "ml_lookup_switch.m"
            }
#line 680 "ml_lookup_switch.m"
            continue;
#line 670 "ml_lookup_switch.m"
          }
#line 669 "ml_lookup_switch.m"
      }
#line 669 "ml_lookup_switch.m"
      break;
#line 669 "ml_lookup_switch.m"
    }
#line 666 "ml_lookup_switch.m"
}

#line 600 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(
#line 600 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_10,
#line 600 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_11,
#line 600 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_12,
#line 600 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseVals_13,
#line 600 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_14,
#line 600 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__CheckRval_16,
#line 600 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30,
#line 600 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31)
#line 600 "ml_lookup_switch.m"
{
#line 605 "ml_lookup_switch.m"
  {
#line 605 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_31_71;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Globals_18;
#line 605 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__WordBits_19;
#line 605 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__Log2WordBits_20;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData0_21;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitVecArgRvals_22;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitVecRval_23;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData_24;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__WordRval_26;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitNumRval_27;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_45_45;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitMap0_61;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitMap_62;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__WordVals_63;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__WordInitializers_64;
#line 605 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Initializer_65;
#line 615 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SingleWordRval_25;
#line 615 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_32_32;

#line 606 "ml_lookup_switch.m"
    {
#line 606 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, &ml_backend__ml_lookup_switch__Globals_18);
    }
#line 607 "ml_lookup_switch.m"
    {
#line 607 "ml_lookup_switch.m"
      backend_libs__switch_util__get_word_bits_3_p_0(ml_backend__ml_lookup_switch__Globals_18, &ml_backend__ml_lookup_switch__WordBits_19, &ml_backend__ml_lookup_switch__Log2WordBits_20);
    }
#line 608 "ml_lookup_switch.m"
    {
#line 608 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, &ml_backend__ml_lookup_switch__GlobalData0_21);
    }
#line 2371 "ml_backend.ml_lookup_switch.c"
    ml_backend__ml_lookup_switch__TypeCtorInfo_31_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 656 "ml_lookup_switch.m"
    {
#line 656 "ml_lookup_switch.m"
      mercury__map__init_1_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, &ml_backend__ml_lookup_switch__BitMap0_61);
    }
#line 657 "ml_lookup_switch.m"
    {
#line 657 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(ml_backend__ml_lookup_switch__CaseVals_13, ml_backend__ml_lookup_switch__Start_14, ml_backend__ml_lookup_switch__WordBits_19, ml_backend__ml_lookup_switch__BitMap0_61, &ml_backend__ml_lookup_switch__BitMap_62);
    }
#line 658 "ml_lookup_switch.m"
    {
#line 658 "ml_lookup_switch.m"
      mercury__map__to_assoc_list_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__BitMap_62, &ml_backend__ml_lookup_switch__WordVals_63);
    }
#line 659 "ml_lookup_switch.m"
    {
#line 659 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(ml_backend__ml_lookup_switch__WordVals_63, (MR_Integer) 0, &ml_backend__ml_lookup_switch__BitVecArgRvals_22, &ml_backend__ml_lookup_switch__WordInitializers_64);
    }
#line 660 "ml_lookup_switch.m"
    {
#line 660 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__Initializer_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 660 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Initializer_65, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__WordInitializers_64));
#line 660 "ml_lookup_switch.m"
    }
#line 663 "ml_lookup_switch.m"
    {
#line 663 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_10, (MR_String) "bit_vector", (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[14]), ml_backend__ml_lookup_switch__Initializer_65, ml_backend__ml_lookup_switch__Context_11, &ml_backend__ml_lookup_switch__BitVecRval_23, ml_backend__ml_lookup_switch__GlobalData0_21, &ml_backend__ml_lookup_switch__GlobalData_24);
    }
#line 615 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_lookup_switch__BitVecArgRvals_22)) == (MR_mktag((MR_Integer) 1)));
#line 615 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 615 "ml_lookup_switch.m"
      {
#line 615 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__SingleWordRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__BitVecArgRvals_22, (MR_Integer) 0)));
#line 615 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__BitVecArgRvals_22, (MR_Integer) 1)));
#line 615 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 615 "ml_lookup_switch.m"
      }
#line 615 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 617 "ml_lookup_switch.m"
      {
#line 617 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__WordRval_26 = ml_backend__ml_lookup_switch__SingleWordRval_25;
#line 618 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__BitNumRval_27 = ml_backend__ml_lookup_switch__IndexRval_12;
#line 617 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30;
#line 617 "ml_lookup_switch.m"
      }
#line 615 "ml_lookup_switch.m"
    else
#line 622 "ml_lookup_switch.m"
      {
#line 622 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__WordNumRval_28;
#line 622 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_35_35;
#line 622 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_36_36;
#line 622 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_40_40;
#line 622 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_41_41;
#line 622 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__V_42_42;

#line 622 "ml_lookup_switch.m"
        {
#line 622 "ml_lookup_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_24, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31);
        }
#line 629 "ml_lookup_switch.m"
        {
#line 629 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 629 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_36_36, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Log2WordBits_20));
#line 629 "ml_lookup_switch.m"
        }
#line 629 "ml_lookup_switch.m"
        {
#line 629 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 629 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_35_35, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_36_36));
#line 629 "ml_lookup_switch.m"
        }
#line 628 "ml_lookup_switch.m"
        {
#line 628 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__WordNumRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 628 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 628 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 628 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_12));
#line 628 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_35_35));
#line 628 "ml_lookup_switch.m"
        }
#line 632 "ml_lookup_switch.m"
        {
#line 632 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__WordRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 632 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 632 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_lookup_switch_scalar_common_5[3])));
#line 632 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecRval_23));
#line 632 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__WordNumRval_28));
#line 632 "ml_lookup_switch.m"
        }
#line 640 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_42_42 = (ml_backend__ml_lookup_switch__WordBits_19 - (MR_Integer) 1);
#line 640 "ml_lookup_switch.m"
        {
#line 640 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 640 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_41_41, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__V_42_42));
#line 640 "ml_lookup_switch.m"
        }
#line 640 "ml_lookup_switch.m"
        {
#line 640 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 640 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_40_40, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_41_41));
#line 640 "ml_lookup_switch.m"
        }
#line 639 "ml_lookup_switch.m"
        {
#line 639 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__BitNumRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 639 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 639 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 639 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_12));
#line 639 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_40_40));
#line 639 "ml_lookup_switch.m"
        }
#line 622 "ml_lookup_switch.m"
      }
#line 643 "ml_lookup_switch.m"
    {
#line 643 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 643 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 643 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 643 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[7])));
#line 643 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__BitNumRval_27));
#line 643 "ml_lookup_switch.m"
    }
#line 642 "ml_lookup_switch.m"
    {
#line 642 "ml_lookup_switch.m"
      MR_Word base;
#line 642 "ml_lookup_switch.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 642 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__CheckRval_16 = base;
#line 642 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 642 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 642 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__WordRval_26));
#line 642 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_45_45));
#line 642 "ml_lookup_switch.m"
    }
#line 605 "ml_lookup_switch.m"
  }
#line 600 "ml_lookup_switch.m"
}

#line 182 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(
#line 182 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 182 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 182 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__4_4,
#line 182 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 182 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6,
#line 182 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7,
#line 182 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_8)
#line 182 "ml_lookup_switch.m"
{
#line 188 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 188 "ml_lookup_switch.m"
    {
#line 188 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 188 "ml_lookup_switch.m"
      {
#line 188 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 188 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "ml_lookup_switch.m"
          {
#line 189 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_8 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7;
#line 189 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__HeadVar__6_6 = ml_backend__ml_lookup_switch__HeadVar__5_5;
#line 188 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 188 "ml_lookup_switch.m"
          }
#line 188 "ml_lookup_switch.m"
        else
#line 191 "ml_lookup_switch.m"
          {
#line 191 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__4_4, (MR_Integer) 0)));
#line 191 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__4_4, (MR_Integer) 1)));
#line 191 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__CaseId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 2)));
#line 191 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Goal_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 3)));
#line 191 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__GoalExpr_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Goal_28, (MR_Integer) 0)));
#line 191 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43;
#line 191 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44;
#line 192 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___TaggedMainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 0)));
#line 192 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___TaggedOtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 1)));
#line 194 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Goal_28, (MR_Integer) 1)));
#line 195 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Disjuncts_31;

#line 195 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_lookup_switch__GoalExpr_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__GoalExpr_29, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 195 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 195 "ml_lookup_switch.m"
              {
#line 195 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__Disjuncts_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__GoalExpr_29, (MR_Integer) 1)));
#line 198 "ml_lookup_switch.m"
                if ((ml_backend__ml_lookup_switch__Disjuncts_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "ml_lookup_switch.m"
                  {
#line 197 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44 = ml_backend__ml_lookup_switch__HeadVar__5_5;
#line 197 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7;
#line 197 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 197 "ml_lookup_switch.m"
                  }
#line 198 "ml_lookup_switch.m"
                else
#line 199 "ml_lookup_switch.m"
                  {
#line 199 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_50_50;
#line 199 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeInfo_51_51;
#line 199 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstDisjunct_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Disjuncts_31, (MR_Integer) 0)));
#line 199 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterDisjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Disjuncts_31, (MR_Integer) 1)));
#line 199 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSoln_34;
#line 199 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterSolns_35;
#line 199 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__SolnConsts_36;
#line 199 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_42_42;

#line 200 "ml_lookup_switch.m"
                    {
#line 200 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__FirstDisjunct_32);
                    }
#line 199 "ml_lookup_switch.m"
                    if (ml_backend__ml_lookup_switch__succeeded)
#line 199 "ml_lookup_switch.m"
                      {
#line 201 "ml_lookup_switch.m"
                        {
#line 201 "ml_lookup_switch.m"
                          ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__LaterDisjuncts_33);
                        }
#line 199 "ml_lookup_switch.m"
                        if (ml_backend__ml_lookup_switch__succeeded)
#line 199 "ml_lookup_switch.m"
                          {
#line 202 "ml_lookup_switch.m"
                            {
#line 202 "ml_lookup_switch.m"
                              ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(ml_backend__ml_lookup_switch__HeadVar__2_2, ml_backend__ml_lookup_switch__FirstDisjunct_32, &ml_backend__ml_lookup_switch__FirstSoln_34, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_42_42);
                            }
#line 204 "ml_lookup_switch.m"
                            {
#line 204 "ml_lookup_switch.m"
                              ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(ml_backend__ml_lookup_switch__HeadVar__2_2, ml_backend__ml_lookup_switch__LaterDisjuncts_33, &ml_backend__ml_lookup_switch__LaterSolns_35, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_42_42, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43);
                            }
#line 2711 "ml_backend.ml_lookup_switch.c"
                            ml_backend__ml_lookup_switch__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
#line 2713 "ml_backend.ml_lookup_switch.c"
                            ml_backend__ml_lookup_switch__TypeInfo_51_51 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 206 "ml_lookup_switch.m"
                            {
#line 206 "ml_lookup_switch.m"
                              ml_backend__ml_lookup_switch__SolnConsts_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SolnConsts_36, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSoln_34));
#line 206 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SolnConsts_36, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSolns_35));
#line 206 "ml_lookup_switch.m"
                            }
#line 207 "ml_lookup_switch.m"
                            {
#line 207 "ml_lookup_switch.m"
                              mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_50_50, ml_backend__ml_lookup_switch__TypeInfo_51_51, ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_27)), ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_36)), ml_backend__ml_lookup_switch__HeadVar__5_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44);
                            }
#line 207 "ml_lookup_switch.m"
                            ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 199 "ml_lookup_switch.m"
                          }
#line 199 "ml_lookup_switch.m"
                      }
#line 199 "ml_lookup_switch.m"
                  }
#line 195 "ml_lookup_switch.m"
              }
#line 195 "ml_lookup_switch.m"
            else
#line 210 "ml_lookup_switch.m"
              {
#line 210 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_52_52;
#line 210 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__TypeInfo_53_53;
#line 210 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__Soln_37;
#line 210 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__SolnConsts_49;

#line 210 "ml_lookup_switch.m"
                {
#line 210 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__Goal_28);
                }
#line 210 "ml_lookup_switch.m"
                if (ml_backend__ml_lookup_switch__succeeded)
#line 210 "ml_lookup_switch.m"
                  {
#line 211 "ml_lookup_switch.m"
                    {
#line 211 "ml_lookup_switch.m"
                      ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(ml_backend__ml_lookup_switch__HeadVar__2_2, ml_backend__ml_lookup_switch__Goal_28, &ml_backend__ml_lookup_switch__Soln_37, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43);
                    }
#line 2767 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
#line 2769 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__TypeInfo_53_53 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 212 "ml_lookup_switch.m"
                    {
#line 212 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__SolnConsts_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 212 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SolnConsts_49, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Soln_37));
#line 212 "ml_lookup_switch.m"
                    }
#line 213 "ml_lookup_switch.m"
                    {
#line 213 "ml_lookup_switch.m"
                      mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_52_52, ml_backend__ml_lookup_switch__TypeInfo_53_53, ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_27)), ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_49)), ml_backend__ml_lookup_switch__HeadVar__5_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44);
                    }
#line 213 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 210 "ml_lookup_switch.m"
                  }
#line 210 "ml_lookup_switch.m"
              }
#line 191 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 215 "ml_lookup_switch.m"
              {
#line 215 "ml_lookup_switch.m"
                /* direct tailcall eliminated */
#line 215 "ml_lookup_switch.m"
                {
#line 215 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__HeadVar__4__tmp_copy_4 = ml_backend__ml_lookup_switch__TaggedCases_22;
#line 215 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44;
#line 215 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0__tmp_copy_7 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43;

#line 215 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 215 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__HeadVar__5_5 = ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5;
#line 215 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__HeadVar__4_4 = ml_backend__ml_lookup_switch__HeadVar__4__tmp_copy_4;
#line 215 "ml_lookup_switch.m"
                }
#line 215 "ml_lookup_switch.m"
                continue;
#line 215 "ml_lookup_switch.m"
              }
#line 191 "ml_lookup_switch.m"
          }
#line 188 "ml_lookup_switch.m"
        return ml_backend__ml_lookup_switch__succeeded;
#line 188 "ml_lookup_switch.m"
      }
#line 188 "ml_lookup_switch.m"
      break;
#line 188 "ml_lookup_switch.m"
    }
#line 182 "ml_lookup_switch.m"
}

#line 173 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1(
#line 173 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 173 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 173 "ml_lookup_switch.m"
{
#line 173 "ml_lookup_switch.m"
  {
#line 173 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 173 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 173 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__3_3;

#line 173 "ml_lookup_switch.m"
    {
#line 173 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_HeadVar__3_3 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 173 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__3_3));
#line 173 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 173 "ml_lookup_switch.m"
  }
#line 173 "ml_lookup_switch.m"
}

#line 59 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0(
#line 59 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_8,
#line 59 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_9,
#line 59 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GoalInfo_10,
#line 59 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12,
#line 59 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27,
#line 59 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28)
#line 59 "ml_lookup_switch.m"
{
#line 145 "ml_lookup_switch.m"
  {
#line 145 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 145 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_35_35;
#line 145 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NonLocals_14;
#line 145 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OtherNonLocals_15;
#line 145 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OutVars_16;
#line 145 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_17;
#line 145 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Globals_18;
#line 145 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__StaticGroundCells_19;
#line 155 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CaseSolnMap_20;
#line 155 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31;
#line 156 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_36_36;
#line 156 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeInfo_37_37;
#line 156 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_30_30;

#line 146 "ml_lookup_switch.m"
    {
#line 146 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_lookup_switch__GoalInfo_10);
    }
#line 2913 "ml_backend.ml_lookup_switch.c"
    ml_backend__ml_lookup_switch__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 149 "ml_lookup_switch.m"
    {
#line 149 "ml_lookup_switch.m"
      parse_tree__set_of_var__delete_3_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_35_35, ml_backend__ml_lookup_switch__SwitchVar_8, ml_backend__ml_lookup_switch__NonLocals_14, &ml_backend__ml_lookup_switch__OtherNonLocals_15);
    }
#line 150 "ml_lookup_switch.m"
    {
#line 150 "ml_lookup_switch.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_35_35, ml_backend__ml_lookup_switch__OtherNonLocals_15, &ml_backend__ml_lookup_switch__OutVars_16);
    }
#line 151 "ml_lookup_switch.m"
    {
#line 151 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27, &ml_backend__ml_lookup_switch__ModuleInfo_17);
    }
#line 152 "ml_lookup_switch.m"
    {
#line 152 "ml_lookup_switch.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_lookup_switch__ModuleInfo_17, &ml_backend__ml_lookup_switch__Globals_18);
    }
#line 153 "ml_lookup_switch.m"
    {
#line 153 "ml_lookup_switch.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_lookup_switch__Globals_18, (MR_Integer) 443, &ml_backend__ml_lookup_switch__StaticGroundCells_19);
    }
#line 156 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__StaticGroundCells_19 == (MR_Integer) 1);
#line 156 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 156 "ml_lookup_switch.m"
      {
#line 2946 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
#line 2948 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__TypeInfo_37_37 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 158 "ml_lookup_switch.m"
        {
#line 158 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_30_30 = mercury__map__init_0_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_36_36, ml_backend__ml_lookup_switch__TypeInfo_37_37);
        }
#line 157 "ml_lookup_switch.m"
        {
#line 157 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(ml_backend__ml_lookup_switch__OutVars_16, ml_backend__ml_lookup_switch__OtherNonLocals_15, ml_backend__ml_lookup_switch__TaggedCases_9, ml_backend__ml_lookup_switch__V_30_30, &ml_backend__ml_lookup_switch__CaseSolnMap_20, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31);
        }
#line 156 "ml_lookup_switch.m"
      }
#line 155 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 170 "ml_lookup_switch.m"
      {
#line 170 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__CaseConsts_22;
#line 170 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__VarTypes_23;
#line 170 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__OutTypes_24;
#line 170 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__FieldTypes_25;
#line 170 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__LookupSwitchInfo_26;
#line 170 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_33_33;
#line 166 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__CaseValuePairMap_21;

#line 170 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31;
#line 166 "ml_lookup_switch.m"
        {
#line 166 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__succeeded = backend_libs__switch_util__project_all_to_one_solution_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_lookup_switch__CaseSolnMap_20, &ml_backend__ml_lookup_switch__CaseValuePairMap_21);
        }
#line 166 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 167 "ml_lookup_switch.m"
          {
#line 167 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__CaseConsts_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 167 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__CaseConsts_22, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseValuePairMap_21));
#line 167 "ml_lookup_switch.m"
          }
#line 166 "ml_lookup_switch.m"
        else
#line 169 "ml_lookup_switch.m"
          {
#line 169 "ml_lookup_switch.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 169 "ml_lookup_switch.m"
            {
#line 169 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__CaseConsts_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseConsts_22, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseSolnMap_20));
#line 169 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseConsts_22, 1) = NULL;
#line 169 "ml_lookup_switch.m"
            }
#line 169 "ml_lookup_switch.m"
          }
#line 171 "ml_lookup_switch.m"
        {
#line 171 "ml_lookup_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31, &ml_backend__ml_lookup_switch__VarTypes_23);
        }
#line 172 "ml_lookup_switch.m"
        {
#line 172 "ml_lookup_switch.m"
          hlds__vartypes__lookup_var_types_3_p_0(ml_backend__ml_lookup_switch__VarTypes_23, ml_backend__ml_lookup_switch__OutVars_16, &ml_backend__ml_lookup_switch__OutTypes_24);
        }
#line 173 "ml_lookup_switch.m"
        {
#line 173 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 173 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[0]));
#line 173 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1));
#line 173 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 173 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__ModuleInfo_17));
#line 173 "ml_lookup_switch.m"
        }
#line 173 "ml_lookup_switch.m"
        {
#line 173 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__FieldTypes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_lookup_switch__V_33_33, ml_backend__ml_lookup_switch__OutTypes_24);
        }
#line 174 "ml_lookup_switch.m"
        {
#line 174 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__LookupSwitchInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 174 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_26, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseConsts_22));
#line 174 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_26, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OutVars_16));
#line 174 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_26, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldTypes_25));
#line 174 "ml_lookup_switch.m"
        }
#line 176 "ml_lookup_switch.m"
        {
#line 176 "ml_lookup_switch.m"
          MR_Word base;
#line 176 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 176 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12 = base;
#line 176 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSwitchInfo_26));
#line 176 "ml_lookup_switch.m"
        }
#line 170 "ml_lookup_switch.m"
      }
#line 155 "ml_lookup_switch.m"
    else
#line 179 "ml_lookup_switch.m"
      {
#line 179 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 179 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27;
#line 179 "ml_lookup_switch.m"
      }
#line 145 "ml_lookup_switch.m"
  }
#line 59 "ml_lookup_switch.m"
}

#line 246 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 246 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14)
#line 246 "ml_lookup_switch.m"
{
#line 251 "ml_lookup_switch.m"
  {
#line 251 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 251 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
#line 251 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__Index_12;
#line 252 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 0)));

#line 253 "ml_lookup_switch.m"
    {
#line 253 "ml_lookup_switch.m"
      backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_11, &ml_backend__ml_lookup_switch__Index_12);
    }
#line 254 "ml_lookup_switch.m"
    {
#line 254 "ml_lookup_switch.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ml_backend__ml_lookup_switch__Index_12, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_7)), ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);
    }
#line 251 "ml_lookup_switch.m"
  }
#line 246 "ml_lookup_switch.m"
}

#line 246 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 246 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14)
#line 246 "ml_lookup_switch.m"
{
#line 251 "ml_lookup_switch.m"
  {
#line 251 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 251 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
#line 251 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__Index_12;
#line 252 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 0)));

#line 253 "ml_lookup_switch.m"
    {
#line 253 "ml_lookup_switch.m"
      backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_11, &ml_backend__ml_lookup_switch__Index_12);
    }
#line 254 "ml_lookup_switch.m"
    {
#line 254 "ml_lookup_switch.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ml_backend__ml_lookup_switch__Index_12, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_7)), ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);
    }
#line 251 "ml_lookup_switch.m"
  }
#line 246 "ml_lookup_switch.m"
}

#line 241 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1(
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 241 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 241 "ml_lookup_switch.m"
{
#line 241 "ml_lookup_switch.m"
  {
#line 241 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 241 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14;

#line 241 "ml_lookup_switch.m"
    {
#line 241 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), &ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14);
    }
#line 241 "ml_lookup_switch.m"
    *ml_backend__ml_lookup_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14));
#line 241 "ml_lookup_switch.m"
  }
#line 241 "ml_lookup_switch.m"
}

#line 227 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6)
#line 227 "ml_lookup_switch.m"
{
#line 232 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 232 "ml_lookup_switch.m"
    {
#line 232 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 232 "ml_lookup_switch.m"
      {
#line 232 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 232 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "ml_lookup_switch.m"
          {
#line 233 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5;
#line 233 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3;
#line 232 "ml_lookup_switch.m"
          }
#line 232 "ml_lookup_switch.m"
        else
#line 235 "ml_lookup_switch.m"
          {
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedMainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 0)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedOtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 1)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__CaseId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 2)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__SolnConsts_23;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_30_30;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__ConsTag_54;
#line 235 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Index_55;
#line 236 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 3)));
#line 238 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv0_SolnConsts_23;
#line 252 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___ConsId_53;
#line 241 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31;

#line 238 "ml_lookup_switch.m"
            {
#line 238 "ml_lookup_switch.m"
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_21)), &ml_backend__ml_lookup_switch__conv0_SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28);
            }
#line 238 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__SolnConsts_23 = ((MR_Word) ml_backend__ml_lookup_switch__conv0_SolnConsts_23);
#line 252 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch___ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 0)));
#line 252 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__ConsTag_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 1)));
#line 253 "ml_lookup_switch.m"
            {
#line 253 "ml_lookup_switch.m"
              backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_54, &ml_backend__ml_lookup_switch__Index_55);
            }
#line 254 "ml_lookup_switch.m"
            {
#line 254 "ml_lookup_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ml_backend__ml_lookup_switch__Index_55, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23)), ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29);
            }
#line 241 "ml_lookup_switch.m"
            {
#line 241 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_9[1]));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23));
#line 241 "ml_lookup_switch.m"
            }
#line 241 "ml_lookup_switch.m"
            {
#line 241 "ml_lookup_switch.m"
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[4], ml_backend__ml_lookup_switch__V_30_30, ml_backend__ml_lookup_switch__TaggedOtherConsIds_20, ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29)), &ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            }
#line 241 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31 = ((MR_Word) ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
#line 243 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 243 "ml_lookup_switch.m"
            {
#line 243 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2 = ml_backend__ml_lookup_switch__TaggedCases_16;
#line 243 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 243 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;

#line 243 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5;
#line 243 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3;
#line 243 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__2_2 = ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2;
#line 243 "ml_lookup_switch.m"
            }
#line 243 "ml_lookup_switch.m"
            continue;
#line 235 "ml_lookup_switch.m"
          }
#line 232 "ml_lookup_switch.m"
      }
#line 232 "ml_lookup_switch.m"
      break;
#line 232 "ml_lookup_switch.m"
    }
#line 227 "ml_lookup_switch.m"
}

#line 241 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1(
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 241 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 241 "ml_lookup_switch.m"
{
#line 241 "ml_lookup_switch.m"
  {
#line 241 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 241 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14;

#line 241 "ml_lookup_switch.m"
    {
#line 241 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), &ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14);
    }
#line 241 "ml_lookup_switch.m"
    *ml_backend__ml_lookup_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14));
#line 241 "ml_lookup_switch.m"
  }
#line 241 "ml_lookup_switch.m"
}

#line 227 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6)
#line 227 "ml_lookup_switch.m"
{
#line 232 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 232 "ml_lookup_switch.m"
    {
#line 232 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 232 "ml_lookup_switch.m"
      {
#line 232 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 232 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "ml_lookup_switch.m"
          {
#line 233 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5;
#line 233 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3;
#line 232 "ml_lookup_switch.m"
          }
#line 232 "ml_lookup_switch.m"
        else
#line 235 "ml_lookup_switch.m"
          {
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedMainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 0)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedOtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 1)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__CaseId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 2)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__SolnConsts_23;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_30_30;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__ConsTag_54;
#line 235 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Index_55;
#line 236 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 3)));
#line 238 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv0_SolnConsts_23;
#line 252 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___ConsId_53;
#line 241 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31;

#line 238 "ml_lookup_switch.m"
            {
#line 238 "ml_lookup_switch.m"
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_21)), &ml_backend__ml_lookup_switch__conv0_SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28);
            }
#line 238 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__SolnConsts_23 = ((MR_Word) ml_backend__ml_lookup_switch__conv0_SolnConsts_23);
#line 252 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch___ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 0)));
#line 252 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__ConsTag_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 1)));
#line 253 "ml_lookup_switch.m"
            {
#line 253 "ml_lookup_switch.m"
              backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_54, &ml_backend__ml_lookup_switch__Index_55);
            }
#line 254 "ml_lookup_switch.m"
            {
#line 254 "ml_lookup_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ml_backend__ml_lookup_switch__Index_55, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23)), ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29);
            }
#line 241 "ml_lookup_switch.m"
            {
#line 241 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_9[0]));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23));
#line 241 "ml_lookup_switch.m"
            }
#line 241 "ml_lookup_switch.m"
            {
#line 241 "ml_lookup_switch.m"
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[3], ml_backend__ml_lookup_switch__V_30_30, ml_backend__ml_lookup_switch__TaggedOtherConsIds_20, ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29)), &ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            }
#line 241 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31 = ((MR_Word) ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
#line 243 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 243 "ml_lookup_switch.m"
            {
#line 243 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2 = ml_backend__ml_lookup_switch__TaggedCases_16;
#line 243 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 243 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;

#line 243 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5;
#line 243 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3;
#line 243 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__2_2 = ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2;
#line 243 "ml_lookup_switch.m"
            }
#line 243 "ml_lookup_switch.m"
            continue;
#line 235 "ml_lookup_switch.m"
          }
#line 232 "ml_lookup_switch.m"
      }
#line 232 "ml_lookup_switch.m"
      break;
#line 232 "ml_lookup_switch.m"
    }
#line 227 "ml_lookup_switch.m"
}

#line 459 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__459__1_2_p_0(
#line 459 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
#line 459 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_77)
#line 459 "ml_lookup_switch.m"
{
#line 459 "ml_lookup_switch.m"
  {
#line 459 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__HadDummyRows_46 == ml_backend__ml_lookup_switch__HeadVar__2_77);

#line 459 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 459 "ml_lookup_switch.m"
  }
#line 459 "ml_lookup_switch.m"
}

#line 455 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__455__1_2_p_0(
#line 455 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
#line 455 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_82)
#line 455 "ml_lookup_switch.m"
{
#line 455 "ml_lookup_switch.m"
  {
#line 455 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__HadDummyRows_46 == ml_backend__ml_lookup_switch__HeadVar__2_82);

#line 455 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 455 "ml_lookup_switch.m"
  }
#line 455 "ml_lookup_switch.m"
}

#line 339 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__339__1_2_p_0(
#line 339 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 339 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_86)
#line 339 "ml_lookup_switch.m"
{
#line 339 "ml_lookup_switch.m"
  {
#line 339 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__NeedBitVecCheck_22 == ml_backend__ml_lookup_switch__HeadVar__2_86);

#line 339 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 339 "ml_lookup_switch.m"
  }
#line 339 "ml_lookup_switch.m"
}

#line 337 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__337__1_2_p_0(
#line 337 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 337 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_81)
#line 337 "ml_lookup_switch.m"
{
#line 337 "ml_lookup_switch.m"
  {
#line 337 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__NeedRangeCheck_23 == ml_backend__ml_lookup_switch__HeadVar__2_81);

#line 337 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 337 "ml_lookup_switch.m"
  }
#line 337 "ml_lookup_switch.m"
}

#line 281 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__281__1_2_p_0(
#line 281 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_16,
#line 281 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_46)
#line 281 "ml_lookup_switch.m"
{
#line 281 "ml_lookup_switch.m"
  {
#line 281 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CodeModel_16 == ml_backend__ml_lookup_switch__HeadVar__2_46);

#line 281 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 281 "ml_lookup_switch.m"
  }
#line 281 "ml_lookup_switch.m"
}

#line 224 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__224__1_2_p_0(
#line 224 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_16,
#line 224 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_9)
#line 224 "ml_lookup_switch.m"
{
#line 224 "ml_lookup_switch.m"
  {
#line 224 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 224 "ml_lookup_switch.m"
    {
#line 224 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_16, ml_backend__ml_lookup_switch__DepletedCaseIdMap_9);
    }
#line 224 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 224 "ml_lookup_switch.m"
  }
#line 224 "ml_lookup_switch.m"
}

#line 97 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0(
#line 97 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 97 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 97 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3)
#line 97 "ml_lookup_switch.m"
{
#line 97 "ml_lookup_switch.m"
  {
#line 97 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 97 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_21 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;
#line 97 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_22 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__3_3;

#line 97 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_21 == ml_backend__ml_lookup_switch__CastY_22);
#line 97 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 3677 "ml_backend.ml_lookup_switch.c"
      *ml_backend__ml_lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "ml_lookup_switch.m"
    else
#line 97 "ml_lookup_switch.m"
      {
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 4)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 5)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_16_16;

#line 97 "ml_lookup_switch.m"
        {
#line 97 "ml_lookup_switch.m"
          ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_16_16, ml_backend__ml_lookup_switch__V_4_4, ml_backend__ml_lookup_switch__V_10_10);
        }
#line 3715 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_16_16 == (MR_Integer) 0);
#line 97 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 97 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 97 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_16_16;
#line 97 "ml_lookup_switch.m"
        else
#line 97 "ml_lookup_switch.m"
          {
#line 97 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_17_17;

#line 97 "ml_lookup_switch.m"
            {
#line 97 "ml_lookup_switch.m"
              ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_17_17, ml_backend__ml_lookup_switch__V_5_5, ml_backend__ml_lookup_switch__V_11_11);
            }
#line 3735 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_17_17 == (MR_Integer) 0);
#line 97 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 97 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 97 "ml_lookup_switch.m"
              *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_17_17;
#line 97 "ml_lookup_switch.m"
            else
#line 97 "ml_lookup_switch.m"
              {
#line 97 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_18_18;

#line 97 "ml_lookup_switch.m"
                {
#line 97 "ml_lookup_switch.m"
                  ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_18_18, ml_backend__ml_lookup_switch__V_6_6, ml_backend__ml_lookup_switch__V_12_12);
                }
#line 3755 "ml_backend.ml_lookup_switch.c"
                ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_18_18 == (MR_Integer) 0);
#line 97 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 97 "ml_lookup_switch.m"
                if (ml_backend__ml_lookup_switch__succeeded)
#line 97 "ml_lookup_switch.m"
                  *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_18_18;
#line 97 "ml_lookup_switch.m"
                else
#line 97 "ml_lookup_switch.m"
                  {
#line 97 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_19_19;

#line 97 "ml_lookup_switch.m"
                    {
#line 97 "ml_lookup_switch.m"
                      ml_backend__mlds____Compare____statement_0_0(&ml_backend__ml_lookup_switch__V_19_19, ml_backend__ml_lookup_switch__V_7_7, ml_backend__ml_lookup_switch__V_13_13);
                    }
#line 3775 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_19_19 == (MR_Integer) 0);
#line 97 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 97 "ml_lookup_switch.m"
                    if (ml_backend__ml_lookup_switch__succeeded)
#line 97 "ml_lookup_switch.m"
                      *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_19_19;
#line 97 "ml_lookup_switch.m"
                    else
#line 97 "ml_lookup_switch.m"
                      {
#line 97 "ml_lookup_switch.m"
                        MR_Word ml_backend__ml_lookup_switch__V_20_20;

#line 97 "ml_lookup_switch.m"
                        {
#line 97 "ml_lookup_switch.m"
                          ml_backend__mlds____Compare____statement_0_0(&ml_backend__ml_lookup_switch__V_20_20, ml_backend__ml_lookup_switch__V_8_8, ml_backend__ml_lookup_switch__V_14_14);
                        }
#line 3795 "ml_backend.ml_lookup_switch.c"
                        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_20_20 == (MR_Integer) 0);
#line 97 "ml_lookup_switch.m"
                        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 97 "ml_lookup_switch.m"
                        if (ml_backend__ml_lookup_switch__succeeded)
#line 97 "ml_lookup_switch.m"
                          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_20_20;
#line 97 "ml_lookup_switch.m"
                        else
#line 97 "ml_lookup_switch.m"
                          {
#line 97 "ml_lookup_switch.m"
                            {
#line 97 "ml_lookup_switch.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[5], ml_backend__ml_lookup_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_lookup_switch__V_9_9)), ((MR_Box) (ml_backend__ml_lookup_switch__V_15_15)));
                            }
#line 97 "ml_lookup_switch.m"
                          }
#line 97 "ml_lookup_switch.m"
                      }
#line 97 "ml_lookup_switch.m"
                  }
#line 97 "ml_lookup_switch.m"
              }
#line 97 "ml_lookup_switch.m"
          }
#line 97 "ml_lookup_switch.m"
      }
#line 97 "ml_lookup_switch.m"
  }
#line 97 "ml_lookup_switch.m"
}

#line 97 "ml_lookup_switch.m"
MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0(
#line 97 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 97 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2)
#line 97 "ml_lookup_switch.m"
{
#line 97 "ml_lookup_switch.m"
  {
#line 97 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 97 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_15 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__1_1;
#line 97 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_16 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;

#line 97 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_15 == ml_backend__ml_lookup_switch__CastY_16);
#line 97 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 97 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 97 "ml_lookup_switch.m"
    else
#line 97 "ml_lookup_switch.m"
      {
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_22_22;
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 4)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 5)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 97 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 5)));

#line 3884 "ml_backend.ml_lookup_switch.c"
        {
#line 3886 "ml_backend.ml_lookup_switch.c"
          ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_3_3, ml_backend__ml_lookup_switch__V_9_9);
        }
#line 97 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 97 "ml_lookup_switch.m"
          {
#line 3893 "ml_backend.ml_lookup_switch.c"
            {
#line 3895 "ml_backend.ml_lookup_switch.c"
              ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_4_4, ml_backend__ml_lookup_switch__V_10_10);
            }
#line 97 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 97 "ml_lookup_switch.m"
              {
#line 3902 "ml_backend.ml_lookup_switch.c"
                {
#line 3904 "ml_backend.ml_lookup_switch.c"
                  ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_5_5, ml_backend__ml_lookup_switch__V_11_11);
                }
#line 97 "ml_lookup_switch.m"
                if (ml_backend__ml_lookup_switch__succeeded)
#line 97 "ml_lookup_switch.m"
                  {
#line 3911 "ml_backend.ml_lookup_switch.c"
                    {
#line 3913 "ml_backend.ml_lookup_switch.c"
                      ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____statement_0_0(ml_backend__ml_lookup_switch__V_6_6, ml_backend__ml_lookup_switch__V_12_12);
                    }
#line 97 "ml_lookup_switch.m"
                    if (ml_backend__ml_lookup_switch__succeeded)
#line 97 "ml_lookup_switch.m"
                      {
#line 3920 "ml_backend.ml_lookup_switch.c"
                        {
#line 3922 "ml_backend.ml_lookup_switch.c"
                          ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____statement_0_0(ml_backend__ml_lookup_switch__V_7_7, ml_backend__ml_lookup_switch__V_13_13);
                        }
#line 97 "ml_lookup_switch.m"
                        if (ml_backend__ml_lookup_switch__succeeded)
#line 97 "ml_lookup_switch.m"
                          {
#line 3929 "ml_backend.ml_lookup_switch.c"
                            ml_backend__ml_lookup_switch__TypeInfo_22_22 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[5];
#line 3931 "ml_backend.ml_lookup_switch.c"
                            {
#line 3933 "ml_backend.ml_lookup_switch.c"
                              ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_22_22, ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)), ((MR_Box) (ml_backend__ml_lookup_switch__V_14_14)));
                            }
#line 97 "ml_lookup_switch.m"
                          }
#line 97 "ml_lookup_switch.m"
                      }
#line 97 "ml_lookup_switch.m"
                  }
#line 97 "ml_lookup_switch.m"
              }
#line 97 "ml_lookup_switch.m"
          }
#line 97 "ml_lookup_switch.m"
      }
#line 97 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 97 "ml_lookup_switch.m"
  }
#line 97 "ml_lookup_switch.m"
}

#line 42 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0(
#line 42 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 42 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 42 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3)
#line 42 "ml_lookup_switch.m"
{
#line 42 "ml_lookup_switch.m"
  {
#line 42 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 42 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_12 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;
#line 42 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_13 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__3_3;

#line 42 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_12 == ml_backend__ml_lookup_switch__CastY_13);
#line 42 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 3979 "ml_backend.ml_lookup_switch.c"
      *ml_backend__ml_lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "ml_lookup_switch.m"
    else
#line 42 "ml_lookup_switch.m"
      {
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_10_10;

#line 42 "ml_lookup_switch.m"
        {
#line 42 "ml_lookup_switch.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_2[0], &ml_backend__ml_lookup_switch__V_10_10, ((MR_Box) (ml_backend__ml_lookup_switch__V_4_4)), ((MR_Box) (ml_backend__ml_lookup_switch__V_7_7)));
        }
#line 4005 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_10_10 == (MR_Integer) 0);
#line 42 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 42 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 42 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_10_10;
#line 42 "ml_lookup_switch.m"
        else
#line 42 "ml_lookup_switch.m"
          {
#line 42 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_11_11;

#line 42 "ml_lookup_switch.m"
            {
#line 42 "ml_lookup_switch.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[3], &ml_backend__ml_lookup_switch__V_11_11, ((MR_Box) (ml_backend__ml_lookup_switch__V_5_5)), ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)));
            }
#line 4025 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_11_11 == (MR_Integer) 0);
#line 42 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 42 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 42 "ml_lookup_switch.m"
              *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_11_11;
#line 42 "ml_lookup_switch.m"
            else
#line 42 "ml_lookup_switch.m"
              {
#line 42 "ml_lookup_switch.m"
                {
#line 42 "ml_lookup_switch.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[4], ml_backend__ml_lookup_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_lookup_switch__V_6_6)), ((MR_Box) (ml_backend__ml_lookup_switch__V_9_9)));
                }
#line 42 "ml_lookup_switch.m"
              }
#line 42 "ml_lookup_switch.m"
          }
#line 42 "ml_lookup_switch.m"
      }
#line 42 "ml_lookup_switch.m"
  }
#line 42 "ml_lookup_switch.m"
}

#line 42 "ml_lookup_switch.m"
MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0(
#line 42 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 42 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2)
#line 42 "ml_lookup_switch.m"
{
#line 42 "ml_lookup_switch.m"
  {
#line 42 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 42 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_9 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__1_1;
#line 42 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_10 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;

#line 42 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_9 == ml_backend__ml_lookup_switch__CastY_10);
#line 42 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 42 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 42 "ml_lookup_switch.m"
    else
#line 42 "ml_lookup_switch.m"
      {
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_12_12;
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_13_13;
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 42 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));

#line 4098 "ml_backend.ml_lookup_switch.c"
        {
#line 4100 "ml_backend.ml_lookup_switch.c"
          ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_2[0], ((MR_Box) (ml_backend__ml_lookup_switch__V_3_3)), ((MR_Box) (ml_backend__ml_lookup_switch__V_6_6)));
        }
#line 42 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 42 "ml_lookup_switch.m"
          {
#line 4107 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__TypeInfo_12_12 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[3];
#line 4109 "ml_backend.ml_lookup_switch.c"
            {
#line 4111 "ml_backend.ml_lookup_switch.c"
              ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_12_12, ((MR_Box) (ml_backend__ml_lookup_switch__V_4_4)), ((MR_Box) (ml_backend__ml_lookup_switch__V_7_7)));
            }
#line 42 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 42 "ml_lookup_switch.m"
              {
#line 4118 "ml_backend.ml_lookup_switch.c"
                ml_backend__ml_lookup_switch__TypeInfo_13_13 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[4];
#line 4120 "ml_backend.ml_lookup_switch.c"
                {
#line 4122 "ml_backend.ml_lookup_switch.c"
                  ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_13_13, ((MR_Box) (ml_backend__ml_lookup_switch__V_5_5)), ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)));
                }
#line 42 "ml_lookup_switch.m"
              }
#line 42 "ml_lookup_switch.m"
          }
#line 42 "ml_lookup_switch.m"
      }
#line 42 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 42 "ml_lookup_switch.m"
  }
#line 42 "ml_lookup_switch.m"
}

#line 811 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2(
#line 811 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 811 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 811 "ml_lookup_switch.m"
{
#line 811 "ml_lookup_switch.m"
  {
#line 811 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 811 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 811 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

#line 811 "ml_lookup_switch.m"
    {
#line 811 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 811 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
#line 811 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 811 "ml_lookup_switch.m"
  }
#line 811 "ml_lookup_switch.m"
}

#line 810 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1(
#line 810 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 810 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 810 "ml_lookup_switch.m"
{
#line 810 "ml_lookup_switch.m"
  {
#line 810 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 810 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 810 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_DefaultRval_4;

#line 810 "ml_lookup_switch.m"
    {
#line 810 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_DefaultRval_4 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 810 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_DefaultRval_4));
#line 810 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 810 "ml_lookup_switch.m"
  }
#line 810 "ml_lookup_switch.m"
}

#line 805 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(
#line 805 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_5,
#line 805 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_6,
#line 805 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14,
#line 805 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15)
#line 805 "ml_lookup_switch.m"
{
#line 809 "ml_lookup_switch.m"
  {
#line 809 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 809 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_23_23 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 809 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldRvals_8;
#line 809 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_9;
#line 809 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10;
#line 809 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11;
#line 809 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12;
#line 809 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13;
#line 809 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_20_20;

#line 810 "ml_lookup_switch.m"
    {
#line 810 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FieldRvals_8 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_lookup_switch__TypeCtorInfo_23_23, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[1], ml_backend__ml_lookup_switch__FieldTypes_6);
    }
#line 811 "ml_lookup_switch.m"
    {
#line 811 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FieldInitializers_9 = mercury__list__map_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_23_23, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[2], ml_backend__ml_lookup_switch__FieldRvals_8);
    }
#line 812 "ml_lookup_switch.m"
    {
#line 812 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
    }
#line 813 "ml_lookup_switch.m"
    {
#line 813 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
    }
#line 816 "ml_lookup_switch.m"
    {
#line 816 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_20_20, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11));
#line 816 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_20_20, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_9));
#line 816 "ml_lookup_switch.m"
    }
#line 815 "ml_lookup_switch.m"
    {
#line 815 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10));
#line 815 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_20_20));
#line 815 "ml_lookup_switch.m"
    }
#line 817 "ml_lookup_switch.m"
    {
#line 817 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_5));
#line 817 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12));
#line 817 "ml_lookup_switch.m"
    }
#line 819 "ml_lookup_switch.m"
    {
#line 819 "ml_lookup_switch.m"
      MR_Word base;
#line 819 "ml_lookup_switch.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15 = base;
#line 819 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13));
#line 819 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14));
#line 819 "ml_lookup_switch.m"
    }
#line 809 "ml_lookup_switch.m"
  }
#line 805 "ml_lookup_switch.m"
}

#line 682 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(
#line 682 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 682 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Count_2,
#line 682 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 682 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__4_4)
#line 682 "ml_lookup_switch.m"
{
#line 685 "ml_lookup_switch.m"
  {
#line 685 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 685 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "ml_lookup_switch.m"
      {
#line 685 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 685 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 685 "ml_lookup_switch.m"
      }
#line 685 "ml_lookup_switch.m"
    else
#line 687 "ml_lookup_switch.m"
      {
#line 687 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__WordNum_7;
#line 687 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__Bits_8;
#line 687 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 687 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rval_11;
#line 687 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rvals_12;
#line 687 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Initializer_13;
#line 687 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Initializers_14;
#line 687 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__WordVal_15;
#line 687 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Remainder_16;
#line 687 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 687 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_18_18;
#line 687 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__V_19_19;

#line 686 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__WordNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_17_17, (MR_Integer) 0)));
#line 686 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__Bits_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_17_17, (MR_Integer) 1)));
#line 688 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__Count_2 < ml_backend__ml_lookup_switch__WordNum_7);
#line 688 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 689 "ml_lookup_switch.m"
          {
#line 689 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__WordVal_15 = (MR_Integer) 0;
#line 690 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Remainder_16 = ml_backend__ml_lookup_switch__HeadVar__1_1;
#line 689 "ml_lookup_switch.m"
          }
#line 688 "ml_lookup_switch.m"
        else
#line 692 "ml_lookup_switch.m"
          {
#line 692 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__WordVal_15 = ml_backend__ml_lookup_switch__Bits_8;
#line 693 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Remainder_16 = ml_backend__ml_lookup_switch__Rest_9;
#line 692 "ml_lookup_switch.m"
          }
#line 695 "ml_lookup_switch.m"
        {
#line 695 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 695 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_18_18, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__WordVal_15));
#line 695 "ml_lookup_switch.m"
        }
#line 695 "ml_lookup_switch.m"
        {
#line 695 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 695 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Rval_11, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_18_18));
#line 695 "ml_lookup_switch.m"
        }
#line 696 "ml_lookup_switch.m"
        {
#line 696 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__Initializer_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 696 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Initializer_13, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Rval_11));
#line 696 "ml_lookup_switch.m"
        }
#line 697 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_19_19 = (ml_backend__ml_lookup_switch__Count_2 + (MR_Integer) 1);
#line 697 "ml_lookup_switch.m"
        {
#line 697 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(ml_backend__ml_lookup_switch__Remainder_16, ml_backend__ml_lookup_switch__V_19_19, &ml_backend__ml_lookup_switch__Rvals_12, &ml_backend__ml_lookup_switch__Initializers_14);
        }
#line 687 "ml_lookup_switch.m"
        {
#line 687 "ml_lookup_switch.m"
          MR_Word base;
#line 687 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__3_3 = base;
#line 687 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Rval_11));
#line 687 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__Rvals_12));
#line 687 "ml_lookup_switch.m"
        }
#line 687 "ml_lookup_switch.m"
        {
#line 687 "ml_lookup_switch.m"
          MR_Word base;
#line 687 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__4_4 = base;
#line 687 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Initializer_13));
#line 687 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__Initializers_14));
#line 687 "ml_lookup_switch.m"
        }
#line 687 "ml_lookup_switch.m"
      }
#line 685 "ml_lookup_switch.m"
  }
#line 682 "ml_lookup_switch.m"
}

#line 459 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2(
#line 459 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 459 "ml_lookup_switch.m"
{
#line 459 "ml_lookup_switch.m"
  {
#line 459 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 459 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 459 "ml_lookup_switch.m"
    {
#line 459 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__459__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 459 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 459 "ml_lookup_switch.m"
  }
#line 459 "ml_lookup_switch.m"
}

#line 455 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1(
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
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__455__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 455 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 455 "ml_lookup_switch.m"
  }
#line 455 "ml_lookup_switch.m"
}

#line 404 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_13,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_14,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_15,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseSolns_16,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_17,
#line 404 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_18,
#line 404 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_19,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_20,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_21,
#line 404 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_22,
#line 404 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60,
#line 404 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_61)
#line 404 "ml_lookup_switch.m"
{
#line 412 "ml_lookup_switch.m"
  {
#line 412 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_88_88;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_24;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleName_25;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_26;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_Context_27;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Target_28;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_IntType_29;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData0_31;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_32;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_33;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData1_35;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_36;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_37;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_38;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData2_39;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_41;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_42;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_43;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_44;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_45;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializers_47;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializers_48;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnVectorCommon_49;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData3_50;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnVectorCommon_51;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData_52;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MatchDefns_53;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__InRangeStatements_54;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__InRangeStmt_55;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__InRangeStatement_56;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_62_62;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_70_70;
#line 412 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_72_72;

#line 413 "ml_lookup_switch.m"
    {
#line 413 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__ModuleInfo_24);
    }
#line 414 "ml_lookup_switch.m"
    {
#line 414 "ml_lookup_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_lookup_switch__ModuleInfo_24, &ml_backend__ml_lookup_switch__ModuleName_25);
    }
#line 415 "ml_lookup_switch.m"
    {
#line 415 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_ModuleName_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_lookup_switch__ModuleName_25);
    }
#line 416 "ml_lookup_switch.m"
    {
#line 416 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_Context_27 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_lookup_switch__Context_17);
    }
#line 417 "ml_lookup_switch.m"
    {
#line 417 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__Target_28);
    }
#line 419 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__MLDS_IntType_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 420 "ml_lookup_switch.m"
    {
#line 420 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_62_62, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_IntType_29));
#line 420 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_62_62, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OutTypes_15));
#line 420 "ml_lookup_switch.m"
    }
#line 420 "ml_lookup_switch.m"
    {
#line 420 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_IntType_29));
#line 420 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_62_62));
#line 420 "ml_lookup_switch.m"
    }
#line 422 "ml_lookup_switch.m"
    {
#line 422 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__GlobalData0_31);
    }
#line 423 "ml_lookup_switch.m"
    {
#line 423 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__MLDS_Context_27, ml_backend__ml_lookup_switch__Target_28, ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30, &ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_32, &ml_backend__ml_lookup_switch__FirstSolnStructType_33, &ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34, ml_backend__ml_lookup_switch__GlobalData0_31, &ml_backend__ml_lookup_switch__GlobalData1_35);
    }
#line 426 "ml_lookup_switch.m"
    {
#line 426 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__MLDS_Context_27, ml_backend__ml_lookup_switch__Target_28, ml_backend__ml_lookup_switch__OutTypes_15, &ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_36, &ml_backend__ml_lookup_switch__LaterSolnStructType_37, &ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_38, ml_backend__ml_lookup_switch__GlobalData1_35, &ml_backend__ml_lookup_switch__GlobalData2_39);
    }
#line 434 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "ml_lookup_switch.m"
      {
#line 433 "ml_lookup_switch.m"
        {
#line 433 "ml_lookup_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "not enough field_ids");
#line 433 "ml_lookup_switch.m"
          return;
        }
#line 432 "ml_lookup_switch.m"
      }
#line 434 "ml_lookup_switch.m"
    else
#line 434 "ml_lookup_switch.m"
      {
#line 434 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34, (MR_Integer) 1)));
#line 434 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34, (MR_Integer) 0)));

#line 434 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__V_97_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "ml_lookup_switch.m"
          {
#line 433 "ml_lookup_switch.m"
            {
#line 433 "ml_lookup_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "not enough field_ids");
#line 433 "ml_lookup_switch.m"
              return;
            }
#line 432 "ml_lookup_switch.m"
          }
#line 434 "ml_lookup_switch.m"
        else
#line 435 "ml_lookup_switch.m"
          {
#line 436 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_41 = ml_backend__ml_lookup_switch__V_98_98;
#line 437 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_97_97, (MR_Integer) 0)));
#line 437 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_97_97, (MR_Integer) 1)));
#line 435 "ml_lookup_switch.m"
          }
#line 434 "ml_lookup_switch.m"
      }
#line 4725 "ml_backend.ml_lookup_switch.c"
    ml_backend__ml_lookup_switch__TypeCtorInfo_88_88 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 442 "ml_lookup_switch.m"
    {
#line 442 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_70_70 = mercury__cord__init_0_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_88_88);
    }
#line 439 "ml_lookup_switch.m"
    {
#line 439 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(ml_backend__ml_lookup_switch__StartVal_18, ml_backend__ml_lookup_switch__EndVal_19, (MR_Integer) 0, ml_backend__ml_lookup_switch__CaseSolns_16, ml_backend__ml_lookup_switch__FirstSolnStructType_33, ml_backend__ml_lookup_switch__LaterSolnStructType_37, ml_backend__ml_lookup_switch__OutTypes_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_44, ml_backend__ml_lookup_switch__V_70_70, &ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_45, (MR_Integer) 0, &ml_backend__ml_lookup_switch__HadDummyRows_46);
    }
#line 443 "ml_lookup_switch.m"
    {
#line 443 "ml_lookup_switch.m"
      mercury__list__reverse_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_88_88, ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_44, &ml_backend__ml_lookup_switch__FirstSolnRowInitializers_47);
    }
#line 444 "ml_lookup_switch.m"
    {
#line 444 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSolnRowInitializers_48 = mercury__cord__list_1_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_88_88, ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_45);
    }
#line 445 "ml_lookup_switch.m"
    {
#line 445 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_32, ml_backend__ml_lookup_switch__FirstSolnRowInitializers_47, &ml_backend__ml_lookup_switch__FirstSolnVectorCommon_49, ml_backend__ml_lookup_switch__GlobalData2_39, &ml_backend__ml_lookup_switch__GlobalData3_50);
    }
#line 448 "ml_lookup_switch.m"
    {
#line 448 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_36, ml_backend__ml_lookup_switch__LaterSolnRowInitializers_48, &ml_backend__ml_lookup_switch__LaterSolnVectorCommon_51, ml_backend__ml_lookup_switch__GlobalData3_50, &ml_backend__ml_lookup_switch__GlobalData_52);
    }
#line 451 "ml_lookup_switch.m"
    {
#line 451 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_52, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_72_72);
    }
#line 457 "ml_lookup_switch.m"
#line 457 "ml_lookup_switch.m"
    switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_20) {
#line 457 "ml_lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 457 "ml_lookup_switch.m"
      case (MR_Integer) 1:
#line 454 "ml_lookup_switch.m"
        {
#line 454 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_78_78;

#line 455 "ml_lookup_switch.m"
          {
#line 455 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 455 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[5]));
#line 455 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1));
#line 455 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 455 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__HadDummyRows_46));
#line 455 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 4) = ((MR_Box) ((MR_Integer) 0));
#line 455 "ml_lookup_switch.m"
          }
#line 455 "ml_lookup_switch.m"
          {
#line 455 "ml_lookup_switch.m"
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_78_78, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "bad dont_need_bit_vec_check");
          }
#line 454 "ml_lookup_switch.m"
        }
#line 457 "ml_lookup_switch.m"
        break;
#line 457 "ml_lookup_switch.m"
      case (MR_Integer) 0:
#line 458 "ml_lookup_switch.m"
        {
#line 458 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_73_73;

#line 459 "ml_lookup_switch.m"
          {
#line 459 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 459 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[5]));
#line 459 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2));
#line 459 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 459 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__HadDummyRows_46));
#line 459 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 4) = ((MR_Box) ((MR_Integer) 1));
#line 459 "ml_lookup_switch.m"
          }
#line 459 "ml_lookup_switch.m"
          {
#line 459 "ml_lookup_switch.m"
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_73_73, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "bad need_bit_vec_check");
          }
#line 458 "ml_lookup_switch.m"
        }
#line 457 "ml_lookup_switch.m"
        break;
#line 457 "ml_lookup_switch.m"
    }
#line 463 "ml_lookup_switch.m"
    {
#line 463 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_18_p_0(ml_backend__ml_lookup_switch__Context_17, ml_backend__ml_lookup_switch__MLDS_Context_27, ml_backend__ml_lookup_switch__IndexRval_13, ml_backend__ml_lookup_switch__OutVars_14, ml_backend__ml_lookup_switch__OutTypes_15, ml_backend__ml_lookup_switch__FirstSolnStructType_33, ml_backend__ml_lookup_switch__LaterSolnStructType_37, ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_41, ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_42, ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_43, ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_38, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_49, ml_backend__ml_lookup_switch__LaterSolnVectorCommon_51, ml_backend__ml_lookup_switch__NeedBitVecCheck_20, &ml_backend__ml_lookup_switch__MatchDefns_53, &ml_backend__ml_lookup_switch__InRangeStatements_54, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_72_72, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_61);
    }
#line 469 "ml_lookup_switch.m"
    {
#line 469 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__InRangeStmt_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStmt_55, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MatchDefns_53));
#line 469 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStmt_55, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStatements_54));
#line 469 "ml_lookup_switch.m"
    }
#line 470 "ml_lookup_switch.m"
    {
#line 470 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__InRangeStatement_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 470 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStatement_56, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStmt_55));
#line 470 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStatement_56, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 470 "ml_lookup_switch.m"
    }
#line 475 "ml_lookup_switch.m"
#line 475 "ml_lookup_switch.m"
    switch (ml_backend__ml_lookup_switch__NeedRangeCheck_21) {
#line 475 "ml_lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 475 "ml_lookup_switch.m"
      case (MR_Integer) 1:
#line 473 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__Statement_22 = ml_backend__ml_lookup_switch__InRangeStatement_56;
#line 475 "ml_lookup_switch.m"
        break;
#line 475 "ml_lookup_switch.m"
      case (MR_Integer) 0:
#line 476 "ml_lookup_switch.m"
        {
#line 476 "ml_lookup_switch.m"
          MR_Integer ml_backend__ml_lookup_switch__Difference_57 = (ml_backend__ml_lookup_switch__EndVal_19 - ml_backend__ml_lookup_switch__StartVal_18);
#line 476 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__RangeCheckCond_58;
#line 476 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__Stmt_59;
#line 476 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_85_85;
#line 476 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_86_86;

#line 480 "ml_lookup_switch.m"
          {
#line 480 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_86_86, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Difference_57));
#line 480 "ml_lookup_switch.m"
          }
#line 480 "ml_lookup_switch.m"
          {
#line 480 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 480 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_85_85, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_86_86));
#line 480 "ml_lookup_switch.m"
          }
#line 479 "ml_lookup_switch.m"
          {
#line 479 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__RangeCheckCond_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 479 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 479 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))));
#line 479 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_13));
#line 479 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_85_85));
#line 479 "ml_lookup_switch.m"
          }
#line 482 "ml_lookup_switch.m"
          {
#line 482 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Stmt_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 482 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_59, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckCond_58));
#line 482 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_59, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStatement_56));
#line 482 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_59, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "ml_lookup_switch.m"
          }
#line 483 "ml_lookup_switch.m"
          {
#line 483 "ml_lookup_switch.m"
            MR_Word base;
#line 483 "ml_lookup_switch.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__Statement_22 = base;
#line 483 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_59));
#line 483 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 483 "ml_lookup_switch.m"
          }
#line 476 "ml_lookup_switch.m"
        }
#line 475 "ml_lookup_switch.m"
        break;
#line 475 "ml_lookup_switch.m"
    }
#line 412 "ml_lookup_switch.m"
  }
#line 404 "ml_lookup_switch.m"
}

#line 339 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_2(
#line 339 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 339 "ml_lookup_switch.m"
{
#line 339 "ml_lookup_switch.m"
  {
#line 339 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 339 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 339 "ml_lookup_switch.m"
    {
#line 339 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__339__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 339 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 339 "ml_lookup_switch.m"
  }
#line 339 "ml_lookup_switch.m"
}

#line 337 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1(
#line 337 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 337 "ml_lookup_switch.m"
{
#line 337 "ml_lookup_switch.m"
  {
#line 337 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 337 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 337 "ml_lookup_switch.m"
    {
#line 337 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__337__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 337 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 337 "ml_lookup_switch.m"
  }
#line 337 "ml_lookup_switch.m"
}

#line 293 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_14,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_15,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_16,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseValues_17,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_18,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_19,
#line 293 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_20,
#line 293 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_21,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 293 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_24,
#line 293 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52,
#line 293 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53)
#line 293 "ml_lookup_switch.m"
{
#line 301 "ml_lookup_switch.m"
  {
#line 301 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 301 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_26;
#line 301 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleName_27;
#line 301 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_28;
#line 301 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_Context_29;
#line 301 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Target_30;
#line 301 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LookupStatements_31;
#line 301 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;

#line 302 "ml_lookup_switch.m"
    {
#line 302 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__ModuleInfo_26);
    }
#line 303 "ml_lookup_switch.m"
    {
#line 303 "ml_lookup_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_lookup_switch__ModuleInfo_26, &ml_backend__ml_lookup_switch__ModuleName_27);
    }
#line 304 "ml_lookup_switch.m"
    {
#line 304 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_lookup_switch__ModuleName_27);
    }
#line 305 "ml_lookup_switch.m"
    {
#line 305 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_Context_29 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_lookup_switch__Context_19);
    }
#line 306 "ml_lookup_switch.m"
    {
#line 306 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__Target_30);
    }
#line 317 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__OutTypes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "ml_lookup_switch.m"
      {
#line 316 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__LookupStatements_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52;
#line 309 "ml_lookup_switch.m"
      }
#line 317 "ml_lookup_switch.m"
    else
#line 318 "ml_lookup_switch.m"
      {
#line 318 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__GlobalData0_34;
#line 318 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__StructTypeNum_35;
#line 318 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__StructType_36;
#line 318 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__FieldIds_37;
#line 318 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__GlobalData1_38;
#line 318 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RowInitializers_39;
#line 318 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__VectorCommon_40;
#line 318 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__GlobalData_41;
#line 318 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54;

#line 319 "ml_lookup_switch.m"
        {
#line 319 "ml_lookup_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__GlobalData0_34);
        }
#line 320 "ml_lookup_switch.m"
        {
#line 320 "ml_lookup_switch.m"
          ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__MLDS_Context_29, ml_backend__ml_lookup_switch__Target_30, ml_backend__ml_lookup_switch__OutTypes_16, &ml_backend__ml_lookup_switch__StructTypeNum_35, &ml_backend__ml_lookup_switch__StructType_36, &ml_backend__ml_lookup_switch__FieldIds_37, ml_backend__ml_lookup_switch__GlobalData0_34, &ml_backend__ml_lookup_switch__GlobalData1_38);
        }
#line 324 "ml_lookup_switch.m"
        {
#line 324 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(ml_backend__ml_lookup_switch__StructType_36, ml_backend__ml_lookup_switch__OutTypes_16, ml_backend__ml_lookup_switch__StartVal_20, ml_backend__ml_lookup_switch__CaseValues_17, &ml_backend__ml_lookup_switch__RowInitializers_39);
        }
#line 327 "ml_lookup_switch.m"
        {
#line 327 "ml_lookup_switch.m"
          ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__StructTypeNum_35, ml_backend__ml_lookup_switch__RowInitializers_39, &ml_backend__ml_lookup_switch__VectorCommon_40, ml_backend__ml_lookup_switch__GlobalData1_38, &ml_backend__ml_lookup_switch__GlobalData_41);
        }
#line 329 "ml_lookup_switch.m"
        {
#line 329 "ml_lookup_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_41, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54);
        }
#line 331 "ml_lookup_switch.m"
        {
#line 331 "ml_lookup_switch.m"
          ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_15, ml_backend__ml_lookup_switch__OutTypes_16, ml_backend__ml_lookup_switch__FieldIds_37, ml_backend__ml_lookup_switch__VectorCommon_40, ml_backend__ml_lookup_switch__StructType_36, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__MLDS_Context_29, &ml_backend__ml_lookup_switch__LookupStatements_31, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55);
        }
#line 318 "ml_lookup_switch.m"
      }
#line 343 "ml_lookup_switch.m"
#line 343 "ml_lookup_switch.m"
    switch (ml_backend__ml_lookup_switch__CodeModel_18) {
#line 343 "ml_lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 343 "ml_lookup_switch.m"
      case (MR_Integer) 0:
#line 336 "ml_lookup_switch.m"
        {
#line 336 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__Stmt_42;
#line 336 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_77_77;
#line 336 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_82_82;

#line 337 "ml_lookup_switch.m"
          {
#line 337 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 337 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[3]));
#line 337 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1));
#line 337 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 337 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NeedRangeCheck_23));
#line 337 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 4) = ((MR_Box) ((MR_Integer) 1));
#line 337 "ml_lookup_switch.m"
          }
#line 337 "ml_lookup_switch.m"
          {
#line 337 "ml_lookup_switch.m"
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_77_77, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_det need_range_check");
          }
#line 339 "ml_lookup_switch.m"
          {
#line 339 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 339 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[4]));
#line 339 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_2));
#line 339 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NeedBitVecCheck_22));
#line 339 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 4) = ((MR_Box) ((MR_Integer) 1));
#line 339 "ml_lookup_switch.m"
          }
#line 339 "ml_lookup_switch.m"
          {
#line 339 "ml_lookup_switch.m"
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_82_82, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_det need_bit_vec_check");
          }
#line 341 "ml_lookup_switch.m"
          {
#line 341 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Stmt_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 341 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Stmt_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 341 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Stmt_42, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupStatements_31));
#line 341 "ml_lookup_switch.m"
          }
#line 342 "ml_lookup_switch.m"
          {
#line 342 "ml_lookup_switch.m"
            MR_Word base;
#line 342 "ml_lookup_switch.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 342 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__Statement_24 = base;
#line 342 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_42));
#line 342 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 342 "ml_lookup_switch.m"
          }
#line 336 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
#line 336 "ml_lookup_switch.m"
        }
#line 343 "ml_lookup_switch.m"
        break;
#line 343 "ml_lookup_switch.m"
      case (MR_Integer) 2:
#line 396 "ml_lookup_switch.m"
        {
#line 399 "ml_lookup_switch.m"
          {
#line 399 "ml_lookup_switch.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_non");
#line 399 "ml_lookup_switch.m"
            return;
          }
#line 396 "ml_lookup_switch.m"
        }
#line 343 "ml_lookup_switch.m"
        break;
#line 343 "ml_lookup_switch.m"
      case (MR_Integer) 1:
#line 344 "ml_lookup_switch.m"
        {
#line 344 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43;
#line 344 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__LookupSucceedStmt_44;
#line 344 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
#line 344 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_62_62;
#line 344 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_63_63;

#line 345 "ml_lookup_switch.m"
          {
#line 345 "ml_lookup_switch.m"
            ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[13]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43);
          }
#line 348 "ml_lookup_switch.m"
          {
#line 348 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_63_63, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43));
#line 348 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 348 "ml_lookup_switch.m"
          }
#line 348 "ml_lookup_switch.m"
          {
#line 348 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_62_62 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_lookup_switch__LookupStatements_31, ml_backend__ml_lookup_switch__V_63_63);
          }
#line 347 "ml_lookup_switch.m"
          {
#line 347 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__LookupSucceedStmt_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 347 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStmt_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStmt_44, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_62_62));
#line 347 "ml_lookup_switch.m"
          }
#line 349 "ml_lookup_switch.m"
          {
#line 349 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__LookupSucceedStatement_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStatement_45, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStmt_44));
#line 349 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStatement_45, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 349 "ml_lookup_switch.m"
          }
#line 367 "ml_lookup_switch.m"
#line 367 "ml_lookup_switch.m"
          switch (ml_backend__ml_lookup_switch__NeedRangeCheck_23) {
#line 367 "ml_lookup_switch.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 367 "ml_lookup_switch.m"
            case (MR_Integer) 1:
#line 355 "ml_lookup_switch.m"
#line 355 "ml_lookup_switch.m"
              switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_22) {
#line 355 "ml_lookup_switch.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 355 "ml_lookup_switch.m"
                case (MR_Integer) 1:
#line 353 "ml_lookup_switch.m"
                  {
#line 354 "ml_lookup_switch.m"
                    *ml_backend__ml_lookup_switch__Statement_24 = ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
#line 353 "ml_lookup_switch.m"
                    *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
#line 353 "ml_lookup_switch.m"
                  }
#line 355 "ml_lookup_switch.m"
                  break;
#line 355 "ml_lookup_switch.m"
                case (MR_Integer) 0:
#line 356 "ml_lookup_switch.m"
                  {
#line 356 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__BitVecCheckCond_46;
#line 356 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47;
#line 356 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_76_76;
#line 356 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__Stmt_88;

#line 357 "ml_lookup_switch.m"
                    {
#line 357 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__Context_19, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__CaseValues_17, ml_backend__ml_lookup_switch__StartVal_20, &ml_backend__ml_lookup_switch__BitVecCheckCond_46, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);
                    }
#line 360 "ml_lookup_switch.m"
                    {
#line 360 "ml_lookup_switch.m"
                      ml_backend__ml_code_util__ml_gen_set_success_4_p_0(*ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[8]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47);
                    }
#line 364 "ml_lookup_switch.m"
                    {
#line 364 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 364 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_76_76, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47));
#line 364 "ml_lookup_switch.m"
                    }
#line 363 "ml_lookup_switch.m"
                    {
#line 363 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__Stmt_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 363 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecCheckCond_46));
#line 363 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStatement_45));
#line 363 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_76_76));
#line 363 "ml_lookup_switch.m"
                    }
#line 365 "ml_lookup_switch.m"
                    {
#line 365 "ml_lookup_switch.m"
                      MR_Word base;
#line 365 "ml_lookup_switch.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "ml_lookup_switch.m"
                      *ml_backend__ml_lookup_switch__Statement_24 = base;
#line 365 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_88));
#line 365 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 365 "ml_lookup_switch.m"
                    }
#line 356 "ml_lookup_switch.m"
                  }
#line 355 "ml_lookup_switch.m"
                  break;
#line 355 "ml_lookup_switch.m"
              }
#line 367 "ml_lookup_switch.m"
              break;
#line 367 "ml_lookup_switch.m"
            case (MR_Integer) 0:
#line 368 "ml_lookup_switch.m"
              {
#line 368 "ml_lookup_switch.m"
                MR_Integer ml_backend__ml_lookup_switch__Difference_48 = (ml_backend__ml_lookup_switch__EndVal_21 - ml_backend__ml_lookup_switch__StartVal_20);
#line 368 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__RangeCheckCond_49;
#line 368 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50;
#line 368 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_66_66;
#line 368 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_67_67;
#line 368 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_72_72;
#line 368 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__Stmt_93;
#line 368 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95;

#line 371 "ml_lookup_switch.m"
                {
#line 371 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_67_67, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Difference_48));
#line 371 "ml_lookup_switch.m"
                }
#line 371 "ml_lookup_switch.m"
                {
#line 371 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 371 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_66_66, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_67_67));
#line 371 "ml_lookup_switch.m"
                }
#line 370 "ml_lookup_switch.m"
                {
#line 370 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__RangeCheckCond_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 370 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 370 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))));
#line 370 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_14));
#line 370 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_66_66));
#line 370 "ml_lookup_switch.m"
                }
#line 372 "ml_lookup_switch.m"
                {
#line 372 "ml_lookup_switch.m"
                  ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[8]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95);
                }
#line 377 "ml_lookup_switch.m"
#line 377 "ml_lookup_switch.m"
                switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_22) {
#line 377 "ml_lookup_switch.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 377 "ml_lookup_switch.m"
                  case (MR_Integer) 1:
#line 375 "ml_lookup_switch.m"
                    {
#line 376 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50 = ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
#line 375 "ml_lookup_switch.m"
                      *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
#line 375 "ml_lookup_switch.m"
                    }
#line 377 "ml_lookup_switch.m"
                    break;
#line 377 "ml_lookup_switch.m"
                  case (MR_Integer) 0:
#line 378 "ml_lookup_switch.m"
                    {
#line 378 "ml_lookup_switch.m"
                      MR_Word ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51;
#line 378 "ml_lookup_switch.m"
                      MR_Word ml_backend__ml_lookup_switch__V_71_71;
#line 378 "ml_lookup_switch.m"
                      MR_Word ml_backend__ml_lookup_switch__BitVecCheckCond_91;

#line 379 "ml_lookup_switch.m"
                      {
#line 379 "ml_lookup_switch.m"
                        ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__Context_19, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__CaseValues_17, ml_backend__ml_lookup_switch__StartVal_20, &ml_backend__ml_lookup_switch__BitVecCheckCond_91, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);
                      }
#line 383 "ml_lookup_switch.m"
                      {
#line 383 "ml_lookup_switch.m"
                        ml_backend__ml_lookup_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 383 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_71_71, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95));
#line 383 "ml_lookup_switch.m"
                      }
#line 382 "ml_lookup_switch.m"
                      {
#line 382 "ml_lookup_switch.m"
                        ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 382 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecCheckCond_91));
#line 382 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStatement_45));
#line 382 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_71_71));
#line 382 "ml_lookup_switch.m"
                      }
#line 384 "ml_lookup_switch.m"
                      {
#line 384 "ml_lookup_switch.m"
                        ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51));
#line 384 "ml_lookup_switch.m"
                        MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 384 "ml_lookup_switch.m"
                      }
#line 378 "ml_lookup_switch.m"
                    }
#line 377 "ml_lookup_switch.m"
                    break;
#line 377 "ml_lookup_switch.m"
                }
#line 392 "ml_lookup_switch.m"
                {
#line 392 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 392 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95));
#line 392 "ml_lookup_switch.m"
                }
#line 391 "ml_lookup_switch.m"
                {
#line 391 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__Stmt_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 391 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckCond_49));
#line 391 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50));
#line 391 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_72_72));
#line 391 "ml_lookup_switch.m"
                }
#line 393 "ml_lookup_switch.m"
                {
#line 393 "ml_lookup_switch.m"
                  MR_Word base;
#line 393 "ml_lookup_switch.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "ml_lookup_switch.m"
                  *ml_backend__ml_lookup_switch__Statement_24 = base;
#line 393 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_93));
#line 393 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 393 "ml_lookup_switch.m"
                }
#line 368 "ml_lookup_switch.m"
              }
#line 367 "ml_lookup_switch.m"
              break;
#line 367 "ml_lookup_switch.m"
          }
#line 344 "ml_lookup_switch.m"
        }
#line 343 "ml_lookup_switch.m"
        break;
#line 343 "ml_lookup_switch.m"
    }
#line 301 "ml_lookup_switch.m"
  }
#line 293 "ml_lookup_switch.m"
}

#line 246 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_16,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_17,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GetTag_6,
#line 246 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__SolnConsts_7,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 246 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 246 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14)
#line 246 "ml_lookup_switch.m"
{
#line 251 "ml_lookup_switch.m"
  {
#line 251 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 251 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
#line 251 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__Index_12;
#line 252 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 0)));
#line 253 "ml_lookup_switch.m"
    void MR_CALL (* ml_backend__ml_lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__GetTag_6, (MR_Integer) 1)));

#line 253 "ml_lookup_switch.m"
    {
#line 253 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__func_0(((MR_Box) ml_backend__ml_lookup_switch__GetTag_6), ((MR_Box) (ml_backend__ml_lookup_switch__ConsTag_11)), &ml_backend__ml_lookup_switch__Index_12);
    }
#line 254 "ml_lookup_switch.m"
    {
#line 254 "ml_lookup_switch.m"
      mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_16, ml_backend__ml_lookup_switch__TypeInfo_for_V_17, ml_backend__ml_lookup_switch__Index_12, ml_backend__ml_lookup_switch__SolnConsts_7, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);
    }
#line 251 "ml_lookup_switch.m"
  }
#line 246 "ml_lookup_switch.m"
}

#line 241 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1(
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 241 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 241 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 241 "ml_lookup_switch.m"
{
#line 241 "ml_lookup_switch.m"
  {
#line 241 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 241 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14;

#line 241 "ml_lookup_switch.m"
    {
#line 241 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 5))), (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 6)), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), &ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14);
    }
#line 241 "ml_lookup_switch.m"
    *ml_backend__ml_lookup_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14));
#line 241 "ml_lookup_switch.m"
  }
#line 241 "ml_lookup_switch.m"
}

#line 227 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_Key_34,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_35,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6)
#line 227 "ml_lookup_switch.m"
{
#line 232 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 232 "ml_lookup_switch.m"
    {
#line 232 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 232 "ml_lookup_switch.m"
      {
#line 232 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 232 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "ml_lookup_switch.m"
          {
#line 233 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5;
#line 233 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3;
#line 232 "ml_lookup_switch.m"
          }
#line 232 "ml_lookup_switch.m"
        else
#line 235 "ml_lookup_switch.m"
          {
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TypeInfo_42_42;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedMainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 0)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedOtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 1)));
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__CaseId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 2)));
#line 235 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__SolnConsts_23;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_30_30;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;
#line 235 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__ConsTag_50;
#line 235 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__Index_51;
#line 236 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 3)));
#line 252 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___ConsId_49;
#line 253 "ml_lookup_switch.m"
            void MR_CALL (* ml_backend__ml_lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *);
#line 241 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31;

#line 238 "ml_lookup_switch.m"
            {
#line 238 "ml_lookup_switch.m"
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_35, ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_21)), &ml_backend__ml_lookup_switch__SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28);
            }
#line 252 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch___ConsId_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 0)));
#line 252 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__ConsTag_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 1)));
#line 253 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 253 "ml_lookup_switch.m"
            {
#line 253 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__func_0(((MR_Box) ml_backend__ml_lookup_switch__HeadVar__1_1), ((MR_Box) (ml_backend__ml_lookup_switch__ConsTag_50)), &ml_backend__ml_lookup_switch__Index_51);
            }
#line 254 "ml_lookup_switch.m"
            {
#line 254 "ml_lookup_switch.m"
              mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_Key_34, ml_backend__ml_lookup_switch__TypeInfo_for_V_35, ml_backend__ml_lookup_switch__Index_51, ml_backend__ml_lookup_switch__SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29);
            }
#line 241 "ml_lookup_switch.m"
            {
#line 241 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_8[0]));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_Key_34));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_35));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 5) = ((MR_Box) (ml_backend__ml_lookup_switch__HeadVar__1_1));
#line 241 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 6) = ml_backend__ml_lookup_switch__SolnConsts_23;
#line 241 "ml_lookup_switch.m"
            }
#line 5771 "ml_backend.ml_lookup_switch.c"
            {
#line 5773 "ml_backend.ml_lookup_switch.c"
              ml_backend__ml_lookup_switch__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5775 "ml_backend.ml_lookup_switch.c"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_42_42, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 5777 "ml_backend.ml_lookup_switch.c"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_42_42, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_Key_34));
#line 5779 "ml_backend.ml_lookup_switch.c"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_42_42, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_35));
#line 5781 "ml_backend.ml_lookup_switch.c"
            }
#line 241 "ml_lookup_switch.m"
            {
#line 241 "ml_lookup_switch.m"
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, ml_backend__ml_lookup_switch__TypeInfo_42_42, (MR_Word) ml_backend__ml_lookup_switch__V_30_30, ml_backend__ml_lookup_switch__TaggedOtherConsIds_20, ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29)), &ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            }
#line 241 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31 = ((MR_Word) ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
#line 243 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 243 "ml_lookup_switch.m"
            {
#line 243 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2 = ml_backend__ml_lookup_switch__TaggedCases_16;
#line 243 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
#line 243 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;

#line 243 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5;
#line 243 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3;
#line 243 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__2_2 = ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2;
#line 243 "ml_lookup_switch.m"
            }
#line 243 "ml_lookup_switch.m"
            continue;
#line 235 "ml_lookup_switch.m"
          }
#line 232 "ml_lookup_switch.m"
      }
#line 232 "ml_lookup_switch.m"
      break;
#line 232 "ml_lookup_switch.m"
    }
#line 227 "ml_lookup_switch.m"
}

#line 116 "ml_lookup_switch.m"
MR_Word MR_CALL 
ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(
#line 116 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_Type_3)
#line 116 "ml_lookup_switch.m"
{
#line 824 "ml_lookup_switch.m"
  {
#line 824 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 824 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__DefaultRval_4;

#line 824 "ml_lookup_switch.m"
#line 824 "ml_lookup_switch.m"
    switch (MR_tag((MR_Word) ml_backend__ml_lookup_switch__MLDS_Type_3)) {
#line 824 "ml_lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 824 "ml_lookup_switch.m"
      case (MR_Integer) 0:
#line 824 "ml_lookup_switch.m"
#line 824 "ml_lookup_switch.m"
        switch (MR_unmkbody(ml_backend__ml_lookup_switch__MLDS_Type_3)) {
#line 824 "ml_lookup_switch.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 0:
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 6:
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 9:
#line 856 "ml_lookup_switch.m"
            {
#line 857 "ml_lookup_switch.m"
              {
#line 857 "ml_lookup_switch.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "function \140ml_backend.ml_lookup_switch.ml_default_value_for_type\'/1", (MR_String) "unexpected MLDS_Type");
              }
#line 856 "ml_lookup_switch.m"
            }
#line 824 "ml_lookup_switch.m"
            break;
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 1:
#line 830 "ml_lookup_switch.m"
            {
#line 831 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[8]);
#line 830 "ml_lookup_switch.m"
            }
#line 824 "ml_lookup_switch.m"
            break;
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 2:
#line 824 "ml_lookup_switch.m"
            {
#line 825 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6]);
#line 824 "ml_lookup_switch.m"
            }
#line 824 "ml_lookup_switch.m"
            break;
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 3:
#line 833 "ml_lookup_switch.m"
            {
#line 834 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[12]);
#line 833 "ml_lookup_switch.m"
            }
#line 824 "ml_lookup_switch.m"
            break;
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 4:
#line 827 "ml_lookup_switch.m"
            {
#line 828 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[10]);
#line 827 "ml_lookup_switch.m"
            }
#line 824 "ml_lookup_switch.m"
            break;
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 5:
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 7:
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 8:
#line 846 "ml_lookup_switch.m"
            {
#line 846 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__V_23_23;

#line 847 "ml_lookup_switch.m"
              {
#line 847 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 847 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
#line 847 "ml_lookup_switch.m"
              }
#line 847 "ml_lookup_switch.m"
              {
#line 847 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 847 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 847 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
#line 847 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 847 "ml_lookup_switch.m"
              }
#line 846 "ml_lookup_switch.m"
            }
#line 824 "ml_lookup_switch.m"
            break;
#line 824 "ml_lookup_switch.m"
        }
#line 824 "ml_lookup_switch.m"
        break;
#line 824 "ml_lookup_switch.m"
      case (MR_Integer) 1:
#line 846 "ml_lookup_switch.m"
        {
#line 846 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_23_23;

#line 847 "ml_lookup_switch.m"
          {
#line 847 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 847 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
#line 847 "ml_lookup_switch.m"
          }
#line 847 "ml_lookup_switch.m"
          {
#line 847 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 847 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 847 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
#line 847 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 847 "ml_lookup_switch.m"
          }
#line 846 "ml_lookup_switch.m"
        }
#line 824 "ml_lookup_switch.m"
        break;
#line 824 "ml_lookup_switch.m"
      case (MR_Integer) 2:
#line 846 "ml_lookup_switch.m"
        {
#line 846 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_23_23;

#line 847 "ml_lookup_switch.m"
          {
#line 847 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 847 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
#line 847 "ml_lookup_switch.m"
          }
#line 847 "ml_lookup_switch.m"
          {
#line 847 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 847 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 847 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
#line 847 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 847 "ml_lookup_switch.m"
          }
#line 846 "ml_lookup_switch.m"
        }
#line 824 "ml_lookup_switch.m"
        break;
#line 824 "ml_lookup_switch.m"
      case (MR_Integer) 3:
#line 824 "ml_lookup_switch.m"
#line 824 "ml_lookup_switch.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MLDS_Type_3, (MR_Integer) 0)))) {
#line 824 "ml_lookup_switch.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 0:
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 2:
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 3:
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 4:
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 5:
#line 846 "ml_lookup_switch.m"
            {
#line 846 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__V_23_23;

#line 847 "ml_lookup_switch.m"
              {
#line 847 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 847 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
#line 847 "ml_lookup_switch.m"
              }
#line 847 "ml_lookup_switch.m"
              {
#line 847 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 847 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 847 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
#line 847 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 847 "ml_lookup_switch.m"
              }
#line 846 "ml_lookup_switch.m"
            }
#line 824 "ml_lookup_switch.m"
            break;
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 1:
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 6:
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 7:
#line 824 "ml_lookup_switch.m"
          case (MR_Integer) 8:
#line 856 "ml_lookup_switch.m"
            {
#line 857 "ml_lookup_switch.m"
              {
#line 857 "ml_lookup_switch.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "function \140ml_backend.ml_lookup_switch.ml_default_value_for_type\'/1", (MR_String) "unexpected MLDS_Type");
              }
#line 856 "ml_lookup_switch.m"
            }
#line 824 "ml_lookup_switch.m"
            break;
#line 824 "ml_lookup_switch.m"
        }
#line 824 "ml_lookup_switch.m"
        break;
#line 824 "ml_lookup_switch.m"
    }
#line 824 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__DefaultRval_4;
#line 824 "ml_lookup_switch.m"
  }
#line 116 "ml_lookup_switch.m"
}

#line 800 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1(
#line 800 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 800 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 800 "ml_lookup_switch.m"
{
#line 800 "ml_lookup_switch.m"
  {
#line 800 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 800 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 800 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__2_2;

#line 800 "ml_lookup_switch.m"
    {
#line 800 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 800 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__2_2));
#line 800 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 800 "ml_lookup_switch.m"
  }
#line 800 "ml_lookup_switch.m"
}

#line 113 "ml_lookup_switch.m"
MR_Word MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(
#line 113 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__StructType_4,
#line 113 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Rvals_5)
#line 113 "ml_lookup_switch.m"
{
#line 799 "ml_lookup_switch.m"
  {
#line 799 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 799 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__RowInitializer_6;
#line 799 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_7;

#line 800 "ml_lookup_switch.m"
    {
#line 800 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FieldInitializers_7 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[0], ml_backend__ml_lookup_switch__Rvals_5);
    }
#line 801 "ml_lookup_switch.m"
    {
#line 801 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__RowInitializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_6, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StructType_4));
#line 801 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_6, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_7));
#line 801 "ml_lookup_switch.m"
    }
#line 799 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__RowInitializer_6;
#line 799 "ml_lookup_switch.m"
  }
#line 113 "ml_lookup_switch.m"
}

#line 107 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(
#line 107 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_Context_5,
#line 107 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__SeveralSolnLookupVars_6,
#line 107 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_24,
#line 107 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25)
#line 107 "ml_lookup_switch.m"
{
#line 556 "ml_lookup_switch.m"
  {
#line 556 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVar_8;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVar_11;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarDefn_12;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarLval_13;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVar_14;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarDefn_15;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarLval_16;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Defns_17;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarRval_18;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStmt_20;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStatement_21;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_28_28;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_34_34;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_40_40;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_44_44;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_45_45;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_47_47;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_48_48;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_50_50;
#line 556 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_51_51;

#line 557 "ml_lookup_switch.m"
    {
#line 557 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "num_later_solns", &ml_backend__ml_lookup_switch__NumLaterSolnsVar_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_24, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27);
    }
#line 560 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__NumLaterSolnsVar_8);
#line 559 "ml_lookup_switch.m"
    {
#line 559 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_28_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
#line 562 "ml_lookup_switch.m"
    {
#line 562 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27, ml_backend__ml_lookup_switch__NumLaterSolnsVar_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10);
    }
#line 565 "ml_lookup_switch.m"
    {
#line 565 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "later_slot", &ml_backend__ml_lookup_switch__LaterSlotVar_11, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33);
    }
#line 567 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__LaterSlotVar_11);
#line 567 "ml_lookup_switch.m"
    {
#line 567 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSlotVarDefn_12 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_34_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
#line 569 "ml_lookup_switch.m"
    {
#line 569 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33, ml_backend__ml_lookup_switch__LaterSlotVar_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__LaterSlotVarLval_13);
    }
#line 572 "ml_lookup_switch.m"
    {
#line 572 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "limit", &ml_backend__ml_lookup_switch__LimitVar_14, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25);
    }
#line 574 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__LimitVar_14);
#line 574 "ml_lookup_switch.m"
    {
#line 574 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitVarDefn_15 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_40_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
#line 576 "ml_lookup_switch.m"
    {
#line 576 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(*ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25, ml_backend__ml_lookup_switch__LimitVar_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__LimitVarLval_16);
    }
#line 578 "ml_lookup_switch.m"
    {
#line 578 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_45_45, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarDefn_15));
#line 578 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "ml_lookup_switch.m"
    }
#line 578 "ml_lookup_switch.m"
    {
#line 578 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_44_44, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarDefn_12));
#line 578 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_44_44, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_45_45));
#line 578 "ml_lookup_switch.m"
    }
#line 578 "ml_lookup_switch.m"
    {
#line 578 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__Defns_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Defns_17, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9));
#line 578 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Defns_17, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_44_44));
#line 578 "ml_lookup_switch.m"
    }
#line 580 "ml_lookup_switch.m"
    {
#line 580 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSlotVarRval_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 580 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LaterSlotVarRval_18, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
#line 580 "ml_lookup_switch.m"
    }
#line 581 "ml_lookup_switch.m"
    {
#line 581 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 581 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10));
#line 581 "ml_lookup_switch.m"
    }
#line 583 "ml_lookup_switch.m"
    {
#line 583 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 583 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 583 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_18));
#line 583 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19));
#line 583 "ml_lookup_switch.m"
    }
#line 582 "ml_lookup_switch.m"
    {
#line 582 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_47_47, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_16));
#line 582 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_47_47, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_48_48));
#line 582 "ml_lookup_switch.m"
    }
#line 582 "ml_lookup_switch.m"
    {
#line 582 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitAssignStmt_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__LimitAssignStmt_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 582 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__LimitAssignStmt_20, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_47_47));
#line 582 "ml_lookup_switch.m"
    }
#line 584 "ml_lookup_switch.m"
    {
#line 584 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitAssignStatement_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 584 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LimitAssignStatement_21, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStmt_20));
#line 584 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LimitAssignStatement_21, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_5));
#line 584 "ml_lookup_switch.m"
    }
#line 586 "ml_lookup_switch.m"
    {
#line 586 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 586 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 586 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_18));
#line 586 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[7])));
#line 586 "ml_lookup_switch.m"
    }
#line 585 "ml_lookup_switch.m"
    {
#line 585 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_50_50, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
#line 585 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_50_50, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_51_51));
#line 585 "ml_lookup_switch.m"
    }
#line 585 "ml_lookup_switch.m"
    {
#line 585 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 585 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_50_50));
#line 585 "ml_lookup_switch.m"
    }
#line 587 "ml_lookup_switch.m"
    {
#line 587 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22));
#line 587 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_5));
#line 587 "ml_lookup_switch.m"
    }
#line 589 "ml_lookup_switch.m"
    {
#line 589 "ml_lookup_switch.m"
      MR_Word base;
#line 589 "ml_lookup_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 589 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__SeveralSolnLookupVars_6 = base;
#line 589 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10));
#line 589 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
#line 589 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_16));
#line 589 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStatement_21));
#line 589 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23));
#line 589 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_lookup_switch__Defns_17));
#line 589 "ml_lookup_switch.m"
    }
#line 556 "ml_lookup_switch.m"
  }
#line 107 "ml_lookup_switch.m"
}

#line 89 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_18_p_0(
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_19,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_Context_20,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SlotVarRval_21,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_22,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_23,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_24,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_25,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_26,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_27,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_28,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_29,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnVectorCommon_31,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_32,
#line 89 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__MatchDefns_33,
#line 89 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statements_34,
#line 89 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_64,
#line 89 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_65)
#line 89 "ml_lookup_switch.m"
{
#line 493 "ml_lookup_switch.m"
  {
#line 493 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_95_95;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarLval_38;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarLval_39;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStatement_40;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_41;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarRval_43;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarRval_44;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_IntType_45;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarAssignStatement_47;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnLookupStatements_48;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnLookupStatements_49;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CallContStatement_50;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_66_66;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_67_67;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_68_68;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_69_69;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_70_70;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_73_73;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_74_74;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_77_77;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_78_78;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_79_79;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_83_83;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_84_84;
#line 493 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_85_85;

#line 494 "ml_lookup_switch.m"
    {
#line 494 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_64, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_66_66);
    }
#line 495 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 0)));
#line 495 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__LaterSlotVarLval_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 1)));
#line 495 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__LimitVarLval_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 2)));
#line 495 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__LimitAssignStatement_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 3)));
#line 495 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 4)));
#line 495 "ml_lookup_switch.m"
    *ml_backend__ml_lookup_switch__MatchDefns_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 5)));
#line 499 "ml_lookup_switch.m"
    {
#line 499 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 499 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37));
#line 499 "ml_lookup_switch.m"
    }
#line 500 "ml_lookup_switch.m"
    {
#line 500 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSlotVarRval_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 500 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LaterSlotVarRval_43, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_38));
#line 500 "ml_lookup_switch.m"
    }
#line 501 "ml_lookup_switch.m"
    {
#line 501 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitVarRval_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 501 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LimitVarRval_44, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_39));
#line 501 "ml_lookup_switch.m"
    }
#line 502 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__MLDS_IntType_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 504 "ml_lookup_switch.m"
    {
#line 504 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37, ml_backend__ml_lookup_switch__MLDS_IntType_45, ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_26, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30, ml_backend__ml_lookup_switch__FirstSolnStructType_24, ml_backend__ml_lookup_switch__SlotVarRval_21, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_66_66, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_67_67);
    }
#line 507 "ml_lookup_switch.m"
    {
#line 507 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_lookup_switch__LaterSlotVarLval_38, ml_backend__ml_lookup_switch__MLDS_IntType_45, ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_27, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30, ml_backend__ml_lookup_switch__FirstSolnStructType_24, ml_backend__ml_lookup_switch__SlotVarRval_21, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__LaterSlotVarAssignStatement_47, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_67_67, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_68_68);
    }
#line 510 "ml_lookup_switch.m"
    {
#line 510 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_22, ml_backend__ml_lookup_switch__OutTypes_23, ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_28, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30, ml_backend__ml_lookup_switch__FirstSolnStructType_24, ml_backend__ml_lookup_switch__SlotVarRval_21, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__FirstSolnLookupStatements_48, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_68_68, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_69_69);
    }
#line 513 "ml_lookup_switch.m"
    {
#line 513 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_22, ml_backend__ml_lookup_switch__OutTypes_23, ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_29, ml_backend__ml_lookup_switch__LaterSolnVectorCommon_31, ml_backend__ml_lookup_switch__LaterSolnStructType_25, ml_backend__ml_lookup_switch__LaterSlotVarRval_43, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__LaterSolnLookupStatements_49, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_69_69, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_70_70);
    }
#line 517 "ml_lookup_switch.m"
    {
#line 517 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__CallContStatement_50, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_70_70, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_65);
    }
#line 6628 "ml_backend.ml_lookup_switch.c"
    ml_backend__ml_lookup_switch__TypeCtorInfo_95_95 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 519 "ml_lookup_switch.m"
    {
#line 519 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_74_74, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CallContStatement_50));
#line 519 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "ml_lookup_switch.m"
    }
#line 519 "ml_lookup_switch.m"
    {
#line 519 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_73_73 = mercury__list__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_95_95, ml_backend__ml_lookup_switch__FirstSolnLookupStatements_48, ml_backend__ml_lookup_switch__V_74_74);
    }
#line 518 "ml_lookup_switch.m"
    {
#line 518 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_73_73));
#line 518 "ml_lookup_switch.m"
    }
#line 520 "ml_lookup_switch.m"
    {
#line 520 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 520 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51));
#line 520 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
#line 520 "ml_lookup_switch.m"
    }
#line 525 "ml_lookup_switch.m"
    {
#line 525 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_79_79, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_41));
#line 525 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "ml_lookup_switch.m"
    }
#line 525 "ml_lookup_switch.m"
    {
#line 525 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_78_78, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CallContStatement_50));
#line 525 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_78_78, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_79_79));
#line 525 "ml_lookup_switch.m"
    }
#line 524 "ml_lookup_switch.m"
    {
#line 524 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_77_77 = mercury__list__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_95_95, ml_backend__ml_lookup_switch__LaterSolnLookupStatements_49, ml_backend__ml_lookup_switch__V_78_78);
    }
#line 523 "ml_lookup_switch.m"
    {
#line 523 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_77_77));
#line 523 "ml_lookup_switch.m"
    }
#line 526 "ml_lookup_switch.m"
    {
#line 526 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 526 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53));
#line 526 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
#line 526 "ml_lookup_switch.m"
    }
#line 529 "ml_lookup_switch.m"
    {
#line 529 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 529 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 529 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 529 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_43));
#line 529 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarRval_44));
#line 529 "ml_lookup_switch.m"
    }
#line 530 "ml_lookup_switch.m"
    {
#line 530 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 530 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56, 0) = ((MR_Box) ((MR_Integer) 0));
#line 530 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55));
#line 530 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54));
#line 530 "ml_lookup_switch.m"
    }
#line 532 "ml_lookup_switch.m"
    {
#line 532 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 532 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56));
#line 532 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
#line 532 "ml_lookup_switch.m"
    }
#line 536 "ml_lookup_switch.m"
    {
#line 536 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_85_85, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57));
#line 536 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "ml_lookup_switch.m"
    }
#line 535 "ml_lookup_switch.m"
    {
#line 535 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStatement_40));
#line 535 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_85_85));
#line 535 "ml_lookup_switch.m"
    }
#line 535 "ml_lookup_switch.m"
    {
#line 535 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_83_83, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarAssignStatement_47));
#line 535 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_83_83, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_84_84));
#line 535 "ml_lookup_switch.m"
    }
#line 534 "ml_lookup_switch.m"
    {
#line 534 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52));
#line 534 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_83_83));
#line 534 "ml_lookup_switch.m"
    }
#line 540 "ml_lookup_switch.m"
#line 540 "ml_lookup_switch.m"
    switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_32) {
#line 540 "ml_lookup_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 540 "ml_lookup_switch.m"
      case (MR_Integer) 1:
#line 539 "ml_lookup_switch.m"
        {
#line 539 "ml_lookup_switch.m"
          MR_Word base;
#line 539 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__Statements_34 = base;
#line 539 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46));
#line 539 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58));
#line 539 "ml_lookup_switch.m"
        }
#line 540 "ml_lookup_switch.m"
        break;
#line 540 "ml_lookup_switch.m"
      case (MR_Integer) 0:
#line 541 "ml_lookup_switch.m"
        {
#line 541 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59;
#line 541 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60;
#line 541 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__AnySolnsCond_61;
#line 541 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62;
#line 541 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63;
#line 541 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_93_93;

#line 542 "ml_lookup_switch.m"
          {
#line 542 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 542 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58));
#line 542 "ml_lookup_switch.m"
          }
#line 543 "ml_lookup_switch.m"
          {
#line 543 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 543 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59));
#line 543 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
#line 543 "ml_lookup_switch.m"
          }
#line 546 "ml_lookup_switch.m"
          {
#line 546 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__AnySolnsCond_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 546 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 546 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 546 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42));
#line 546 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 546 "ml_lookup_switch.m"
          }
#line 548 "ml_lookup_switch.m"
          {
#line 548 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 548 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__AnySolnsCond_61));
#line 548 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60));
#line 548 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "ml_lookup_switch.m"
          }
#line 550 "ml_lookup_switch.m"
          {
#line 550 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 550 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62));
#line 550 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
#line 550 "ml_lookup_switch.m"
          }
#line 553 "ml_lookup_switch.m"
          {
#line 553 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_93_93, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63));
#line 553 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "ml_lookup_switch.m"
          }
#line 553 "ml_lookup_switch.m"
          {
#line 553 "ml_lookup_switch.m"
            MR_Word base;
#line 553 "ml_lookup_switch.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__Statements_34 = base;
#line 553 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46));
#line 553 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_93_93));
#line 553 "ml_lookup_switch.m"
          }
#line 541 "ml_lookup_switch.m"
        }
#line 540 "ml_lookup_switch.m"
        break;
#line 540 "ml_lookup_switch.m"
    }
#line 493 "ml_lookup_switch.m"
  }
#line 89 "ml_lookup_switch.m"
}

#line 224 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3(
#line 224 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 224 "ml_lookup_switch.m"
{
#line 224 "ml_lookup_switch.m"
  {
#line 224 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 224 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 224 "ml_lookup_switch.m"
    {
#line 224 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__224__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 224 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 224 "ml_lookup_switch.m"
  }
#line 224 "ml_lookup_switch.m"
}

#line 281 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2(
#line 281 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 281 "ml_lookup_switch.m"
{
#line 281 "ml_lookup_switch.m"
  {
#line 281 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 281 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 281 "ml_lookup_switch.m"
    {
#line 281 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__281__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 281 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 281 "ml_lookup_switch.m"
  }
#line 281 "ml_lookup_switch.m"
}

#line 224 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1(
#line 224 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 224 "ml_lookup_switch.m"
{
#line 224 "ml_lookup_switch.m"
  {
#line 224 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 224 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 224 "ml_lookup_switch.m"
    {
#line 224 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__224__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 224 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 224 "ml_lookup_switch.m"
  }
#line 224 "ml_lookup_switch.m"
}

#line 77 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0(
#line 77 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_13,
#line 77 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_14,
#line 77 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LookupSwitchInfo_15,
#line 77 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_16,
#line 77 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_17,
#line 77 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_18,
#line 77 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_19,
#line 77 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_20,
#line 77 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_21,
#line 77 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_22,
#line 77 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38,
#line 77 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_39)
#line 77 "ml_lookup_switch.m"
{
#line 260 "ml_lookup_switch.m"
  {
#line 260 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 260 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CaseIdConstMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_15, (MR_Integer) 0)));
#line 260 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OutVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_15, (MR_Integer) 1)));
#line 260 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldTypes_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_15, (MR_Integer) 2)));
#line 260 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SwitchVarLval_27;
#line 260 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SwitchVarRval_28;
#line 260 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IndexRval_29;

#line 263 "ml_lookup_switch.m"
    {
#line 263 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38, ml_backend__ml_lookup_switch__SwitchVar_13, &ml_backend__ml_lookup_switch__SwitchVarLval_27);
    }
#line 264 "ml_lookup_switch.m"
    {
#line 264 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__SwitchVarRval_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SwitchVarRval_28, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SwitchVarLval_27));
#line 264 "ml_lookup_switch.m"
    }
#line 265 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__StartVal_18 == (MR_Integer) 0);
#line 265 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 266 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__IndexRval_29 = ml_backend__ml_lookup_switch__SwitchVarRval_28;
#line 265 "ml_lookup_switch.m"
    else
#line 268 "ml_lookup_switch.m"
      {
#line 268 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__StartRval_30;
#line 268 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_40_40;

#line 268 "ml_lookup_switch.m"
        {
#line 268 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 268 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_40_40, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StartVal_18));
#line 268 "ml_lookup_switch.m"
        }
#line 268 "ml_lookup_switch.m"
        {
#line 268 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__StartRval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__StartRval_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 268 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__StartRval_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_40_40));
#line 268 "ml_lookup_switch.m"
        }
#line 269 "ml_lookup_switch.m"
        {
#line 269 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__IndexRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 269 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 269 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 269 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__SwitchVarRval_28));
#line 269 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__StartRval_30));
#line 269 "ml_lookup_switch.m"
        }
#line 268 "ml_lookup_switch.m"
      }
#line 279 "ml_lookup_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_lookup_switch__CaseIdConstMap_24)) == (MR_mktag((MR_Integer) 0))))
#line 272 "ml_lookup_switch.m"
      {
#line 272 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_72 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1];
#line 272 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__CaseIdValueMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__CaseIdConstMap_24, (MR_Integer) 0)));
#line 272 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__IntValueMap_32;
#line 272 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__IntValues_33;
#line 272 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_65;
#line 272 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_66_66;
#line 272 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_67_67;

#line 223 "ml_lookup_switch.m"
        {
#line 223 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_66_66 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_72);
        }
#line 222 "ml_lookup_switch.m"
        {
#line 222 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(ml_backend__ml_lookup_switch__TaggedCases_14, ml_backend__ml_lookup_switch__CaseIdValueMap_31, &ml_backend__ml_lookup_switch__DepletedCaseIdMap_65, ml_backend__ml_lookup_switch__V_66_66, &ml_backend__ml_lookup_switch__IntValueMap_32);
        }
#line 224 "ml_lookup_switch.m"
        {
#line 224 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 224 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[0]));
#line 224 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1));
#line 224 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 224 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_72));
#line 224 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__DepletedCaseIdMap_65));
#line 224 "ml_lookup_switch.m"
        }
#line 224 "ml_lookup_switch.m"
        {
#line 224 "ml_lookup_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_67_67, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
        }
#line 275 "ml_lookup_switch.m"
        {
#line 275 "ml_lookup_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ml_backend__ml_lookup_switch__IntValueMap_32, &ml_backend__ml_lookup_switch__IntValues_33);
        }
#line 276 "ml_lookup_switch.m"
        {
#line 276 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(ml_backend__ml_lookup_switch__IndexRval_29, ml_backend__ml_lookup_switch__OutVars_25, ml_backend__ml_lookup_switch__FieldTypes_26, ml_backend__ml_lookup_switch__IntValues_33, ml_backend__ml_lookup_switch__CodeModel_16, ml_backend__ml_lookup_switch__Context_17, ml_backend__ml_lookup_switch__StartVal_18, ml_backend__ml_lookup_switch__EndVal_19, ml_backend__ml_lookup_switch__NeedBitVecCheck_20, ml_backend__ml_lookup_switch__NeedRangeCheck_21, ml_backend__ml_lookup_switch__Statement_22, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_39);
        }
#line 272 "ml_lookup_switch.m"
      }
#line 279 "ml_lookup_switch.m"
    else
#line 280 "ml_lookup_switch.m"
      {
#line 280 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_86;
#line 280 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__CaseIdSolnMap_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseIdConstMap_24, (MR_Integer) 0)));
#line 280 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__IntSolnMap_36;
#line 280 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__IntSolns_37;
#line 280 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_42_42;
#line 280 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_79;
#line 280 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_80_80;
#line 280 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_81_81;

#line 281 "ml_lookup_switch.m"
        {
#line 281 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 281 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[1]));
#line 281 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2));
#line 281 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 281 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__CodeModel_16));
#line 281 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 4) = ((MR_Box) ((MR_Integer) 2));
#line 281 "ml_lookup_switch.m"
        }
#line 281 "ml_lookup_switch.m"
        {
#line 281 "ml_lookup_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_42_42, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_atomic_lookup_switch\'/12", (MR_String) "CodeModel != model_non");
        }
#line 7207 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__TypeInfo_for_V_86 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 223 "ml_lookup_switch.m"
        {
#line 223 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_80_80 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_86);
        }
#line 222 "ml_lookup_switch.m"
        {
#line 222 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(ml_backend__ml_lookup_switch__TaggedCases_14, ml_backend__ml_lookup_switch__CaseIdSolnMap_34, &ml_backend__ml_lookup_switch__DepletedCaseIdMap_79, ml_backend__ml_lookup_switch__V_80_80, &ml_backend__ml_lookup_switch__IntSolnMap_36);
        }
#line 224 "ml_lookup_switch.m"
        {
#line 224 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 224 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[0]));
#line 224 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3));
#line 224 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 224 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_86));
#line 224 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__DepletedCaseIdMap_79));
#line 224 "ml_lookup_switch.m"
        }
#line 224 "ml_lookup_switch.m"
        {
#line 224 "ml_lookup_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_81_81, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
        }
#line 285 "ml_lookup_switch.m"
        {
#line 285 "ml_lookup_switch.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ml_backend__ml_lookup_switch__IntSolnMap_36, &ml_backend__ml_lookup_switch__IntSolns_37);
        }
#line 286 "ml_lookup_switch.m"
        {
#line 286 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(ml_backend__ml_lookup_switch__IndexRval_29, ml_backend__ml_lookup_switch__OutVars_25, ml_backend__ml_lookup_switch__FieldTypes_26, ml_backend__ml_lookup_switch__IntSolns_37, ml_backend__ml_lookup_switch__Context_17, ml_backend__ml_lookup_switch__StartVal_18, ml_backend__ml_lookup_switch__EndVal_19, ml_backend__ml_lookup_switch__NeedBitVecCheck_20, ml_backend__ml_lookup_switch__NeedRangeCheck_21, ml_backend__ml_lookup_switch__Statement_22, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_39);
        }
#line 280 "ml_lookup_switch.m"
      }
#line 260 "ml_lookup_switch.m"
  }
#line 77 "ml_lookup_switch.m"
}

#line 224 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1(
#line 224 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 224 "ml_lookup_switch.m"
{
#line 224 "ml_lookup_switch.m"
  {
#line 224 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 224 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 224 "ml_lookup_switch.m"
    {
#line 224 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__224__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 224 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 224 "ml_lookup_switch.m"
  }
#line 224 "ml_lookup_switch.m"
}

#line 69 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0(
#line 69 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_15,
#line 69 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_16,
#line 69 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GetTag_5,
#line 69 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_6,
#line 69 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseIdMap_7,
#line 69 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__TagMap_8)
#line 69 "ml_lookup_switch.m"
{
#line 221 "ml_lookup_switch.m"
  {
#line 221 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 221 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_9;
#line 221 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_10_10;
#line 221 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_11_11;

#line 223 "ml_lookup_switch.m"
    {
#line 223 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_10_10 = mercury__map__init_0_f_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_15, ml_backend__ml_lookup_switch__TypeInfo_for_V_16);
    }
#line 222 "ml_lookup_switch.m"
    {
#line 222 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_15, ml_backend__ml_lookup_switch__TypeInfo_for_V_16, ml_backend__ml_lookup_switch__GetTag_5, ml_backend__ml_lookup_switch__TaggedCases_6, ml_backend__ml_lookup_switch__CaseIdMap_7, &ml_backend__ml_lookup_switch__DepletedCaseIdMap_9, ml_backend__ml_lookup_switch__V_10_10, ml_backend__ml_lookup_switch__TagMap_8);
    }
#line 224 "ml_lookup_switch.m"
    {
#line 224 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 224 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[0]));
#line 224 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1));
#line 224 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 224 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_16));
#line 224 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__DepletedCaseIdMap_9));
#line 224 "ml_lookup_switch.m"
    }
#line 224 "ml_lookup_switch.m"
    {
#line 224 "ml_lookup_switch.m"
      mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_11_11, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
    }
#line 221 "ml_lookup_switch.m"
  }
#line 69 "ml_lookup_switch.m"
}

#line 59 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(
#line 59 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_8,
#line 59 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_9,
#line 59 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GoalInfo_10,
#line 59 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_11,
#line 59 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12,
#line 59 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27,
#line 59 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28)
#line 59 "ml_lookup_switch.m"
{
#line 145 "ml_lookup_switch.m"
  {
#line 145 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 145 "ml_lookup_switch.m"
    {
#line 145 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0(ml_backend__ml_lookup_switch__SwitchVar_8, ml_backend__ml_lookup_switch__TaggedCases_9, ml_backend__ml_lookup_switch__GoalInfo_10, ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28);
    }
#line 145 "ml_lookup_switch.m"
  }
#line 59 "ml_lookup_switch.m"
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
