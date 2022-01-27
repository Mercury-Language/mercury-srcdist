/*
** Automatically generated from `add_type.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "cord.mih"
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
#include "set_tree234.mih"
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
#include "mdbcomp.sym_name.mih"
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



#line 36 "add_type.m"
struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s {
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Args_14;
#line 81 "add_type.m"
  MR_bool hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_273_273;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52;
#line 268 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 268 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__EqvType_91;
#line 268 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Var_92;
#line 270 "add_type.m"
  MR_Box hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__conv0_Var_92;
#line 271 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_1;
#line 271 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_279_279;
#line 271 "add_type.m"
  MR_Word hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__V_277_277;
#line 36 "add_type.m"
};

#line 709 "add_type.m"
struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s {
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17;
#line 718 "add_type.m"
  MR_bool hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded;
#line 736 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43;
#line 738 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0;
#line 738 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98;
#line 738 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118;
#line 738 "add_type.m"
  MR_Box hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98;
#line 709 "add_type.m"
};


#line 198 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 201 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

#line 204 "hlds.make_hlds.add_type.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 207 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 268 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_1(
#line 268 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 270 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_3(
#line 270 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 271 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_4(
#line 271 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 271 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_5(
#line 271 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 271 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_6(
#line 271 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 268 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_2(
#line 268 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 268 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_7(
#line 268 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 777 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__777__1_1_f_0(
#line 777 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_94);

#line 869 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 869 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 869 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 869 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 869 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 869 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);

#line 865 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 865 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 865 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 865 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 865 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 813 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 813 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 813 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41);

#line 791 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_6,
#line 791 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 791 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 791 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11);

#line 782 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 782 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 782 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 782 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 782 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 782 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 782 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15);

#line 777 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 777 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 777 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1);

#line 768 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 768 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 768 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 768 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 768 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 738 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 738 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 738 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 738 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 738 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 738 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 738 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 738 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 709 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_24,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 709 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 709 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 709 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);

#line 690 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_9,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 690 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 690 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 690 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15);

#line 633 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 633 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 633 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 633 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 633 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4);

#line 508 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 508 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 508 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 508 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6);

#line 477 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 477 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 477 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 477 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 477 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 477 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5);

#line 439 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_8_p_0(
#line 439 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_9,
#line 439 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_10,
#line 439 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_11,
#line 439 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundError_12,
#line 439 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24,
#line 439 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_25,
#line 439 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26,
#line 439 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27);

#line 346 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 346 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 346 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4);

#line 317 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 317 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 317 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4);

#line 310 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 310 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 310 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 310 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 310 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4);

#line 288 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void);


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[78][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[7][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][8];




static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[78][2] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: no"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 62 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (((MR_Integer) 46 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: constructor"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: field"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Here is the previous definition of field"))
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
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6)),
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
    ((MR_Box) (&hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
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



#line 1066 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1074 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0
  }
};

#line 1082 "hlds.make_hlds.add_type.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

#line 1090 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

#line 268 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_1(
#line 268 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 268 "add_type.m"
{
#line 268 "add_type.m"
  {
#line 268 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 268 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 268 "add_type.m"
  }
#line 268 "add_type.m"
}

#line 270 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_3(
#line 270 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 270 "add_type.m"
{
#line 270 "add_type.m"
  {
#line 270 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 270 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Var_92 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__conv0_Var_92);
#line 270 "add_type.m"
    {
#line 270 "add_type.m"
      hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 270 "add_type.m"
      return;
    }
#line 270 "add_type.m"
  }
#line 270 "add_type.m"
}

#line 271 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_4(
#line 271 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 271 "add_type.m"
{
#line 271 "add_type.m"
  {
#line 271 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 271 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_1, 1);
#line 271 "add_type.m"
  }
#line 271 "add_type.m"
}

#line 271 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_5(
#line 271 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 271 "add_type.m"
{
#line 271 "add_type.m"
  {
#line 271 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 1175 "hlds.make_hlds.add_type.c"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_279_279 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 271 "add_type.m"
    {
#line 271 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__builtin__unify_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_279_279, ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Var_92)), ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__V_277_277)));
    }
#line 271 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 271 "add_type.m"
      {
#line 271 "add_type.m"
        hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_4(hlds__make_hlds__add_type__env_ptr);
#line 271 "add_type.m"
        return;
      }
#line 271 "add_type.m"
  }
#line 271 "add_type.m"
}

#line 271 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_6(
#line 271 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 271 "add_type.m"
{
#line 271 "add_type.m"
  {
#line 271 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 271 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_1) == 0)
#line 271 "add_type.m"
      {
#line 271 "add_type.m"
        {
#line 271 "add_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__EqvType_91, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__V_277_277, hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_5, hlds__make_hlds__add_type__env_ptr);
        }
#line 271 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 271 "add_type.m"
      }
#line 271 "add_type.m"
    else
#line 271 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 271 "add_type.m"
  }
#line 271 "add_type.m"
}

#line 268 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_2(
#line 268 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 268 "add_type.m"
{
#line 268 "add_type.m"
  {
#line 268 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 271 "add_type.m"
    {
#line 271 "add_type.m"
      hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_6(hlds__make_hlds__add_type__env_ptr);
    }
#line 271 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = !((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 271 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 271 "add_type.m"
      {
#line 271 "add_type.m"
        hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 271 "add_type.m"
        return;
      }
#line 268 "add_type.m"
  }
#line 268 "add_type.m"
}

#line 268 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_7(
#line 268 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 268 "add_type.m"
{
#line 268 "add_type.m"
  {
#line 268 "add_type.m"
    struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 268 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 268 "add_type.m"
      {
#line 269 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 268 "add_type.m"
        if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 268 "add_type.m"
          {
#line 268 "add_type.m"
            (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52)) == (MR_mktag((MR_Integer) 2)));
#line 268 "add_type.m"
            if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 268 "add_type.m"
              {
#line 268 "add_type.m"
                (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__EqvType_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52, (MR_Integer) 0)));
#line 270 "add_type.m"
                {
#line 270 "add_type.m"
                  mercury__list__member_2_p_1((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_273_273, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__conv0_Var_92, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Args_14, hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_3, hlds__make_hlds__add_type__env_ptr);
                }
#line 268 "add_type.m"
              }
#line 268 "add_type.m"
          }
#line 268 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 268 "add_type.m"
      }
#line 268 "add_type.m"
    else
#line 268 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 268 "add_type.m"
  }
#line 268 "add_type.m"
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
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96,
#line 36 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_98,
#line 36 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99)
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
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtorInfo_274_274;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Ctors_37;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeUserUC_38;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constructor_40;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_102_102;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_103_103;
#line 106 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_104_104;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_105_105;
#line 106 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_276_276;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type___MaybeDirectArg_39;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_269_269;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_270_270;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_271_271;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_272_272;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_41_41;
#line 154 "add_type.m"
      MR_Word hlds__make_hlds__add_type__OldDefn0_47;
#line 167 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_60_60;

#line 82 "add_type.m"
      {
#line 82 "add_type.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, &hlds__make_hlds__add_type__Globals_22);
      }
#line 1415 "hlds.make_hlds.add_type.c"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_273_273 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 83 "add_type.m"
      {
#line 83 "add_type.m"
        mercury__list__length_2_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_273_273, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Args_14, &hlds__make_hlds__add_type__Arity_23);
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
          MR_String hlds__make_hlds__add_type__V_100_100;

#line 91 "add_type.m"
          {
#line 91 "add_type.m"
            hlds__make_hlds__add_type__V_100_100 = mercury__term__context_file_1_f_0(hlds__make_hlds__add_type__Context_17);
          }
#line 91 "add_type.m"
          {
#line 91 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__suffix_2_p_0(hlds__make_hlds__add_type__V_100_100, (MR_String) ".int2");
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
              hlds__make_hlds__add_type__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_37, (MR_Integer) 1)));
#line 107 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = (hlds__make_hlds__add_type__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 106 "add_type.m"
                {
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_40, (MR_Integer) 0)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_40, (MR_Integer) 1)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_40, (MR_Integer) 2)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_40, (MR_Integer) 3)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_40, (MR_Integer) 4)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_104_104 = (MR_Integer) 0;
#line 1517 "hlds.make_hlds.add_type.c"
                  hlds__make_hlds__add_type__TypeCtorInfo_274_274 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 108 "add_type.m"
                  {
#line 108 "add_type.m"
                    mercury__list__length_2_p_0(hlds__make_hlds__add_type__TypeCtorInfo_274_274, hlds__make_hlds__add_type__V_103_103, &hlds__make_hlds__add_type__V_276_276);
                  }
#line 108 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = (hlds__make_hlds__add_type__V_104_104 == hlds__make_hlds__add_type__V_276_276);
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
                            hlds__make_hlds__add_type__V_105_105 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__add_type__Status0_18);
                          }
#line 111 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = (hlds__make_hlds__add_type__V_105_105 == (MR_Integer) 1);
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
          MR_Word hlds__make_hlds__add_type__V_108_108;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_109_109;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_110_110;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_127_127;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_128_128;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_134_134;

#line 114 "add_type.m"
          {
#line 114 "add_type.m"
            hlds__make_hlds__add_type__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_110_110, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_23));
#line 114 "add_type.m"
          }
#line 114 "add_type.m"
          {
#line 114 "add_type.m"
            hlds__make_hlds__add_type__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_110_110));
#line 114 "add_type.m"
          }
#line 114 "add_type.m"
          {
#line 114 "add_type.m"
            hlds__make_hlds__add_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_109_109));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[7])));
#line 114 "add_type.m"
          }
#line 113 "add_type.m"
          {
#line 113 "add_type.m"
            hlds__make_hlds__add_type__DummyMainPieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[69])));
#line 113 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_42, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_108_108));
#line 113 "add_type.m"
          }
#line 121 "add_type.m"
          {
#line 121 "add_type.m"
            hlds__make_hlds__add_type__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMainPieces_42));
#line 121 "add_type.m"
          }
#line 121 "add_type.m"
          {
#line 121 "add_type.m"
            hlds__make_hlds__add_type__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_128_128));
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[70])));
#line 121 "add_type.m"
          }
#line 120 "add_type.m"
          {
#line 120 "add_type.m"
            hlds__make_hlds__add_type__DummyMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 120 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_44, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 120 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_44, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_127_127));
#line 120 "add_type.m"
          }
#line 123 "add_type.m"
          {
#line 123 "add_type.m"
            hlds__make_hlds__add_type__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMsg_44));
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_45, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_134_134));
#line 122 "add_type.m"
          }
#line 124 "add_type.m"
          {
#line 124 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummySpec_45));
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_98));
#line 124 "add_type.m"
          }
#line 116 "add_type.m"
        }
#line 125 "add_type.m"
      else
#line 124 "add_type.m"
        hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_98;
#line 128 "add_type.m"
      {
#line 128 "add_type.m"
        hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, &hlds__make_hlds__add_type__TypeTable0_46);
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
              MR_Word hlds__make_hlds__add_type__V_139_139;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_140_140;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_141_141;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_160_160;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_161_161;
#line 144 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_165_165;

#line 142 "add_type.m"
              {
#line 142 "add_type.m"
                hlds__make_hlds__add_type__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_141_141, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_23));
#line 142 "add_type.m"
              }
#line 142 "add_type.m"
              {
#line 142 "add_type.m"
                hlds__make_hlds__add_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_141_141));
#line 142 "add_type.m"
              }
#line 142 "add_type.m"
              {
#line 142 "add_type.m"
                hlds__make_hlds__add_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_139_139, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_140_140));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[23])));
#line 142 "add_type.m"
              }
#line 141 "add_type.m"
              {
#line 141 "add_type.m"
                hlds__make_hlds__add_type__SolverPieces_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71])));
#line 141 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_53, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_139_139));
#line 141 "add_type.m"
              }
#line 145 "add_type.m"
              {
#line 145 "add_type.m"
                hlds__make_hlds__add_type__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverPieces_53));
#line 145 "add_type.m"
              }
#line 145 "add_type.m"
              {
#line 145 "add_type.m"
                hlds__make_hlds__add_type__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_161_161));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "add_type.m"
              }
#line 145 "add_type.m"
              {
#line 145 "add_type.m"
                hlds__make_hlds__add_type__SolverMsg_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_54, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_54, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_160_160));
#line 145 "add_type.m"
              }
#line 147 "add_type.m"
              {
#line 147 "add_type.m"
                hlds__make_hlds__add_type__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_165_165, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverMsg_54));
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_55, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_165_165));
#line 146 "add_type.m"
              }
#line 148 "add_type.m"
              {
#line 148 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverSpec_55));
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136));
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
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
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
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
#line 155 "add_type.m"
        }
#line 162 "add_type.m"
      {
#line 162 "add_type.m"
        mercury__map__init_1_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__TypeInfo_273_273, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &hlds__make_hlds__add_type__KindMap_58);
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
          MR_Word hlds__make_hlds__add_type__V_171_171;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_172_172;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_173_173;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_178_178;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_179_179;
#line 171 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_183_183;

#line 170 "add_type.m"
          {
#line 170 "add_type.m"
            hlds__make_hlds__add_type__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_173_173, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_173_173, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_23));
#line 170 "add_type.m"
          }
#line 170 "add_type.m"
          {
#line 170 "add_type.m"
            hlds__make_hlds__add_type__V_172_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_172_172, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_172_172, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_173_173));
#line 170 "add_type.m"
          }
#line 170 "add_type.m"
          {
#line 170 "add_type.m"
            hlds__make_hlds__add_type__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_171_171, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_172_172));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[74])));
#line 170 "add_type.m"
          }
#line 169 "add_type.m"
          {
#line 169 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclPieces_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[72])));
#line 169 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_61, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_171_171));
#line 169 "add_type.m"
          }
#line 172 "add_type.m"
          {
#line 172 "add_type.m"
            hlds__make_hlds__add_type__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclPieces_61));
#line 172 "add_type.m"
          }
#line 172 "add_type.m"
          {
#line 172 "add_type.m"
            hlds__make_hlds__add_type__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_178_178, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_179_179));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 172 "add_type.m"
          }
#line 172 "add_type.m"
          {
#line 172 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclMsg_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_62, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_62, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_178_178));
#line 172 "add_type.m"
          }
#line 174 "add_type.m"
          {
#line 174 "add_type.m"
            hlds__make_hlds__add_type__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_183_183, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclMsg_62));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_183_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_63, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_183_183));
#line 173 "add_type.m"
          }
#line 175 "add_type.m"
          {
#line 175 "add_type.m"
            MR_Word base;
#line 175 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = base;
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclSpec_63));
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 175 "add_type.m"
          }
#line 175 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96;
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
          MR_Word hlds__make_hlds__add_type__V_186_186;
#line 177 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_187_187;
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
                        hlds__make_hlds__add_type__V_186_186 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus1_66);
                      }
#line 182 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = (hlds__make_hlds__add_type__V_186_186 == (MR_Integer) 0);
#line 177 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 177 "add_type.m"
                        {
#line 183 "add_type.m"
                          {
#line 183 "add_type.m"
                            hlds__make_hlds__add_type__V_187_187 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__Status0_18);
                          }
#line 183 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = (hlds__make_hlds__add_type__V_187_187 == (MR_Integer) 1);
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
              MR_Word hlds__make_hlds__add_type__V_190_190;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_191_191;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_192_192;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_197_197;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_198_198;
#line 187 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_202_202;

#line 186 "add_type.m"
              {
#line 186 "add_type.m"
                hlds__make_hlds__add_type__V_192_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_192_192, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_192_192, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_23));
#line 186 "add_type.m"
              }
#line 186 "add_type.m"
              {
#line 186 "add_type.m"
                hlds__make_hlds__add_type__V_191_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_191_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_191_191, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_192_192));
#line 186 "add_type.m"
              }
#line 186 "add_type.m"
              {
#line 186 "add_type.m"
                hlds__make_hlds__add_type__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_190_190, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_191_191));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[77])));
#line 186 "add_type.m"
              }
#line 185 "add_type.m"
              {
#line 185 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisPieces_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[75])));
#line 185 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_69, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_190_190));
#line 185 "add_type.m"
              }
#line 188 "add_type.m"
              {
#line 188 "add_type.m"
                hlds__make_hlds__add_type__V_198_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_198_198, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisPieces_69));
#line 188 "add_type.m"
              }
#line 188 "add_type.m"
              {
#line 188 "add_type.m"
                hlds__make_hlds__add_type__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_197_197, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_198_198));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_197_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 188 "add_type.m"
              }
#line 188 "add_type.m"
              {
#line 188 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisMsg_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_70, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_70, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_197_197));
#line 188 "add_type.m"
              }
#line 190 "add_type.m"
              {
#line 190 "add_type.m"
                hlds__make_hlds__add_type__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_202_202, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisMsg_70));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_202_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_71, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_202_202));
#line 189 "add_type.m"
              }
#line 191 "add_type.m"
              {
#line 191 "add_type.m"
                MR_Word base;
#line 191 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "add_type.m"
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = base;
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisSpec_71));
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 191 "add_type.m"
              }
#line 191 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96;
#line 187 "add_type.m"
            }
#line 192 "add_type.m"
          else
#line 259 "add_type.m"
            {
#line 259 "add_type.m"
              MR_Word hlds__make_hlds__add_type__TVarSet_2_73;
#line 259 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Params_2_74;
#line 259 "add_type.m"
              MR_Word hlds__make_hlds__add_type__KindMap_2_75;
#line 259 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body_2_76;
#line 259 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigContext_77;
#line 259 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigStatus_78;
#line 259 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigInExportedEqv_79;
#line 259 "add_type.m"
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
#line 259 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 205 "add_type.m"
                {
#line 205 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__Target_82;
#line 205 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MakeOptInt_83;
#line 214 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_84_84;

#line 205 "add_type.m"
                  {
#line 205 "add_type.m"
                    libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_22, &hlds__make_hlds__add_type__Target_82);
                  }
#line 206 "add_type.m"
                  {
#line 206 "add_type.m"
                    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_type__Globals_22, (MR_Integer) 86, &hlds__make_hlds__add_type__MakeOptInt_83);
                  }
#line 214 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 214 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 214 "add_type.m"
                    {
#line 214 "add_type.m"
                      hlds__make_hlds__add_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52, (MR_Integer) 1)));
#line 216 "add_type.m"
                      {
#line 216 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__hlds_pred____Unify____import_status_0_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49, hlds__make_hlds__add_type__OrigStatus_78);
                      }
#line 218 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 216 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96;
#line 218 "add_type.m"
                      else
#line 221 "add_type.m"
                        {
#line 221 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeDefn3_85;
#line 221 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeTable_86;

#line 219 "add_type.m"
                          {
#line 219 "add_type.m"
                            hlds__hlds_data__set_type_defn_9_p_0(hlds__make_hlds__add_type__TVarSet_2_73, hlds__make_hlds__add_type__Params_2_74, hlds__make_hlds__add_type__KindMap_2_75, hlds__make_hlds__add_type__Body_2_76, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49, hlds__make_hlds__add_type__OrigInExportedEqv_79, hlds__make_hlds__add_type__OrigNeedQual_80, hlds__make_hlds__add_type__OrigContext_77, &hlds__make_hlds__add_type__TypeDefn3_85);
                          }
#line 222 "add_type.m"
                          {
#line 222 "add_type.m"
                            hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_24, hlds__make_hlds__add_type__TypeDefn3_85, hlds__make_hlds__add_type__TypeTable0_46, &hlds__make_hlds__add_type__TypeTable_86);
                          }
#line 224 "add_type.m"
                          {
#line 224 "add_type.m"
                            hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_86, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97);
                          }
#line 221 "add_type.m"
                        }
#line 224 "add_type.m"
                      *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 214 "add_type.m"
                    }
#line 214 "add_type.m"
                  else
#line 248 "add_type.m"
                    {
#line 248 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__NewBody_87;

#line 227 "add_type.m"
                      {
#line 227 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(hlds__make_hlds__add_type__Target_82, hlds__make_hlds__add_type__MakeOptInt_83, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Body_52, hlds__make_hlds__add_type__Body_2_76, &hlds__make_hlds__add_type__NewBody_87);
                      }
#line 248 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 237 "add_type.m"
                        {
#line 230 "add_type.m"
                          {
#line 230 "add_type.m"
                            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(hlds__make_hlds__add_type__OrigStatus_78, hlds__make_hlds__add_type__Status1_36);
                          }
#line 237 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 233 "add_type.m"
                            {
#line 233 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeDefn3_262;
#line 233 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeTable_263;

#line 231 "add_type.m"
                              {
#line 231 "add_type.m"
                                hlds__hlds_data__set_type_defn_9_p_0(hlds__make_hlds__add_type__TVarSet_2_73, hlds__make_hlds__add_type__Params_2_74, hlds__make_hlds__add_type__KindMap_2_75, hlds__make_hlds__add_type__NewBody_87, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49, hlds__make_hlds__add_type__OrigInExportedEqv_79, hlds__make_hlds__add_type__NeedQual_19, hlds__make_hlds__add_type__Context_17, &hlds__make_hlds__add_type__TypeDefn3_262);
                              }
#line 234 "add_type.m"
                              {
#line 234 "add_type.m"
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_24, hlds__make_hlds__add_type__TypeDefn3_262, hlds__make_hlds__add_type__TypeTable0_46, &hlds__make_hlds__add_type__TypeTable_263);
                              }
#line 236 "add_type.m"
                              {
#line 236 "add_type.m"
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_263, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97);
                              }
#line 236 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 233 "add_type.m"
                            }
#line 237 "add_type.m"
                          else
#line 238 "add_type.m"
                            {
#line 238 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisPieces_88;
#line 238 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisMsg_89;
#line 238 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisSpec_90;
#line 238 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_211_211;
#line 238 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_212_212;
#line 238 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_213_213;
#line 238 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_226_226;
#line 238 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_227_227;
#line 238 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_231_231;

#line 238 "add_type.m"
                              {
#line 238 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97);
                              }
#line 240 "add_type.m"
                              {
#line 240 "add_type.m"
                                hlds__make_hlds__add_type__V_213_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_213_213, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 240 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_213_213, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_23));
#line 240 "add_type.m"
                              }
#line 240 "add_type.m"
                              {
#line 240 "add_type.m"
                                hlds__make_hlds__add_type__V_212_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_212_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 240 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_212_212, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_213_213));
#line 240 "add_type.m"
                              }
#line 240 "add_type.m"
                              {
#line 240 "add_type.m"
                                hlds__make_hlds__add_type__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_211_211, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_212_212));
#line 240 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[29])));
#line 240 "add_type.m"
                              }
#line 239 "add_type.m"
                              {
#line 239 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisPieces_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71])));
#line 239 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_211_211));
#line 239 "add_type.m"
                              }
#line 243 "add_type.m"
                              {
#line 243 "add_type.m"
                                hlds__make_hlds__add_type__V_227_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 243 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_227_227, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisPieces_88));
#line 243 "add_type.m"
                              }
#line 243 "add_type.m"
                              {
#line 243 "add_type.m"
                                hlds__make_hlds__add_type__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_226_226, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_227_227));
#line 243 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_226_226, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 243 "add_type.m"
                              }
#line 243 "add_type.m"
                              {
#line 243 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisMsg_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_89, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 243 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_89, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_226_226));
#line 243 "add_type.m"
                              }
#line 245 "add_type.m"
                              {
#line 245 "add_type.m"
                                hlds__make_hlds__add_type__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_231_231, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisMsg_89));
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_231_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "add_type.m"
                              }
#line 244 "add_type.m"
                              {
#line 244 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisSpec_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 244 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 244 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_90, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_231_231));
#line 244 "add_type.m"
                              }
#line 246 "add_type.m"
                              {
#line 246 "add_type.m"
                                MR_Word base;
#line 246 "add_type.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "add_type.m"
                                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = base;
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisSpec_90));
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 246 "add_type.m"
                              }
#line 238 "add_type.m"
                            }
#line 237 "add_type.m"
                        }
#line 248 "add_type.m"
                      else
#line 254 "add_type.m"
                        {
#line 251 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded = ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 253 "add_type.m"
                            {
#line 253 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 253 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96;
#line 253 "add_type.m"
                            }
#line 254 "add_type.m"
                          else
#line 255 "add_type.m"
                            {
#line 255 "add_type.m"
                              {
#line 255 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97);
                              }
#line 256 "add_type.m"
                              {
#line 256 "add_type.m"
                                hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__Status_49, hlds__make_hlds__add_type__Name_13, hlds__make_hlds__add_type__Arity_23, (MR_String) "type", hlds__make_hlds__add_type__Context_17, hlds__make_hlds__add_type__OrigContext_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99);
#line 256 "add_type.m"
                                return;
                              }
#line 255 "add_type.m"
                            }
#line 254 "add_type.m"
                        }
#line 248 "add_type.m"
                    }
#line 205 "add_type.m"
                }
#line 259 "add_type.m"
              else
#line 261 "add_type.m"
                {
#line 261 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__TypeTable_268;

#line 260 "add_type.m"
                  {
#line 260 "add_type.m"
                    hlds__hlds_data__add_or_replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_24, hlds__make_hlds__add_type__TypeDefn1_59, hlds__make_hlds__add_type__TypeTable0_46, &hlds__make_hlds__add_type__TypeTable_268);
                  }
#line 262 "add_type.m"
                  {
#line 262 "add_type.m"
                    hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_268, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97);
                  }
#line 268 "add_type.m"
                  {
#line 268 "add_type.m"
                    hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0_7(&hlds__make_hlds__add_type__env);
                  }
#line 283 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_95_49_49_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 276 "add_type.m"
                    {
#line 276 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvMsg_94;
#line 276 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvSpec_95;
#line 276 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_251_251;
#line 276 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_253_253;
#line 276 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_254_254;
#line 276 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_255_255;
#line 276 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_259_259;

#line 279 "add_type.m"
                      {
#line 279 "add_type.m"
                        hlds__make_hlds__add_type__V_255_255 = hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0();
                      }
#line 279 "add_type.m"
                      {
#line 279 "add_type.m"
                        hlds__make_hlds__add_type__V_254_254 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 279 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_254_254, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_255_255));
#line 279 "add_type.m"
                      }
#line 279 "add_type.m"
                      {
#line 279 "add_type.m"
                        hlds__make_hlds__add_type__V_253_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_253_253, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_254_254));
#line 279 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_253_253, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "add_type.m"
                      }
#line 278 "add_type.m"
                      {
#line 278 "add_type.m"
                        hlds__make_hlds__add_type__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_251_251, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_3[6]));
#line 278 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_251_251, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_253_253));
#line 278 "add_type.m"
                      }
#line 277 "add_type.m"
                      {
#line 277 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvMsg_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_94, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_17));
#line 277 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_94, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_251_251));
#line 277 "add_type.m"
                      }
#line 281 "add_type.m"
                      {
#line 281 "add_type.m"
                        hlds__make_hlds__add_type__V_259_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_259_259, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvMsg_94));
#line 281 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_259_259, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "add_type.m"
                      }
#line 280 "add_type.m"
                      {
#line 280 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvSpec_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 280 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 280 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_95, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_259_259));
#line 280 "add_type.m"
                      }
#line 282 "add_type.m"
                      {
#line 282 "add_type.m"
                        MR_Word base;
#line 282 "add_type.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = base;
#line 282 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvSpec_95));
#line 282 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 282 "add_type.m"
                      }
#line 276 "add_type.m"
                    }
#line 283 "add_type.m"
                  else
#line 282 "add_type.m"
                    *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 261 "add_type.m"
                }
#line 259 "add_type.m"
            }
#line 192 "add_type.m"
        }
#line 81 "add_type.m"
    }
#line 36 "add_type.m"
  }
#line 36 "add_type.m"
}

#line 777 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__777__1_1_f_0(
#line 777 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_94)
#line 777 "add_type.m"
{
#line 777 "add_type.m"
  {
#line 777 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 777 "add_type.m"
    MR_Word hlds__make_hlds__add_type__HeadVar__2_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 0)));
#line 777 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 1)));
#line 777 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 2)));
#line 777 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 3)));

#line 777 "add_type.m"
    return hlds__make_hlds__add_type__HeadVar__2_95;
#line 777 "add_type.m"
  }
#line 777 "add_type.m"
}

#line 869 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 869 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 869 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 869 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 869 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 869 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11)
#line 869 "add_type.m"
{
#line 872 "add_type.m"
  {
#line 872 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 872 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_12_12;

#line 873 "add_type.m"
    {
#line 873 "add_type.m"
      hlds__make_hlds__add_type__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleName_8));
#line 873 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldName_6));
#line 873 "add_type.m"
    }
#line 873 "add_type.m"
    {
#line 873 "add_type.m"
      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_12_12)), ((MR_Box) (hlds__make_hlds__add_type__FieldNameDefn_7)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);
#line 873 "add_type.m"
      return;
    }
#line 872 "add_type.m"
  }
#line 869 "add_type.m"
}

#line 865 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 865 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 865 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 865 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 865 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 865 "add_type.m"
{
#line 865 "add_type.m"
  {
#line 865 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 865 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11;

#line 865 "add_type.m"
    {
#line 865 "add_type.m"
      hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11);
    }
#line 865 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11));
#line 865 "add_type.m"
  }
#line 865 "add_type.m"
}

#line 813 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 813 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 813 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 813 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41)
#line 813 "add_type.m"
{
#line 819 "add_type.m"
  {
#line 819 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 819 "add_type.m"
    MR_Word hlds__make_hlds__add_type__FieldModule_17;
#line 851 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConflictingDefns_19;
#line 831 "add_type.m"
    MR_Box hlds__make_hlds__add_type__conv0_ConflictingDefns_19;

#line 823 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__FieldName_9)) == (MR_mktag((MR_Integer) 1))))
#line 821 "add_type.m"
      {
#line 821 "add_type.m"
        MR_String hlds__make_hlds__add_type__V_16_16;

#line 821 "add_type.m"
        hlds__make_hlds__add_type__FieldModule_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 0)));
#line 821 "add_type.m"
        hlds__make_hlds__add_type__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 1)));
#line 821 "add_type.m"
      }
#line 823 "add_type.m"
    else
#line 824 "add_type.m"
      {
#line 825 "add_type.m"
        {
#line 825 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "unqualified field name");
#line 825 "add_type.m"
          return;
        }
#line 824 "add_type.m"
      }
#line 831 "add_type.m"
    {
#line 831 "add_type.m"
      hlds__make_hlds__add_type__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[3], hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, ((MR_Box) (hlds__make_hlds__add_type__FieldName_9)), &hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
    }
#line 831 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 831 "add_type.m"
      {
#line 831 "add_type.m"
        hlds__make_hlds__add_type__ConflictingDefns_19 = ((MR_Word) hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
#line 831 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 831 "add_type.m"
      }
#line 851 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 836 "add_type.m"
      {
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__OrigContext_21;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Context_26;
#line 836 "add_type.m"
        MR_String hlds__make_hlds__add_type__FieldString_31;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Pieces_32;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__HereMsg_33;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevPieces_34;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevMsg_35;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Spec_36;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_51_51;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_52_52;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_59_59;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_60_60;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_64_64;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_72_72;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_73_73;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_77_77;
#line 836 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_78_78;
#line 834 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ConflictingDefn_20;
#line 832 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_45_45;
#line 840 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_27_27;
#line 840 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_28_28;
#line 840 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_29_29;
#line 840 "add_type.m"
        MR_Integer hlds__make_hlds__add_type__V_30_30;

#line 832 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__ConflictingDefns_19)) == (MR_mktag((MR_Integer) 1)));
#line 832 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 832 "add_type.m"
          {
#line 832 "add_type.m"
            hlds__make_hlds__add_type__ConflictingDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 0)));
#line 832 "add_type.m"
            hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 1)));
#line 832 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 832 "add_type.m"
          }
#line 834 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 833 "add_type.m"
          {
#line 833 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_22_22;
#line 833 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_23_23;
#line 833 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_24_24;
#line 833 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_25_25;

#line 833 "add_type.m"
            hlds__make_hlds__add_type__OrigContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 0)));
#line 833 "add_type.m"
            hlds__make_hlds__add_type__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 1)));
#line 833 "add_type.m"
            hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 2)));
#line 833 "add_type.m"
            hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 3)));
#line 833 "add_type.m"
            hlds__make_hlds__add_type__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 4)));
#line 833 "add_type.m"
          }
#line 834 "add_type.m"
        else
#line 835 "add_type.m"
          {
#line 835 "add_type.m"
            {
#line 835 "add_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "multiple conflicting fields");
#line 835 "add_type.m"
              return;
            }
#line 835 "add_type.m"
          }
#line 840 "add_type.m"
        hlds__make_hlds__add_type__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 0)));
#line 840 "add_type.m"
        hlds__make_hlds__add_type__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 1)));
#line 840 "add_type.m"
        hlds__make_hlds__add_type__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 2)));
#line 840 "add_type.m"
        hlds__make_hlds__add_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 3)));
#line 840 "add_type.m"
        hlds__make_hlds__add_type__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 4)));
#line 841 "add_type.m"
        {
#line 841 "add_type.m"
          hlds__make_hlds__add_type__FieldString_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 842 "add_type.m"
        {
#line 842 "add_type.m"
          hlds__make_hlds__add_type__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "add_type.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldString_31));
#line 842 "add_type.m"
        }
#line 842 "add_type.m"
        {
#line 842 "add_type.m"
          hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 842 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[56])));
#line 842 "add_type.m"
        }
#line 842 "add_type.m"
        {
#line 842 "add_type.m"
          hlds__make_hlds__add_type__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[67])));
#line 842 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 842 "add_type.m"
        }
#line 844 "add_type.m"
        {
#line 844 "add_type.m"
          hlds__make_hlds__add_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 844 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_32));
#line 844 "add_type.m"
        }
#line 844 "add_type.m"
        {
#line 844 "add_type.m"
          hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_60_60));
#line 844 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 844 "add_type.m"
        }
#line 844 "add_type.m"
        {
#line 844 "add_type.m"
          hlds__make_hlds__add_type__HereMsg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 844 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_26));
#line 844 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 844 "add_type.m"
        }
#line 846 "add_type.m"
        {
#line 846 "add_type.m"
          hlds__make_hlds__add_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 846 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[58])));
#line 846 "add_type.m"
        }
#line 845 "add_type.m"
        {
#line 845 "add_type.m"
          hlds__make_hlds__add_type__PrevPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[68])));
#line 845 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_64_64));
#line 845 "add_type.m"
        }
#line 847 "add_type.m"
        {
#line 847 "add_type.m"
          hlds__make_hlds__add_type__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 847 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevPieces_34));
#line 847 "add_type.m"
        }
#line 847 "add_type.m"
        {
#line 847 "add_type.m"
          hlds__make_hlds__add_type__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_73_73));
#line 847 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "add_type.m"
        }
#line 847 "add_type.m"
        {
#line 847 "add_type.m"
          hlds__make_hlds__add_type__PrevMsg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__OrigContext_21));
#line 847 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_72_72));
#line 847 "add_type.m"
        }
#line 849 "add_type.m"
        {
#line 849 "add_type.m"
          hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevMsg_35));
#line 849 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "add_type.m"
        }
#line 849 "add_type.m"
        {
#line 849 "add_type.m"
          hlds__make_hlds__add_type__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_type__HereMsg_33));
#line 849 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 849 "add_type.m"
        }
#line 848 "add_type.m"
        {
#line 848 "add_type.m"
          hlds__make_hlds__add_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 848 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 848 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_77_77));
#line 848 "add_type.m"
        }
#line 850 "add_type.m"
        {
#line 850 "add_type.m"
          MR_Word base;
#line 850 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = base;
#line 850 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_36));
#line 850 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40));
#line 850 "add_type.m"
        }
#line 850 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 836 "add_type.m"
      }
#line 851 "add_type.m"
    else
#line 852 "add_type.m"
      {
#line 852 "add_type.m"
        MR_String hlds__make_hlds__add_type__UnqualFieldName_37;
#line 852 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82;
#line 852 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_83_83;
#line 852 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_84_84;
#line 865 "add_type.m"
        MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39;

#line 852 "add_type.m"
        {
#line 852 "add_type.m"
          hlds__make_hlds__add_type__UnqualFieldName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 860 "add_type.m"
        if ((hlds__make_hlds__add_type__NeedQual_11 == (MR_Integer) 1))
#line 857 "add_type.m"
          {
#line 857 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_81_81;

#line 858 "add_type.m"
            {
#line 858 "add_type.m"
              hlds__make_hlds__add_type__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 858 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 858 "add_type.m"
            }
#line 858 "add_type.m"
            {
#line 858 "add_type.m"
              mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_81_81)), ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82);
            }
#line 857 "add_type.m"
          }
#line 860 "add_type.m"
        else
#line 861 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 865 "add_type.m"
        {
#line 865 "add_type.m"
          hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 865 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_6[0]));
#line 865 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1));
#line 865 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 865 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 3) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 865 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10));
#line 865 "add_type.m"
        }
#line 866 "add_type.m"
        {
#line 866 "add_type.m"
          hlds__make_hlds__add_type__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldModule_17));
#line 866 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_type__PartialQuals_12));
#line 866 "add_type.m"
        }
#line 865 "add_type.m"
        {
#line 865 "add_type.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[0], hlds__make_hlds__add_type__V_83_83, hlds__make_hlds__add_type__V_84_84, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
        }
#line 865 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
#line 865 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40;
#line 852 "add_type.m"
      }
#line 819 "add_type.m"
  }
#line 813 "add_type.m"
}

#line 791 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_6,
#line 791 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 791 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 791 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11)
#line 791 "add_type.m"
{
#line 797 "add_type.m"
  while (MR_TRUE)
#line 797 "add_type.m"
    {
#line 797 "add_type.m"
      /* tailcall optimized into a loop */
