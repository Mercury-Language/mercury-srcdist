/*
** Automatically generated from `add_type.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module hlds.make_hlds.add_type. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__add_type__init
ENDINIT
*/

#include "hlds.make_hlds.add_type.mih"


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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_tags.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
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
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 692 "add_type.m"
struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_0_s {
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__TypeCtor_2;
#line 699 "add_type.m"
  MR_bool hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 720 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__QualifiedConsDefnsA_64;
#line 722 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 722 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__OtherConsDefn_122;
#line 722 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__V_142_142;
#line 722 "add_type.m"
  MR_Box hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__conv0_OtherConsDefn_122;
#line 692 "add_type.m"
};

#line 36 "add_type.m"
struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s {
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Args_14;
#line 81 "add_type.m"
  MR_bool hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_275_275;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52;
#line 270 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 270 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__EqvType_92;
#line 270 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Var_93;
#line 272 "add_type.m"
  MR_Box hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__conv0_Var_93;
#line 273 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_1;
#line 273 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_281_281;
#line 273 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__V_279_279;
#line 36 "add_type.m"
};


#line 195 "hlds.make_hlds.add_type.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 198 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 201 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 204 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 761 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_6(
#line 761 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 761 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1);

#line 752 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_5(
#line 752 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 752 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 752 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 752 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 722 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_1(
#line 722 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 722 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_3(
#line 722 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 722 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_2(
#line 722 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 722 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_4(
#line 722 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 692 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0(
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_10,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_11,
#line 692 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_12,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_0_13,
#line 692 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_14,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_15,
#line 692 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_16);

#line 270 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_1(
#line 270 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 272 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_3(
#line 272 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 273 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_4(
#line 273 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 273 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_5(
#line 273 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 273 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_6(
#line 273 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 270 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_2(
#line 270 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 270 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_7(
#line 270 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 761 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__ctors_add__761__1_1_f_0(
#line 761 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_115);

#line 862 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 862 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 862 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 862 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 862 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 862 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);

#line 858 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 858 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 858 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 858 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 858 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 803 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 803 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 803 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41);

#line 780 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_12_p_0(
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_6,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_7,
#line 780 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_8,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_9,
#line 780 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_10,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_11,
#line 780 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_12);

#line 771 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 771 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 771 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 771 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 771 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 771 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 771 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15);

#line 635 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 635 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 635 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 635 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 635 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4);

#line 510 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 510 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 510 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 510 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6);

#line 479 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 479 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 479 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 479 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 479 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 479 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5);

#line 441 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_8_p_0(
#line 441 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_9,
#line 441 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_10,
#line 441 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_11,
#line 441 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundError_12,
#line 441 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24,
#line 441 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_25,
#line 441 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26,
#line 441 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27);

#line 348 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 348 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 348 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4);

#line 319 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 319 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 319 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4);

#line 312 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 312 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 312 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 312 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 312 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4);

#line 290 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void);


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[80][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[7][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][9];




static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[80][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or comparison."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not allowed to have user-defined equality"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot have user-defined equality or comparison."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "consists of a single zero-arity constructor"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Discriminated unions whose body"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "annotations"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "consistent"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: all definitions of a type must have"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must have the same visibility"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: all definitions of a type"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "exported as abstract type."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with monomorphic definition,"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "polymorphic equivalence type,"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "optimize the wrapper away.)"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(There\'s no performance penalty for this -- the compiler will"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "functor that has just one arg, instead of an equivalence type."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "A better work-around is to use a \"wrapper\" type, with just one"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "type by putting the type definition in the interface section."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "A quick work-around is to just export the type as a concrete,"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "on other back-ends, but none for this back-end."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "There are representations for this type"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: no"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 60 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (((MR_Integer) 45 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: field"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Here is the previous definition of field"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In definition of type"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: type "))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "defined as foreign_type without being declared."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: pragma foreign_type "))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must have the same visibility as the type declaration."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: constructor"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for type"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "solver"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[54])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[13])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[37])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1041 "hlds.make_hlds.add_type.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

#line 1049 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

#line 1058 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1066 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 761 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_6(
#line 761 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 761 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1)
#line 761 "add_type.m"
{
#line 761 "add_type.m"
  {
#line 761 "add_type.m"
    MR_Box hlds__make_hlds__add_type__wrapper_arg_2;
#line 761 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 761 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv3_HeadVar__2_116;

#line 761 "add_type.m"
    {
#line 761 "add_type.m"
      hlds__make_hlds__add_type__conv3_HeadVar__2_116 = hlds__make_hlds__add_type__IntroducedFrom__func__ctors_add__761__1_1_f_0(((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1));
    }
#line 761 "add_type.m"
    hlds__make_hlds__add_type__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_type__conv3_HeadVar__2_116));
#line 761 "add_type.m"
    return hlds__make_hlds__add_type__wrapper_arg_2;
#line 761 "add_type.m"
  }
#line 761 "add_type.m"
}

#line 752 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_5(
#line 752 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 752 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 752 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 752 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 752 "add_type.m"
{
#line 752 "add_type.m"
  {
#line 752 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 752 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15;

#line 752 "add_type.m"
    {
#line 752 "add_type.m"
      hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15);
    }
#line 752 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15));
#line 752 "add_type.m"
  }
#line 752 "add_type.m"
}

#line 722 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_1(
#line 722 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 722 "add_type.m"
{
#line 722 "add_type.m"
  {
#line 722 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 722 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 722 "add_type.m"
  }
#line 722 "add_type.m"
}

#line 722 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_3(
#line 722 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 722 "add_type.m"
{
#line 722 "add_type.m"
  {
#line 722 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 722 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__OtherConsDefn_122 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__conv0_OtherConsDefn_122);
#line 722 "add_type.m"
    {
#line 722 "add_type.m"
      hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 722 "add_type.m"
      return;
    }
#line 722 "add_type.m"
  }
#line 722 "add_type.m"
}

#line 722 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_2(
#line 722 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 722 "add_type.m"
{
#line 722 "add_type.m"
  {
#line 722 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 722 "add_type.m"
    {
#line 723 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_124_124;
#line 723 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_125_125;
#line 723 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_126_126;
#line 723 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_127_127;
#line 723 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_128_128;
#line 723 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_129_129;
#line 723 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_130_130;

#line 723 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__OtherConsDefn_122, (MR_Integer) 0)));
#line 723 "add_type.m"
      hlds__make_hlds__add_type__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__OtherConsDefn_122, (MR_Integer) 1)));
#line 723 "add_type.m"
      hlds__make_hlds__add_type__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__OtherConsDefn_122, (MR_Integer) 2)));
#line 723 "add_type.m"
      hlds__make_hlds__add_type__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__OtherConsDefn_122, (MR_Integer) 3)));
#line 723 "add_type.m"
      hlds__make_hlds__add_type__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__OtherConsDefn_122, (MR_Integer) 4)));
#line 723 "add_type.m"
      hlds__make_hlds__add_type__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__OtherConsDefn_122, (MR_Integer) 5)));
#line 723 "add_type.m"
      hlds__make_hlds__add_type__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__OtherConsDefn_122, (MR_Integer) 6)));
#line 723 "add_type.m"
      hlds__make_hlds__add_type__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__OtherConsDefn_122, (MR_Integer) 7)));
#line 723 "add_type.m"
      {
#line 723 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__TypeCtor_2, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__V_142_142);
      }
#line 723 "add_type.m"
      if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 723 "add_type.m"
        {
#line 723 "add_type.m"
          hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 723 "add_type.m"
          return;
        }
#line 722 "add_type.m"
    }
#line 722 "add_type.m"
  }
#line 722 "add_type.m"
}

#line 722 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_4(
#line 722 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 722 "add_type.m"
{
#line 722 "add_type.m"
  {
#line 722 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 722 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 722 "add_type.m"
      {
#line 722 "add_type.m"
        {
#line 722 "add_type.m"
          {
#line 722 "add_type.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__conv0_OtherConsDefn_122, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__QualifiedConsDefnsA_64, hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_3, hlds__make_hlds__add_type__env_ptr);
          }
#line 722 "add_type.m"
        }
#line 722 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 722 "add_type.m"
      }
#line 722 "add_type.m"
    else
#line 722 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 722 "add_type.m"
  }
#line 722 "add_type.m"
}

#line 692 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0(
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_10,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_11,
#line 692 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_12,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_0_13,
#line 692 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_14,
#line 692 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_15,
#line 692 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_16)
#line 692 "add_type.m"
{
#line 692 "add_type.m"
  {
#line 692 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_0_s hlds__make_hlds__add_type__env;

#line 692 "add_type.m"
    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__TypeCtor_2 = hlds__make_hlds__add_type__TypeCtor_2;
#line 699 "add_type.m"
    while (MR_TRUE)
#line 699 "add_type.m"
      {
#line 699 "add_type.m"
        /* tailcall optimized into a loop */
#line 699 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "add_type.m"
          {
#line 699 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_16 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_15;
#line 699 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_0_13;
#line 699 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_12 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_11;
#line 699 "add_type.m"
          }
#line 699 "add_type.m"
        else
#line 702 "add_type.m"
          {
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctor_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Rest_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__ExistQVars_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_35, (MR_Integer) 0)));
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Constraints_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_35, (MR_Integer) 1)));
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Name_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_35, (MR_Integer) 2)));
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_35, (MR_Integer) 3)));
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Context_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_35, (MR_Integer) 4)));
#line 702 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__Arity_54;
#line 702 "add_type.m"
            MR_String hlds__make_hlds__add_type__BaseName_55;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__QualifiedName_56;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__UnqualifiedName_57;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__QualifiedConsIdA_58;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__QualifiedConsIdB_59;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdA_60;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdB_61;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__ConsDefn_62;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__PartialQuals_63;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__FieldNames_73;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_82_82;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_83_83;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_106_106;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_113_113;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_117_117;
#line 702 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_118_118;

#line 704 "add_type.m"
            {
#line 704 "add_type.m"
              mercury__list__length_2_p_0(hlds__make_hlds__add_type__TypeCtorInfo_134_134, hlds__make_hlds__add_type__Args_52, &hlds__make_hlds__add_type__Arity_54);
            }
#line 705 "add_type.m"
            {
#line 705 "add_type.m"
              hlds__make_hlds__add_type__BaseName_55 = mdbcomp__prim_data__unqualify_name_1_f_0(hlds__make_hlds__add_type__Name_51);
            }
#line 706 "add_type.m"
            {
#line 706 "add_type.m"
              hlds__make_hlds__add_type__QualifiedName_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_56, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorModuleName_3));
#line 706 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_56, 1) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_55));
#line 706 "add_type.m"
            }
#line 707 "add_type.m"
            {
#line 707 "add_type.m"
              hlds__make_hlds__add_type__UnqualifiedName_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__UnqualifiedName_57, 0) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_55));
#line 707 "add_type.m"
            }
#line 708 "add_type.m"
            {
#line 708 "add_type.m"
              hlds__make_hlds__add_type__QualifiedConsIdA_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 708 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 708 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_58, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_56));
#line 708 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_58, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_54));
#line 708 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_58, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__TypeCtor_2));
#line 708 "add_type.m"
            }
#line 709 "add_type.m"
            {
#line 709 "add_type.m"
              hlds__make_hlds__add_type__V_82_82 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
            }
#line 709 "add_type.m"
            {
#line 709 "add_type.m"
              hlds__make_hlds__add_type__QualifiedConsIdB_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 709 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 709 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_59, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_56));
#line 709 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_59, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_54));
#line 709 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_59, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_82_82));
#line 709 "add_type.m"
            }
#line 710 "add_type.m"
            {
#line 710 "add_type.m"
              hlds__make_hlds__add_type__UnqualifiedConsIdA_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 710 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 710 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_60, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_57));
#line 710 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_60, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_54));
#line 710 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_60, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__TypeCtor_2));
#line 710 "add_type.m"
            }
#line 711 "add_type.m"
            {
#line 711 "add_type.m"
              hlds__make_hlds__add_type__V_83_83 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
            }
#line 711 "add_type.m"
            {
#line 711 "add_type.m"
              hlds__make_hlds__add_type__UnqualifiedConsIdB_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 711 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 711 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_61, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_57));
#line 711 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_61, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_54));
#line 711 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_61, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_83_83));
#line 711 "add_type.m"
            }
#line 713 "add_type.m"
            {
#line 713 "add_type.m"
              hlds__make_hlds__add_type__ConsDefn_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 713 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_62, 0) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__TypeCtor_2));
#line 713 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_62, 1) = ((MR_Box) (hlds__make_hlds__add_type__TVarSet_4));
#line 713 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_62, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeParams_5));
#line 713 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_62, 3) = ((MR_Box) (hlds__make_hlds__add_type__KindMap_6));
#line 713 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_62, 4) = ((MR_Box) (hlds__make_hlds__add_type__ExistQVars_49));
#line 713 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_62, 5) = ((MR_Box) (hlds__make_hlds__add_type__Constraints_50));
#line 713 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_62, 6) = ((MR_Box) (hlds__make_hlds__add_type__Args_52));
#line 713 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_62, 7) = ((MR_Box) (hlds__make_hlds__add_type__Context_53));
#line 713 "add_type.m"
            }
#line 715 "add_type.m"
            {
#line 715 "add_type.m"
              parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__make_hlds__add_type__TypeCtorModuleName_3, hlds__make_hlds__add_type__PQInfo_8, &hlds__make_hlds__add_type__PartialQuals_63);
            }
#line 720 "add_type.m"
            {
#line 720 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__hlds_data__search_cons_table_3_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_0_13, hlds__make_hlds__add_type__QualifiedConsIdA_58, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__QualifiedConsDefnsA_64);
            }
#line 720 "add_type.m"
            if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 722 "add_type.m"
              {
#line 722 "add_type.m"
                hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_4(&hlds__make_hlds__add_type__env);
              }
#line 734 "add_type.m"
            if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 726 "add_type.m"
              {
#line 726 "add_type.m"
                MR_String hlds__make_hlds__add_type__QualifiedConsIdStr_66;
#line 726 "add_type.m"
                MR_String hlds__make_hlds__add_type__TypeCtorStr_67;
#line 726 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Pieces_68;
#line 726 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Msg_69;
#line 726 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Spec_70;
#line 726 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_86_86;
#line 726 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_87_87;
#line 726 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_88_88;
#line 726 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_91_91;
#line 726 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_92_92;
#line 726 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_99_99;
#line 726 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_100_100;
#line 726 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_104_104;

#line 726 "add_type.m"
                {
#line 726 "add_type.m"
                  hlds__make_hlds__add_type__QualifiedConsIdStr_66 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(hlds__make_hlds__add_type__QualifiedConsIdA_58);
                }
#line 727 "add_type.m"
                {
#line 727 "add_type.m"
                  hlds__make_hlds__add_type__TypeCtorStr_67 = hlds__hlds_out__hlds_out_util__type_ctor_to_string_1_f_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__TypeCtor_2);
                }
#line 728 "add_type.m"
                {
#line 728 "add_type.m"
                  hlds__make_hlds__add_type__V_87_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 728 "add_type.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdStr_66));
#line 728 "add_type.m"
                }
#line 729 "add_type.m"
                {
#line 729 "add_type.m"
                  hlds__make_hlds__add_type__V_92_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 729 "add_type.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_92_92, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorStr_67));
#line 729 "add_type.m"
                }
#line 729 "add_type.m"
                {
#line 729 "add_type.m"
                  hlds__make_hlds__add_type__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_92_92));