#line 797 "add_type.m"
      {
#line 797 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 797 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "add_type.m"
          {
#line 797 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 797 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 797 "add_type.m"
          }
#line 797 "add_type.m"
        else
#line 800 "add_type.m"
          {
#line 800 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 800 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldNames_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 800 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 800 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;
#line 800 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_44_44;

#line 807 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCtorFieldName_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 808 "add_type.m"
              {
#line 808 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 808 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 808 "add_type.m"
              }
#line 807 "add_type.m"
            else
#line 802 "add_type.m"
              {
#line 802 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldName_34;
#line 802 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldNameContext_35;
#line 802 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldDefn_36;
#line 802 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeCtorFieldName_24, (MR_Integer) 0)));

#line 802 "add_type.m"
                hlds__make_hlds__add_type__FieldName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 0)));
#line 802 "add_type.m"
                hlds__make_hlds__add_type__FieldNameContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 1)));
#line 803 "add_type.m"
                {
#line 803 "add_type.m"
                  hlds__make_hlds__add_type__FieldDefn_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 803 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldNameContext_35));
#line 803 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 1) = ((MR_Box) (hlds__make_hlds__add_type__ImportStatus_6));
#line 803 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_4));
#line 803 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 3) = ((MR_Box) (hlds__make_hlds__add_type__ConsId_5));
#line 803 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldNumber_7));
#line 803 "add_type.m"
                }