#line 729 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[56])));
#line 729 "add_type.m"
                }
#line 729 "add_type.m"
                {
#line 729 "add_type.m"
                  hlds__make_hlds__add_type__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[79])));
#line 729 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_88_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_91_91));
#line 729 "add_type.m"
                }
#line 728 "add_type.m"
                {
#line 728 "add_type.m"
                  hlds__make_hlds__add_type__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_87_87));
#line 728 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_88_88));
#line 728 "add_type.m"
                }
#line 728 "add_type.m"
                {
#line 728 "add_type.m"
                  hlds__make_hlds__add_type__Pieces_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[78])));
#line 728 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_68, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_86_86));
#line 728 "add_type.m"
                }
#line 731 "add_type.m"
                {
#line 731 "add_type.m"
                  hlds__make_hlds__add_type__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 731 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_68));
#line 731 "add_type.m"
                }
#line 731 "add_type.m"
                {
#line 731 "add_type.m"
                  hlds__make_hlds__add_type__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_100_100));
#line 731 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "add_type.m"
                }
#line 731 "add_type.m"
                {
#line 731 "add_type.m"
                  hlds__make_hlds__add_type__Msg_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 731 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_69, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_53));
#line 731 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_69, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_99_99));
#line 731 "add_type.m"
                }
#line 732 "add_type.m"
                {
#line 732 "add_type.m"
                  hlds__make_hlds__add_type__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_104_104, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_69));
#line 732 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "add_type.m"
                }
#line 732 "add_type.m"
                {
#line 732 "add_type.m"
                  hlds__make_hlds__add_type__Spec_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 732 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 732 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_70, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_104_104));
#line 732 "add_type.m"
                }
#line 733 "add_type.m"
                {
#line 733 "add_type.m"
                  hlds__make_hlds__add_type__STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_70));
#line 733 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_15));
#line 733 "add_type.m"
                }
#line 733 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_113_113 = hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_0_13;
#line 726 "add_type.m"
              }
#line 734 "add_type.m"
            else
#line 735 "add_type.m"
              {
#line 735 "add_type.m"
                MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_107_107;
#line 735 "add_type.m"
                MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_109_109;
#line 735 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_111_111;
#line 735 "add_type.m"
                MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_112_112;
#line 752 "add_type.m"
                MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_112_112;

#line 739 "add_type.m"
                {
#line 739 "add_type.m"
                  hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdB_59));
#line 739 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 739 "add_type.m"
                }
#line 747 "add_type.m"
                if ((hlds__make_hlds__add_type__NeedQual_7 == (MR_Integer) 1))
#line 744 "add_type.m"
                  {
#line 744 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_110_110;

#line 746 "add_type.m"
                    {
#line 746 "add_type.m"
                      hlds__make_hlds__add_type__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_110_110, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdB_61));
#line 746 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_107_107));
#line 746 "add_type.m"
                    }
#line 746 "add_type.m"
                    {
#line 746 "add_type.m"
                      hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdA_60));
#line 746 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_110_110));
#line 746 "add_type.m"
                    }
#line 744 "add_type.m"
                  }
#line 747 "add_type.m"
                else
#line 748 "add_type.m"
                  hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_109_109 = hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_107_107;
#line 752 "add_type.m"
                {
#line 752 "add_type.m"
                  hlds__make_hlds__add_type__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 752 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_111_111, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_6[0]));
#line 752 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_111_111, 1) = ((MR_Box) (hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0_5));
#line 752 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 752 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_111_111, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__TypeCtor_2));
#line 752 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_111_111, 4) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_55));
#line 752 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_111_111, 5) = ((MR_Box) (hlds__make_hlds__add_type__Arity_54));
#line 752 "add_type.m"
                }
#line 752 "add_type.m"
                {
#line 752 "add_type.m"
                  mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[1], hlds__make_hlds__add_type__V_111_111, hlds__make_hlds__add_type__PartialQuals_63, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_109_109)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_112_112);
                }
#line 752 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_112_112 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_112_112);
#line 756 "add_type.m"
                {
#line 756 "add_type.m"
                  hlds__hlds_data__insert_into_cons_table_5_p_0(hlds__make_hlds__add_type__QualifiedConsIdA_58, hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_112_112, hlds__make_hlds__add_type__ConsDefn_62, hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_0_13, &hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_113_113);
                }
#line 756 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_106_106 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_15;
#line 735 "add_type.m"
              }
#line 761 "add_type.m"
            {
#line 761 "add_type.m"
              hlds__make_hlds__add_type__FieldNames_73 = mercury__list__map_2_f_0(hlds__make_hlds__add_type__TypeCtorInfo_134_134, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[2], (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[1], hlds__make_hlds__add_type__Args_52);
            }
#line 763 "add_type.m"
            {
#line 763 "add_type.m"
              hlds__make_hlds__add_type__add_ctor_field_names_12_p_0(hlds__make_hlds__add_type__FieldNames_73, hlds__make_hlds__add_type__NeedQual_7, hlds__make_hlds__add_type__PartialQuals_63, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_95_49_54_95_112_95_48_95_101_110_118_95_48__TypeCtor_2, hlds__make_hlds__add_type__QualifiedConsIdA_58, hlds__make_hlds__add_type__Context_53, hlds__make_hlds__add_type__ImportStatus_10, (MR_Integer) 1, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_11, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_117_117, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_106_106, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_118_118);
            }
#line 767 "add_type.m"
            /* direct tailcall eliminated */
#line 767 "add_type.m"
            {
#line 767 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__Rest_36;
#line 767 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_11 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_117_117;
#line 767 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_0__tmp_copy_13 = hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_113_113;
#line 767 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_15 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_118_118;

#line 767 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_15 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_15;
#line 767 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_0_13 = hlds__make_hlds__add_type__STATE_VARIABLE_Ctors_0__tmp_copy_13;
#line 767 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_11 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_11;
#line 767 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 767 "add_type.m"
            }
#line 767 "add_type.m"
            continue;
#line 702 "add_type.m"
          }
#line 699 "add_type.m"
        break;
#line 699 "add_type.m"
      }
#line 692 "add_type.m"
  }
#line 692 "add_type.m"
}

#line 270 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_1(
#line 270 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 270 "add_type.m"
{
#line 270 "add_type.m"
  {
#line 270 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 270 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 270 "add_type.m"
  }
#line 270 "add_type.m"
}

#line 272 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_3(
#line 272 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 272 "add_type.m"
{
#line 272 "add_type.m"
  {
#line 272 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 272 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Var_93 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__conv0_Var_93);
#line 272 "add_type.m"
    {
#line 272 "add_type.m"
      hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 272 "add_type.m"
      return;
    }
#line 272 "add_type.m"
  }
#line 272 "add_type.m"
}

#line 273 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_4(
#line 273 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 273 "add_type.m"
{
#line 273 "add_type.m"
  {
#line 273 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 273 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_1, 1);
#line 273 "add_type.m"
  }
#line 273 "add_type.m"
}

#line 273 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_5(
#line 273 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 273 "add_type.m"
{
#line 273 "add_type.m"
  {
#line 273 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 1910 "hlds.make_hlds.add_type.c"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_281_281 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 273 "add_type.m"
    {
#line 273 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__builtin__unify_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_281_281, ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Var_93)), ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__V_279_279)));
    }
#line 273 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 273 "add_type.m"
      {
#line 273 "add_type.m"
        hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_4(hlds__make_hlds__add_type__env_ptr);
#line 273 "add_type.m"
        return;
      }
#line 273 "add_type.m"
  }
#line 273 "add_type.m"
}

#line 273 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_6(
#line 273 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 273 "add_type.m"
{
#line 273 "add_type.m"
  {
#line 273 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 273 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_1) == 0)
#line 273 "add_type.m"
      {
#line 273 "add_type.m"
        {
#line 273 "add_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__EqvType_92, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__V_279_279, hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_5, hlds__make_hlds__add_type__env_ptr);
        }
#line 273 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 273 "add_type.m"
      }
#line 273 "add_type.m"
    else
#line 273 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 273 "add_type.m"
  }
#line 273 "add_type.m"
}

#line 270 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_2(
#line 270 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 270 "add_type.m"
{
#line 270 "add_type.m"
  {
#line 270 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 273 "add_type.m"
    {
#line 273 "add_type.m"
      hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_6(hlds__make_hlds__add_type__env_ptr);
    }
#line 273 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = !((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 273 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 273 "add_type.m"
      {
#line 273 "add_type.m"
        hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 273 "add_type.m"
        return;
      }
#line 270 "add_type.m"
  }
#line 270 "add_type.m"
}

#line 270 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_7(
#line 270 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 270 "add_type.m"
{
#line 270 "add_type.m"
  {
#line 270 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 270 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 270 "add_type.m"
      {
#line 271 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 270 "add_type.m"
        if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 270 "add_type.m"
          {
#line 270 "add_type.m"
            (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52)) == (MR_mktag((MR_Integer) 2)));
#line 270 "add_type.m"
            if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 270 "add_type.m"
              {
#line 270 "add_type.m"
                (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__EqvType_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52, (MR_Integer) 0)));
#line 272 "add_type.m"
                {
#line 272 "add_type.m"
                  mercury__list__member_2_p_1((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_275_275, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__conv0_Var_93, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Args_14, hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_3, hlds__make_hlds__add_type__env_ptr);
                }
#line 270 "add_type.m"
              }
#line 270 "add_type.m"
          }
#line 270 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 270 "add_type.m"
      }
#line 270 "add_type.m"
    else
#line 270 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 270 "add_type.m"
  }
#line 270 "add_type.m"
}

#line 36 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0(
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_12,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Name_13,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Args_14,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeDefn_15,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_17,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__7_7,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_97,
#line 36 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_99,
#line 36 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100)
#line 36 "add_type.m"
{
#line 36 "add_type.m"
  {
#line 36 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s hlds__make_hlds__add_type__env;

#line 36 "add_type.m"
    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Args_14 = hlds__make_hlds__add_type__Args_14;
#line 81 "add_type.m"
    {
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Status0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__7_7, (MR_Integer) 0)));
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__NeedQual_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__7_7, (MR_Integer) 1)));
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Globals_22;
#line 81 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__Arity_23;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtor_24;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Body0_25;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Status1_36;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeTable0_46;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeOldDefn_56;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__KindMap_58;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeDefn1_59;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtorInfo_276_276;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Ctors_37;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeUserUC_38;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constructor_40;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_103_103;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_104_104;
#line 106 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_105_105;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_106_106;
#line 106 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_278_278;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type___MaybeDirectArg_39;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_271_271;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_272_272;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_273_273;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_274_274;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_41_41;
#line 154 "add_type.m"
      MR_Word hlds__make_hlds__add_type__OldDefn0_47;
#line 167 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_60_60;

#line 82 "add_type.m"
      {
#line 82 "add_type.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_97, &hlds__make_hlds__add_type__Globals_22);
      }
#line 2150 "hlds.make_hlds.add_type.c"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_275_275 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 83 "add_type.m"
      {
#line 83 "add_type.m"
        mercury__list__length_2_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_275_275, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Args_14, &hlds__make_hlds__add_type__Arity_23);
      }
#line 84 "add_type.m"
      {
#line 84 "add_type.m"
        hlds__make_hlds__add_type__TypeCtor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 84 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_24, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 84 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_24, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_23));
#line 84 "add_type.m"
      }
#line 85 "add_type.m"
      {
#line 85 "add_type.m"
        hlds__make_hlds__add_type__convert_type_defn_4_p_0(hlds__make_hlds__add_type__TypeDefn_15, hlds__make_hlds__add_type__TypeCtor_24, hlds__make_hlds__add_type__Globals_22, &hlds__make_hlds__add_type__Body0_25);
      }
#line 89 "add_type.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_25)) == (MR_mktag((MR_Integer) 1))))
#line 90 "add_type.m"
        {
#line 90 "add_type.m"
          MR_String hlds__make_hlds__add_type__V_101_101;

#line 91 "add_type.m"
          {
#line 91 "add_type.m"
            hlds__make_hlds__add_type__V_101_101 = mercury__term__context_file_1_f_0(hlds__make_hlds__add_type__Context_17);
          }
#line 91 "add_type.m"
          {
#line 91 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__suffix_2_p_0(hlds__make_hlds__add_type__V_101_101, (MR_String) ".int2");
          }
#line 90 "add_type.m"
        }
#line 89 "add_type.m"
      else
#line 89 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body0_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 88 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 89 "add_type.m"
        else
#line 89 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 98 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 97 "add_type.m"
        {
#line 97 "add_type.m"
          hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__add_type__Status0_18, &hlds__make_hlds__add_type__Status1_36);
        }
#line 98 "add_type.m"
      else
#line 99 "add_type.m"
        hlds__make_hlds__add_type__Status1_36 = hlds__make_hlds__add_type__Status0_18;
#line 106 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeDefn_15)) == (MR_mktag((MR_Integer) 0)));
#line 106 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 106 "add_type.m"
        {
#line 106 "add_type.m"
          hlds__make_hlds__add_type__Ctors_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_15, (MR_Integer) 0)));
#line 106 "add_type.m"
          hlds__make_hlds__add_type__MaybeUserUC_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_15, (MR_Integer) 1)));
#line 106 "add_type.m"
          hlds__make_hlds__add_type___MaybeDirectArg_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_15, (MR_Integer) 2)));
#line 107 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Ctors_37)) == (MR_mktag((MR_Integer) 1)));
#line 107 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 107 "add_type.m"
            {
#line 107 "add_type.m"
              hlds__make_hlds__add_type__Constructor_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_37, (MR_Integer) 0)));
#line 107 "add_type.m"
              hlds__make_hlds__add_type__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_37, (MR_Integer) 1)));
#line 107 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = (hlds__make_hlds__add_type__V_103_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 106 "add_type.m"
                {
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_40, (MR_Integer) 0)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_40, (MR_Integer) 1)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_40, (MR_Integer) 2)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_40, (MR_Integer) 3)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_40, (MR_Integer) 4)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_105_105 = (MR_Integer) 0;
#line 2252 "hlds.make_hlds.add_type.c"
                  hlds__make_hlds__add_type__TypeCtorInfo_276_276 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 108 "add_type.m"
                  {
#line 108 "add_type.m"
                    mercury__list__length_2_p_0(hlds__make_hlds__add_type__TypeCtorInfo_276_276, hlds__make_hlds__add_type__V_104_104, &hlds__make_hlds__add_type__V_278_278);
                  }
#line 108 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = (hlds__make_hlds__add_type__V_105_105 == hlds__make_hlds__add_type__V_278_278);
#line 106 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 106 "add_type.m"
                    {
#line 109 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeUserUC_38)) == (MR_mktag((MR_Integer) 1)));
#line 109 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 109 "add_type.m"
                        {
#line 109 "add_type.m"
                          hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeUserUC_38, (MR_Integer) 0)));
#line 111 "add_type.m"
                          {
#line 111 "add_type.m"
                            hlds__make_hlds__add_type__V_106_106 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__add_type__Status0_18);
                          }
#line 111 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = (hlds__make_hlds__add_type__V_106_106 == (MR_Integer) 1);
#line 109 "add_type.m"
                        }
#line 106 "add_type.m"
                    }
#line 106 "add_type.m"
                }
#line 107 "add_type.m"
            }
#line 106 "add_type.m"
        }
#line 125 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 116 "add_type.m"
        {
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMainPieces_42;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMsg_44;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummySpec_45;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_109_109;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_110_110;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_111_111;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_128_128;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_129_129;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_135_135;

#line 114 "add_type.m"
          {
#line 114 "add_type.m"
            hlds__make_hlds__add_type__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_111_111, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_23));
#line 114 "add_type.m"
          }
#line 114 "add_type.m"
          {
#line 114 "add_type.m"
            hlds__make_hlds__add_type__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_111_111));
#line 114 "add_type.m"
          }
#line 114 "add_type.m"
          {
#line 114 "add_type.m"
            hlds__make_hlds__add_type__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_110_110));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[7])));
#line 114 "add_type.m"
          }
#line 113 "add_type.m"
          {
#line 113 "add_type.m"
            hlds__make_hlds__add_type__DummyMainPieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[69])));
#line 113 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_42, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_109_109));
#line 113 "add_type.m"
          }
#line 121 "add_type.m"
          {
#line 121 "add_type.m"
            hlds__make_hlds__add_type__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMainPieces_42));
#line 121 "add_type.m"
          }
#line 121 "add_type.m"
          {
#line 121 "add_type.m"
            hlds__make_hlds__add_type__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_129_129));
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[70])));
#line 121 "add_type.m"
          }
#line 120 "add_type.m"
          {
#line 120 "add_type.m"
            hlds__make_hlds__add_type__DummyMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 120 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_44, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 120 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_44, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_128_128));
#line 120 "add_type.m"
          }
#line 123 "add_type.m"
          {
#line 123 "add_type.m"
            hlds__make_hlds__add_type__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMsg_44));
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 123 "add_type.m"
          }
#line 122 "add_type.m"
          {
#line 122 "add_type.m"
            hlds__make_hlds__add_type__DummySpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 122 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 122 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_45, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_135_135));
#line 122 "add_type.m"
          }
#line 124 "add_type.m"
          {
#line 124 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummySpec_45));
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_99));
#line 124 "add_type.m"
          }
#line 116 "add_type.m"
        }
#line 125 "add_type.m"
      else
#line 124 "add_type.m"
        hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_99;
#line 128 "add_type.m"
      {
#line 128 "add_type.m"
        hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_97, &hlds__make_hlds__add_type__TypeTable0_46);
      }
#line 132 "add_type.m"
      {
#line 132 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_type__TypeTable0_46, hlds__make_hlds__add_type__TypeCtor_24, &hlds__make_hlds__add_type__OldDefn0_47);
      }
#line 154 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 134 "add_type.m"
        {
#line 134 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldStatus_48;
#line 134 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody0_50;
#line 134 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody_51;

#line 134 "add_type.m"
          {
#line 134 "add_type.m"
            hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn0_47, &hlds__make_hlds__add_type__OldStatus_48);
          }
#line 135 "add_type.m"
          {
#line 135 "add_type.m"
            hlds__make_hlds__add_type__combine_status_3_p_0(hlds__make_hlds__add_type__Status1_36, hlds__make_hlds__add_type__OldStatus_48, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49);
          }
#line 136 "add_type.m"
          {
#line 136 "add_type.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn0_47, &hlds__make_hlds__add_type__OldBody0_50);
          }
#line 137 "add_type.m"
          {
#line 137 "add_type.m"
            hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(hlds__make_hlds__add_type__OldBody0_50, &hlds__make_hlds__add_type__OldBody_51, hlds__make_hlds__add_type__Body0_25, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52);
          }
#line 138 "add_type.m"
          {
#line 138 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(hlds__make_hlds__add_type__OldBody_51, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52);
          }
#line 150 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 144 "add_type.m"
            {
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverPieces_53;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverMsg_54;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverSpec_55;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_140_140;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_141_141;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_142_142;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_161_161;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_162_162;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_166_166;

#line 142 "add_type.m"
              {
#line 142 "add_type.m"
                hlds__make_hlds__add_type__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_142_142, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_23));
#line 142 "add_type.m"
              }
#line 142 "add_type.m"
              {
#line 142 "add_type.m"
                hlds__make_hlds__add_type__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_141_141, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_142_142));
#line 142 "add_type.m"
              }
#line 142 "add_type.m"
              {
#line 142 "add_type.m"
                hlds__make_hlds__add_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_140_140, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_141_141));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[23])));
#line 142 "add_type.m"
              }
#line 141 "add_type.m"
              {
#line 141 "add_type.m"
                hlds__make_hlds__add_type__SolverPieces_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71])));
#line 141 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_53, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_140_140));
#line 141 "add_type.m"
              }
#line 145 "add_type.m"
              {
#line 145 "add_type.m"
                hlds__make_hlds__add_type__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverPieces_53));
#line 145 "add_type.m"
              }
#line 145 "add_type.m"
              {
#line 145 "add_type.m"
                hlds__make_hlds__add_type__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_162_162));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "add_type.m"
              }
#line 145 "add_type.m"
              {
#line 145 "add_type.m"
                hlds__make_hlds__add_type__SolverMsg_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_54, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_54, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_161_161));
#line 145 "add_type.m"
              }
#line 147 "add_type.m"
              {
#line 147 "add_type.m"
                hlds__make_hlds__add_type__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_166_166, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverMsg_54));
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_166_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "add_type.m"
              }
#line 146 "add_type.m"
              {
#line 146 "add_type.m"
                hlds__make_hlds__add_type__SolverSpec_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_55, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_166_166));
#line 146 "add_type.m"
              }
#line 148 "add_type.m"
              {
#line 148 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverSpec_55));
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137));
#line 148 "add_type.m"
              }
#line 149 "add_type.m"
              hlds__make_hlds__add_type__MaybeOldDefn_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 144 "add_type.m"
            }
#line 150 "add_type.m"
          else
#line 151 "add_type.m"
            {
#line 151 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn_57;

#line 151 "add_type.m"
              {
#line 151 "add_type.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_type__OldBody_51, hlds__make_hlds__add_type__OldDefn0_47, &hlds__make_hlds__add_type__OldDefn_57);
              }
#line 152 "add_type.m"
              {
#line 152 "add_type.m"
                hlds__make_hlds__add_type__MaybeOldDefn_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 152 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_56, 0) = ((MR_Box) (hlds__make_hlds__add_type__OldDefn_57));
#line 152 "add_type.m"
              }
#line 152 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137;
#line 151 "add_type.m"
            }
#line 134 "add_type.m"
        }
#line 154 "add_type.m"
      else
#line 155 "add_type.m"
        {
#line 155 "add_type.m"
          hlds__make_hlds__add_type__MaybeOldDefn_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49 = hlds__make_hlds__add_type__Status1_36;
#line 157 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52 = hlds__make_hlds__add_type__Body0_25;
#line 157 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137;
#line 155 "add_type.m"
        }
#line 162 "add_type.m"
      {
#line 162 "add_type.m"
        mercury__map__init_1_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_275_275, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &hlds__make_hlds__add_type__KindMap_58);
      }
#line 163 "add_type.m"
      {
#line 163 "add_type.m"
        hlds__hlds_data__set_type_defn_9_p_0(hlds__make_hlds__add_type__TVarSet_12, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Args_14, hlds__make_hlds__add_type__KindMap_58, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49, (MR_Integer) 0, hlds__make_hlds__add_type__NeedQual_19, hlds__make_hlds__add_type__Context_17, &hlds__make_hlds__add_type__TypeDefn1_59);
      }
#line 166 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = (hlds__make_hlds__add_type__MaybeOldDefn_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 166 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 166 "add_type.m"
        {
#line 167 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52)) == (MR_mktag((MR_Integer) 0)));
#line 167 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 167 "add_type.m"
            hlds__make_hlds__add_type__V_60_60 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52), (MR_Integer) 0);
#line 166 "add_type.m"
        }
#line 176 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 171 "add_type.m"
        {
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclPieces_61;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclMsg_62;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclSpec_63;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_172_172;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_173_173;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_174_174;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_179_179;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_180_180;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_184_184;

#line 170 "add_type.m"
          {
#line 170 "add_type.m"
            hlds__make_hlds__add_type__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_174_174, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_174_174, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_23));
#line 170 "add_type.m"
          }
#line 170 "add_type.m"
          {
#line 170 "add_type.m"
            hlds__make_hlds__add_type__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_173_173, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_174_174));
#line 170 "add_type.m"
          }
#line 170 "add_type.m"
          {
#line 170 "add_type.m"
            hlds__make_hlds__add_type__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_172_172, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_173_173));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[74])));
#line 170 "add_type.m"
          }
#line 169 "add_type.m"
          {
#line 169 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclPieces_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[72])));
#line 169 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_61, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_172_172));
#line 169 "add_type.m"
          }
#line 172 "add_type.m"
          {
#line 172 "add_type.m"
            hlds__make_hlds__add_type__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_180_180, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclPieces_61));
#line 172 "add_type.m"
          }
#line 172 "add_type.m"
          {
#line 172 "add_type.m"
            hlds__make_hlds__add_type__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_180_180));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 172 "add_type.m"
          }
#line 172 "add_type.m"
          {
#line 172 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclMsg_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_62, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_62, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_179_179));
#line 172 "add_type.m"
          }
#line 174 "add_type.m"
          {
#line 174 "add_type.m"
            hlds__make_hlds__add_type__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_184_184, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclMsg_62));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 174 "add_type.m"
          }
#line 173 "add_type.m"
          {
#line 173 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclSpec_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_63, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_184_184));
#line 173 "add_type.m"
          }
#line 175 "add_type.m"
          {
#line 175 "add_type.m"
            MR_Word base;
#line 175 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100 = base;
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclSpec_63));
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168));
#line 175 "add_type.m"
          }
#line 175 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_97;
#line 171 "add_type.m"
        }
#line 176 "add_type.m"
      else
#line 192 "add_type.m"
        {
#line 177 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldDefn1_64;
#line 177 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldStatus1_66;
#line 177 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody1_67;
#line 177 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_187_187;
#line 177 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_188_188;
#line 178 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_65_65;
#line 181 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_68_68;

#line 178 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52)) == (MR_mktag((MR_Integer) 0)));
#line 178 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 178 "add_type.m"
            {
#line 178 "add_type.m"
              hlds__make_hlds__add_type__V_65_65 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52), (MR_Integer) 0);
#line 177 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_56)) == (MR_mktag((MR_Integer) 1)));
#line 177 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 177 "add_type.m"
                {
#line 177 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn1_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_56, (MR_Integer) 0)));
#line 179 "add_type.m"
                  {
#line 179 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn1_64, &hlds__make_hlds__add_type__OldStatus1_66);
                  }
#line 180 "add_type.m"
                  {
#line 180 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn1_64, &hlds__make_hlds__add_type__OldBody1_67);
                  }
#line 181 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody1_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_67, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 181 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 181 "add_type.m"
                    {
#line 181 "add_type.m"
                      hlds__make_hlds__add_type__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_67, (MR_Integer) 1)));
#line 182 "add_type.m"
                      {
#line 182 "add_type.m"
                        hlds__make_hlds__add_type__V_187_187 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus1_66);
                      }
#line 182 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = (hlds__make_hlds__add_type__V_187_187 == (MR_Integer) 0);
#line 177 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 177 "add_type.m"
                        {
#line 183 "add_type.m"
                          {
#line 183 "add_type.m"
                            hlds__make_hlds__add_type__V_188_188 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__Status0_18);
                          }
#line 183 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = (hlds__make_hlds__add_type__V_188_188 == (MR_Integer) 1);
#line 177 "add_type.m"
                        }
#line 181 "add_type.m"
                    }
#line 177 "add_type.m"
                }
#line 178 "add_type.m"
            }
#line 192 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 187 "add_type.m"
            {
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisPieces_69;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisMsg_70;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisSpec_71;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_191_191;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_192_192;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_193_193;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_198_198;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_199_199;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_203_203;

#line 186 "add_type.m"
              {
#line 186 "add_type.m"
                hlds__make_hlds__add_type__V_193_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_193_193, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_193_193, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_23));
#line 186 "add_type.m"
              }
#line 186 "add_type.m"
              {
#line 186 "add_type.m"
                hlds__make_hlds__add_type__V_192_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_192_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_192_192, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_193_193));
#line 186 "add_type.m"
              }
#line 186 "add_type.m"
              {
#line 186 "add_type.m"
                hlds__make_hlds__add_type__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_191_191, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_192_192));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[77])));
#line 186 "add_type.m"
              }
#line 185 "add_type.m"
              {
#line 185 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisPieces_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[75])));
#line 185 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_69, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_191_191));
#line 185 "add_type.m"
              }
#line 188 "add_type.m"
              {
#line 188 "add_type.m"
                hlds__make_hlds__add_type__V_199_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisPieces_69));
#line 188 "add_type.m"
              }
#line 188 "add_type.m"
              {
#line 188 "add_type.m"
                hlds__make_hlds__add_type__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_198_198, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_199_199));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_198_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 188 "add_type.m"
              }
#line 188 "add_type.m"
              {
#line 188 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisMsg_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_70, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_70, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_198_198));
#line 188 "add_type.m"
              }
#line 190 "add_type.m"
              {
#line 190 "add_type.m"
                hlds__make_hlds__add_type__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_203_203, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisMsg_70));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "add_type.m"
              }
#line 189 "add_type.m"
              {
#line 189 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisSpec_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_71, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_203_203));
#line 189 "add_type.m"
              }
#line 191 "add_type.m"
              {
#line 191 "add_type.m"
                MR_Word base;
#line 191 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "add_type.m"
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100 = base;
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisSpec_71));
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168));
#line 191 "add_type.m"
              }
#line 191 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_97;
#line 187 "add_type.m"
            }
#line 192 "add_type.m"
          else
#line 261 "add_type.m"
            {
#line 261 "add_type.m"
              MR_Word hlds__make_hlds__add_type__TVarSet_2_73;
#line 261 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Params_2_74;
#line 261 "add_type.m"
              MR_Word hlds__make_hlds__add_type__KindMap_2_75;
#line 261 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body_2_76;
#line 261 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigContext_77;
#line 261 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigStatus_78;
#line 261 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigInExportedEqv_79;
#line 261 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigNeedQual_80;
#line 194 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn2_72;
#line 203 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_81_81;

#line 194 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_56)) == (MR_mktag((MR_Integer) 1)));
#line 194 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 194 "add_type.m"
                {
#line 194 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn2_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_56, (MR_Integer) 0)));
#line 195 "add_type.m"
                  {
#line 195 "add_type.m"
                    hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__TVarSet_2_73);
                  }
#line 196 "add_type.m"
                  {
#line 196 "add_type.m"
                    hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__Params_2_74);
                  }
#line 197 "add_type.m"
                  {
#line 197 "add_type.m"
                    hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__KindMap_2_75);
                  }
#line 198 "add_type.m"
                  {
#line 198 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__Body_2_76);
                  }
#line 199 "add_type.m"
                  {
#line 199 "add_type.m"
                    hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigContext_77);
                  }
#line 200 "add_type.m"
                  {
#line 200 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigStatus_78);
                  }
#line 201 "add_type.m"
                  {
#line 201 "add_type.m"
                    hlds__hlds_data__get_type_defn_in_exported_eqv_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigInExportedEqv_79);
                  }
#line 202 "add_type.m"
                  {
#line 202 "add_type.m"
                    hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigNeedQual_80);
                  }