#line 805 "add_type.m"
                {
#line 805 "add_type.m"
                  hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(hlds__make_hlds__add_type__FieldName_34, hlds__make_hlds__add_type__FieldDefn_36, hlds__make_hlds__add_type__NeedQual_2, hlds__make_hlds__add_type__PartialQuals_3, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43);
                }
#line 802 "add_type.m"
              }
#line 811 "add_type.m"
            hlds__make_hlds__add_type__V_44_44 = (hlds__make_hlds__add_type__FieldNumber_7 + (MR_Integer) 1);
#line 810 "add_type.m"
            /* direct tailcall eliminated */
#line 810 "add_type.m"
            {
#line 810 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__MaybeCtorFieldNames_25;
#line 810 "add_type.m"
              MR_Integer hlds__make_hlds__add_type__FieldNumber__tmp_copy_7 = hlds__make_hlds__add_type__V_44_44;
#line 810 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 810 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;

#line 810 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10;
#line 810 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8;
#line 810 "add_type.m"
              hlds__make_hlds__add_type__FieldNumber_7 = hlds__make_hlds__add_type__FieldNumber__tmp_copy_7;
#line 810 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 810 "add_type.m"
            }
#line 810 "add_type.m"
            continue;
#line 800 "add_type.m"
          }
#line 797 "add_type.m"
      }
#line 797 "add_type.m"
      break;
#line 797 "add_type.m"
    }
#line 791 "add_type.m"
}

#line 782 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 782 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 782 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 782 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 782 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 782 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 782 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15)
#line 782 "add_type.m"
{
#line 785 "add_type.m"
  {
#line 785 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 785 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdA_12;
#line 785 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdB_13;
#line 785 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_16_16;
#line 785 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_18_18;
#line 785 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_20_20;

#line 786 "add_type.m"
    {
#line 786 "add_type.m"
      hlds__make_hlds__add_type__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleQual_10));
#line 786 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_type__ConsName_8));
#line 786 "add_type.m"
    }
#line 786 "add_type.m"
    {
#line 786 "add_type.m"
      hlds__make_hlds__add_type__ConsIdA_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 786 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 786 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 786 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 786 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 3) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_7));
#line 786 "add_type.m"
    }
#line 788 "add_type.m"
    {
#line 788 "add_type.m"
      hlds__make_hlds__add_type__V_18_18 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 787 "add_type.m"
    {
#line 787 "add_type.m"
      hlds__make_hlds__add_type__ConsIdB_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 787 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 787 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 787 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 787 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_18_18));
#line 787 "add_type.m"
    }
#line 789 "add_type.m"
    {
#line 789 "add_type.m"
      hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdB_13));
#line 789 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14));
#line 789 "add_type.m"
    }
#line 789 "add_type.m"
    {
#line 789 "add_type.m"
      MR_Word base;
#line 789 "add_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15 = base;
#line 789 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdA_12));
#line 789 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 789 "add_type.m"
    }
#line 785 "add_type.m"
  }
#line 782 "add_type.m"
}

#line 777 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 777 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 777 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1)
#line 777 "add_type.m"
{
#line 777 "add_type.m"
  {
#line 777 "add_type.m"
    MR_Box hlds__make_hlds__add_type__wrapper_arg_2;
#line 777 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 777 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv3_HeadVar__2_95;

#line 777 "add_type.m"
    {
#line 777 "add_type.m"
      hlds__make_hlds__add_type__conv3_HeadVar__2_95 = hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__777__1_1_f_0(((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1));
    }
#line 777 "add_type.m"
    hlds__make_hlds__add_type__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_type__conv3_HeadVar__2_95));
#line 777 "add_type.m"
    return hlds__make_hlds__add_type__wrapper_arg_2;
#line 777 "add_type.m"
  }
#line 777 "add_type.m"
}

#line 768 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 768 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 768 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 768 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 768 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 768 "add_type.m"
{
#line 768 "add_type.m"
  {
#line 768 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 768 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15;

#line 768 "add_type.m"
    {
#line 768 "add_type.m"
      hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15);
    }
#line 768 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15));
#line 768 "add_type.m"
  }
#line 768 "add_type.m"
}

#line 738 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 738 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 738 "add_type.m"
{
#line 738 "add_type.m"
  {
#line 738 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 738 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0, 1);
#line 738 "add_type.m"
  }
#line 738 "add_type.m"
}

#line 738 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 738 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 738 "add_type.m"
{
#line 738 "add_type.m"
  {
#line 738 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 738 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98);
#line 738 "add_type.m"
    {
#line 738 "add_type.m"
      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 738 "add_type.m"
      return;
    }
#line 738 "add_type.m"
  }
#line 738 "add_type.m"
}

#line 738 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 738 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 738 "add_type.m"
{
#line 738 "add_type.m"
  {
#line 738 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 738 "add_type.m"
    {
#line 739 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_100_100;
#line 739 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_101_101;
#line 739 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_102_102;
#line 739 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_103_103;
#line 739 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_104_104;
#line 739 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_105_105;
#line 739 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_106_106;

#line 739 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 0)));
#line 739 "add_type.m"
      hlds__make_hlds__add_type__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 1)));
#line 739 "add_type.m"
      hlds__make_hlds__add_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 2)));
#line 739 "add_type.m"
      hlds__make_hlds__add_type__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 3)));
#line 739 "add_type.m"
      hlds__make_hlds__add_type__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 4)));
#line 739 "add_type.m"
      hlds__make_hlds__add_type__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 5)));
#line 739 "add_type.m"
      hlds__make_hlds__add_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 6)));
#line 739 "add_type.m"
      hlds__make_hlds__add_type__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 7)));
#line 739 "add_type.m"
      {
#line 739 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118);
      }
#line 739 "add_type.m"
      if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 739 "add_type.m"
        {
#line 739 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 739 "add_type.m"
          return;
        }
#line 738 "add_type.m"
    }
#line 738 "add_type.m"
  }
#line 738 "add_type.m"
}

#line 738 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 738 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 738 "add_type.m"
{
#line 738 "add_type.m"
  {
#line 738 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 738 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0) == 0)
#line 738 "add_type.m"
      {
#line 738 "add_type.m"
        {
#line 738 "add_type.m"
          {
#line 738 "add_type.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43, hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3, hlds__make_hlds__add_type__env_ptr);
          }
#line 738 "add_type.m"
        }
#line 738 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_FALSE;
#line 738 "add_type.m"
      }
#line 738 "add_type.m"
    else
#line 738 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_TRUE;
#line 738 "add_type.m"
  }
#line 738 "add_type.m"
}

#line 709 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_24,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 709 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 709 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 709 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 709 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60)
#line 709 "add_type.m"
{
#line 709 "add_type.m"
  {
#line 709 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s hlds__make_hlds__add_type__env;

#line 709 "add_type.m"
    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17 = hlds__make_hlds__add_type__TypeCtor_17;
#line 718 "add_type.m"
    {
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 0)));
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 1)));
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Name_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 2)));
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Args_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 3)));
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 4)));
#line 718 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__Arity_33;
#line 718 "add_type.m"
      MR_String hlds__make_hlds__add_type__BaseName_34;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedName_35;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedName_36;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdA_37;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdB_38;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdA_39;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdB_40;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ConsDefn_41;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__PartialQuals_42;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__FieldNames_52;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_61_61;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_62_62;
#line 718 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85;

#line 720 "add_type.m"
      {
#line 720 "add_type.m"
        mercury__list__length_2_p_0(hlds__make_hlds__add_type__TypeCtorInfo_110_110, hlds__make_hlds__add_type__Args_31, &hlds__make_hlds__add_type__Arity_33);
      }
#line 721 "add_type.m"
      {
#line 721 "add_type.m"
        hlds__make_hlds__add_type__BaseName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__Name_30);
      }
#line 722 "add_type.m"
      {
#line 722 "add_type.m"
        hlds__make_hlds__add_type__QualifiedName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorModuleName_18));
#line 722 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 722 "add_type.m"
      }
#line 723 "add_type.m"
      {
#line 723 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 723 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__UnqualifiedName_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 723 "add_type.m"
      }
#line 724 "add_type.m"
      {
#line 724 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdA_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 724 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 724 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 724 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_33));
#line 724 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 724 "add_type.m"
      }
#line 725 "add_type.m"
      {
#line 725 "add_type.m"
        hlds__make_hlds__add_type__V_61_61 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 725 "add_type.m"
      {
#line 725 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdB_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 725 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 725 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 725 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_33));
#line 725 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_61_61));
#line 725 "add_type.m"
      }
#line 726 "add_type.m"
      {
#line 726 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdA_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 726 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 726 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 726 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_33));
#line 726 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 726 "add_type.m"
      }
#line 727 "add_type.m"
      {
#line 727 "add_type.m"
        hlds__make_hlds__add_type__V_62_62 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 727 "add_type.m"
      {
#line 727 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdB_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 727 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 727 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 727 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_33));
#line 727 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_62_62));
#line 727 "add_type.m"
      }
#line 729 "add_type.m"
      {
#line 729 "add_type.m"
        hlds__make_hlds__add_type__ConsDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 0) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__TVarSet_19));
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeParams_20));
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 3) = ((MR_Box) (hlds__make_hlds__add_type__KindMap_21));
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 4) = ((MR_Box) (hlds__make_hlds__add_type__ExistQVars_28));
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 5) = ((MR_Box) (hlds__make_hlds__add_type__Constraints_29));
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 6) = ((MR_Box) (hlds__make_hlds__add_type__Args_31));
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 7) = ((MR_Box) (hlds__make_hlds__add_type__Context_32));
#line 729 "add_type.m"
      }
#line 731 "add_type.m"
      {
#line 731 "add_type.m"
        parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__make_hlds__add_type__TypeCtorModuleName_18, hlds__make_hlds__add_type__PQInfo_23, &hlds__make_hlds__add_type__PartialQuals_42);
      }
#line 736 "add_type.m"
      {
#line 736 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_3_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__QualifiedConsIdA_37, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43);
      }
#line 736 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 738 "add_type.m"
        {
#line 738 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(&hlds__make_hlds__add_type__env);
        }
#line 750 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 742 "add_type.m"
        {
#line 742 "add_type.m"
          MR_String hlds__make_hlds__add_type__QualifiedConsIdStr_45;
#line 742 "add_type.m"
          MR_String hlds__make_hlds__add_type__TypeCtorStr_46;
#line 742 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Pieces_47;
#line 742 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Msg_48;
#line 742 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Spec_49;
#line 742 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_65_65;
#line 742 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_66_66;
#line 742 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_67_67;
#line 742 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_70_70;
#line 742 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_71_71;
#line 742 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_78_78;
#line 742 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_79_79;
#line 742 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_83_83;

#line 742 "add_type.m"
          {
#line 742 "add_type.m"
            hlds__make_hlds__add_type__QualifiedConsIdStr_45 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(hlds__make_hlds__add_type__QualifiedConsIdA_37);
          }
#line 743 "add_type.m"
          {
#line 743 "add_type.m"
            hlds__make_hlds__add_type__TypeCtorStr_46 = hlds__hlds_out__hlds_out_util__type_ctor_to_string_1_f_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17);
          }
#line 744 "add_type.m"
          {
#line 744 "add_type.m"
            hlds__make_hlds__add_type__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 744 "add_type.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdStr_45));
#line 744 "add_type.m"
          }
#line 745 "add_type.m"
          {
#line 745 "add_type.m"
            hlds__make_hlds__add_type__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 745 "add_type.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorStr_46));
#line 745 "add_type.m"
          }
#line 745 "add_type.m"
          {
#line 745 "add_type.m"
            hlds__make_hlds__add_type__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_71_71));
#line 745 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[56])));
#line 745 "add_type.m"
          }
#line 745 "add_type.m"
          {
#line 745 "add_type.m"
            hlds__make_hlds__add_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[66])));
#line 745 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_70_70));
#line 745 "add_type.m"
          }
#line 744 "add_type.m"
          {
#line 744 "add_type.m"
            hlds__make_hlds__add_type__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_66_66));
#line 744 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_67_67));
#line 744 "add_type.m"
          }
#line 744 "add_type.m"
          {
#line 744 "add_type.m"
            hlds__make_hlds__add_type__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[65])));
#line 744 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_65_65));
#line 744 "add_type.m"
          }
#line 747 "add_type.m"
          {
#line 747 "add_type.m"
            hlds__make_hlds__add_type__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 747 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_47));
#line 747 "add_type.m"
          }
#line 747 "add_type.m"
          {
#line 747 "add_type.m"
            hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_79_79));
#line 747 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "add_type.m"
          }
#line 747 "add_type.m"
          {
#line 747 "add_type.m"
            hlds__make_hlds__add_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 747 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_32));
#line 747 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 747 "add_type.m"
          }
#line 748 "add_type.m"
          {
#line 748 "add_type.m"
            hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_48));
#line 748 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "add_type.m"
          }
#line 748 "add_type.m"
          {
#line 748 "add_type.m"
            hlds__make_hlds__add_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 748 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 748 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_83_83));
#line 748 "add_type.m"
          }
#line 749 "add_type.m"
          {
#line 749 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_49));
#line 749 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59));
#line 749 "add_type.m"
          }
#line 749 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57;
#line 742 "add_type.m"
        }
#line 750 "add_type.m"
      else
#line 751 "add_type.m"
        {
#line 751 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 751 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88;
#line 751 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_90_90;
#line 751 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91;
#line 768 "add_type.m"
          MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91;

#line 755 "add_type.m"
          {
#line 755 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdB_38));
#line 755 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 755 "add_type.m"
          }
#line 763 "add_type.m"
          if ((hlds__make_hlds__add_type__NeedQual_22 == (MR_Integer) 1))
#line 760 "add_type.m"
            {
#line 760 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_89_89;

#line 762 "add_type.m"
              {
#line 762 "add_type.m"
                hlds__make_hlds__add_type__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdB_40));
#line 762 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86));
#line 762 "add_type.m"
              }
#line 762 "add_type.m"
              {
#line 762 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdA_39));
#line 762 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_89_89));
#line 762 "add_type.m"
              }
#line 760 "add_type.m"
            }