#line 203 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_2_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_2_76, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 203 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 203 "add_type.m"
                    hlds__make_hlds__add_type__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_2_76, (MR_Integer) 1)));
#line 203 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = !((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 194 "add_type.m"
                }
#line 261 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 205 "add_type.m"
                {
#line 205 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__Target_82;
#line 205 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MakeOptInt_83;
#line 205 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_207_207;
#line 208 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_84_84;
#line 216 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_85_85;

#line 205 "add_type.m"
                  {
#line 205 "add_type.m"
                    libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_22, &hlds__make_hlds__add_type__Target_82);
                  }
#line 206 "add_type.m"
                  {
#line 206 "add_type.m"
                    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_type__Globals_22, (MR_Integer) 85, &hlds__make_hlds__add_type__MakeOptInt_83);
                  }
#line 208 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52)) == (MR_mktag((MR_Integer) 0)));
#line 208 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 208 "add_type.m"
                    {
#line 208 "add_type.m"
                      hlds__make_hlds__add_type__V_84_84 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52), (MR_Integer) 0);
#line 209 "add_type.m"
                      {
#line 209 "add_type.m"
                        hlds__hlds_module__module_info_set_contains_foreign_type_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_97, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_207_207);
                      }
#line 208 "add_type.m"
                    }
#line 208 "add_type.m"
                  else
#line 209 "add_type.m"
                    hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_207_207 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_97;
#line 216 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 216 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 216 "add_type.m"
                    {
#line 216 "add_type.m"
                      hlds__make_hlds__add_type__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52, (MR_Integer) 1)));
#line 218 "add_type.m"
                      {
#line 218 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__hlds_pred____Unify____import_status_0_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49, hlds__make_hlds__add_type__OrigStatus_78);
                      }
#line 220 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 218 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_207_207;
#line 220 "add_type.m"
                      else
#line 223 "add_type.m"
                        {
#line 223 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeDefn3_86;
#line 223 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeTable_87;

#line 221 "add_type.m"
                          {
#line 221 "add_type.m"
                            hlds__hlds_data__set_type_defn_9_p_0(hlds__make_hlds__add_type__TVarSet_2_73, hlds__make_hlds__add_type__Params_2_74, hlds__make_hlds__add_type__KindMap_2_75, hlds__make_hlds__add_type__Body_2_76, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49, hlds__make_hlds__add_type__OrigInExportedEqv_79, hlds__make_hlds__add_type__OrigNeedQual_80, hlds__make_hlds__add_type__OrigContext_77, &hlds__make_hlds__add_type__TypeDefn3_86);
                          }
#line 224 "add_type.m"
                          {
#line 224 "add_type.m"
                            hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_24, hlds__make_hlds__add_type__TypeDefn3_86, hlds__make_hlds__add_type__TypeTable0_46, &hlds__make_hlds__add_type__TypeTable_87);
                          }
#line 226 "add_type.m"
                          {
#line 226 "add_type.m"
                            hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_87, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_207_207, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98);
                          }
#line 223 "add_type.m"
                        }
#line 226 "add_type.m"
                      *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168;
#line 216 "add_type.m"
                    }
#line 216 "add_type.m"
                  else
#line 250 "add_type.m"
                    {
#line 250 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__NewBody_88;

#line 229 "add_type.m"
                      {
#line 229 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(hlds__make_hlds__add_type__Target_82, hlds__make_hlds__add_type__MakeOptInt_83, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52, hlds__make_hlds__add_type__Body_2_76, &hlds__make_hlds__add_type__NewBody_88);
                      }
#line 250 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 239 "add_type.m"
                        {
#line 232 "add_type.m"
                          {
#line 232 "add_type.m"
                            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(hlds__make_hlds__add_type__OrigStatus_78, hlds__make_hlds__add_type__Status1_36);
                          }
#line 239 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 235 "add_type.m"
                            {
#line 235 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeDefn3_264;
#line 235 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeTable_265;

#line 233 "add_type.m"
                              {
#line 233 "add_type.m"
                                hlds__hlds_data__set_type_defn_9_p_0(hlds__make_hlds__add_type__TVarSet_2_73, hlds__make_hlds__add_type__Params_2_74, hlds__make_hlds__add_type__KindMap_2_75, hlds__make_hlds__add_type__NewBody_88, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49, hlds__make_hlds__add_type__OrigInExportedEqv_79, hlds__make_hlds__add_type__NeedQual_19, hlds__make_hlds__add_type__Context_17, &hlds__make_hlds__add_type__TypeDefn3_264);
                              }
#line 236 "add_type.m"
                              {
#line 236 "add_type.m"
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_24, hlds__make_hlds__add_type__TypeDefn3_264, hlds__make_hlds__add_type__TypeTable0_46, &hlds__make_hlds__add_type__TypeTable_265);
                              }
#line 238 "add_type.m"
                              {
#line 238 "add_type.m"
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_265, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_207_207, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98);
                              }
#line 238 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168;
#line 235 "add_type.m"
                            }
#line 239 "add_type.m"
                          else
#line 240 "add_type.m"
                            {
#line 240 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisPieces_89;
#line 240 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisMsg_90;
#line 240 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisSpec_91;
#line 240 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_213_213;
#line 240 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_214_214;
#line 240 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_215_215;
#line 240 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_228_228;
#line 240 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_229_229;
#line 240 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_233_233;

#line 240 "add_type.m"
                              {
#line 240 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_207_207, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98);
                              }
#line 242 "add_type.m"
                              {
#line 242 "add_type.m"
                                hlds__make_hlds__add_type__V_215_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_215_215, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 242 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_215_215, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_23));
#line 242 "add_type.m"
                              }
#line 242 "add_type.m"
                              {
#line 242 "add_type.m"
                                hlds__make_hlds__add_type__V_214_214 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_214_214, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 242 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_214_214, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_215_215));
#line 242 "add_type.m"
                              }
#line 242 "add_type.m"
                              {
#line 242 "add_type.m"
                                hlds__make_hlds__add_type__V_213_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_213_213, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_214_214));
#line 242 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_213_213, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[29])));
#line 242 "add_type.m"
                              }
#line 241 "add_type.m"
                              {
#line 241 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisPieces_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71])));
#line 241 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_89, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_213_213));
#line 241 "add_type.m"
                              }
#line 245 "add_type.m"
                              {
#line 245 "add_type.m"
                                hlds__make_hlds__add_type__V_229_229 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_229_229, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisPieces_89));
#line 245 "add_type.m"
                              }
#line 245 "add_type.m"
                              {
#line 245 "add_type.m"
                                hlds__make_hlds__add_type__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_228_228, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_229_229));
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_228_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "add_type.m"
                              }
#line 245 "add_type.m"
                              {
#line 245 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisMsg_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_90, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_90, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_228_228));
#line 245 "add_type.m"
                              }
#line 247 "add_type.m"
                              {
#line 247 "add_type.m"
                                hlds__make_hlds__add_type__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_233_233, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisMsg_90));
#line 247 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_233_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "add_type.m"
                              }
#line 246 "add_type.m"
                              {
#line 246 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisSpec_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_91, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_233_233));
#line 246 "add_type.m"
                              }
#line 248 "add_type.m"
                              {
#line 248 "add_type.m"
                                MR_Word base;
#line 248 "add_type.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "add_type.m"
                                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100 = base;
#line 248 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisSpec_91));
#line 248 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168));
#line 248 "add_type.m"
                              }
#line 240 "add_type.m"
                            }
#line 239 "add_type.m"
                        }
#line 250 "add_type.m"
                      else
#line 256 "add_type.m"
                        {
#line 253 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 255 "add_type.m"
                            {
#line 255 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168;
#line 255 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_207_207;
#line 255 "add_type.m"
                            }
#line 256 "add_type.m"
                          else
#line 257 "add_type.m"
                            {
#line 257 "add_type.m"
                              {
#line 257 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_207_207, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98);
                              }
#line 258 "add_type.m"
                              {
#line 258 "add_type.m"
                                hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49, hlds__make_hlds__add_type__Name_13, hlds__make_hlds__add_type__Arity_23, (MR_String) "type", hlds__make_hlds__add_type__Context_17, hlds__make_hlds__add_type__OrigContext_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100);
#line 258 "add_type.m"
                                return;
                              }
#line 257 "add_type.m"
                            }
#line 256 "add_type.m"
                        }
#line 250 "add_type.m"
                    }
#line 205 "add_type.m"
                }
#line 261 "add_type.m"
              else
#line 263 "add_type.m"
                {
#line 263 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__TypeTable_270;

#line 262 "add_type.m"
                  {
#line 262 "add_type.m"
                    hlds__hlds_data__add_or_replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_24, hlds__make_hlds__add_type__TypeDefn1_59, hlds__make_hlds__add_type__TypeTable0_46, &hlds__make_hlds__add_type__TypeTable_270);
                  }
#line 264 "add_type.m"
                  {
#line 264 "add_type.m"
                    hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_270, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_97, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98);
                  }
#line 270 "add_type.m"
                  {
#line 270 "add_type.m"
                    hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_7(&hlds__make_hlds__add_type__env);
                  }
#line 285 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 278 "add_type.m"
                    {
#line 278 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvMsg_95;
#line 278 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvSpec_96;
#line 278 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_253_253;
#line 278 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_255_255;
#line 278 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_256_256;
#line 278 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_257_257;
#line 278 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_261_261;

#line 281 "add_type.m"
                      {
#line 281 "add_type.m"
                        hlds__make_hlds__add_type__V_257_257 = hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0();
                      }
#line 281 "add_type.m"
                      {
#line 281 "add_type.m"
                        hlds__make_hlds__add_type__V_256_256 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 281 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_256_256, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_257_257));
#line 281 "add_type.m"
                      }
#line 281 "add_type.m"
                      {
#line 281 "add_type.m"
                        hlds__make_hlds__add_type__V_255_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_255_255, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_256_256));
#line 281 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_255_255, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "add_type.m"
                      }
#line 280 "add_type.m"
                      {
#line 280 "add_type.m"
                        hlds__make_hlds__add_type__V_253_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_253_253, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_3[6]));
#line 280 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_253_253, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_255_255));
#line 280 "add_type.m"
                      }
#line 279 "add_type.m"
                      {
#line 279 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvMsg_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_95, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 279 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_95, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_253_253));
#line 279 "add_type.m"
                      }
#line 283 "add_type.m"
                      {
#line 283 "add_type.m"
                        hlds__make_hlds__add_type__V_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_261_261, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvMsg_95));
#line 283 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_261_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "add_type.m"
                      }
#line 282 "add_type.m"
                      {
#line 282 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvSpec_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 282 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 282 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_96, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_261_261));
#line 282 "add_type.m"
                      }
#line 284 "add_type.m"
                      {
#line 284 "add_type.m"
                        MR_Word base;
#line 284 "add_type.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100 = base;
#line 284 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvSpec_96));
#line 284 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168));
#line 284 "add_type.m"
                      }
#line 278 "add_type.m"
                    }
#line 285 "add_type.m"
                  else
#line 284 "add_type.m"
                    *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168;
#line 263 "add_type.m"
                }
#line 261 "add_type.m"
            }
#line 192 "add_type.m"
        }
#line 81 "add_type.m"
    }
#line 36 "add_type.m"
  }
#line 36 "add_type.m"
}

#line 761 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__ctors_add__761__1_1_f_0(
#line 761 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_115)
#line 761 "add_type.m"
{
#line 761 "add_type.m"
  {
#line 761 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 761 "add_type.m"
    MR_Word hlds__make_hlds__add_type__HeadVar__2_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_115, (MR_Integer) 0)));
#line 761 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_115, (MR_Integer) 1)));
#line 761 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_115, (MR_Integer) 2)));
#line 761 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_115, (MR_Integer) 3)));

#line 761 "add_type.m"
    return hlds__make_hlds__add_type__HeadVar__2_116;
#line 761 "add_type.m"
  }
#line 761 "add_type.m"
}

#line 862 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 862 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 862 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 862 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 862 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 862 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11)
#line 862 "add_type.m"
{
#line 865 "add_type.m"
  {
#line 865 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 865 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_12_12;

#line 866 "add_type.m"
    {
#line 866 "add_type.m"
      hlds__make_hlds__add_type__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleName_8));
#line 866 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldName_6));
#line 866 "add_type.m"
    }
#line 866 "add_type.m"
    {
#line 866 "add_type.m"
      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_12_12)), ((MR_Box) (hlds__make_hlds__add_type__FieldNameDefn_7)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);
#line 866 "add_type.m"
      return;
    }
#line 865 "add_type.m"
  }
#line 862 "add_type.m"
}

#line 858 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 858 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 858 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 858 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 858 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 858 "add_type.m"
{
#line 858 "add_type.m"
  {
#line 858 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 858 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11;

#line 858 "add_type.m"
    {
#line 858 "add_type.m"
      hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11);
    }
#line 858 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11));
#line 858 "add_type.m"
  }
#line 858 "add_type.m"
}

#line 803 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 803 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 803 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 803 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41)
#line 803 "add_type.m"
{
#line 809 "add_type.m"
  {
#line 809 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 809 "add_type.m"
    MR_Word hlds__make_hlds__add_type__FieldModule_17;
#line 844 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConflictingDefns_19;
#line 823 "add_type.m"
    MR_Box hlds__make_hlds__add_type__conv0_ConflictingDefns_19;

#line 813 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__FieldName_9)) == (MR_mktag((MR_Integer) 1))))
#line 811 "add_type.m"
      {
#line 811 "add_type.m"
        MR_String hlds__make_hlds__add_type__V_16_16;

#line 811 "add_type.m"
        hlds__make_hlds__add_type__FieldModule_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 0)));
#line 811 "add_type.m"
        hlds__make_hlds__add_type__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 1)));
#line 811 "add_type.m"
      }
#line 813 "add_type.m"
    else
#line 814 "add_type.m"
      {
#line 815 "add_type.m"
        {
#line 815 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "unqualified field name");
#line 815 "add_type.m"
          return;
        }
#line 814 "add_type.m"
      }
#line 823 "add_type.m"
    {
#line 823 "add_type.m"
      hlds__make_hlds__add_type__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[3], hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, ((MR_Box) (hlds__make_hlds__add_type__FieldName_9)), &hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
    }
#line 823 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 823 "add_type.m"
      {
#line 823 "add_type.m"
        hlds__make_hlds__add_type__ConflictingDefns_19 = ((MR_Word) hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
#line 823 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 823 "add_type.m"
      }
#line 844 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 829 "add_type.m"
      {
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__OrigContext_21;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Context_26;
#line 829 "add_type.m"
        MR_String hlds__make_hlds__add_type__FieldString_31;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Pieces_32;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Msg1_33;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevPieces_34;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Msg2_35;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Spec_36;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_51_51;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_52_52;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_57_57;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_58_58;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_62_62;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_68_68;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_69_69;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_73_73;
#line 829 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_74_74;
#line 827 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ConflictingDefn_20;
#line 825 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_45_45;
#line 833 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_27_27;
#line 833 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_28_28;
#line 833 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_29_29;
#line 833 "add_type.m"
        MR_Integer hlds__make_hlds__add_type__V_30_30;

#line 825 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__ConflictingDefns_19)) == (MR_mktag((MR_Integer) 1)));
#line 825 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 825 "add_type.m"
          {
#line 825 "add_type.m"
            hlds__make_hlds__add_type__ConflictingDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 0)));
#line 825 "add_type.m"
            hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 1)));
#line 825 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "add_type.m"
          }