#line 763 "add_type.m"
          else
#line 764 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 768 "add_type.m"
          {
#line 768 "add_type.m"
            hlds__make_hlds__add_type__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[0]));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 4) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 5) = ((MR_Box) (hlds__make_hlds__add_type__Arity_33));
#line 768 "add_type.m"
          }
#line 768 "add_type.m"
          {
#line 768 "add_type.m"
            mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[1], hlds__make_hlds__add_type__V_90_90, hlds__make_hlds__add_type__PartialQuals_42, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
          }
#line 768 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
#line 772 "add_type.m"
          {
#line 772 "add_type.m"
            hlds__hlds_data__insert_into_cons_table_5_p_0(hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91, hlds__make_hlds__add_type__ConsDefn_41, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58);
          }
#line 772 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59;
#line 751 "add_type.m"
        }
#line 777 "add_type.m"
      {
#line 777 "add_type.m"
        hlds__make_hlds__add_type__FieldNames_52 = mercury__list__map_2_f_0(hlds__make_hlds__add_type__TypeCtorInfo_110_110, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[2], (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[1], hlds__make_hlds__add_type__Args_31);
      }
#line 779 "add_type.m"
      {
#line 779 "add_type.m"
        hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(hlds__make_hlds__add_type__FieldNames_52, hlds__make_hlds__add_type__NeedQual_22, hlds__make_hlds__add_type__PartialQuals_42, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__ImportStatus_24, (MR_Integer) 1, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);
#line 779 "add_type.m"
        return;
      }
#line 718 "add_type.m"
    }
#line 709 "add_type.m"
  }
#line 709 "add_type.m"
}

#line 690 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_9,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 690 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 690 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 690 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 690 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15)
#line 690 "add_type.m"
{
#line 697 "add_type.m"
  while (MR_TRUE)
#line 697 "add_type.m"
    {
#line 697 "add_type.m"
      /* tailcall optimized into a loop */
#line 697 "add_type.m"
      {
#line 697 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 697 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "add_type.m"
          {
#line 698 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14;
#line 698 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12;
#line 698 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10;
#line 697 "add_type.m"
          }
#line 697 "add_type.m"
        else
#line 701 "add_type.m"
          {
#line 701 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctor_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 701 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctors_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 701 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 701 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 701 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 702 "add_type.m"
            {
#line 702 "add_type.m"
              hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(hlds__make_hlds__add_type__Ctor_33, hlds__make_hlds__add_type__TypeCtor_2, hlds__make_hlds__add_type__TypeCtorModuleName_3, hlds__make_hlds__add_type__TVarSet_4, hlds__make_hlds__add_type__TypeParams_5, hlds__make_hlds__add_type__KindMap_6, hlds__make_hlds__add_type__NeedQual_7, hlds__make_hlds__add_type__PQInfo_8, hlds__make_hlds__add_type__ImportStatus_9, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12, &hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54);
            }
#line 705 "add_type.m"
            /* direct tailcall eliminated */
#line 705 "add_type.m"
            {
#line 705 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__Ctors_34;
#line 705 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 705 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 705 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 705 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14;
#line 705 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12;
#line 705 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10;
#line 705 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 705 "add_type.m"
            }
#line 705 "add_type.m"
            continue;
#line 701 "add_type.m"
          }
#line 697 "add_type.m"
      }
#line 697 "add_type.m"
      break;
#line 697 "add_type.m"
    }
#line 690 "add_type.m"
}

#line 633 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 633 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 633 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 633 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 633 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4)
#line 633 "add_type.m"
{
#line 637 "add_type.m"
  {
#line 637 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 637 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 659 "add_type.m"
      {
#line 659 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Details_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 660 "add_type.m"
        {
#line 660 "add_type.m"
          MR_Word base;
#line 660 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "add_type.m"
          *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 660 "add_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 660 "add_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__Details_24));
#line 660 "add_type.m"
        }
#line 659 "add_type.m"
      }
#line 637 "add_type.m"
    else
#line 637 "add_type.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 637 "add_type.m"
        {
#line 637 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Body_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 637 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 637 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeDirectArgCtors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 637 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorTagMap_12;
#line 637 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ReservedAddr_13;
#line 637 "add_type.m"
          MR_Word hlds__make_hlds__add_type__IsEnum_14;
#line 637 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CheaperTagTest_16;

#line 645 "add_type.m"
          {
#line 645 "add_type.m"
            hlds__make_tags__assign_constructor_tags_8_p_0(hlds__make_hlds__add_type__Body_5, hlds__make_hlds__add_type__MaybeUserEqComp_6, hlds__make_hlds__add_type__TypeCtor_2, (MR_Integer) 1, hlds__make_hlds__add_type__Globals_3, &hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__ReservedAddr_13, &hlds__make_hlds__add_type__IsEnum_14);
          }
#line 648 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__ReservedAddr_13 == (MR_Integer) 1);
#line 650 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 649 "add_type.m"
            {
#line 649 "add_type.m"
              hlds__make_tags__compute_cheaper_tag_test_2_p_0(hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__CheaperTagTest_16);
            }
#line 650 "add_type.m"
          else
#line 651 "add_type.m"
            hlds__make_hlds__add_type__CheaperTagTest_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 653 "add_type.m"
          {
#line 653 "add_type.m"
            MR_Word base;
#line 653 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 653 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 653 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_5));
#line 653 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorTagMap_12));
#line 653 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__CheaperTagTest_16));
#line 653 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__IsEnum_14));
#line 653 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_6));
#line 653 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__MaybeDirectArgCtors_7));
#line 653 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (((MR_Integer) 1 | ((hlds__make_hlds__add_type__ReservedAddr_13 << (MR_Integer) 1)))));
#line 653 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "add_type.m"
          }
#line 637 "add_type.m"
        }
#line 637 "add_type.m"
      else
#line 637 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 656 "add_type.m"
          {
#line 656 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Body_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 656 "add_type.m"
            {
#line 656 "add_type.m"
              MR_Word base;
#line 656 "add_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 656 "add_type.m"
              *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 656 "add_type.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_17));
#line 656 "add_type.m"
            }
#line 656 "add_type.m"
          }
#line 637 "add_type.m"
        else
#line 637 "add_type.m"
          if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 662 "add_type.m"
            {
#line 662 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 662 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 662 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 3)));
#line 662 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body_32;

#line 668 "add_type.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 1))))
#line 669 "add_type.m"
                {
#line 669 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__CForeignType_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 669 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_55_55;
#line 669 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__Data_64;

#line 670 "add_type.m"
                  {
#line 670 "add_type.m"
                    hlds__make_hlds__add_type__Data_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 670 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__CForeignType_35));
#line 670 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 670 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 670 "add_type.m"
                  }
#line 672 "add_type.m"
                  {
#line 672 "add_type.m"
                    hlds__make_hlds__add_type__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "add_type.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_64));
#line 672 "add_type.m"
                  }
#line 672 "add_type.m"
                  {
#line 672 "add_type.m"
                    hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 672 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_55_55));
#line 672 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "add_type.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "add_type.m"
                  }
#line 669 "add_type.m"
                }
#line 668 "add_type.m"
              else
#line 668 "add_type.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 0))))
#line 664 "add_type.m"
                  {
#line 664 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__ILForeignType_33 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__ForeignType_27), (MR_Integer) 0);
#line 664 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_34;
#line 664 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_59_59;

#line 665 "add_type.m"
                    {
#line 665 "add_type.m"
                      hlds__make_hlds__add_type__Data_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 665 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__ILForeignType_33));
#line 665 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 665 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 665 "add_type.m"
                    }
#line 667 "add_type.m"
                    {
#line 667 "add_type.m"
                      hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 667 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_34));
#line 667 "add_type.m"
                    }
#line 667 "add_type.m"
                    {
#line 667 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 667 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 667 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "add_type.m"
                    }
#line 664 "add_type.m"
                  }
#line 668 "add_type.m"
                else
#line 668 "add_type.m"
                  if (((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 2))))
#line 674 "add_type.m"
                    {
#line 674 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__JavaForeignType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 674 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_51_51;
#line 674 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__Data_65;

#line 675 "add_type.m"
                      {
#line 675 "add_type.m"
                        hlds__make_hlds__add_type__Data_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 675 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__JavaForeignType_36));
#line 675 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 675 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 675 "add_type.m"
                      }
#line 677 "add_type.m"
                      {
#line 677 "add_type.m"
                        hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 677 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_65));
#line 677 "add_type.m"
                      }
#line 677 "add_type.m"
                      {
#line 677 "add_type.m"
                        hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 677 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 677 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "add_type.m"
                      }
#line 674 "add_type.m"
                    }
#line 668 "add_type.m"
                  else
#line 668 "add_type.m"
                    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 679 "add_type.m"
                      {
#line 679 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__CSharpForeignType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 1)));
#line 679 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__V_47_47;
#line 679 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__Data_66;

#line 680 "add_type.m"
                        {
#line 680 "add_type.m"
                          hlds__make_hlds__add_type__Data_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 680 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__CSharpForeignType_37));
#line 680 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 680 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 680 "add_type.m"
                        }
#line 682 "add_type.m"
                        {
#line 682 "add_type.m"
                          hlds__make_hlds__add_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 682 "add_type.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_66));
#line 682 "add_type.m"
                        }
#line 682 "add_type.m"
                        {
#line 682 "add_type.m"
                          hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 682 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_47_47));
#line 682 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "add_type.m"
                        }
#line 679 "add_type.m"
                      }
#line 668 "add_type.m"
                    else
#line 684 "add_type.m"
                      {
#line 684 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__V_43_43;
#line 684 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__Data_67;

#line 685 "add_type.m"
                        {
#line 685 "add_type.m"
                          hlds__make_hlds__add_type__Data_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 685 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 0) = NULL;
#line 685 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 685 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 685 "add_type.m"
                        }
#line 687 "add_type.m"
                        {
#line 687 "add_type.m"
                          hlds__make_hlds__add_type__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 687 "add_type.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_67));
#line 687 "add_type.m"
                        }
#line 687 "add_type.m"
                        {
#line 687 "add_type.m"
                          hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 687 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_43_43));
#line 687 "add_type.m"
                        }
#line 684 "add_type.m"
                      }
#line 662 "add_type.m"
              *hlds__make_hlds__add_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_32);
#line 662 "add_type.m"
            }
#line 637 "add_type.m"
          else
#line 657 "add_type.m"
            {
#line 657 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 657 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));

#line 658 "add_type.m"
              {
#line 658 "add_type.m"
                MR_Word base;
#line 658 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 658 "add_type.m"
                *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 658 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 658 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__SolverTypeDetails_20));
#line 658 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_21));
#line 658 "add_type.m"
              }
#line 657 "add_type.m"
            }
#line 637 "add_type.m"
  }
#line 633 "add_type.m"
}

#line 508 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 508 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 508 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 508 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6)
#line 508 "add_type.m"
{
#line 511 "add_type.m"
  {
#line 511 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 0)));
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 1)));
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 2)));
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 3)));
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 4)));
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 0)));
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 1)));
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 2)));
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 3)));
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 4)));
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeIL_17;
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeC_18;
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJava_19;
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharp_20;
#line 511 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlang_21;

#line 526 "add_type.m"
    if ((hlds__make_hlds__add_type__MaybeILA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
      {
#line 526 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "add_type.m"
        else
#line 528 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILB_12;
#line 526 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 526 "add_type.m"
      }
#line 526 "add_type.m"
    else
#line 527 "add_type.m"
      {
#line 527 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 527 "add_type.m"
          {
#line 527 "add_type.m"
            hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILA_7;
#line 527 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 527 "add_type.m"
          }
#line 527 "add_type.m"
      }
#line 511 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 511 "add_type.m"
      {
#line 526 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeCA_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
          {
#line 526 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "add_type.m"
            else
#line 528 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCB_13;
#line 526 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 526 "add_type.m"
          }
#line 526 "add_type.m"
        else
#line 527 "add_type.m"
          {
#line 527 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 527 "add_type.m"
              {
#line 527 "add_type.m"
                hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCA_8;
#line 527 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 527 "add_type.m"
              }
#line 527 "add_type.m"
          }
#line 511 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 511 "add_type.m"
          {
#line 526 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeJavaA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
              {
#line 526 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "add_type.m"
                else
#line 528 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaB_14;
#line 526 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 526 "add_type.m"
              }
#line 526 "add_type.m"
            else
#line 527 "add_type.m"
              {
#line 527 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 527 "add_type.m"
                  {
#line 527 "add_type.m"
                    hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaA_9;
#line 527 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 527 "add_type.m"
                  }
#line 527 "add_type.m"
              }
#line 511 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 511 "add_type.m"
              {
#line 526 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeCSharpA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                  {
#line 526 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "add_type.m"
                    else
#line 528 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpB_15;
#line 526 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 526 "add_type.m"
                  }
#line 526 "add_type.m"
                else
#line 527 "add_type.m"
                  {
#line 527 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 527 "add_type.m"
                      {
#line 527 "add_type.m"
                        hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpA_10;
#line 527 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 527 "add_type.m"
                      }
#line 527 "add_type.m"
                  }
#line 511 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 511 "add_type.m"
                  {
#line 526 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeErlangA_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                      {
#line 526 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "add_type.m"
                        else
#line 528 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangB_16;
#line 526 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 526 "add_type.m"
                      }
#line 526 "add_type.m"
                    else
#line 527 "add_type.m"
                      {
#line 527 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 527 "add_type.m"
                          {
#line 527 "add_type.m"
                            hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangA_11;
#line 527 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 527 "add_type.m"
                          }
#line 527 "add_type.m"
                      }
#line 511 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 511 "add_type.m"
                      {
#line 521 "add_type.m"
                        {
#line 521 "add_type.m"
                          MR_Word base;
#line 521 "add_type.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "add_type.m"
                          *hlds__make_hlds__add_type__TypeBody_6 = base;
#line 521 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_17));
#line 521 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_18));
#line 521 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_19));
#line 521 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_20));
#line 521 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_21));
#line 521 "add_type.m"
                        }
#line 521 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 511 "add_type.m"
                      }
#line 511 "add_type.m"
                  }
#line 511 "add_type.m"
              }
#line 511 "add_type.m"
          }
#line 511 "add_type.m"
      }
#line 511 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 511 "add_type.m"
  }
#line 508 "add_type.m"
}

#line 477 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 477 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 477 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 477 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 477 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 477 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5)
#line 477 "add_type.m"
{
#line 482 "add_type.m"
  while (MR_TRUE)
#line 482 "add_type.m"
    {
#line 482 "add_type.m"
      /* tailcall optimized into a loop */
#line 482 "add_type.m"
      {
#line 482 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 482 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 502 "add_type.m"
          {
#line 502 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_34_34;

#line 502 "add_type.m"
            hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0)));
#line 502 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 502 "add_type.m"
              {
#line 502 "add_type.m"
                hlds__make_hlds__add_type__V_34_34 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 503 "add_type.m"
                /* direct tailcall eliminated */
#line 503 "add_type.m"
                {
#line 503 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3 = hlds__make_hlds__add_type__HeadVar__4_4;
#line 503 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4 = hlds__make_hlds__add_type__HeadVar__3_3;

#line 503 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__4_4 = hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4;
#line 503 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__3_3 = hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3;
#line 503 "add_type.m"
                }
#line 503 "add_type.m"
                continue;
#line 502 "add_type.m"
              }
#line 502 "add_type.m"
          }
#line 482 "add_type.m"
        else
#line 482 "add_type.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 482 "add_type.m"
            {
#line 482 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3), (MR_Integer) 0);

#line 482 "add_type.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1))))
#line 482 "add_type.m"
                {
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__ForeignTypeBody1_12;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_13;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeILA_63;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeCA_64;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeJavaA_65;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeErlangA_67;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeILB_68;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeCB_69;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeJavaB_70;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeErlangB_72;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeIL_73;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeC_74;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeJava_75;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeCSharp_76;
#line 482 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MaybeErlang_77;
#line 483 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 483 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 483 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 483 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 483 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 483 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 483 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 483 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 493 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_19_19;
#line 493 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_58_58;

#line 486 "add_type.m"
                  if ((hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "add_type.m"
                    hlds__make_hlds__add_type__ForeignTypeBody1_12 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_4[0];
#line 486 "add_type.m"
                  else
#line 485 "add_type.m"
                    hlds__make_hlds__add_type__ForeignTypeBody1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeForeignTypeBody1_11, (MR_Integer) 0)));
#line 512 "add_type.m"
                  hlds__make_hlds__add_type__MaybeILA_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 0)));
#line 512 "add_type.m"
                  hlds__make_hlds__add_type__MaybeCA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 1)));
#line 512 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJavaA_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 2)));
#line 512 "add_type.m"
                  hlds__make_hlds__add_type__MaybeCSharpA_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 3)));
#line 512 "add_type.m"
                  hlds__make_hlds__add_type__MaybeErlangA_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 4)));
#line 514 "add_type.m"
                  hlds__make_hlds__add_type__MaybeILB_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 0)));
#line 514 "add_type.m"
                  hlds__make_hlds__add_type__MaybeCB_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 1)));
#line 514 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJavaB_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 2)));
#line 514 "add_type.m"
                  hlds__make_hlds__add_type__MaybeCSharpB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 3)));
#line 514 "add_type.m"
                  hlds__make_hlds__add_type__MaybeErlangB_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 4)));
#line 526 "add_type.m"
                  if ((hlds__make_hlds__add_type__MaybeILA_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                    {
#line 526 "add_type.m"
                      if ((hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                        hlds__make_hlds__add_type__MaybeIL_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "add_type.m"
                      else
#line 528 "add_type.m"
                        hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILB_68;
#line 526 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 526 "add_type.m"
                    }
#line 526 "add_type.m"
                  else
#line 527 "add_type.m"
                    {
#line 527 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "add_type.m"
                      if (hlds__make_hlds__add_type__succeeded)
#line 527 "add_type.m"
                        {
#line 527 "add_type.m"
                          hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILA_63;
#line 527 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 527 "add_type.m"
                        }
#line 527 "add_type.m"
                    }
#line 482 "add_type.m"
                  if (hlds__make_hlds__add_type__succeeded)
#line 482 "add_type.m"
                    {
#line 526 "add_type.m"
                      if ((hlds__make_hlds__add_type__MaybeCA_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                        {
#line 526 "add_type.m"
                          if ((hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                            hlds__make_hlds__add_type__MaybeC_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "add_type.m"
                          else
#line 528 "add_type.m"
                            hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCB_69;
#line 526 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 526 "add_type.m"
                        }
#line 526 "add_type.m"
                      else
#line 527 "add_type.m"
                        {
#line 527 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "add_type.m"
                          if (hlds__make_hlds__add_type__succeeded)
#line 527 "add_type.m"
                            {
#line 527 "add_type.m"
                              hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCA_64;
#line 527 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 527 "add_type.m"
                            }
#line 527 "add_type.m"
                        }
#line 482 "add_type.m"
                      if (hlds__make_hlds__add_type__succeeded)
#line 482 "add_type.m"
                        {
#line 526 "add_type.m"
                          if ((hlds__make_hlds__add_type__MaybeJavaA_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                            {
#line 526 "add_type.m"
                              if ((hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                                hlds__make_hlds__add_type__MaybeJava_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "add_type.m"
                              else
#line 528 "add_type.m"
                                hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaB_70;
#line 526 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 526 "add_type.m"
                            }
#line 526 "add_type.m"
                          else
#line 527 "add_type.m"
                            {
#line 527 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "add_type.m"
                              if (hlds__make_hlds__add_type__succeeded)
#line 527 "add_type.m"
                                {
#line 527 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaA_65;
#line 527 "add_type.m"
                                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 527 "add_type.m"
                                }
#line 527 "add_type.m"
                            }
#line 482 "add_type.m"
                          if (hlds__make_hlds__add_type__succeeded)
#line 482 "add_type.m"
                            {
#line 526 "add_type.m"
                              if ((hlds__make_hlds__add_type__MaybeCSharpA_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                                {
#line 526 "add_type.m"
                                  if ((hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                                    hlds__make_hlds__add_type__MaybeCSharp_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "add_type.m"
                                  else
#line 528 "add_type.m"
                                    hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 526 "add_type.m"
                                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 526 "add_type.m"
                                }
#line 526 "add_type.m"
                              else
#line 527 "add_type.m"
                                {
#line 527 "add_type.m"
                                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "add_type.m"
                                  if (hlds__make_hlds__add_type__succeeded)
#line 527 "add_type.m"
                                    {
#line 527 "add_type.m"
                                      hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 527 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 527 "add_type.m"
                                    }
#line 527 "add_type.m"
                                }
#line 482 "add_type.m"
                              if (hlds__make_hlds__add_type__succeeded)
#line 482 "add_type.m"
                                {
#line 526 "add_type.m"
                                  if ((hlds__make_hlds__add_type__MaybeErlangA_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                                    {
#line 526 "add_type.m"
                                      if ((hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "add_type.m"
                                        hlds__make_hlds__add_type__MaybeErlang_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "add_type.m"
                                      else
#line 528 "add_type.m"
                                        hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangB_72;
#line 526 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 526 "add_type.m"
                                    }
#line 526 "add_type.m"
                                  else
#line 527 "add_type.m"
                                    {
#line 527 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "add_type.m"
                                      if (hlds__make_hlds__add_type__succeeded)
#line 527 "add_type.m"
                                        {
#line 527 "add_type.m"
                                          hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangA_67;
#line 527 "add_type.m"
                                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 527 "add_type.m"
                                        }
#line 527 "add_type.m"
                                    }
#line 482 "add_type.m"
                                  if (hlds__make_hlds__add_type__succeeded)
#line 482 "add_type.m"
                                    {
#line 521 "add_type.m"
                                      {
#line 521 "add_type.m"
                                        hlds__make_hlds__add_type__ForeignTypeBody_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "add_type.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_73));
#line 521 "add_type.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_74));
#line 521 "add_type.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_75));
#line 521 "add_type.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_76));
#line 521 "add_type.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_77));
#line 521 "add_type.m"
                                      }
#line 493 "add_type.m"
                                      hlds__make_hlds__add_type__V_19_19 = (MR_Integer) 1;
#line 493 "add_type.m"
                                      {
#line 493 "add_type.m"
                                        backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_1, hlds__make_hlds__add_type__ForeignTypeBody_13, &hlds__make_hlds__add_type__V_58_58);
                                      }
#line 493 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_19_19 == hlds__make_hlds__add_type__V_58_58);
#line 493 "add_type.m"
                                      if (hlds__make_hlds__add_type__succeeded)
#line 494 "add_type.m"
                                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MakeOptInterface_2 == (MR_Integer) 0);
#line 497 "add_type.m"
                                      if (hlds__make_hlds__add_type__succeeded)
#line 496 "add_type.m"
                                        *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__ForeignTypeBody_13);
#line 497 "add_type.m"
                                      else
#line 498 "add_type.m"
                                        {
#line 498 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_20_20;
#line 498 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_49_49;
#line 498 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_50_50;
#line 498 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_51_51;
#line 498 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_52_52;
#line 498 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_53_53;
#line 498 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_54_54;
#line 498 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_55_55;
#line 498 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_56_56;
#line 498 "add_type.m"
                                          MR_Word hlds__make_hlds__add_type__V_57_57;

#line 498 "add_type.m"
                                          {
#line 498 "add_type.m"
                                            hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 498 "add_type.m"
                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignTypeBody_13));
#line 498 "add_type.m"
                                          }
#line 498 "add_type.m"
                                          hlds__make_hlds__add_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 498 "add_type.m"
                                          hlds__make_hlds__add_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 498 "add_type.m"
                                          hlds__make_hlds__add_type__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 498 "add_type.m"
                                          hlds__make_hlds__add_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 498 "add_type.m"
                                          hlds__make_hlds__add_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 498 "add_type.m"
                                          hlds__make_hlds__add_type__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 498 "add_type.m"
                                          hlds__make_hlds__add_type__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 498 "add_type.m"
                                          hlds__make_hlds__add_type__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 498 "add_type.m"
                                          hlds__make_hlds__add_type__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 498 "add_type.m"
                                          {
#line 498 "add_type.m"
                                            MR_Word base;
#line 498 "add_type.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 498 "add_type.m"
                                            *hlds__make_hlds__add_type__HeadVar__5_5 = base;
#line 498 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_49_49));
#line 498 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_50_50));
#line 498 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 498 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 498 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_53_53));
#line 498 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__V_54_54));
#line 498 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) ((hlds__make_hlds__add_type__V_55_55 | ((hlds__make_hlds__add_type__V_56_56 << (MR_Integer) 1)))));
#line 498 "add_type.m"
                                            MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 498 "add_type.m"
                                          }
#line 498 "add_type.m"
                                        }
#line 497 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 482 "add_type.m"
                                    }
#line 482 "add_type.m"
                                }
#line 482 "add_type.m"
                            }
#line 482 "add_type.m"
                        }
#line 482 "add_type.m"
                    }
#line 482 "add_type.m"
                }
#line 482 "add_type.m"
              else
#line 482 "add_type.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0))))
#line 505 "add_type.m"
                  {
#line 505 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Body1_39 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 505 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Body_40;

#line 506 "add_type.m"
                    {
#line 506 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(hlds__make_hlds__add_type__V_59_59, hlds__make_hlds__add_type__Body1_39, &hlds__make_hlds__add_type__Body_40);
                    }
#line 505 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 505 "add_type.m"
                      {
#line 505 "add_type.m"
                        *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_40);
#line 505 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 505 "add_type.m"
                      }
#line 505 "add_type.m"
                  }
#line 482 "add_type.m"
                else
#line 482 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 482 "add_type.m"
            }
#line 482 "add_type.m"
          else
#line 482 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 482 "add_type.m"
        return hlds__make_hlds__add_type__succeeded;
#line 482 "add_type.m"
      }
#line 482 "add_type.m"
      break;
#line 482 "add_type.m"
    }
#line 477 "add_type.m"
}

#line 439 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_8_p_0(
#line 439 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_9,
#line 439 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_10,
#line 439 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_11,
#line 439 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundError_12,
#line 439 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24,
#line 439 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_25,
#line 439 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26,
#line 439 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27)
#line 439 "add_type.m"
{
#line 444 "add_type.m"
  {
#line 444 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 444 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 0)));
#line 444 "add_type.m"
    MR_Integer hlds__make_hlds__add_type__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 1)));
#line 444 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_17;
#line 444 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Target_18;
#line 448 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_68_68;

#line 446 "add_type.m"
    {
#line 446 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_type__Globals_17);
    }
#line 447 "add_type.m"
    {
#line 447 "add_type.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_17, &hlds__make_hlds__add_type__Target_18);
    }
#line 448 "add_type.m"
    {
#line 448 "add_type.m"
      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_18, hlds__make_hlds__add_type__ForeignTypeBody_10, &hlds__make_hlds__add_type__V_68_68);
    }
#line 448 "add_type.m"
    hlds__make_hlds__add_type__succeeded = ((MR_Integer) 1 == hlds__make_hlds__add_type__V_68_68);
#line 450 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 449 "add_type.m"
      {
#line 449 "add_type.m"
        *hlds__make_hlds__add_type__FoundError_12 = (MR_Integer) 0;
#line 449 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26;
#line 449 "add_type.m"
      }
#line 450 "add_type.m"
    else
#line 456 "add_type.m"
      {
#line 456 "add_type.m"
        MR_String hlds__make_hlds__add_type__LangStr_19;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__MainPieces_20;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Msg_22;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Spec_23;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_31_31;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_32_32;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_33_33;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_36_36;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_39_39;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_40_40;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_41_41;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_53_53;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_54_54;
#line 456 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_65_65;

#line 452 "add_type.m"
        if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 0))
#line 451 "add_type.m"
          hlds__make_hlds__add_type__LangStr_19 = (MR_String) "C";
#line 452 "add_type.m"
        else
#line 452 "add_type.m"
          if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 2))
#line 453 "add_type.m"
            hlds__make_hlds__add_type__LangStr_19 = (MR_String) "C#";
#line 452 "add_type.m"
          else
#line 452 "add_type.m"
            if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 4))
#line 455 "add_type.m"
              hlds__make_hlds__add_type__LangStr_19 = (MR_String) "Erlang";
#line 452 "add_type.m"
            else
#line 452 "add_type.m"
              if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 1))