#line 827 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 826 "add_type.m"
          {
#line 826 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_22_22;
#line 826 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_23_23;
#line 826 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_24_24;
#line 826 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_25_25;

#line 826 "add_type.m"
            hlds__make_hlds__add_type__OrigContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 0)));
#line 826 "add_type.m"
            hlds__make_hlds__add_type__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 1)));
#line 826 "add_type.m"
            hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 2)));
#line 826 "add_type.m"
            hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 3)));
#line 826 "add_type.m"
            hlds__make_hlds__add_type__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 4)));
#line 826 "add_type.m"
          }
#line 827 "add_type.m"
        else
#line 828 "add_type.m"
          {
#line 828 "add_type.m"
            {
#line 828 "add_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "multiple conflicting fields");
#line 828 "add_type.m"
              return;
            }
#line 828 "add_type.m"
          }
#line 833 "add_type.m"
        hlds__make_hlds__add_type__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 0)));
#line 833 "add_type.m"
        hlds__make_hlds__add_type__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 1)));
#line 833 "add_type.m"
        hlds__make_hlds__add_type__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 2)));
#line 833 "add_type.m"
        hlds__make_hlds__add_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 3)));
#line 833 "add_type.m"
        hlds__make_hlds__add_type__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 4)));
#line 834 "add_type.m"
        {
#line 834 "add_type.m"
          hlds__make_hlds__add_type__FieldString_31 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 835 "add_type.m"
        {
#line 835 "add_type.m"
          hlds__make_hlds__add_type__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 835 "add_type.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldString_31));
#line 835 "add_type.m"
        }
#line 835 "add_type.m"
        {
#line 835 "add_type.m"
          hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 835 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[65])));
#line 835 "add_type.m"
        }
#line 835 "add_type.m"
        {
#line 835 "add_type.m"
          hlds__make_hlds__add_type__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
#line 835 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 835 "add_type.m"
        }
#line 837 "add_type.m"
        {
#line 837 "add_type.m"
          hlds__make_hlds__add_type__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 837 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_32));
#line 837 "add_type.m"
        }
#line 837 "add_type.m"
        {
#line 837 "add_type.m"
          hlds__make_hlds__add_type__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_58_58));
#line 837 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 837 "add_type.m"
        }
#line 837 "add_type.m"
        {
#line 837 "add_type.m"
          hlds__make_hlds__add_type__Msg1_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 837 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg1_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_26));
#line 837 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg1_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_57_57));
#line 837 "add_type.m"
        }
#line 839 "add_type.m"
        {
#line 839 "add_type.m"
          hlds__make_hlds__add_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 839 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[68])));
#line 839 "add_type.m"
        }
#line 838 "add_type.m"
        {
#line 838 "add_type.m"
          hlds__make_hlds__add_type__PrevPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[66])));
#line 838 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_62_62));
#line 838 "add_type.m"
        }
#line 840 "add_type.m"
        {
#line 840 "add_type.m"
          hlds__make_hlds__add_type__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 840 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevPieces_34));
#line 840 "add_type.m"
        }
#line 840 "add_type.m"
        {
#line 840 "add_type.m"
          hlds__make_hlds__add_type__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_69_69));
#line 840 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "add_type.m"
        }
#line 840 "add_type.m"
        {
#line 840 "add_type.m"
          hlds__make_hlds__add_type__Msg2_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg2_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__OrigContext_21));
#line 840 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg2_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_68_68));
#line 840 "add_type.m"
        }
#line 842 "add_type.m"
        {
#line 842 "add_type.m"
          hlds__make_hlds__add_type__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg2_35));
#line 842 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "add_type.m"
        }
#line 842 "add_type.m"
        {
#line 842 "add_type.m"
          hlds__make_hlds__add_type__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg1_33));
#line 842 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_74_74));
#line 842 "add_type.m"
        }
#line 841 "add_type.m"
        {
#line 841 "add_type.m"
          hlds__make_hlds__add_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 841 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 841 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 841 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_73_73));
#line 841 "add_type.m"
        }
#line 843 "add_type.m"
        {
#line 843 "add_type.m"
          MR_Word base;
#line 843 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = base;
#line 843 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_36));
#line 843 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40));
#line 843 "add_type.m"
        }
#line 843 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 829 "add_type.m"
      }
#line 844 "add_type.m"
    else
#line 845 "add_type.m"
      {
#line 845 "add_type.m"
        MR_String hlds__make_hlds__add_type__UnqualFieldName_37;
#line 845 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_78_78;
#line 845 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_79_79;
#line 845 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_80_80;
#line 858 "add_type.m"
        MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39;

#line 845 "add_type.m"
        {
#line 845 "add_type.m"
          hlds__make_hlds__add_type__UnqualFieldName_37 = mdbcomp__prim_data__unqualify_name_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 853 "add_type.m"
        if ((hlds__make_hlds__add_type__NeedQual_11 == (MR_Integer) 1))
#line 850 "add_type.m"
          {
#line 850 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_77_77;

#line 851 "add_type.m"
            {
#line 851 "add_type.m"
              hlds__make_hlds__add_type__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 851 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 851 "add_type.m"
            }
#line 851 "add_type.m"
            {
#line 851 "add_type.m"
              mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_77_77)), ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_78_78);
            }
#line 850 "add_type.m"
          }
#line 853 "add_type.m"
        else
#line 854 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_78_78 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 858 "add_type.m"
        {
#line 858 "add_type.m"
          hlds__make_hlds__add_type__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 858 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_79_79, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[0]));
#line 858 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1));
#line 858 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 858 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_79_79, 3) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 858 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_79_79, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10));
#line 858 "add_type.m"
        }
#line 859 "add_type.m"
        {
#line 859 "add_type.m"
          hlds__make_hlds__add_type__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldModule_17));
#line 859 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_type__PartialQuals_12));
#line 859 "add_type.m"
        }
#line 858 "add_type.m"
        {
#line 858 "add_type.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[0], hlds__make_hlds__add_type__V_79_79, hlds__make_hlds__add_type__V_80_80, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_78_78)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
        }
#line 858 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
#line 858 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40;
#line 845 "add_type.m"
      }
#line 809 "add_type.m"
  }
#line 803 "add_type.m"
}

#line 780 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_12_p_0(
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_6,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_7,
#line 780 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_8,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_9,
#line 780 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_10,
#line 780 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_11,
#line 780 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_12)
#line 780 "add_type.m"
{
#line 786 "add_type.m"
  while (MR_TRUE)
#line 786 "add_type.m"
    {
#line 786 "add_type.m"
      /* tailcall optimized into a loop */
#line 786 "add_type.m"
      {
#line 786 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 786 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "add_type.m"
          {
#line 786 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_12 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_11;
#line 786 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_9;
#line 786 "add_type.m"
          }
#line 786 "add_type.m"
        else
#line 789 "add_type.m"
          {
#line 789 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeFieldName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 789 "add_type.m"
            MR_Word hlds__make_hlds__add_type__FieldNames_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 789 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_43_43;
#line 789 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_44_44;
#line 789 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_45_45;

#line 796 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeFieldName_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "add_type.m"
              {
#line 797 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_43_43 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_9;
#line 797 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_44_44 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_11;
#line 797 "add_type.m"
              }
#line 796 "add_type.m"
            else
#line 791 "add_type.m"
              {
#line 791 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeFieldName_26, (MR_Integer) 0)));
#line 791 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldDefn_38;

#line 792 "add_type.m"
                {
#line 792 "add_type.m"
                  hlds__make_hlds__add_type__FieldDefn_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 792 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_38, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_6));
#line 792 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__ImportStatus_7));
#line 792 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_38, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_4));
#line 792 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_38, 3) = ((MR_Box) (hlds__make_hlds__add_type__ConsId_5));
#line 792 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_38, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldNumber_8));
#line 792 "add_type.m"
                }
#line 794 "add_type.m"
                {
#line 794 "add_type.m"
                  hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(hlds__make_hlds__add_type__FieldName_37, hlds__make_hlds__add_type__FieldDefn_38, hlds__make_hlds__add_type__NeedQual_2, hlds__make_hlds__add_type__PartialQuals_3, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_9, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_43_43, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_11, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_44_44);
                }
#line 791 "add_type.m"
              }
#line 800 "add_type.m"
            hlds__make_hlds__add_type__V_45_45 = (hlds__make_hlds__add_type__FieldNumber_8 + (MR_Integer) 1);
#line 799 "add_type.m"
            /* direct tailcall eliminated */
#line 799 "add_type.m"
            {
#line 799 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__FieldNames_27;
#line 799 "add_type.m"
              MR_Integer hlds__make_hlds__add_type__FieldNumber__tmp_copy_8 = hlds__make_hlds__add_type__V_45_45;
#line 799 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_9 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_43_43;
#line 799 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_11 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_44_44;

#line 799 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_11 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_11;
#line 799 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_9 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_9;
#line 799 "add_type.m"
              hlds__make_hlds__add_type__FieldNumber_8 = hlds__make_hlds__add_type__FieldNumber__tmp_copy_8;
#line 799 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 799 "add_type.m"
            }
#line 799 "add_type.m"
            continue;
#line 789 "add_type.m"
          }
#line 786 "add_type.m"
      }
#line 786 "add_type.m"
      break;
#line 786 "add_type.m"
    }
#line 780 "add_type.m"
}

#line 771 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 771 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 771 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 771 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 771 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 771 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 771 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15)
#line 771 "add_type.m"
{
#line 774 "add_type.m"
  {
#line 774 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 774 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdA_12;
#line 774 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdB_13;
#line 774 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_16_16;
#line 774 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_18_18;
#line 774 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_20_20;

#line 775 "add_type.m"
    {
#line 775 "add_type.m"
      hlds__make_hlds__add_type__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleQual_10));
#line 775 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_type__ConsName_8));
#line 775 "add_type.m"
    }
#line 775 "add_type.m"
    {
#line 775 "add_type.m"
      hlds__make_hlds__add_type__ConsIdA_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 775 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 775 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 775 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 775 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 3) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_7));
#line 775 "add_type.m"
    }
#line 777 "add_type.m"
    {
#line 777 "add_type.m"
      hlds__make_hlds__add_type__V_18_18 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 776 "add_type.m"
    {
#line 776 "add_type.m"
      hlds__make_hlds__add_type__ConsIdB_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 776 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 776 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 776 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 776 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_18_18));
#line 776 "add_type.m"
    }
#line 778 "add_type.m"
    {
#line 778 "add_type.m"
      hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdB_13));
#line 778 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14));
#line 778 "add_type.m"
    }
#line 778 "add_type.m"
    {
#line 778 "add_type.m"
      MR_Word base;
#line 778 "add_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15 = base;
#line 778 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdA_12));
#line 778 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 778 "add_type.m"
    }
#line 774 "add_type.m"
  }
#line 771 "add_type.m"
}

#line 635 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 635 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 635 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 635 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 635 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4)
#line 635 "add_type.m"
{
#line 639 "add_type.m"
  {
#line 639 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 639 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 661 "add_type.m"
      {
#line 661 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Details_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 662 "add_type.m"
        {
#line 662 "add_type.m"
          MR_Word base;
#line 662 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "add_type.m"
          *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 662 "add_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 662 "add_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__Details_24));
#line 662 "add_type.m"
        }
#line 661 "add_type.m"
      }
#line 639 "add_type.m"
    else
#line 639 "add_type.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 639 "add_type.m"
        {
#line 639 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Body_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 639 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 639 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeDirectArgCtors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 639 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorTagMap_12;
#line 639 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ReservedAddr_13;
#line 639 "add_type.m"
          MR_Word hlds__make_hlds__add_type__IsEnum_14;
#line 639 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CheaperTagTest_16;

#line 647 "add_type.m"
          {
#line 647 "add_type.m"
            hlds__make_tags__assign_constructor_tags_8_p_0(hlds__make_hlds__add_type__Body_5, hlds__make_hlds__add_type__MaybeUserEqComp_6, hlds__make_hlds__add_type__TypeCtor_2, (MR_Integer) 1, hlds__make_hlds__add_type__Globals_3, &hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__ReservedAddr_13, &hlds__make_hlds__add_type__IsEnum_14);
          }
#line 650 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__ReservedAddr_13 == (MR_Integer) 1);
#line 652 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 651 "add_type.m"
            {
#line 651 "add_type.m"
              hlds__make_tags__compute_cheaper_tag_test_2_p_0(hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__CheaperTagTest_16);
            }
#line 652 "add_type.m"
          else
#line 653 "add_type.m"
            hlds__make_hlds__add_type__CheaperTagTest_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 655 "add_type.m"
          {
#line 655 "add_type.m"
            MR_Word base;
#line 655 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 655 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 655 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_5));
#line 655 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorTagMap_12));
#line 655 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__CheaperTagTest_16));
#line 655 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__IsEnum_14));
#line 655 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_6));
#line 655 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__MaybeDirectArgCtors_7));
#line 655 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (((MR_Integer) 1 | ((hlds__make_hlds__add_type__ReservedAddr_13 << (MR_Integer) 1)))));
#line 655 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "add_type.m"
          }
#line 639 "add_type.m"
        }
#line 639 "add_type.m"
      else
#line 639 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 658 "add_type.m"
          {
#line 658 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Body_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 658 "add_type.m"
            {
#line 658 "add_type.m"
              MR_Word base;
#line 658 "add_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 658 "add_type.m"
              *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 658 "add_type.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_17));
#line 658 "add_type.m"
            }
#line 658 "add_type.m"
          }
#line 639 "add_type.m"
        else
#line 639 "add_type.m"
          if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 664 "add_type.m"
            {
#line 664 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 664 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 664 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 3)));
#line 664 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body_32;

#line 670 "add_type.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 1))))
#line 671 "add_type.m"
                {
#line 671 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__CForeignType_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 671 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_55_55;
#line 671 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__Data_64;

#line 672 "add_type.m"
                  {
#line 672 "add_type.m"
                    hlds__make_hlds__add_type__Data_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 672 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__CForeignType_35));
#line 672 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 672 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 672 "add_type.m"
                  }
#line 674 "add_type.m"
                  {
#line 674 "add_type.m"
                    hlds__make_hlds__add_type__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 674 "add_type.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_64));
#line 674 "add_type.m"
                  }
#line 674 "add_type.m"
                  {
#line 674 "add_type.m"
                    hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 674 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_55_55));
#line 674 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "add_type.m"
                  }
#line 671 "add_type.m"
                }
#line 670 "add_type.m"
              else
#line 670 "add_type.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 0))))
#line 666 "add_type.m"
                  {
#line 666 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__ILForeignType_33 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__ForeignType_27), (MR_Integer) 0);
#line 666 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_34;
#line 666 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_59_59;

#line 667 "add_type.m"
                    {
#line 667 "add_type.m"
                      hlds__make_hlds__add_type__Data_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 667 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__ILForeignType_33));
#line 667 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 667 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 667 "add_type.m"
                    }
#line 669 "add_type.m"
                    {
#line 669 "add_type.m"
                      hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_34));
#line 669 "add_type.m"
                    }
#line 669 "add_type.m"
                    {
#line 669 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 669 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 669 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "add_type.m"
                    }
#line 666 "add_type.m"
                  }
#line 670 "add_type.m"
                else
#line 670 "add_type.m"
                  if (((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 2))))
#line 676 "add_type.m"
                    {
#line 676 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__JavaForeignType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 676 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_51_51;
#line 676 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__Data_65;

#line 677 "add_type.m"
                      {
#line 677 "add_type.m"
                        hlds__make_hlds__add_type__Data_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 677 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__JavaForeignType_36));
#line 677 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 677 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 677 "add_type.m"
                      }
#line 679 "add_type.m"
                      {
#line 679 "add_type.m"
                        hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 679 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_65));
#line 679 "add_type.m"
                      }
#line 679 "add_type.m"
                      {
#line 679 "add_type.m"
                        hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 679 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 679 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "add_type.m"
                      }
#line 676 "add_type.m"
                    }
#line 670 "add_type.m"
                  else
#line 670 "add_type.m"
                    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 681 "add_type.m"
                      {
#line 681 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__CSharpForeignType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 1)));
#line 681 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__V_47_47;
#line 681 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__Data_66;

#line 682 "add_type.m"
                        {
#line 682 "add_type.m"
                          hlds__make_hlds__add_type__Data_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 682 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__CSharpForeignType_37));
#line 682 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 682 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 682 "add_type.m"
                        }
#line 684 "add_type.m"
                        {
#line 684 "add_type.m"
                          hlds__make_hlds__add_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 684 "add_type.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_66));
#line 684 "add_type.m"
                        }
#line 684 "add_type.m"
                        {
#line 684 "add_type.m"
                          hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 684 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_47_47));
#line 684 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "add_type.m"
                        }
#line 681 "add_type.m"
                      }
#line 670 "add_type.m"
                    else
#line 686 "add_type.m"
                      {
#line 686 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__V_43_43;
#line 686 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__Data_67;

#line 687 "add_type.m"
                        {
#line 687 "add_type.m"
                          hlds__make_hlds__add_type__Data_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 687 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 0) = NULL;
#line 687 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 687 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 687 "add_type.m"
                        }
#line 689 "add_type.m"
                        {
#line 689 "add_type.m"
                          hlds__make_hlds__add_type__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "add_type.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_67));
#line 689 "add_type.m"
                        }
#line 689 "add_type.m"
                        {
#line 689 "add_type.m"
                          hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 689 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_43_43));
#line 689 "add_type.m"
                        }
#line 686 "add_type.m"
                      }
#line 664 "add_type.m"
              *hlds__make_hlds__add_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_32);
#line 664 "add_type.m"
            }
#line 639 "add_type.m"
          else
#line 659 "add_type.m"
            {
#line 659 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 659 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));

#line 660 "add_type.m"
              {
#line 660 "add_type.m"
                MR_Word base;
#line 660 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 660 "add_type.m"
                *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 660 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 660 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__SolverTypeDetails_20));
#line 660 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_21));
#line 660 "add_type.m"
              }
#line 659 "add_type.m"
            }
#line 639 "add_type.m"
  }
#line 635 "add_type.m"
}

#line 510 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 510 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 510 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 510 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6)
#line 510 "add_type.m"
{
#line 513 "add_type.m"
  {
#line 513 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 0)));
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 1)));
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 2)));
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 3)));
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 4)));
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 0)));
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 1)));
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 2)));
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 3)));
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 4)));
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeIL_17;
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeC_18;
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJava_19;
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharp_20;
#line 513 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlang_21;

#line 528 "add_type.m"
    if ((hlds__make_hlds__add_type__MaybeILA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
      {
#line 528 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "add_type.m"
        else
#line 530 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILB_12;
#line 528 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 528 "add_type.m"
      }
#line 528 "add_type.m"
    else
#line 529 "add_type.m"
      {
#line 529 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 529 "add_type.m"
          {
#line 529 "add_type.m"
            hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILA_7;
#line 529 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 529 "add_type.m"
          }
#line 529 "add_type.m"
      }
#line 513 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 513 "add_type.m"
      {
#line 528 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeCA_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
          {
#line 528 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "add_type.m"
            else
#line 530 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCB_13;
#line 528 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 528 "add_type.m"
          }
#line 528 "add_type.m"
        else
#line 529 "add_type.m"
          {
#line 529 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 529 "add_type.m"
              {
#line 529 "add_type.m"
                hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCA_8;
#line 529 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 529 "add_type.m"
              }
#line 529 "add_type.m"
          }
#line 513 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 513 "add_type.m"
          {
#line 528 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeJavaA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
              {
#line 528 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "add_type.m"
                else
#line 530 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaB_14;
#line 528 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 528 "add_type.m"
              }
#line 528 "add_type.m"
            else
#line 529 "add_type.m"
              {
#line 529 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 529 "add_type.m"
                  {
#line 529 "add_type.m"
                    hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaA_9;
#line 529 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 529 "add_type.m"
                  }
#line 529 "add_type.m"
              }
#line 513 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 513 "add_type.m"
              {
#line 528 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeCSharpA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                  {
#line 528 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "add_type.m"
                    else
#line 530 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpB_15;
#line 528 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 528 "add_type.m"
                  }
#line 528 "add_type.m"
                else
#line 529 "add_type.m"
                  {
#line 529 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 529 "add_type.m"
                      {
#line 529 "add_type.m"
                        hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpA_10;
#line 529 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 529 "add_type.m"
                      }
#line 529 "add_type.m"
                  }
#line 513 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 513 "add_type.m"
                  {
#line 528 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeErlangA_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                      {
#line 528 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "add_type.m"
                        else
#line 530 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangB_16;
#line 528 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 528 "add_type.m"
                      }
#line 528 "add_type.m"
                    else
#line 529 "add_type.m"
                      {
#line 529 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 529 "add_type.m"
                          {
#line 529 "add_type.m"
                            hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangA_11;
#line 529 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 529 "add_type.m"
                          }
#line 529 "add_type.m"
                      }
#line 513 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 513 "add_type.m"
                      {
#line 523 "add_type.m"
                        {
#line 523 "add_type.m"
                          MR_Word base;
#line 523 "add_type.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 523 "add_type.m"
                          *hlds__make_hlds__add_type__TypeBody_6 = base;
#line 523 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_17));
#line 523 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_18));
#line 523 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_19));
#line 523 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_20));
#line 523 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_21));
#line 523 "add_type.m"
                        }
#line 523 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 513 "add_type.m"
                      }
#line 513 "add_type.m"
                  }
#line 513 "add_type.m"
              }
#line 513 "add_type.m"
          }
#line 513 "add_type.m"
      }
#line 513 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 513 "add_type.m"
  }
#line 510 "add_type.m"
}

#line 479 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 479 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 479 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 479 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 479 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 479 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5)
#line 479 "add_type.m"
{
#line 484 "add_type.m"
  while (MR_TRUE)
#line 484 "add_type.m"
    {
#line 484 "add_type.m"
      /* tailcall optimized into a loop */
#line 484 "add_type.m"
      {
#line 484 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 484 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 504 "add_type.m"
          {
#line 504 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_34_34;

#line 504 "add_type.m"
            hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0)));
#line 504 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 504 "add_type.m"
              {
#line 504 "add_type.m"
                hlds__make_hlds__add_type__V_34_34 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 505 "add_type.m"
                /* direct tailcall eliminated */
#line 505 "add_type.m"
                {
#line 505 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3 = hlds__make_hlds__add_type__HeadVar__4_4;
#line 505 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4 = hlds__make_hlds__add_type__HeadVar__3_3;

#line 505 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__4_4 = hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4;
#line 505 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__3_3 = hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3;
#line 505 "add_type.m"
                }
#line 505 "add_type.m"
                continue;
#line 504 "add_type.m"
              }
#line 504 "add_type.m"
          }
#line 484 "add_type.m"
        else
#line 484 "add_type.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 484 "add_type.m"
            {
#line 484 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3), (MR_Integer) 0);

#line 484 "add_type.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1))))
#line 484 "add_type.m"
                {
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__ForeignTypeBody1_12;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_13;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeILA_63;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeCA_64;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeJavaA_65;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeErlangA_67;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeILB_68;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeCB_69;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeJavaB_70;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeErlangB_72;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeIL_73;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeC_74;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeJava_75;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeCSharp_76;
#line 484 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeErlang_77;
#line 485 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 485 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 485 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 485 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 485 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 485 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 485 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 485 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 495 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_19_19;
#line 495 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_58_58;

#line 488 "add_type.m"
                  if ((hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "add_type.m"
                    hlds__make_hlds__add_type__ForeignTypeBody1_12 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_4[0];
#line 488 "add_type.m"
                  else
#line 487 "add_type.m"
                    hlds__make_hlds__add_type__ForeignTypeBody1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeForeignTypeBody1_11, (MR_Integer) 0)));
#line 514 "add_type.m"
                  hlds__make_hlds__add_type__MaybeILA_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 0)));
#line 514 "add_type.m"
                  hlds__make_hlds__add_type__MaybeCA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 1)));
#line 514 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJavaA_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 2)));
#line 514 "add_type.m"
                  hlds__make_hlds__add_type__MaybeCSharpA_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 3)));
#line 514 "add_type.m"
                  hlds__make_hlds__add_type__MaybeErlangA_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 4)));
#line 516 "add_type.m"
                  hlds__make_hlds__add_type__MaybeILB_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 0)));
#line 516 "add_type.m"
                  hlds__make_hlds__add_type__MaybeCB_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 1)));
#line 516 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJavaB_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 2)));
#line 516 "add_type.m"
                  hlds__make_hlds__add_type__MaybeCSharpB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 3)));
#line 516 "add_type.m"
                  hlds__make_hlds__add_type__MaybeErlangB_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 4)));
#line 528 "add_type.m"
                  if ((hlds__make_hlds__add_type__MaybeILA_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                    {
#line 528 "add_type.m"
                      if ((hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                        hlds__make_hlds__add_type__MaybeIL_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "add_type.m"
                      else
#line 530 "add_type.m"
                        hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILB_68;
#line 528 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 528 "add_type.m"
                    }
#line 528 "add_type.m"
                  else
#line 529 "add_type.m"
                    {
#line 529 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "add_type.m"
                      if (hlds__make_hlds__add_type__succeeded)
#line 529 "add_type.m"
                        {
#line 529 "add_type.m"
                          hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILA_63;
#line 529 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 529 "add_type.m"
                        }
#line 529 "add_type.m"
                    }
#line 484 "add_type.m"
                  if (hlds__make_hlds__add_type__succeeded)
#line 484 "add_type.m"
                    {
#line 528 "add_type.m"
                      if ((hlds__make_hlds__add_type__MaybeCA_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                        {
#line 528 "add_type.m"
                          if ((hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                            hlds__make_hlds__add_type__MaybeC_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "add_type.m"
                          else
#line 530 "add_type.m"
                            hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCB_69;
#line 528 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 528 "add_type.m"
                        }
#line 528 "add_type.m"
                      else
#line 529 "add_type.m"
                        {
#line 529 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "add_type.m"
                          if (hlds__make_hlds__add_type__succeeded)
#line 529 "add_type.m"
                            {
#line 529 "add_type.m"
                              hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCA_64;
#line 529 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 529 "add_type.m"
                            }
#line 529 "add_type.m"
                        }
#line 484 "add_type.m"
                      if (hlds__make_hlds__add_type__succeeded)
#line 484 "add_type.m"
                        {
#line 528 "add_type.m"
                          if ((hlds__make_hlds__add_type__MaybeJavaA_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                            {
#line 528 "add_type.m"
                              if ((hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                                hlds__make_hlds__add_type__MaybeJava_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "add_type.m"
                              else
#line 530 "add_type.m"
                                hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaB_70;
#line 528 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 528 "add_type.m"
                            }
#line 528 "add_type.m"
                          else
#line 529 "add_type.m"
                            {
#line 529 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "add_type.m"
                              if (hlds__make_hlds__add_type__succeeded)
#line 529 "add_type.m"
                                {
#line 529 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaA_65;
#line 529 "add_type.m"
                                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 529 "add_type.m"
                                }
#line 529 "add_type.m"
                            }
#line 484 "add_type.m"
                          if (hlds__make_hlds__add_type__succeeded)
#line 484 "add_type.m"
                            {
#line 528 "add_type.m"
                              if ((hlds__make_hlds__add_type__MaybeCSharpA_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                                {
#line 528 "add_type.m"
                                  if ((hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                                    hlds__make_hlds__add_type__MaybeCSharp_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "add_type.m"
                                  else
#line 530 "add_type.m"
                                    hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 528 "add_type.m"
                                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 528 "add_type.m"
                                }
#line 528 "add_type.m"
                              else
#line 529 "add_type.m"
                                {
#line 529 "add_type.m"
                                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "add_type.m"
                                  if (hlds__make_hlds__add_type__succeeded)
#line 529 "add_type.m"
                                    {
#line 529 "add_type.m"
                                      hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 529 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 529 "add_type.m"
                                    }
#line 529 "add_type.m"
                                }
#line 484 "add_type.m"
                              if (hlds__make_hlds__add_type__succeeded)
#line 484 "add_type.m"
                                {
#line 528 "add_type.m"
                                  if ((hlds__make_hlds__add_type__MaybeErlangA_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                                    {
#line 528 "add_type.m"
                                      if ((hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "add_type.m"
                                        hlds__make_hlds__add_type__MaybeErlang_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "add_type.m"
                                      else
#line 530 "add_type.m"
                                        hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangB_72;
#line 528 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 528 "add_type.m"
                                    }
#line 528 "add_type.m"
                                  else
#line 529 "add_type.m"
                                    {
#line 529 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "add_type.m"
                                      if (hlds__make_hlds__add_type__succeeded)
#line 529 "add_type.m"
                                        {
#line 529 "add_type.m"
                                          hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangA_67;
#line 529 "add_type.m"
                                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 529 "add_type.m"
                                        }
#line 529 "add_type.m"
                                    }
#line 484 "add_type.m"
                                  if (hlds__make_hlds__add_type__succeeded)
#line 484 "add_type.m"
                                    {
#line 523 "add_type.m"
                                      {
#line 523 "add_type.m"
                                        hlds__make_hlds__add_type__ForeignTypeBody_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 523 "add_type.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_73));
#line 523 "add_type.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_74));
#line 523 "add_type.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_75));
#line 523 "add_type.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_76));
#line 523 "add_type.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_77));
#line 523 "add_type.m"
                                      }
#line 495 "add_type.m"
                                      hlds__make_hlds__add_type__V_19_19 = (MR_Integer) 1;
#line 495 "add_type.m"
                                      {
#line 495 "add_type.m"
                                        backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_1, hlds__make_hlds__add_type__ForeignTypeBody_13, &hlds__make_hlds__add_type__V_58_58);
                                      }
#line 495 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_19_19 == hlds__make_hlds__add_type__V_58_58);
#line 495 "add_type.m"
                                      if (hlds__make_hlds__add_type__succeeded)
#line 496 "add_type.m"
                                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MakeOptInterface_2 == (MR_Integer) 0);
#line 499 "add_type.m"
                                      if (hlds__make_hlds__add_type__succeeded)
#line 498 "add_type.m"
                                        *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__ForeignTypeBody_13);
#line 499 "add_type.m"
                                      else
#line 500 "add_type.m"
                                        {
#line 500 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_20_20;
#line 500 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_49_49;
#line 500 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_50_50;
#line 500 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_51_51;
#line 500 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_52_52;
#line 500 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_53_53;
#line 500 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_54_54;
#line 500 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_55_55;
#line 500 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_56_56;
#line 500 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_57_57;

#line 500 "add_type.m"
                                          {
#line 500 "add_type.m"
                                            hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 500 "add_type.m"
                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignTypeBody_13));
#line 500 "add_type.m"
                                          }
#line 500 "add_type.m"
                                          hlds__make_hlds__add_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 500 "add_type.m"
                                          hlds__make_hlds__add_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 500 "add_type.m"
                                          hlds__make_hlds__add_type__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 500 "add_type.m"
                                          hlds__make_hlds__add_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 500 "add_type.m"
                                          hlds__make_hlds__add_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 500 "add_type.m"
                                          hlds__make_hlds__add_type__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 500 "add_type.m"
                                          hlds__make_hlds__add_type__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 500 "add_type.m"
                                          hlds__make_hlds__add_type__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 500 "add_type.m"
                                          hlds__make_hlds__add_type__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 500 "add_type.m"
                                          {
#line 500 "add_type.m"
                                            MR_Word base;
#line 500 "add_type.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 500 "add_type.m"
                                            *hlds__make_hlds__add_type__HeadVar__5_5 = base;
#line 500 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_49_49));
#line 500 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_50_50));
#line 500 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 500 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 500 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_53_53));
#line 500 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__V_54_54));
#line 500 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) ((hlds__make_hlds__add_type__V_55_55 | ((hlds__make_hlds__add_type__V_56_56 << (MR_Integer) 1)))));
#line 500 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 500 "add_type.m"
                                          }
#line 500 "add_type.m"
                                        }
#line 499 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 484 "add_type.m"
                                    }
#line 484 "add_type.m"
                                }
#line 484 "add_type.m"
                            }
#line 484 "add_type.m"
                        }
#line 484 "add_type.m"
                    }
#line 484 "add_type.m"
                }
#line 484 "add_type.m"
              else
#line 484 "add_type.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0))))
#line 507 "add_type.m"
                  {
#line 507 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Body1_39 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 507 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Body_40;

#line 508 "add_type.m"
                    {
#line 508 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(hlds__make_hlds__add_type__V_59_59, hlds__make_hlds__add_type__Body1_39, &hlds__make_hlds__add_type__Body_40);
                    }
#line 507 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 507 "add_type.m"
                      {
#line 507 "add_type.m"
                        *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_40);
#line 507 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 507 "add_type.m"
                      }
#line 507 "add_type.m"
                  }
#line 484 "add_type.m"
                else
#line 484 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 484 "add_type.m"
            }
#line 484 "add_type.m"
          else
#line 484 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 484 "add_type.m"
        return hlds__make_hlds__add_type__succeeded;
#line 484 "add_type.m"
      }
#line 484 "add_type.m"
      break;
#line 484 "add_type.m"
    }
#line 479 "add_type.m"
}

#line 441 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_8_p_0(
#line 441 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_9,
#line 441 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_10,
#line 441 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_11,
#line 441 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundError_12,
#line 441 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24,
#line 441 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_25,
#line 441 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26,
#line 441 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27)
#line 441 "add_type.m"
{
#line 446 "add_type.m"
  {
#line 446 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 446 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 0)));
#line 446 "add_type.m"
    MR_Integer hlds__make_hlds__add_type__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 1)));
#line 446 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_17;
#line 446 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Target_18;
#line 450 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_68_68;

#line 448 "add_type.m"
    {
#line 448 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_type__Globals_17);
    }
#line 449 "add_type.m"
    {
#line 449 "add_type.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_17, &hlds__make_hlds__add_type__Target_18);
    }
#line 450 "add_type.m"
    {
#line 450 "add_type.m"
      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_18, hlds__make_hlds__add_type__ForeignTypeBody_10, &hlds__make_hlds__add_type__V_68_68);
    }
#line 450 "add_type.m"
    hlds__make_hlds__add_type__succeeded = ((MR_Integer) 1 == hlds__make_hlds__add_type__V_68_68);
#line 452 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 451 "add_type.m"
      {
#line 451 "add_type.m"
        *hlds__make_hlds__add_type__FoundError_12 = (MR_Integer) 0;
#line 451 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26;
#line 451 "add_type.m"
      }
#line 452 "add_type.m"
    else
#line 458 "add_type.m"
      {
#line 458 "add_type.m"
        MR_String hlds__make_hlds__add_type__LangStr_19;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__MainPieces_20;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Msg_22;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Spec_23;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_31_31;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_32_32;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_33_33;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_36_36;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_39_39;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_40_40;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_41_41;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_53_53;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_54_54;
#line 458 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_65_65;

#line 454 "add_type.m"
        if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 0))
#line 453 "add_type.m"
          hlds__make_hlds__add_type__LangStr_19 = (MR_String) "C";
#line 454 "add_type.m"
        else
#line 454 "add_type.m"
          if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 2))
#line 455 "add_type.m"
            hlds__make_hlds__add_type__LangStr_19 = (MR_String) "C#";
#line 454 "add_type.m"
          else
#line 454 "add_type.m"
            if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 4))
#line 457 "add_type.m"
              hlds__make_hlds__add_type__LangStr_19 = (MR_String) "Erlang";
#line 454 "add_type.m"
            else
#line 454 "add_type.m"
              if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 1))