#line 452 "add_type.m"
                hlds__make_hlds__add_type__LangStr_19 = (MR_String) "IL";
#line 452 "add_type.m"
              else
#line 454 "add_type.m"
                hlds__make_hlds__add_type__LangStr_19 = (MR_String) "Java";
#line 457 "add_type.m"
        {
#line 457 "add_type.m"
          hlds__make_hlds__add_type__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 457 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__add_type__LangStr_19));
#line 457 "add_type.m"
        }
#line 459 "add_type.m"
        {
#line 459 "add_type.m"
          hlds__make_hlds__add_type__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 459 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_15));
#line 459 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_16));
#line 459 "add_type.m"
        }
#line 459 "add_type.m"
        {
#line 459 "add_type.m"
          hlds__make_hlds__add_type__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 459 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_41_41));
#line 459 "add_type.m"
        }
#line 459 "add_type.m"
        {
#line 459 "add_type.m"
          hlds__make_hlds__add_type__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_40_40));
#line 459 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50])));
#line 459 "add_type.m"
        }
#line 458 "add_type.m"
        {
#line 458 "add_type.m"
          hlds__make_hlds__add_type__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[61])));
#line 458 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_39_39));
#line 458 "add_type.m"
        }
#line 458 "add_type.m"
        {
#line 458 "add_type.m"
          hlds__make_hlds__add_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[60])));
#line 458 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_36_36));
#line 458 "add_type.m"
        }
#line 457 "add_type.m"
        {
#line 457 "add_type.m"
          hlds__make_hlds__add_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_32_32));
#line 457 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_33_33));
#line 457 "add_type.m"
        }
#line 457 "add_type.m"
        {
#line 457 "add_type.m"
          hlds__make_hlds__add_type__MainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[59])));
#line 457 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_20, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_31_31));
#line 457 "add_type.m"
        }
#line 463 "add_type.m"
        {
#line 463 "add_type.m"
          hlds__make_hlds__add_type__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 463 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_type__MainPieces_20));
#line 463 "add_type.m"
        }
#line 463 "add_type.m"
        {
#line 463 "add_type.m"
          hlds__make_hlds__add_type__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_54_54));
#line 463 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[64])));
#line 463 "add_type.m"
        }
#line 462 "add_type.m"
        {
#line 462 "add_type.m"
          hlds__make_hlds__add_type__Msg_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 462 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_22, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_11));
#line 462 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_22, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_53_53));
#line 462 "add_type.m"
        }
#line 466 "add_type.m"
        {
#line 466 "add_type.m"
          hlds__make_hlds__add_type__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_22));
#line 466 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "add_type.m"
        }
#line 465 "add_type.m"
        {
#line 465 "add_type.m"
          hlds__make_hlds__add_type__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_23, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_65_65));
#line 465 "add_type.m"
        }
#line 467 "add_type.m"
        {
#line 467 "add_type.m"
          MR_Word base;
#line 467 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27 = base;
#line 467 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_23));
#line 467 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26));
#line 467 "add_type.m"
        }
#line 468 "add_type.m"
        *hlds__make_hlds__add_type__FoundError_12 = (MR_Integer) 1;
#line 456 "add_type.m"
      }
#line 468 "add_type.m"
    *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_25 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24;
#line 444 "add_type.m"
  }
#line 439 "add_type.m"
}

#line 346 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 346 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 346 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4)
#line 346 "add_type.m"
{
#line 354 "add_type.m"
  {
#line 354 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));

#line 354 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 353 "add_type.m"
      {
#line 353 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 353 "add_type.m"
        {
#line 353 "add_type.m"
          hlds__make_hlds__add_type__V_5_5 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
        }
#line 353 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_5_5 == (MR_Integer) 0);
#line 353 "add_type.m"
      }
#line 354 "add_type.m"
    else
#line 356 "add_type.m"
      {
#line 354 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 356 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 355 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__NewDefnStatus_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 356 "add_type.m"
        else
#line 357 "add_type.m"
          {
#line 357 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_6_6;
#line 357 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_7_7;

#line 357 "add_type.m"
            {
#line 357 "add_type.m"
              hlds__make_hlds__add_type__V_6_6 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus_3);
            }
#line 357 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_6_6 == (MR_Integer) 0);
#line 357 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 357 "add_type.m"
              {
#line 358 "add_type.m"
                {
#line 358 "add_type.m"
                  hlds__make_hlds__add_type__V_7_7 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
                }
#line 358 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_7_7 == (MR_Integer) 0);
#line 357 "add_type.m"
              }
#line 357 "add_type.m"
          }
#line 356 "add_type.m"
      }
#line 354 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 354 "add_type.m"
  }
#line 346 "add_type.m"
}

#line 317 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 317 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 317 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4)
#line 317 "add_type.m"
{
#line 320 "add_type.m"
  {
#line 320 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 320 "add_type.m"
    MR_Word hlds__make_hlds__add_type__OldIsSolverType_5;

#line 328 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 329 "add_type.m"
      {
#line 329 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Details_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 1)));

#line 333 "add_type.m"
        if ((hlds__make_hlds__add_type__Details_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 338 "add_type.m"
          hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 333 "add_type.m"
        else
#line 333 "add_type.m"
          if ((hlds__make_hlds__add_type__Details_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "add_type.m"
            hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 333 "add_type.m"
          else
#line 335 "add_type.m"
            hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 329 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 329 "add_type.m"
      }
#line 328 "add_type.m"
    else
#line 328 "add_type.m"
      if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 328 "add_type.m"
        {
#line 328 "add_type.m"
          hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 328 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 328 "add_type.m"
        }
#line 328 "add_type.m"
      else
#line 328 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 320 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 328 "add_type.m"
      {
#line 328 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 329 "add_type.m"
          {
#line 329 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Details_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 1)));

#line 333 "add_type.m"
            if ((hlds__make_hlds__add_type__Details_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 338 "add_type.m"
              {
#line 323 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 323 "add_type.m"
                hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 338 "add_type.m"
              }
#line 333 "add_type.m"
            else
#line 333 "add_type.m"
              if ((hlds__make_hlds__add_type__Details_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "add_type.m"
                {
#line 323 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 323 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 332 "add_type.m"
                }
#line 333 "add_type.m"
              else
#line 335 "add_type.m"
                {
#line 323 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 323 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 335 "add_type.m"
                }
#line 329 "add_type.m"
          }
#line 328 "add_type.m"
        else
#line 328 "add_type.m"
          if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 328 "add_type.m"
            {
#line 323 "add_type.m"
              hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 323 "add_type.m"
              hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 328 "add_type.m"
            }
#line 328 "add_type.m"
          else
#line 328 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 328 "add_type.m"
      }
#line 320 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 320 "add_type.m"
  }
#line 317 "add_type.m"
}

#line 310 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 310 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 310 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 310 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 310 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4)
#line 310 "add_type.m"
{
#line 313 "add_type.m"
  {
#line 313 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 313 "add_type.m"
    *hlds__make_hlds__add_type__OldBody_2 = hlds__make_hlds__add_type__OldBody_5;
#line 313 "add_type.m"
    *hlds__make_hlds__add_type__Body_4 = hlds__make_hlds__add_type__Body_6;
#line 313 "add_type.m"
  }
#line 310 "add_type.m"
}

#line 288 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void)
#line 288 "add_type.m"
{
#line 290 "add_type.m"
  {
#line 290 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 290 "add_type.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[49]);
#line 290 "add_type.m"
  }
#line 288 "add_type.m"
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
#line 542 "add_type.m"
  {
#line 542 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 542 "add_type.m"
    MR_Word hlds__make_hlds__add_type__CombinedStatus_7;

#line 549 "add_type.m"
    if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 619 "add_type.m"
      {
#line 617 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 619 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 618 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 619 "add_type.m"
        else
#line 620 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 619 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 619 "add_type.m"
      }
#line 549 "add_type.m"
    else
#line 549 "add_type.m"
      if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 629 "add_type.m"
        {
#line 627 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Section_30;

#line 627 "add_type.m"
          hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2)));
#line 627 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 627 "add_type.m"
            {
#line 627 "add_type.m"
              hlds__make_hlds__add_type__Section_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusB_5, (MR_Integer) 0)));
#line 628 "add_type.m"
              hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 627 "add_type.m"
            }
#line 627 "add_type.m"
          else
#line 630 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 629 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 629 "add_type.m"
        }
#line 549 "add_type.m"
      else
#line 549 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 564 "add_type.m"
          {
#line 564 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 564 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 564 "add_type.m"
          }
#line 549 "add_type.m"
        else
#line 549 "add_type.m"
          if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 565 "add_type.m"
            {
#line 565 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Status3_20;

#line 604 "add_type.m"
              if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 611 "add_type.m"
                {
#line 611 "add_type.m"
                  hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 611 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 611 "add_type.m"
                }
#line 604 "add_type.m"
              else
#line 604 "add_type.m"
                if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 610 "add_type.m"
                  {
#line 610 "add_type.m"
                    hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 610 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 610 "add_type.m"
                  }
#line 604 "add_type.m"
                else
#line 604 "add_type.m"
                  if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 608 "add_type.m"
                    {
#line 608 "add_type.m"
                      hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 608 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 608 "add_type.m"
                    }
#line 604 "add_type.m"
                  else
#line 604 "add_type.m"
                    if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 605 "add_type.m"
                      {
#line 605 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 605 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 605 "add_type.m"
                      }
#line 604 "add_type.m"
                    else
#line 604 "add_type.m"
                      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 607 "add_type.m"
                        {
#line 607 "add_type.m"
                          hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 607 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 607 "add_type.m"
                        }
#line 604 "add_type.m"
                      else
#line 604 "add_type.m"
                        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "add_type.m"
                          {
#line 609 "add_type.m"
                            hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 609 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 609 "add_type.m"
                          }
#line 604 "add_type.m"
                        else
#line 604 "add_type.m"
                          if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2))))
#line 606 "add_type.m"
                            {
#line 606 "add_type.m"
                              hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 606 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 606 "add_type.m"
                            }
#line 604 "add_type.m"
                          else
#line 604 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 565 "add_type.m"
              if (hlds__make_hlds__add_type__succeeded)
#line 565 "add_type.m"
                {
#line 567 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status3_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 569 "add_type.m"
                  if (hlds__make_hlds__add_type__succeeded)
#line 568 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 569 "add_type.m"
                  else
#line 570 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__Status3_20;
#line 569 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 565 "add_type.m"
                }
#line 565 "add_type.m"
            }
#line 549 "add_type.m"
          else
#line 549 "add_type.m"
            if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 604 "add_type.m"
              if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 611 "add_type.m"
                {
#line 611 "add_type.m"
                  hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 611 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 611 "add_type.m"
                }
#line 604 "add_type.m"
              else
#line 604 "add_type.m"
                if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 610 "add_type.m"
                  {
#line 610 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 610 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 610 "add_type.m"
                  }
#line 604 "add_type.m"
                else
#line 604 "add_type.m"
                  if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 608 "add_type.m"
                    {
#line 608 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 608 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 608 "add_type.m"
                    }
#line 604 "add_type.m"
                  else
#line 604 "add_type.m"
                    if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 605 "add_type.m"
                      {
#line 605 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 605 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 605 "add_type.m"
                      }
#line 604 "add_type.m"
                    else
#line 604 "add_type.m"
                      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 607 "add_type.m"
                        {
#line 607 "add_type.m"
                          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 607 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 607 "add_type.m"
                        }
#line 604 "add_type.m"
                      else
#line 604 "add_type.m"
                        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "add_type.m"
                          {
#line 609 "add_type.m"
                            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 609 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 609 "add_type.m"
                          }
#line 604 "add_type.m"
                        else
#line 604 "add_type.m"
                          if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2))))