#line 454 "add_type.m"
                hlds__make_hlds__add_type__LangStr_19 = (MR_String) "IL";
#line 454 "add_type.m"
              else
#line 456 "add_type.m"
                hlds__make_hlds__add_type__LangStr_19 = (MR_String) "Java";
#line 459 "add_type.m"
        {
#line 459 "add_type.m"
          hlds__make_hlds__add_type__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 459 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__add_type__LangStr_19));
#line 459 "add_type.m"
        }
#line 461 "add_type.m"
        {
#line 461 "add_type.m"
          hlds__make_hlds__add_type__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_15));
#line 461 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_16));
#line 461 "add_type.m"
        }
#line 461 "add_type.m"
        {
#line 461 "add_type.m"
          hlds__make_hlds__add_type__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 461 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_41_41));
#line 461 "add_type.m"
        }
#line 461 "add_type.m"
        {
#line 461 "add_type.m"
          hlds__make_hlds__add_type__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_40_40));
#line 461 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50])));
#line 461 "add_type.m"
        }
#line 460 "add_type.m"
        {
#line 460 "add_type.m"
          hlds__make_hlds__add_type__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[59])));
#line 460 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_39_39));
#line 460 "add_type.m"
        }
#line 460 "add_type.m"
        {
#line 460 "add_type.m"
          hlds__make_hlds__add_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[58])));
#line 460 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_36_36));
#line 460 "add_type.m"
        }
#line 459 "add_type.m"
        {
#line 459 "add_type.m"
          hlds__make_hlds__add_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_32_32));
#line 459 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_33_33));
#line 459 "add_type.m"
        }
#line 459 "add_type.m"
        {
#line 459 "add_type.m"
          hlds__make_hlds__add_type__MainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[57])));
#line 459 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_20, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_31_31));
#line 459 "add_type.m"
        }
#line 465 "add_type.m"
        {
#line 465 "add_type.m"
          hlds__make_hlds__add_type__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_type__MainPieces_20));
#line 465 "add_type.m"
        }
#line 465 "add_type.m"
        {
#line 465 "add_type.m"
          hlds__make_hlds__add_type__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_54_54));
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[62])));
#line 465 "add_type.m"
        }
#line 464 "add_type.m"
        {
#line 464 "add_type.m"
          hlds__make_hlds__add_type__Msg_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 464 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_22, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_11));
#line 464 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_22, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_53_53));
#line 464 "add_type.m"
        }
#line 468 "add_type.m"
        {
#line 468 "add_type.m"
          hlds__make_hlds__add_type__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_22));
#line 468 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 468 "add_type.m"
        }
#line 467 "add_type.m"
        {
#line 467 "add_type.m"
          hlds__make_hlds__add_type__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 467 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 467 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 467 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_23, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_65_65));
#line 467 "add_type.m"
        }
#line 469 "add_type.m"
        {
#line 469 "add_type.m"
          MR_Word base;
#line 469 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27 = base;
#line 469 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_23));
#line 469 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26));
#line 469 "add_type.m"
        }
#line 470 "add_type.m"
        *hlds__make_hlds__add_type__FoundError_12 = (MR_Integer) 1;
#line 458 "add_type.m"
      }
#line 470 "add_type.m"
    *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_25 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24;
#line 446 "add_type.m"
  }
#line 441 "add_type.m"
}

#line 348 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 348 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 348 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4)
#line 348 "add_type.m"
{
#line 356 "add_type.m"
  {
#line 356 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));

#line 356 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 355 "add_type.m"
      {
#line 355 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 355 "add_type.m"
        {
#line 355 "add_type.m"
          hlds__make_hlds__add_type__V_5_5 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
        }
#line 355 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_5_5 == (MR_Integer) 0);
#line 355 "add_type.m"
      }
#line 356 "add_type.m"
    else
#line 358 "add_type.m"
      {
#line 356 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 358 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 357 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__NewDefnStatus_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 358 "add_type.m"
        else
#line 359 "add_type.m"
          {
#line 359 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_6_6;
#line 359 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_7_7;

#line 359 "add_type.m"
            {
#line 359 "add_type.m"
              hlds__make_hlds__add_type__V_6_6 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus_3);
            }
#line 359 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_6_6 == (MR_Integer) 0);
#line 359 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 359 "add_type.m"
              {
#line 360 "add_type.m"
                {
#line 360 "add_type.m"
                  hlds__make_hlds__add_type__V_7_7 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
                }
#line 360 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_7_7 == (MR_Integer) 0);
#line 359 "add_type.m"
              }
#line 359 "add_type.m"
          }
#line 358 "add_type.m"
      }
#line 356 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 356 "add_type.m"
  }
#line 348 "add_type.m"
}

#line 319 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 319 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 319 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4)
#line 319 "add_type.m"
{
#line 322 "add_type.m"
  {
#line 322 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 322 "add_type.m"
    MR_Word hlds__make_hlds__add_type__OldIsSolverType_5;

#line 330 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 331 "add_type.m"
      {
#line 331 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Details_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 1)));

#line 335 "add_type.m"
        if ((hlds__make_hlds__add_type__Details_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 340 "add_type.m"
          hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 335 "add_type.m"
        else
#line 335 "add_type.m"
          if ((hlds__make_hlds__add_type__Details_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "add_type.m"
            hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 335 "add_type.m"
          else
#line 337 "add_type.m"
            hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 331 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 331 "add_type.m"
      }
#line 330 "add_type.m"
    else
#line 330 "add_type.m"
      if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 330 "add_type.m"
        {
#line 330 "add_type.m"
          hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 330 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 330 "add_type.m"
        }
#line 330 "add_type.m"
      else
#line 330 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 322 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 330 "add_type.m"
      {
#line 330 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 331 "add_type.m"
          {
#line 331 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Details_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 1)));

#line 335 "add_type.m"
            if ((hlds__make_hlds__add_type__Details_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 340 "add_type.m"
              {
#line 325 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 325 "add_type.m"
                hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 340 "add_type.m"
              }
#line 335 "add_type.m"
            else
#line 335 "add_type.m"
              if ((hlds__make_hlds__add_type__Details_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "add_type.m"
                {
#line 325 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 325 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 334 "add_type.m"
                }
#line 335 "add_type.m"
              else
#line 337 "add_type.m"
                {
#line 325 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 325 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 337 "add_type.m"
                }
#line 331 "add_type.m"
          }
#line 330 "add_type.m"
        else
#line 330 "add_type.m"
          if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 330 "add_type.m"
            {
#line 325 "add_type.m"
              hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 325 "add_type.m"
              hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 330 "add_type.m"
            }
#line 330 "add_type.m"
          else
#line 330 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 330 "add_type.m"
      }
#line 322 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 322 "add_type.m"
  }
#line 319 "add_type.m"
}

#line 312 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 312 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 312 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 312 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 312 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4)
#line 312 "add_type.m"
{
#line 315 "add_type.m"
  {
#line 315 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 315 "add_type.m"
    *hlds__make_hlds__add_type__OldBody_2 = hlds__make_hlds__add_type__OldBody_5;
#line 315 "add_type.m"
    *hlds__make_hlds__add_type__Body_4 = hlds__make_hlds__add_type__Body_6;
#line 315 "add_type.m"
  }
#line 312 "add_type.m"
}

#line 290 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void)
#line 290 "add_type.m"
{
#line 292 "add_type.m"
  {
#line 292 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 292 "add_type.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[49]);
#line 292 "add_type.m"
  }
#line 290 "add_type.m"
}

#line 49 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__combine_status_3_p_0(
#line 49 "add_type.m"
  MR_Word hlds__make_hlds__add_type__StatusA_4,
#line 49 "add_type.m"
  MR_Word hlds__make_hlds__add_type__StatusB_5,
#line 49 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Status_6)
#line 49 "add_type.m"
{
#line 544 "add_type.m"
  {
#line 544 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 544 "add_type.m"
    MR_Word hlds__make_hlds__add_type__CombinedStatus_7;

#line 551 "add_type.m"
    if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 621 "add_type.m"
      {
#line 619 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 621 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 620 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 621 "add_type.m"
        else
#line 622 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 621 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 621 "add_type.m"
      }
#line 551 "add_type.m"
    else
#line 551 "add_type.m"
      if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 631 "add_type.m"
        {
#line 629 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Section_30;

#line 629 "add_type.m"
          hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2)));
#line 629 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 629 "add_type.m"
            {
#line 629 "add_type.m"
              hlds__make_hlds__add_type__Section_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusB_5, (MR_Integer) 0)));
#line 630 "add_type.m"
              hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 629 "add_type.m"
            }
#line 629 "add_type.m"
          else
#line 632 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 631 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 631 "add_type.m"
        }
#line 551 "add_type.m"
      else
#line 551 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 566 "add_type.m"
          {
#line 566 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 566 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 566 "add_type.m"
          }
#line 551 "add_type.m"
        else
#line 551 "add_type.m"
          if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 567 "add_type.m"
            {
#line 567 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Status3_20;

#line 606 "add_type.m"
              if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 613 "add_type.m"
                {
#line 613 "add_type.m"
                  hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 613 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 613 "add_type.m"
                }
#line 606 "add_type.m"
              else
#line 606 "add_type.m"
                if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 612 "add_type.m"
                  {
#line 612 "add_type.m"
                    hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 612 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 612 "add_type.m"
                  }
#line 606 "add_type.m"
                else
#line 606 "add_type.m"
                  if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 610 "add_type.m"
                    {
#line 610 "add_type.m"
                      hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 610 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 610 "add_type.m"
                    }
#line 606 "add_type.m"
                  else
#line 606 "add_type.m"
                    if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 607 "add_type.m"
                      {
#line 607 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 607 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 607 "add_type.m"
                      }
#line 606 "add_type.m"
                    else
#line 606 "add_type.m"
                      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 609 "add_type.m"
                        {
#line 609 "add_type.m"
                          hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 609 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 609 "add_type.m"
                        }
#line 606 "add_type.m"
                      else
#line 606 "add_type.m"
                        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "add_type.m"
                          {
#line 611 "add_type.m"
                            hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 611 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 611 "add_type.m"
                          }
#line 606 "add_type.m"
                        else
#line 606 "add_type.m"
                          if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2))))
#line 608 "add_type.m"
                            {
#line 608 "add_type.m"
                              hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 608 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 608 "add_type.m"
                            }
#line 606 "add_type.m"
                          else
#line 606 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 567 "add_type.m"
              if (hlds__make_hlds__add_type__succeeded)
#line 567 "add_type.m"
                {
#line 569 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status3_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 571 "add_type.m"
                  if (hlds__make_hlds__add_type__succeeded)
#line 570 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 571 "add_type.m"
                  else
#line 572 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__Status3_20;
#line 571 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 567 "add_type.m"
                }
#line 567 "add_type.m"
            }
#line 551 "add_type.m"
          else
#line 551 "add_type.m"
            if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 606 "add_type.m"
              if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 613 "add_type.m"
                {
#line 613 "add_type.m"
                  hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 613 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 613 "add_type.m"
                }
#line 606 "add_type.m"
              else
#line 606 "add_type.m"
                if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 612 "add_type.m"
                  {
#line 612 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 612 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 612 "add_type.m"
                  }
#line 606 "add_type.m"
                else
#line 606 "add_type.m"
                  if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 610 "add_type.m"
                    {
#line 610 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 610 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 610 "add_type.m"
                    }
#line 606 "add_type.m"
                  else
#line 606 "add_type.m"
                    if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 607 "add_type.m"
                      {
#line 607 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 607 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 607 "add_type.m"
                      }
#line 606 "add_type.m"
                    else
#line 606 "add_type.m"
                      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 609 "add_type.m"
                        {
#line 609 "add_type.m"
                          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 609 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 609 "add_type.m"
                        }
#line 606 "add_type.m"
                      else
#line 606 "add_type.m"
                        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "add_type.m"
                          {
#line 611 "add_type.m"
                            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 611 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 611 "add_type.m"
                          }
#line 606 "add_type.m"
                        else
#line 606 "add_type.m"
                          if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2))))
#line 608 "add_type.m"
                            {
#line 608 "add_type.m"
                              hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 608 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 608 "add_type.m"
                            }
#line 606 "add_type.m"
                          else
#line 606 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 551 "add_type.m"
            else
#line 551 "add_type.m"
              if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "add_type.m"
                {
#line 574 "add_type.m"
                  hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 574 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 574 "add_type.m"
                }
#line 551 "add_type.m"
              else
#line 551 "add_type.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusA_4)) == (MR_mktag((MR_Integer) 2))))
#line 551 "add_type.m"
                  {
#line 551 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusA_4, (MR_Integer) 0)));

#line 559 "add_type.m"
                    if ((hlds__make_hlds__add_type__ImportLocn_11 == (MR_Integer) 3))
#line 560 "add_type.m"
                      {
#line 562 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[1]);
#line 560 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 560 "add_type.m"
                      }
#line 559 "add_type.m"
                    else
#line 585 "add_type.m"
                      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 601 "add_type.m"
                        {
#line 601 "add_type.m"
                          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 601 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 601 "add_type.m"
                        }
#line 585 "add_type.m"
                      else
#line 585 "add_type.m"
                        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 597 "add_type.m"
                          {
#line 598 "add_type.m"
                            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[2]);
#line 597 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 597 "add_type.m"
                          }
#line 585 "add_type.m"
                        else
#line 585 "add_type.m"
                          if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 592 "add_type.m"
                            {
#line 592 "add_type.m"
                              hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 592 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 592 "add_type.m"
                            }
#line 585 "add_type.m"
                          else
#line 585 "add_type.m"
                            if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 588 "add_type.m"
                              {
#line 589 "add_type.m"
                                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[3]);
#line 588 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 588 "add_type.m"
                              }
#line 585 "add_type.m"
                            else
#line 585 "add_type.m"
                              if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "add_type.m"
                                {
#line 595 "add_type.m"
                                  hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "add_type.m"
                                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 595 "add_type.m"
                                }
#line 585 "add_type.m"
                              else
#line 585 "add_type.m"
                                if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2))))
#line 586 "add_type.m"
                                  {
#line 586 "add_type.m"
                                    hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 586 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 586 "add_type.m"
                                  }
#line 585 "add_type.m"
                                else
#line 585 "add_type.m"
                                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 551 "add_type.m"
                  }
#line 551 "add_type.m"
                else
#line 551 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 544 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 543 "add_type.m"
      *hlds__make_hlds__add_type__Status_6 = hlds__make_hlds__add_type__CombinedStatus_7;
#line 544 "add_type.m"
    else
#line 545 "add_type.m"
      {
#line 545 "add_type.m"
        {
#line 545 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.combine_status\'/3", (MR_String) "unexpected status for type definition");
#line 545 "add_type.m"
          return;
        }
#line 545 "add_type.m"
      }
#line 544 "add_type.m"
  }
#line 49 "add_type.m"
}

#line 47 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__make_status_abstract_2_p_0(
#line 47 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Status_3,
#line 47 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__AbstractStatus_4)
#line 47 "add_type.m"
{
#line 535 "add_type.m"
  {
#line 535 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));

#line 535 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 534 "add_type.m"
      *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 535 "add_type.m"
    else
#line 537 "add_type.m"
      {
#line 535 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 535 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 535 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 535 "add_type.m"
          {
#line 535 "add_type.m"
            hlds__make_hlds__add_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__Status_3, (MR_Integer) 0)));
#line 536 "add_type.m"
            *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 535 "add_type.m"
          }
#line 535 "add_type.m"
        else
#line 538 "add_type.m"
          *hlds__make_hlds__add_type__AbstractStatus_4 = hlds__make_hlds__add_type__Status_3;
#line 537 "add_type.m"
      }
#line 535 "add_type.m"
  }
#line 47 "add_type.m"
}

#line 43 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__process_type_defn_8_p_0(
#line 43 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_9,
#line 43 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeDefn_10,
#line 43 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FoundError_0_58,
#line 43 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FoundError_59,
#line 43 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60,
#line 43 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_61,
#line 43 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62,
#line 43 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63)
#line 43 "add_type.m"
{
#line 363 "add_type.m"
  {
#line 363 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Context_14;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__TVarSet_15;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Args_16;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__KindMap_17;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Body_18;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Status_19;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__NeedQual_20;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_21;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__NewFoundError_42;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;

#line 364 "add_type.m"
    {
#line 364 "add_type.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Context_14);
    }
#line 365 "add_type.m"
    {
#line 365 "add_type.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__TVarSet_15);
    }
#line 366 "add_type.m"
    {
#line 366 "add_type.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Args_16);
    }
#line 367 "add_type.m"
    {
#line 367 "add_type.m"
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__KindMap_17);
    }
#line 368 "add_type.m"
    {
#line 368 "add_type.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Body_18);
    }
#line 369 "add_type.m"
    {
#line 369 "add_type.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Status_19);
    }
#line 370 "add_type.m"
    {
#line 370 "add_type.m"
      hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__NeedQual_20);
    }
#line 371 "add_type.m"
    {
#line 371 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__Globals_21);
    }
#line 413 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) == (MR_mktag((MR_Integer) 1))))
#line 374 "add_type.m"
      {
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ConsList_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)));
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__UserEqCmp_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 4)));
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ReservedTag_28 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Ctors0_31;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PQInfo_32;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorFields0_33;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__TypeCtorSymName_34;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_37;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorFields_39;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Ctors_40;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorAddSpecs_41;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_70_70;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71;
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 1)));
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 2)));
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 3)));
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type___DirectArgCtors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 5)));
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 7)));
#line 378 "add_type.m"
        MR_Integer hlds__make_hlds__add_type__V_35_35;
#line 410 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorName_45;
#line 410 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorArgType_46;
#line 403 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_47_47;

#line 375 "add_type.m"
        {
#line 375 "add_type.m"
          hlds__hlds_module__module_info_get_cons_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__Ctors0_31);
        }
#line 376 "add_type.m"
        {
#line 376 "add_type.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__PQInfo_32);
        }
#line 377 "add_type.m"
        {
#line 377 "add_type.m"
          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__CtorFields0_33);
        }
#line 378 "add_type.m"
        hlds__make_hlds__add_type__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 0)));
#line 378 "add_type.m"
        hlds__make_hlds__add_type__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 1)));
#line 382 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeCtorSymName_34)) == (MR_mktag((MR_Integer) 1))))
#line 383 "add_type.m"
          {
#line 383 "add_type.m"
            MR_String hlds__make_hlds__add_type__V_38_38;

#line 383 "add_type.m"
            hlds__make_hlds__add_type__TypeCtorModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 0)));
#line 383 "add_type.m"
            hlds__make_hlds__add_type__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 1)));
#line 383 "add_type.m"
          }
#line 382 "add_type.m"
        else
#line 380 "add_type.m"
          {
#line 381 "add_type.m"
            {
#line 381 "add_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.process_type_defn\'/8", (MR_String) "unqualified TypeCtorSymName");
#line 381 "add_type.m"
              return;
            }
#line 380 "add_type.m"
          }
#line 385 "add_type.m"
        {
#line 385 "add_type.m"
          hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_116_111_114_115_95_97_100_100_95_95_91_57_93_95_48_16_p_0(hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__TypeCtorModuleName_37, hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Args_16, hlds__make_hlds__add_type__KindMap_17, hlds__make_hlds__add_type__NeedQual_20, hlds__make_hlds__add_type__PQInfo_32, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__CtorFields0_33, &hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__Ctors0_31, &hlds__make_hlds__add_type__Ctors_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_type__CtorAddSpecs_41);
        }
#line 388 "add_type.m"
        {
#line 388 "add_type.m"
          hlds__hlds_module__module_info_set_cons_table_3_p_0(hlds__make_hlds__add_type__Ctors_40, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_70_70);
        }
#line 389 "add_type.m"
        {
#line 389 "add_type.m"
          hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_70_70, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71);
        }
#line 394 "add_type.m"
        if ((hlds__make_hlds__add_type__CtorAddSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "add_type.m"
          {
#line 393 "add_type.m"
            hlds__make_hlds__add_type__NewFoundError_42 = (MR_Integer) 0;
#line 393 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62;
#line 392 "add_type.m"
          }
#line 394 "add_type.m"
        else
#line 395 "add_type.m"
          {
#line 396 "add_type.m"
            hlds__make_hlds__add_type__NewFoundError_42 = (MR_Integer) 1;
#line 397 "add_type.m"
            {
#line 397 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_type__CtorAddSpecs_41, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62);
            }
#line 395 "add_type.m"
          }
#line 403 "add_type.m"
        {
#line 403 "add_type.m"
          hlds__make_hlds__add_type__succeeded = parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(hlds__make_hlds__add_type__Globals_21, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ReservedTag_28, hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__UserEqCmp_26, &hlds__make_hlds__add_type__CtorName_45, &hlds__make_hlds__add_type__CtorArgType_46, &hlds__make_hlds__add_type__V_47_47);
        }
#line 410 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 406 "add_type.m"
          {
#line 406 "add_type.m"
            MR_Word hlds__make_hlds__add_type__NoTagType_48;
#line 406 "add_type.m"
            MR_Word hlds__make_hlds__add_type__NoTagTypes0_49;
#line 406 "add_type.m"
            MR_Word hlds__make_hlds__add_type__NoTagTypes_50;

#line 406 "add_type.m"
            {
#line 406 "add_type.m"
              hlds__make_hlds__add_type__NoTagType_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 406 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_48, 0) = ((MR_Box) (hlds__make_hlds__add_type__Args_16));
#line 406 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_48, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorName_45));
#line 406 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_48, 2) = ((MR_Box) (hlds__make_hlds__add_type__CtorArgType_46));
#line 406 "add_type.m"
            }
#line 407 "add_type.m"
            {
#line 407 "add_type.m"
              hlds__hlds_module__module_info_get_no_tag_types_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71, &hlds__make_hlds__add_type__NoTagTypes0_49);
            }
#line 408 "add_type.m"
            {
#line 408 "add_type.m"
              mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0, ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_9)), ((MR_Box) (hlds__make_hlds__add_type__NoTagType_48)), hlds__make_hlds__add_type__NoTagTypes0_49, &hlds__make_hlds__add_type__NoTagTypes_50);
            }
#line 409 "add_type.m"
            {
#line 409 "add_type.m"
              hlds__hlds_module__module_info_set_no_tag_types_3_p_0(hlds__make_hlds__add_type__NoTagTypes_50, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73);
            }
#line 406 "add_type.m"
          }
#line 410 "add_type.m"
        else
#line 409 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71;
#line 374 "add_type.m"
      }
#line 413 "add_type.m"
    else
#line 413 "add_type.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) == (MR_mktag((MR_Integer) 0))))
#line 420 "add_type.m"
        {
#line 420 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignTypeBody_55 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__Body_18), (MR_Integer) 0);

#line 421 "add_type.m"
          {
#line 421 "add_type.m"
            hlds__make_hlds__add_type__check_foreign_type_8_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ForeignTypeBody_55, hlds__make_hlds__add_type__Context_14, &hlds__make_hlds__add_type__NewFoundError_42, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63);
          }
#line 420 "add_type.m"
        }
#line 413 "add_type.m"
      else
#line 417 "add_type.m"
        {
#line 418 "add_type.m"
          hlds__make_hlds__add_type__NewFoundError_42 = (MR_Integer) 0;
#line 418 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60;
#line 418 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62;
#line 417 "add_type.m"
        }
#line 424 "add_type.m"
    {
#line 424 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_FoundError_59 = mercury__bool__or_2_f_0(hlds__make_hlds__add_type__STATE_VARIABLE_FoundError_0_58, hlds__make_hlds__add_type__NewFoundError_42);
    }
#line 427 "add_type.m"
    if ((*hlds__make_hlds__add_type__STATE_VARIABLE_FoundError_59 == (MR_Integer) 0))
#line 428 "add_type.m"
      {
#line 428 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ArgTypes_56;
#line 428 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Type_57;
#line 428 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_75_75;

#line 432 "add_type.m"
        {
#line 432 "add_type.m"
          hlds__make_hlds__add_type__V_75_75 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 432 "add_type.m"
        {
#line 432 "add_type.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_type__V_75_75, hlds__make_hlds__add_type__Args_16, &hlds__make_hlds__add_type__ArgTypes_56);
        }
#line 433 "add_type.m"
        {
#line 433 "add_type.m"
          parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ArgTypes_56, &hlds__make_hlds__add_type__Type_57);
        }
#line 434 "add_type.m"
        {
#line 434 "add_type.m"
          hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Type_57, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__Body_18, hlds__make_hlds__add_type__Context_14, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_61);
#line 434 "add_type.m"
          return;
        }
#line 428 "add_type.m"
      }
#line 427 "add_type.m"
    else
#line 426 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
#line 363 "add_type.m"
  }
#line 43 "add_type.m"
}

#line 36 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0(
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_12,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Name_13,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Args_14,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeDefn_15,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type___Cond_16,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_17,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__7_7,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_97,
#line 36 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_99,
#line 36 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100)
#line 36 "add_type.m"
{
#line 81 "add_type.m"
  {
#line 81 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 81 "add_type.m"
    {
#line 81 "add_type.m"
      hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0(hlds__make_hlds__add_type__TVarSet_12, hlds__make_hlds__add_type__Name_13, hlds__make_hlds__add_type__Args_14, hlds__make_hlds__add_type__TypeDefn_15, hlds__make_hlds__add_type__Context_17, hlds__make_hlds__add_type__HeadVar__7_7, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_97, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_98, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_99, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_100);
#line 81 "add_type.m"
      return;
    }
#line 81 "add_type.m"
  }
#line 36 "add_type.m"
}

void mercury__hlds__make_hlds__add_type__init(void)
{
}

void mercury__hlds__make_hlds__add_type__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_type__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_type. */