#line 606 "add_type.m"
                            {
#line 606 "add_type.m"
                              hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 606 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 606 "add_type.m"
                            }
#line 604 "add_type.m"
                          else
#line 604 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 549 "add_type.m"
            else
#line 549 "add_type.m"
              if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "add_type.m"
                {
#line 572 "add_type.m"
                  hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 572 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 572 "add_type.m"
                }
#line 549 "add_type.m"
              else
#line 549 "add_type.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusA_4)) == (MR_mktag((MR_Integer) 2))))
#line 549 "add_type.m"
                  {
#line 549 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusA_4, (MR_Integer) 0)));

#line 557 "add_type.m"
                    if ((hlds__make_hlds__add_type__ImportLocn_11 == (MR_Integer) 3))
#line 558 "add_type.m"
                      {
#line 560 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[1]);
#line 558 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 558 "add_type.m"
                      }
#line 557 "add_type.m"
                    else
#line 583 "add_type.m"
                      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 599 "add_type.m"
                        {
#line 599 "add_type.m"
                          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 599 "add_type.m"
                          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 599 "add_type.m"
                        }
#line 583 "add_type.m"
                      else
#line 583 "add_type.m"
                        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 595 "add_type.m"
                          {
#line 596 "add_type.m"
                            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[2]);
#line 595 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 595 "add_type.m"
                          }
#line 583 "add_type.m"
                        else
#line 583 "add_type.m"
                          if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 590 "add_type.m"
                            {
#line 590 "add_type.m"
                              hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 590 "add_type.m"
                              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 590 "add_type.m"
                            }
#line 583 "add_type.m"
                          else
#line 583 "add_type.m"
                            if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 586 "add_type.m"
                              {
#line 587 "add_type.m"
                                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[3]);
#line 586 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 586 "add_type.m"
                              }
#line 583 "add_type.m"
                            else
#line 583 "add_type.m"
                              if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 593 "add_type.m"
                                {
#line 593 "add_type.m"
                                  hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 593 "add_type.m"
                                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 593 "add_type.m"
                                }
#line 583 "add_type.m"
                              else
#line 583 "add_type.m"
                                if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2))))
#line 584 "add_type.m"
                                  {
#line 584 "add_type.m"
                                    hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 584 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 584 "add_type.m"
                                  }
#line 583 "add_type.m"
                                else
#line 583 "add_type.m"
                                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 549 "add_type.m"
                  }
#line 549 "add_type.m"
                else
#line 549 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 542 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 541 "add_type.m"
      *hlds__make_hlds__add_type__Status_6 = hlds__make_hlds__add_type__CombinedStatus_7;
#line 542 "add_type.m"
    else
#line 543 "add_type.m"
      {
#line 543 "add_type.m"
        {
#line 543 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.combine_status\'/3", (MR_String) "unexpected status for type definition");
#line 543 "add_type.m"
          return;
        }
#line 543 "add_type.m"
      }
#line 542 "add_type.m"
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
#line 533 "add_type.m"
  {
#line 533 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));

#line 533 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 532 "add_type.m"
      *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 533 "add_type.m"
    else
#line 535 "add_type.m"
      {
#line 533 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 533 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 533 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 533 "add_type.m"
          {
#line 533 "add_type.m"
            hlds__make_hlds__add_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__Status_3, (MR_Integer) 0)));
#line 534 "add_type.m"
            *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 533 "add_type.m"
          }
#line 533 "add_type.m"
        else
#line 536 "add_type.m"
          *hlds__make_hlds__add_type__AbstractStatus_4 = hlds__make_hlds__add_type__Status_3;
#line 535 "add_type.m"
      }
#line 533 "add_type.m"
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
#line 361 "add_type.m"
  {
#line 361 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 361 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Context_14;
#line 361 "add_type.m"
    MR_Word hlds__make_hlds__add_type__TVarSet_15;
#line 361 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Args_16;
#line 361 "add_type.m"
    MR_Word hlds__make_hlds__add_type__KindMap_17;
#line 361 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Body_18;
#line 361 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Status_19;
#line 361 "add_type.m"
    MR_Word hlds__make_hlds__add_type__NeedQual_20;
#line 361 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_21;
#line 361 "add_type.m"
    MR_Word hlds__make_hlds__add_type__NewFoundError_42;
#line 361 "add_type.m"
    MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;

#line 362 "add_type.m"
    {
#line 362 "add_type.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Context_14);
    }
#line 363 "add_type.m"
    {
#line 363 "add_type.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__TVarSet_15);
    }
#line 364 "add_type.m"
    {
#line 364 "add_type.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Args_16);
    }
#line 365 "add_type.m"
    {
#line 365 "add_type.m"
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__KindMap_17);
    }
#line 366 "add_type.m"
    {
#line 366 "add_type.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Body_18);
    }
#line 367 "add_type.m"
    {
#line 367 "add_type.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Status_19);
    }
#line 368 "add_type.m"
    {
#line 368 "add_type.m"
      hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__NeedQual_20);
    }
#line 369 "add_type.m"
    {
#line 369 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__Globals_21);
    }
#line 411 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) == (MR_mktag((MR_Integer) 1))))
#line 372 "add_type.m"
      {
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ConsList_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)));
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__UserEqCmp_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 4)));
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ReservedTag_28 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Ctors0_31;
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PQInfo_32;
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorFields0_33;
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__TypeCtorSymName_34;
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_37;
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorFields_39;
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Ctors_40;
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorAddSpecs_41;
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_70_70;
#line 372 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71;
#line 371 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 1)));
#line 371 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 2)));
#line 371 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 3)));
#line 371 "add_type.m"
        MR_Word hlds__make_hlds__add_type___DirectArgCtors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 5)));
#line 371 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 7)));
#line 376 "add_type.m"
        MR_Integer hlds__make_hlds__add_type__V_35_35;
#line 408 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorName_45;
#line 408 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorArgType_46;
#line 401 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_47_47;

#line 373 "add_type.m"
        {
#line 373 "add_type.m"
          hlds__hlds_module__module_info_get_cons_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__Ctors0_31);
        }
#line 374 "add_type.m"
        {
#line 374 "add_type.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__PQInfo_32);
        }
#line 375 "add_type.m"
        {
#line 375 "add_type.m"
          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__CtorFields0_33);
        }
#line 376 "add_type.m"
        hlds__make_hlds__add_type__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 0)));
#line 376 "add_type.m"
        hlds__make_hlds__add_type__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 1)));
#line 380 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeCtorSymName_34)) == (MR_mktag((MR_Integer) 1))))
#line 381 "add_type.m"
          {
#line 381 "add_type.m"
            MR_String hlds__make_hlds__add_type__V_38_38;

#line 381 "add_type.m"
            hlds__make_hlds__add_type__TypeCtorModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 0)));
#line 381 "add_type.m"
            hlds__make_hlds__add_type__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 1)));
#line 381 "add_type.m"
          }
#line 380 "add_type.m"
        else
#line 378 "add_type.m"
          {
#line 379 "add_type.m"
            {
#line 379 "add_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.process_type_defn\'/8", (MR_String) "unqualified TypeCtorSymName");
#line 379 "add_type.m"
              return;
            }
#line 378 "add_type.m"
          }
#line 383 "add_type.m"
        {
#line 383 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__TypeCtorModuleName_37, hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Args_16, hlds__make_hlds__add_type__KindMap_17, hlds__make_hlds__add_type__NeedQual_20, hlds__make_hlds__add_type__PQInfo_32, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__CtorFields0_33, &hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__Ctors0_31, &hlds__make_hlds__add_type__Ctors_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_type__CtorAddSpecs_41);
        }
#line 386 "add_type.m"
        {
#line 386 "add_type.m"
          hlds__hlds_module__module_info_set_cons_table_3_p_0(hlds__make_hlds__add_type__Ctors_40, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_70_70);
        }
#line 387 "add_type.m"
        {
#line 387 "add_type.m"
          hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_70_70, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71);
        }
#line 392 "add_type.m"
        if ((hlds__make_hlds__add_type__CtorAddSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "add_type.m"
          {
#line 391 "add_type.m"
            hlds__make_hlds__add_type__NewFoundError_42 = (MR_Integer) 0;
#line 391 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62;
#line 390 "add_type.m"
          }
#line 392 "add_type.m"
        else
#line 393 "add_type.m"
          {
#line 394 "add_type.m"
            hlds__make_hlds__add_type__NewFoundError_42 = (MR_Integer) 1;
#line 395 "add_type.m"
            {
#line 395 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_type__CtorAddSpecs_41, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62);
            }
#line 393 "add_type.m"
          }
#line 401 "add_type.m"
        {
#line 401 "add_type.m"
          hlds__make_hlds__add_type__succeeded = parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(hlds__make_hlds__add_type__Globals_21, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ReservedTag_28, hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__UserEqCmp_26, &hlds__make_hlds__add_type__CtorName_45, &hlds__make_hlds__add_type__CtorArgType_46, &hlds__make_hlds__add_type__V_47_47);
        }
#line 408 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 404 "add_type.m"
          {
#line 404 "add_type.m"
            MR_Word hlds__make_hlds__add_type__NoTagType_48;
#line 404 "add_type.m"
            MR_Word hlds__make_hlds__add_type__NoTagTypes0_49;
#line 404 "add_type.m"
            MR_Word hlds__make_hlds__add_type__NoTagTypes_50;

#line 404 "add_type.m"
            {
#line 404 "add_type.m"
              hlds__make_hlds__add_type__NoTagType_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 404 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_48, 0) = ((MR_Box) (hlds__make_hlds__add_type__Args_16));
#line 404 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_48, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorName_45));
#line 404 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_48, 2) = ((MR_Box) (hlds__make_hlds__add_type__CtorArgType_46));
#line 404 "add_type.m"
            }
#line 405 "add_type.m"
            {
#line 405 "add_type.m"
              hlds__hlds_module__module_info_get_no_tag_types_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71, &hlds__make_hlds__add_type__NoTagTypes0_49);
            }
#line 406 "add_type.m"
            {
#line 406 "add_type.m"
              mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0, ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_9)), ((MR_Box) (hlds__make_hlds__add_type__NoTagType_48)), hlds__make_hlds__add_type__NoTagTypes0_49, &hlds__make_hlds__add_type__NoTagTypes_50);
            }
#line 407 "add_type.m"
            {
#line 407 "add_type.m"
              hlds__hlds_module__module_info_set_no_tag_types_3_p_0(hlds__make_hlds__add_type__NoTagTypes_50, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73);
            }
#line 404 "add_type.m"
          }
#line 408 "add_type.m"
        else
#line 407 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71;
#line 372 "add_type.m"
      }
#line 411 "add_type.m"
    else
#line 411 "add_type.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) == (MR_mktag((MR_Integer) 0))))
#line 418 "add_type.m"
        {
#line 418 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignTypeBody_55 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__Body_18), (MR_Integer) 0);

#line 419 "add_type.m"
          {
#line 419 "add_type.m"
            hlds__make_hlds__add_type__check_foreign_type_8_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ForeignTypeBody_55, hlds__make_hlds__add_type__Context_14, &hlds__make_hlds__add_type__NewFoundError_42, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63);
          }
#line 418 "add_type.m"
        }
#line 411 "add_type.m"
      else
#line 415 "add_type.m"
        {
#line 416 "add_type.m"
          hlds__make_hlds__add_type__NewFoundError_42 = (MR_Integer) 0;
#line 416 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60;
#line 416 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62;
#line 415 "add_type.m"
        }
#line 422 "add_type.m"
    {
#line 422 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_FoundError_59 = mercury__bool__or_2_f_0(hlds__make_hlds__add_type__STATE_VARIABLE_FoundError_0_58, hlds__make_hlds__add_type__NewFoundError_42);
    }
#line 425 "add_type.m"
    if ((*hlds__make_hlds__add_type__STATE_VARIABLE_FoundError_59 == (MR_Integer) 0))
#line 426 "add_type.m"
      {
#line 426 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ArgTypes_56;
#line 426 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Type_57;
#line 426 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_75_75;

#line 430 "add_type.m"
        {
#line 430 "add_type.m"
          hlds__make_hlds__add_type__V_75_75 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 430 "add_type.m"
        {
#line 430 "add_type.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_type__V_75_75, hlds__make_hlds__add_type__Args_16, &hlds__make_hlds__add_type__ArgTypes_56);
        }
#line 431 "add_type.m"
        {
#line 431 "add_type.m"
          parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ArgTypes_56, &hlds__make_hlds__add_type__Type_57);
        }
#line 432 "add_type.m"
        {
#line 432 "add_type.m"
          hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Type_57, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__Body_18, hlds__make_hlds__add_type__Context_14, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_61);
#line 432 "add_type.m"
          return;
        }
#line 426 "add_type.m"
      }
#line 425 "add_type.m"
    else
#line 424 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
#line 361 "add_type.m"
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
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96,
#line 36 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_98,
#line 36 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99)
#line 36 "add_type.m"
{
#line 81 "add_type.m"
  {
#line 81 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 81 "add_type.m"
    {
#line 81 "add_type.m"
      hlds__make_hlds__add_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_95_91_53_93_95_48_11_p_0(hlds__make_hlds__add_type__TVarSet_12, hlds__make_hlds__add_type__Name_13, hlds__make_hlds__add_type__Args_14, hlds__make_hlds__add_type__TypeDefn_15, hlds__make_hlds__add_type__Context_17, hlds__make_hlds__add_type__HeadVar__7_7, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_98, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99);
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
