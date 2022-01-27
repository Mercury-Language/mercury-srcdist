/*
** Automatically generated from `ml_accurate_gc.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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


/* :- module ml_backend.ml_accurate_gc. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_accurate_gc__init
ENDINIT
*/

#include "ml_backend.ml_accurate_gc.mih"


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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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




#line 153 "ml_backend.ml_accurate_gc.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 159 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 162 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_accurate_gc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 165 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "ml_backend.ml_accurate_gc.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 171 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0[4];

#line 174 "ml_backend.ml_accurate_gc.c"
static const MR_ConstString ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0[4];

#line 177 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0;

#line 180 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0[1];

#line 183 "ml_backend.ml_accurate_gc.c"
static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0[1];

#line 186 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0[1];

#line 189 "ml_backend.ml_accurate_gc.c"
static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0[1];

#line 192 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0[1];

#line 195 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0;

#line 198 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1[1];

#line 201 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1;

#line 204 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0[1];

#line 207 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1[1];

#line 210 "ml_backend.ml_accurate_gc.c"
static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0[2];

#line 213 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0[2];

#line 216 "ml_backend.ml_accurate_gc.c"
static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0[2];

#line 219 "ml_backend.ml_accurate_gc.c"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001(
#line 222 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 224 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2);

#line 227 "ml_backend.ml_accurate_gc.c"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001(
#line 230 "ml_backend.ml_accurate_gc.c"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 232 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 234 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3);

#line 237 "ml_backend.ml_accurate_gc.c"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001(
#line 240 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 242 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2);

#line 245 "ml_backend.ml_accurate_gc.c"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001(
#line 248 "ml_backend.ml_accurate_gc.c"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 250 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 252 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3);

#line 340 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__340__1_5_f_0(
#line 340 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24,
#line 340 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarSet_30,
#line 340 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarTypes_31,
#line 340 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__MLDS_Context_32,
#line 340 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__5_52);

#line 302 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__302__1_1_f_0(
#line 302 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_44);

#line 135 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(
#line 135 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 135 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 135 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3);

#line 135 "ml_accurate_gc.m"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(
#line 135 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 135 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2);

#line 424 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(
#line 424 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 424 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 424 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3);

#line 424 "ml_accurate_gc.m"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(
#line 424 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 424 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2);

#line 613 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__maybe_tag_rval_3_f_0(
#line 613 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 613 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 613 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Rval_3);

#line 600 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__init_field_n_7_p_0(
#line 600 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__PointerType_8,
#line 600 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__PointerRval_9,
#line 600 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_10,
#line 600 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ArgRval_11,
#line 600 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_12,
#line 600 "ml_accurate_gc.m"
  MR_Integer ml_backend__ml_accurate_gc__FieldNum_13,
#line 600 "ml_accurate_gc.m"
  MR_Integer * ml_backend__ml_accurate_gc__HeadVar__7_7);

#line 587 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1(
#line 587 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 587 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 587 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 587 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 587 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

#line 541 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(
#line 541 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__AtomicStatement0_5,
#line 541 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
#line 541 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34,
#line 541 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_35);

#line 530 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(
#line 530 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 530 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 530 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
#line 530 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);

#line 522 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(
#line 522 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 522 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 522 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
#line 522 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);

#line 514 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(
#line 514 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Case0_5,
#line 514 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Case_6,
#line 514 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12,
#line 514 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);

#line 483 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2(
#line 483 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 483 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 483 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 483 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 483 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

#line 469 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1(
#line 469 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 469 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 469 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 469 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 469 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

#line 463 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(
#line 463 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Stmt0_5,
#line 463 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
#line 463 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42,
#line 463 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);

#line 454 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(
#line 454 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Statement0_5,
#line 454 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_6,
#line 454 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11,
#line 454 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12);

#line 444 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_4_p_0(
#line 444 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Statement0_5,
#line 444 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ModuleName_6,
#line 444 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_7,
#line 444 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Defns_8);

#line 360 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(
#line 360 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Info_7,
#line 360 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 360 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Type_9,
#line 360 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_10,
#line 360 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 360 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__TraceStatement_12);

#line 340 "ml_accurate_gc.m"
static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2(
#line 340 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 340 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1);

#line 302 "ml_accurate_gc.m"
static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1(
#line 302 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 302 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1);

#line 293 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(
#line 293 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 293 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
#line 293 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ActualType_10,
#line 293 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 293 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__GC_TraceCode_12,
#line 293 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40,
#line 293 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41);

#line 139 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(
#line 139 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 139 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
#line 139 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_10,
#line 139 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 139 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_12,
#line 139 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25,
#line 139 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26);


static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_1[7][2];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_4[3][3];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_5[1][9];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_6[1][6];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_7[2][7];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_8[2][1];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_9[1][10];


#line 281 "ml_accurate_gc.m"
/* sealed */ struct ml_backend__ml_accurate_gc__vector_common_type_2_0_s {
#line 281 "ml_accurate_gc.m"
  const MR_String ml_backend__ml_accurate_gc__vector_common_type_2_0__vct_2_f_0;
#line 281 "ml_accurate_gc.m"
  const MR_Integer ml_backend__ml_accurate_gc__vector_common_type_2_0__vct_2_f_1;
#line 281 "ml_accurate_gc.m"
};

static /* final */ const struct ml_backend__ml_accurate_gc__vector_common_type_2_0_s ml_backend__ml_accurate_gc_vector_common_2[16];



static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[5])))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_4[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[1])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_6[1][6] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_String) "gc_trace")),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[6])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_9[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};


static /* final */ const struct ml_backend__ml_accurate_gc__vector_common_type_2_0_s ml_backend__ml_accurate_gc_vector_common_2[16] = {
  /* row 0 */
  {
    (MR_String) "zero_base_typeclass_info",
    (MR_Integer) -1
  },
  /* row 1 */
  {
    (MR_String) "zero_type_ctor_info",
    (MR_Integer) -1
  },
  /* row 2 */
  {
    (MR_String) "type_ctor_info",
    (MR_Integer) -1
  },
  /* row 3 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 4 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 5 */
  {
    (MR_String) "typeclass_info",
    (MR_Integer) -1
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 8 */
  {
    (MR_String) "type_info",
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_String) "zero_typeclass_info",
    (MR_Integer) -1
  },
  /* row 10 */
  {
    (MR_String) "zero_type_info",
    (MR_Integer) -1
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 12 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 14 */
  {
    (MR_String) "base_typeclass_info",
    (MR_Integer) -1
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 804 "ml_backend.ml_accurate_gc.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 812 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 820 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 828 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_accurate_gc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 837 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 845 "ml_backend.ml_accurate_gc.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 853 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_accurate_gc__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0
};

#line 861 "ml_backend.ml_accurate_gc.c"
static const MR_ConstString ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0[4] = {
  (MR_String) "fnoi_module_name",
  (MR_String) "fnoi_context",
  (MR_String) "fnoi_locals",
  (MR_String) "fnoi_next_id"
};

#line 869 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0 = {
  (MR_String) "fixup_newobj_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0,
  NULL,
  NULL
};

#line 884 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0
};

#line 889 "ml_backend.ml_accurate_gc.c"
static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0
  }
};

#line 898 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0
};

#line 903 "ml_backend.ml_accurate_gc.c"
static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0[1] = {
  (MR_Integer) 0
};

#line 908 "ml_backend.ml_accurate_gc.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001)),
  (MR_String) "ml_backend.ml_accurate_gc",
  (MR_String) "fixup_newobj_info",
  {     ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0 },
  {     ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0
};

#line 925 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 930 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0 = {
  (MR_String) "construct_from_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 945 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
};

#line 950 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1 = {
  (MR_String) "already_provided",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 965 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0
};

#line 970 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1
};

#line 975 "ml_backend.ml_accurate_gc.c"
static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1
  }
};

#line 989 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0[2] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1,
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0
};

#line 995 "ml_backend.ml_accurate_gc.c"
static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1001 "ml_backend.ml_accurate_gc.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_how_to_get_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001)),
  (MR_String) "ml_backend.ml_accurate_gc",
  (MR_String) "how_to_get_type_info",
  {     ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0 },
  {     ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0
};

#line 1018 "ml_backend.ml_accurate_gc.c"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001(
#line 1021 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 1023 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2)
#line 1025 "ml_backend.ml_accurate_gc.c"
{
#line 1027 "ml_backend.ml_accurate_gc.c"
  {
#line 1029 "ml_backend.ml_accurate_gc.c"
    MR_bool ml_backend__ml_accurate_gc__succeeded;

#line 1032 "ml_backend.ml_accurate_gc.c"
    {
#line 1034 "ml_backend.ml_accurate_gc.c"
      ml_backend__ml_accurate_gc__succeeded = ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2));
    }
#line 1037 "ml_backend.ml_accurate_gc.c"
    return ml_backend__ml_accurate_gc__succeeded;
#line 1039 "ml_backend.ml_accurate_gc.c"
  }
#line 1041 "ml_backend.ml_accurate_gc.c"
}

#line 1044 "ml_backend.ml_accurate_gc.c"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001(
#line 1047 "ml_backend.ml_accurate_gc.c"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 1049 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 1051 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3)
#line 1053 "ml_backend.ml_accurate_gc.c"
{
#line 1055 "ml_backend.ml_accurate_gc.c"
  {
#line 1057 "ml_backend.ml_accurate_gc.c"
    MR_Word ml_backend__ml_accurate_gc__conv0_HeadVar__1_1;

#line 1060 "ml_backend.ml_accurate_gc.c"
    {
#line 1062 "ml_backend.ml_accurate_gc.c"
      ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(&ml_backend__ml_accurate_gc__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3));
    }
#line 1065 "ml_backend.ml_accurate_gc.c"
    *ml_backend__ml_accurate_gc__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__1_1));
#line 1067 "ml_backend.ml_accurate_gc.c"
  }
#line 1069 "ml_backend.ml_accurate_gc.c"
}

#line 1072 "ml_backend.ml_accurate_gc.c"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001(
#line 1075 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 1077 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2)
#line 1079 "ml_backend.ml_accurate_gc.c"
{
#line 1081 "ml_backend.ml_accurate_gc.c"
  {
#line 1083 "ml_backend.ml_accurate_gc.c"
    MR_bool ml_backend__ml_accurate_gc__succeeded;

#line 1086 "ml_backend.ml_accurate_gc.c"
    {
#line 1088 "ml_backend.ml_accurate_gc.c"
      ml_backend__ml_accurate_gc__succeeded = ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2));
    }
#line 1091 "ml_backend.ml_accurate_gc.c"
    return ml_backend__ml_accurate_gc__succeeded;
#line 1093 "ml_backend.ml_accurate_gc.c"
  }
#line 1095 "ml_backend.ml_accurate_gc.c"
}

#line 1098 "ml_backend.ml_accurate_gc.c"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001(
#line 1101 "ml_backend.ml_accurate_gc.c"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 1103 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 1105 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3)
#line 1107 "ml_backend.ml_accurate_gc.c"
{
#line 1109 "ml_backend.ml_accurate_gc.c"
  {
#line 1111 "ml_backend.ml_accurate_gc.c"
    MR_Word ml_backend__ml_accurate_gc__conv0_HeadVar__1_1;

#line 1114 "ml_backend.ml_accurate_gc.c"
    {
#line 1116 "ml_backend.ml_accurate_gc.c"
      ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(&ml_backend__ml_accurate_gc__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3));
    }
#line 1119 "ml_backend.ml_accurate_gc.c"
    *ml_backend__ml_accurate_gc__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__1_1));
#line 1121 "ml_backend.ml_accurate_gc.c"
  }
#line 1123 "ml_backend.ml_accurate_gc.c"
}

#line 340 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__340__1_5_f_0(
#line 340 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24,
#line 340 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarSet_30,
#line 340 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarTypes_31,
#line 340 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__MLDS_Context_32,
#line 340 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__5_52)
#line 340 "ml_accurate_gc.m"
{
#line 340 "ml_accurate_gc.m"
  {
#line 340 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 340 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__HeadVar__6_53;
#line 340 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__LocalVarName_36;
#line 340 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__LocalVarType_37;
#line 340 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_54_54;
#line 340 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_55_55;

#line 342 "ml_accurate_gc.m"
    {
#line 342 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__LocalVarName_36 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_accurate_gc__VarSet_30, ml_backend__ml_accurate_gc__HeadVar__5_52);
    }
#line 343 "ml_accurate_gc.m"
    {
#line 343 "ml_accurate_gc.m"
      hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_accurate_gc__VarTypes_31, ml_backend__ml_accurate_gc__HeadVar__5_52, &ml_backend__ml_accurate_gc__LocalVarType_37);
    }
#line 344 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_accurate_gc__LocalVarName_36);
#line 345 "ml_accurate_gc.m"
    {
#line 345 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_55_55 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_accurate_gc__ModuleInfo_24, ml_backend__ml_accurate_gc__LocalVarType_37);
    }
#line 344 "ml_accurate_gc.m"
    {
#line 344 "ml_accurate_gc.m"
      return ml_backend__ml_accurate_gc__HeadVar__6_53 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_accurate_gc__V_54_54, ml_backend__ml_accurate_gc__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_accurate_gc__MLDS_Context_32);
    }
#line 340 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__HeadVar__6_53;
#line 340 "ml_accurate_gc.m"
  }
#line 340 "ml_accurate_gc.m"
}

#line 302 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__302__1_1_f_0(
#line 302 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_44)
#line 302 "ml_accurate_gc.m"
{
#line 302 "ml_accurate_gc.m"
  {
#line 302 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 302 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__HeadVar__2_45;
#line 302 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GI_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_44, (MR_Integer) 1)));
#line 303 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___GX_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_44, (MR_Integer) 0)));

#line 303 "ml_accurate_gc.m"
    {
#line 303 "ml_accurate_gc.m"
      return ml_backend__ml_accurate_gc__HeadVar__2_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_accurate_gc__GI_63);
    }
#line 302 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__HeadVar__2_45;
#line 302 "ml_accurate_gc.m"
  }
#line 302 "ml_accurate_gc.m"
}

#line 135 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(
#line 135 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 135 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 135 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3)
#line 135 "ml_accurate_gc.m"
{
#line 135 "ml_accurate_gc.m"
  {
#line 135 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 135 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastX_12 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;
#line 135 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastY_13 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__3_3;

#line 135 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_12 == ml_backend__ml_accurate_gc__CastY_13);
#line 135 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 1239 "ml_backend.ml_accurate_gc.c"
      *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "ml_accurate_gc.m"
    else
#line 135 "ml_accurate_gc.m"
    if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 135 "ml_accurate_gc.m"
      {
#line 135 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));

#line 135 "ml_accurate_gc.m"
        if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 135 "ml_accurate_gc.m"
          {
#line 135 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));

#line 135 "ml_accurate_gc.m"
            {
#line 135 "ml_accurate_gc.m"
              ml_backend__mlds____Compare____mlds_rval_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__V_16_16, ml_backend__ml_accurate_gc__V_11_11);
#line 135 "ml_accurate_gc.m"
              return;
            }
#line 135 "ml_accurate_gc.m"
          }
#line 135 "ml_accurate_gc.m"
        else
#line 1268 "ml_backend.ml_accurate_gc.c"
          *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "ml_accurate_gc.m"
      }
#line 135 "ml_accurate_gc.m"
    else
#line 135 "ml_accurate_gc.m"
      {
#line 135 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));

#line 135 "ml_accurate_gc.m"
        if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1281 "ml_backend.ml_accurate_gc.c"
          *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "ml_accurate_gc.m"
        else
#line 135 "ml_accurate_gc.m"
          {
#line 135 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));

#line 135 "ml_accurate_gc.m"
            {
#line 135 "ml_accurate_gc.m"
              parse_tree__prog_data____Compare____mer_type_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__V_17_17, ml_backend__ml_accurate_gc__V_5_5);
#line 135 "ml_accurate_gc.m"
              return;
            }
#line 135 "ml_accurate_gc.m"
          }
#line 135 "ml_accurate_gc.m"
      }
#line 135 "ml_accurate_gc.m"
  }
#line 135 "ml_accurate_gc.m"
}

#line 135 "ml_accurate_gc.m"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(
#line 135 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 135 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2)
#line 135 "ml_accurate_gc.m"
{
#line 135 "ml_accurate_gc.m"
  {
#line 135 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 135 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastX_7 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__1_1;
#line 135 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastY_8 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;

#line 135 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_7 == ml_backend__ml_accurate_gc__CastY_8);
#line 135 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 135 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 135 "ml_accurate_gc.m"
    else
#line 135 "ml_accurate_gc.m"
    if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 135 "ml_accurate_gc.m"
      {
#line 135 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_6_6;

#line 135 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 135 "ml_accurate_gc.m"
        if (ml_backend__ml_accurate_gc__succeeded)
#line 135 "ml_accurate_gc.m"
          {
#line 135 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
#line 1349 "ml_backend.ml_accurate_gc.c"
            {
#line 1351 "ml_backend.ml_accurate_gc.c"
              return ml_backend__ml_accurate_gc__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_accurate_gc__V_5_5, ml_backend__ml_accurate_gc__V_6_6);
            }
#line 135 "ml_accurate_gc.m"
          }
#line 135 "ml_accurate_gc.m"
      }
#line 135 "ml_accurate_gc.m"
    else
#line 135 "ml_accurate_gc.m"
      {
#line 135 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_4_4;

#line 135 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 135 "ml_accurate_gc.m"
        if (ml_backend__ml_accurate_gc__succeeded)
#line 135 "ml_accurate_gc.m"
          {
#line 135 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
#line 1375 "ml_backend.ml_accurate_gc.c"
            {
#line 1377 "ml_backend.ml_accurate_gc.c"
              return ml_backend__ml_accurate_gc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_accurate_gc__V_3_3, ml_backend__ml_accurate_gc__V_4_4);
            }
#line 135 "ml_accurate_gc.m"
          }
#line 135 "ml_accurate_gc.m"
      }
#line 135 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__succeeded;
#line 135 "ml_accurate_gc.m"
  }
#line 135 "ml_accurate_gc.m"
}

#line 424 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(
#line 424 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 424 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 424 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3)
#line 424 "ml_accurate_gc.m"
{
#line 424 "ml_accurate_gc.m"
  {
#line 424 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 424 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastX_15 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;
#line 424 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastY_16 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__3_3;

#line 424 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_15 == ml_backend__ml_accurate_gc__CastY_16);
#line 424 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 1415 "ml_backend.ml_accurate_gc.c"
      *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 0;
#line 424 "ml_accurate_gc.m"
    else
#line 424 "ml_accurate_gc.m"
      {
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 1)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 2)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 3)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 1)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 2)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 3)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_12_12;

#line 424 "ml_accurate_gc.m"
        {
#line 424 "ml_accurate_gc.m"
          ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_accurate_gc__V_12_12, ml_backend__ml_accurate_gc__V_4_4, ml_backend__ml_accurate_gc__V_8_8);
        }
#line 1445 "ml_backend.ml_accurate_gc.c"
        ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__V_12_12 == (MR_Integer) 0);
#line 424 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
#line 424 "ml_accurate_gc.m"
        if (ml_backend__ml_accurate_gc__succeeded)
#line 424 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__HeadVar__1_1 = ml_backend__ml_accurate_gc__V_12_12;
#line 424 "ml_accurate_gc.m"
        else
#line 424 "ml_accurate_gc.m"
          {
#line 424 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__V_13_13;

#line 424 "ml_accurate_gc.m"
            {
#line 424 "ml_accurate_gc.m"
              ml_backend__mlds____Compare____mlds_context_0_0(&ml_backend__ml_accurate_gc__V_13_13, ml_backend__ml_accurate_gc__V_5_5, ml_backend__ml_accurate_gc__V_9_9);
            }
#line 1465 "ml_backend.ml_accurate_gc.c"
            ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__V_13_13 == (MR_Integer) 0);
#line 424 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
#line 424 "ml_accurate_gc.m"
            if (ml_backend__ml_accurate_gc__succeeded)
#line 424 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__HeadVar__1_1 = ml_backend__ml_accurate_gc__V_13_13;
#line 424 "ml_accurate_gc.m"
            else
#line 424 "ml_accurate_gc.m"
              {
#line 424 "ml_accurate_gc.m"
                MR_Word ml_backend__ml_accurate_gc__V_14_14;

#line 424 "ml_accurate_gc.m"
                {
#line 424 "ml_accurate_gc.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[2], &ml_backend__ml_accurate_gc__V_14_14, ((MR_Box) (ml_backend__ml_accurate_gc__V_6_6)), ((MR_Box) (ml_backend__ml_accurate_gc__V_10_10)));
                }
#line 1485 "ml_backend.ml_accurate_gc.c"
                ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__V_14_14 == (MR_Integer) 0);
#line 424 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
#line 424 "ml_accurate_gc.m"
                if (ml_backend__ml_accurate_gc__succeeded)
#line 424 "ml_accurate_gc.m"
                  *ml_backend__ml_accurate_gc__HeadVar__1_1 = ml_backend__ml_accurate_gc__V_14_14;
#line 424 "ml_accurate_gc.m"
                else
#line 424 "ml_accurate_gc.m"
                  {
#line 424 "ml_accurate_gc.m"
                    mercury__counter____Compare____counter_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__V_7_7, ml_backend__ml_accurate_gc__V_11_11);
#line 424 "ml_accurate_gc.m"
                    return;
                  }
#line 424 "ml_accurate_gc.m"
              }
#line 424 "ml_accurate_gc.m"
          }
#line 424 "ml_accurate_gc.m"
      }
#line 424 "ml_accurate_gc.m"
  }
#line 424 "ml_accurate_gc.m"
}

#line 424 "ml_accurate_gc.m"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(
#line 424 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 424 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2)
#line 424 "ml_accurate_gc.m"
{
#line 424 "ml_accurate_gc.m"
  {
#line 424 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 424 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastX_11 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__1_1;
#line 424 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastY_12 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;

#line 424 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_11 == ml_backend__ml_accurate_gc__CastY_12);
#line 424 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 424 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 424 "ml_accurate_gc.m"
    else
#line 424 "ml_accurate_gc.m"
      {
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__TypeInfo_15_15;
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 1)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 2)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 3)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 1)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 2)));
#line 424 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 3)));

#line 1560 "ml_backend.ml_accurate_gc.c"
        {
#line 1562 "ml_backend.ml_accurate_gc.c"
          ml_backend__ml_accurate_gc__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_accurate_gc__V_3_3, ml_backend__ml_accurate_gc__V_7_7);
        }
#line 424 "ml_accurate_gc.m"
        if (ml_backend__ml_accurate_gc__succeeded)
#line 424 "ml_accurate_gc.m"
          {
#line 1569 "ml_backend.ml_accurate_gc.c"
            {
#line 1571 "ml_backend.ml_accurate_gc.c"
              ml_backend__ml_accurate_gc__succeeded = ml_backend__mlds____Unify____mlds_context_0_0(ml_backend__ml_accurate_gc__V_4_4, ml_backend__ml_accurate_gc__V_8_8);
            }
#line 424 "ml_accurate_gc.m"
            if (ml_backend__ml_accurate_gc__succeeded)
#line 424 "ml_accurate_gc.m"
              {
#line 1578 "ml_backend.ml_accurate_gc.c"
                ml_backend__ml_accurate_gc__TypeInfo_15_15 = (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[2];
#line 1580 "ml_backend.ml_accurate_gc.c"
                {
#line 1582 "ml_backend.ml_accurate_gc.c"
                  ml_backend__ml_accurate_gc__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_accurate_gc__TypeInfo_15_15, ((MR_Box) (ml_backend__ml_accurate_gc__V_5_5)), ((MR_Box) (ml_backend__ml_accurate_gc__V_9_9)));
                }
#line 424 "ml_accurate_gc.m"
                if (ml_backend__ml_accurate_gc__succeeded)
#line 1587 "ml_backend.ml_accurate_gc.c"
                  {
#line 1589 "ml_backend.ml_accurate_gc.c"
                    return ml_backend__ml_accurate_gc__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_accurate_gc__V_6_6, ml_backend__ml_accurate_gc__V_10_10);
                  }
#line 424 "ml_accurate_gc.m"
              }
#line 424 "ml_accurate_gc.m"
          }
#line 424 "ml_accurate_gc.m"
      }
#line 424 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__succeeded;
#line 424 "ml_accurate_gc.m"
  }
#line 424 "ml_accurate_gc.m"
}

#line 613 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__maybe_tag_rval_3_f_0(
#line 613 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 613 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 613 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Rval_3)
#line 613 "ml_accurate_gc.m"
{
#line 615 "ml_accurate_gc.m"
  {
#line 615 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 615 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__HeadVar__4_4;

#line 615 "ml_accurate_gc.m"
    if ((ml_backend__ml_accurate_gc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__HeadVar__4_4 = ml_backend__ml_accurate_gc__Rval_3;
#line 615 "ml_accurate_gc.m"
    else
#line 616 "ml_accurate_gc.m"
      {
#line 616 "ml_accurate_gc.m"
        MR_Integer ml_backend__ml_accurate_gc__Tag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
#line 616 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_11_11;
#line 616 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_12_12;

#line 617 "ml_accurate_gc.m"
        {
#line 617 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_11_11, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__HeadVar__2_2));
#line 617 "ml_accurate_gc.m"
        }
#line 617 "ml_accurate_gc.m"
        {
#line 617 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_12_12, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Tag_7));
#line 617 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_12_12, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Rval_3));
#line 617 "ml_accurate_gc.m"
        }
#line 617 "ml_accurate_gc.m"
        {
#line 617 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 617 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 617 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__HeadVar__4_4, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_11_11));
#line 617 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__HeadVar__4_4, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_12_12));
#line 617 "ml_accurate_gc.m"
        }
#line 616 "ml_accurate_gc.m"
      }
#line 615 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__HeadVar__4_4;
#line 615 "ml_accurate_gc.m"
  }
#line 613 "ml_accurate_gc.m"
}

#line 600 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__init_field_n_7_p_0(
#line 600 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__PointerType_8,
#line 600 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__PointerRval_9,
#line 600 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_10,
#line 600 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ArgRval_11,
#line 600 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_12,
#line 600 "ml_accurate_gc.m"
  MR_Integer ml_backend__ml_accurate_gc__FieldNum_13,
#line 600 "ml_accurate_gc.m"
  MR_Integer * ml_backend__ml_accurate_gc__HeadVar__7_7)
#line 600 "ml_accurate_gc.m"
{
#line 604 "ml_accurate_gc.m"
  {
#line 604 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 604 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__FieldId_14;
#line 604 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Field_17;
#line 604 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__AssignStmt_18;
#line 604 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_20_20;
#line 604 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_21_21;
#line 604 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_23_23;

#line 604 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__HeadVar__7_7 = (ml_backend__ml_accurate_gc__FieldNum_13 + (MR_Integer) 1);
#line 605 "ml_accurate_gc.m"
    {
#line 605 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 605 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_21_21, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__FieldNum_13));
#line 605 "ml_accurate_gc.m"
    }
#line 605 "ml_accurate_gc.m"
    {
#line 605 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 605 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_20_20, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_21_21));
#line 605 "ml_accurate_gc.m"
    }
#line 605 "ml_accurate_gc.m"
    {
#line 605 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__FieldId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 605 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__FieldId_14, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_20_20));
#line 605 "ml_accurate_gc.m"
    }
#line 609 "ml_accurate_gc.m"
    {
#line 609 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__Field_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 609 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_accurate_gc_scalar_common_8[1])));
#line 609 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerRval_9));
#line 609 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__FieldId_14));
#line 609 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 609 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_8));
#line 609 "ml_accurate_gc.m"
    }
#line 610 "ml_accurate_gc.m"
    {
#line 610 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_23_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Field_17));
#line 610 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_23_23, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ArgRval_11));
#line 610 "ml_accurate_gc.m"
    }
#line 610 "ml_accurate_gc.m"
    {
#line 610 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__AssignStmt_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 610 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_18, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_23_23));
#line 610 "ml_accurate_gc.m"
    }
#line 611 "ml_accurate_gc.m"
    {
#line 611 "ml_accurate_gc.m"
      MR_Word base;
#line 611 "ml_accurate_gc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 611 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__Statement_12 = base;
#line 611 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__AssignStmt_18));
#line 611 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_10));
#line 611 "ml_accurate_gc.m"
    }
#line 604 "ml_accurate_gc.m"
  }
#line 600 "ml_accurate_gc.m"
}

#line 587 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1(
#line 587 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 587 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 587 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 587 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 587 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
#line 587 "ml_accurate_gc.m"
{
#line 587 "ml_accurate_gc.m"
  {
#line 587 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
#line 587 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv1_Statement_12;
#line 587 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__conv0_HeadVar__7_7;

#line 587 "ml_accurate_gc.m"
    {
#line 587 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__init_field_n_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Statement_12, ((MR_Integer) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_HeadVar__7_7);
    }
#line 587 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Statement_12));
#line 587 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__7_7));
#line 587 "ml_accurate_gc.m"
  }
#line 587 "ml_accurate_gc.m"
}

#line 541 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(
#line 541 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__AtomicStatement0_5,
#line 541 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
#line 541 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34,
#line 541 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_35)
#line 541 "ml_accurate_gc.m"
{
#line 596 "ml_accurate_gc.m"
  {
#line 596 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__AtomicStatement0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 596 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Lval_8;
#line 596 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MaybeTag_9;
#line 596 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PointerType_11;
#line 596 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ArgRvals_14;
#line 546 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___ExplicitSecTag_10;
#line 546 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___MaybeSizeInWordsRval_12;
#line 546 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___MaybeCtorName_13;
#line 546 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___ArgTypes_15;
#line 546 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___MayUseAtomic_16;
#line 546 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___AllocId_17;

#line 546 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 546 "ml_accurate_gc.m"
      {
#line 546 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 1)));
#line 546 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__MaybeTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 2)));
#line 546 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___ExplicitSecTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 3)));
#line 546 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__PointerType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 4)));
#line 546 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___MaybeSizeInWordsRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 5)));
#line 546 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___MaybeCtorName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 6)));
#line 546 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__ArgRvals_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 7)));
#line 546 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 8)));
#line 546 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___MayUseAtomic_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 9)));
#line 546 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___AllocId_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 10)));
#line 558 "ml_accurate_gc.m"
        {
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_85_85;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_91_91;
#line 558 "ml_accurate_gc.m"
          MR_Integer ml_backend__ml_accurate_gc__Id_18;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__NextId_19;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__VarName_20;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__VarType_21;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__NullPointers_22;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Initializer_23;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Context_25;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__VarDecl_26;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__VarLval_27;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__PtrRval_28;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__ArgInitStatements_29;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__TaggedPtrRval_31;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__AssignStmt_32;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__AssignStatement_33;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 3)));
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_38_38;
#line 558 "ml_accurate_gc.m"
          MR_Integer ml_backend__ml_accurate_gc__V_40_40;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_45_45;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_48_48;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_50_50;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_52_52;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_55_55;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_56_56;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_57_57;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_59_59;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_61_61;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_62_62;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_72_72;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_77_77;
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 0)));
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 1)));
#line 558 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 2)));
#line 567 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_67_67;
#line 567 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_68_68;
#line 567 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_69_69;
#line 570 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_70_70;
#line 570 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_71_71;
#line 570 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_73_73;
#line 573 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_78_78;
#line 573 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_80_80;
#line 573 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_79_79;
#line 587 "ml_accurate_gc.m"
          MR_Integer ml_backend__ml_accurate_gc___NumFields_30;
#line 587 "ml_accurate_gc.m"
          MR_Box ml_backend__ml_accurate_gc__conv2__NumFields_30;

#line 558 "ml_accurate_gc.m"
          {
#line 558 "ml_accurate_gc.m"
            mercury__counter__allocate_3_p_0(&ml_backend__ml_accurate_gc__Id_18, ml_backend__ml_accurate_gc__V_36_36, &ml_backend__ml_accurate_gc__NextId_19);
          }
#line 559 "ml_accurate_gc.m"
          {
#line 559 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 559 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_38_38, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Id_18));
#line 559 "ml_accurate_gc.m"
          }
#line 559 "ml_accurate_gc.m"
          {
#line 559 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__VarName_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 559 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__VarName_20, 0) = ((MR_Box) ((MR_String) "new_obj"));
#line 559 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__VarName_20, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_38_38));
#line 559 "ml_accurate_gc.m"
          }
#line 560 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__VarType_21 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[4]);
#line 2016 "ml_backend.ml_accurate_gc.c"
          ml_backend__ml_accurate_gc__TypeCtorInfo_85_85 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 561 "ml_accurate_gc.m"
          {
#line 561 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_40_40 = mercury__list__length_1_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_85_85, ml_backend__ml_accurate_gc__ArgRvals_14);
          }
#line 561 "ml_accurate_gc.m"
          {
#line 561 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__NullPointers_22 = mercury__list__duplicate_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_accurate_gc__V_40_40, ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_accurate_gc_scalar_common_8[0]))));
          }
#line 563 "ml_accurate_gc.m"
          {
#line 563 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__Initializer_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 563 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Initializer_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__NullPointers_22));
#line 563 "ml_accurate_gc.m"
          }
#line 567 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 0)));
#line 567 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 1)));
#line 567 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 2)));
#line 567 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 3)));
#line 568 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_accurate_gc__VarName_20);
#line 568 "ml_accurate_gc.m"
          {
#line 568 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__VarDecl_26 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_accurate_gc__V_45_45, ml_backend__ml_accurate_gc__VarType_21, ml_backend__ml_accurate_gc__Initializer_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_accurate_gc__Context_25);
          }
#line 570 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 0)));
#line 570 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 1)));
#line 570 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 2)));
#line 570 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 3)));
#line 570 "ml_accurate_gc.m"
          {
#line 570 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 570 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_70_70));
#line 570 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_71_71));
#line 570 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_72_72));
#line 570 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__NextId_19));
#line 570 "ml_accurate_gc.m"
          }
#line 573 "ml_accurate_gc.m"
          {
#line 573 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_50_50, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__VarDecl_26));
#line 573 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "ml_accurate_gc.m"
          }
#line 573 "ml_accurate_gc.m"
          {
#line 573 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_accurate_gc__V_72_72, ml_backend__ml_accurate_gc__V_50_50);
          }
#line 573 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, (MR_Integer) 0)));
#line 573 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, (MR_Integer) 1)));
#line 573 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, (MR_Integer) 2)));
#line 573 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, (MR_Integer) 3)));
#line 573 "ml_accurate_gc.m"
          {
#line 573 "ml_accurate_gc.m"
            MR_Word base;
#line 573 "ml_accurate_gc.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 573 "ml_accurate_gc.m"
            *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_35 = base;
#line 573 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_77_77));
#line 573 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_78_78));
#line 573 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_48_48));
#line 573 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_80_80));
#line 573 "ml_accurate_gc.m"
          }
#line 584 "ml_accurate_gc.m"
          {
#line 584 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 584 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_52_52, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_77_77));
#line 584 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 584 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_52_52, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__VarName_20));
#line 584 "ml_accurate_gc.m"
          }
#line 583 "ml_accurate_gc.m"
          {
#line 583 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__VarLval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarLval_27, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_52_52));
#line 583 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarLval_27, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarType_21));
#line 583 "ml_accurate_gc.m"
          }
#line 586 "ml_accurate_gc.m"
          {
#line 586 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_55_55, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_11));
#line 586 "ml_accurate_gc.m"
          }
#line 586 "ml_accurate_gc.m"
          {
#line 586 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_56_56, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarLval_27));
#line 586 "ml_accurate_gc.m"
          }
#line 586 "ml_accurate_gc.m"
          {
#line 586 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__PtrRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_28, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_55_55));
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_28, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_56_56));
#line 586 "ml_accurate_gc.m"
          }
#line 587 "ml_accurate_gc.m"
          {
#line 587 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 587 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_9[0]));
#line 587 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1));
#line 587 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 587 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_11));
#line 587 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__PtrRval_28));
#line 587 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_25));
#line 587 "ml_accurate_gc.m"
          }
#line 2184 "ml_backend.ml_accurate_gc.c"
          ml_backend__ml_accurate_gc__TypeCtorInfo_91_91 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 587 "ml_accurate_gc.m"
          {
#line 587 "ml_accurate_gc.m"
            mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_85_85, ml_backend__ml_accurate_gc__TypeCtorInfo_91_91, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_accurate_gc__V_57_57, ml_backend__ml_accurate_gc__ArgRvals_14, &ml_backend__ml_accurate_gc__ArgInitStatements_29, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_accurate_gc__conv2__NumFields_30);
          }
#line 587 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc___NumFields_30 = ((MR_Integer) ml_backend__ml_accurate_gc__conv2__NumFields_30);
#line 592 "ml_accurate_gc.m"
          {
#line 592 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__TaggedPtrRval_31 = ml_backend__ml_accurate_gc__maybe_tag_rval_3_f_0(ml_backend__ml_accurate_gc__MaybeTag_9, ml_backend__ml_accurate_gc__PointerType_11, ml_backend__ml_accurate_gc__PtrRval_28);
          }
#line 593 "ml_accurate_gc.m"
          {
#line 593 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_59_59, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Lval_8));
#line 593 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_59_59, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__TaggedPtrRval_31));
#line 593 "ml_accurate_gc.m"
          }
#line 593 "ml_accurate_gc.m"
          {
#line 593 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__AssignStmt_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 593 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_32, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_59_59));
#line 593 "ml_accurate_gc.m"
          }
#line 594 "ml_accurate_gc.m"
          {
#line 594 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__AssignStatement_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__AssignStatement_33, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__AssignStmt_32));
#line 594 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__AssignStatement_33, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_25));
#line 594 "ml_accurate_gc.m"
          }
#line 595 "ml_accurate_gc.m"
          {
#line 595 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_62_62, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__AssignStatement_33));
#line 595 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "ml_accurate_gc.m"
          }
#line 595 "ml_accurate_gc.m"
          {
#line 595 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_61_61 = mercury__list__f_43_43_2_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_91_91, ml_backend__ml_accurate_gc__ArgInitStatements_29, ml_backend__ml_accurate_gc__V_62_62);
          }
#line 595 "ml_accurate_gc.m"
          {
#line 595 "ml_accurate_gc.m"
            MR_Word base;
#line 595 "ml_accurate_gc.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "ml_accurate_gc.m"
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 595 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_61_61));
#line 595 "ml_accurate_gc.m"
          }
#line 558 "ml_accurate_gc.m"
        }
#line 546 "ml_accurate_gc.m"
      }
#line 546 "ml_accurate_gc.m"
    else
#line 597 "ml_accurate_gc.m"
      {
#line 597 "ml_accurate_gc.m"
        {
#line 597 "ml_accurate_gc.m"
          MR_Word base;
#line 597 "ml_accurate_gc.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 597 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 597 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__AtomicStatement0_5));
#line 597 "ml_accurate_gc.m"
        }
#line 597 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_35 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34;
#line 597 "ml_accurate_gc.m"
      }
#line 596 "ml_accurate_gc.m"
  }
#line 541 "ml_accurate_gc.m"
}

#line 530 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(
#line 530 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 530 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 530 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
#line 530 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4)
#line 530 "ml_accurate_gc.m"
{
#line 534 "ml_accurate_gc.m"
  {
#line 534 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;

#line 534 "ml_accurate_gc.m"
#line 534 "ml_accurate_gc.m"
    switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__1_1)) {
#line 534 "ml_accurate_gc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 534 "ml_accurate_gc.m"
      case (MR_Integer) 0:
#line 534 "ml_accurate_gc.m"
#line 534 "ml_accurate_gc.m"
        switch (MR_unmkbody(ml_backend__ml_accurate_gc__HeadVar__1_1)) {
#line 534 "ml_accurate_gc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 534 "ml_accurate_gc.m"
          case (MR_Integer) 0:
#line 534 "ml_accurate_gc.m"
            {
#line 534 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 535 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3;
#line 534 "ml_accurate_gc.m"
            }
#line 534 "ml_accurate_gc.m"
            break;
#line 534 "ml_accurate_gc.m"
          case (MR_Integer) 1:
#line 536 "ml_accurate_gc.m"
            {
#line 536 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 536 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3;
#line 536 "ml_accurate_gc.m"
            }
#line 534 "ml_accurate_gc.m"
            break;
#line 534 "ml_accurate_gc.m"
        }
#line 534 "ml_accurate_gc.m"
        break;
#line 534 "ml_accurate_gc.m"
      case (MR_Integer) 1:
#line 538 "ml_accurate_gc.m"
        {
#line 538 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Statement0_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_accurate_gc__HeadVar__1_1), (MR_Integer) 1);
#line 538 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Statement_12;
#line 538 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Stmt0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_11, (MR_Integer) 0)));
#line 538 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_11, (MR_Integer) 1)));
#line 538 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Stmt_24;
#line 538 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25;
#line 459 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 0)));
#line 459 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 2)));
#line 459 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 3)));
#line 459 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 1)));

#line 459 "ml_accurate_gc.m"
          {
#line 459 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 459 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_27_27));
#line 459 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_23));
#line 459 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_29_29));
#line 459 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_30_30));
#line 459 "ml_accurate_gc.m"
          }
#line 460 "ml_accurate_gc.m"
          {
#line 460 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_22, &ml_backend__ml_accurate_gc__Stmt_24, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
          }
#line 461 "ml_accurate_gc.m"
          {
#line 461 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__Statement_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_12, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_24));
#line 461 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_12, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_23));
#line 461 "ml_accurate_gc.m"
          }
#line 537 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_accurate_gc__Statement_12);
#line 538 "ml_accurate_gc.m"
        }
#line 534 "ml_accurate_gc.m"
        break;
#line 534 "ml_accurate_gc.m"
    }
#line 534 "ml_accurate_gc.m"
  }
#line 530 "ml_accurate_gc.m"
}

#line 522 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(
#line 522 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 522 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 522 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
#line 522 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4)
#line 522 "ml_accurate_gc.m"
{
#line 526 "ml_accurate_gc.m"
  {
#line 526 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;

#line 526 "ml_accurate_gc.m"
    if ((ml_backend__ml_accurate_gc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "ml_accurate_gc.m"
      {
#line 526 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3;
#line 526 "ml_accurate_gc.m"
      }
#line 526 "ml_accurate_gc.m"
    else
#line 527 "ml_accurate_gc.m"
      {
#line 527 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Statement0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
#line 527 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Statement_9;
#line 527 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Stmt0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_8, (MR_Integer) 0)));
#line 527 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_8, (MR_Integer) 1)));
#line 527 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Stmt_21;
#line 527 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22;
#line 459 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 0)));
#line 459 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 2)));
#line 459 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 3)));
#line 459 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 1)));

#line 459 "ml_accurate_gc.m"
        {
#line 459 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 459 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_24_24));
#line 459 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_20));
#line 459 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_26_26));
#line 459 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_27_27));
#line 459 "ml_accurate_gc.m"
        }
#line 460 "ml_accurate_gc.m"
        {
#line 460 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_19, &ml_backend__ml_accurate_gc__Stmt_21, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
        }
#line 461 "ml_accurate_gc.m"
        {
#line 461 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__Statement_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_9, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_21));
#line 461 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_9, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_20));
#line 461 "ml_accurate_gc.m"
        }
#line 527 "ml_accurate_gc.m"
        {
#line 527 "ml_accurate_gc.m"
          MR_Word base;
#line 527 "ml_accurate_gc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 527 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__HeadVar__2_2 = base;
#line 527 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_9));
#line 527 "ml_accurate_gc.m"
        }
#line 527 "ml_accurate_gc.m"
      }
#line 526 "ml_accurate_gc.m"
  }
#line 522 "ml_accurate_gc.m"
}

#line 514 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(
#line 514 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Case0_5,
#line 514 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Case_6,
#line 514 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12,
#line 514 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13)
#line 514 "ml_accurate_gc.m"
{
#line 517 "ml_accurate_gc.m"
  {
#line 517 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 517 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__FirstCond_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Case0_5, (MR_Integer) 0)));
#line 517 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__LaterConds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Case0_5, (MR_Integer) 1)));
#line 517 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Statement0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Case0_5, (MR_Integer) 2)));
#line 517 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Statement_11;
#line 517 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_10, (MR_Integer) 0)));
#line 517 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_10, (MR_Integer) 1)));
#line 517 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt_22;
#line 517 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23;
#line 459 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 0)));
#line 459 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 2)));
#line 459 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 3)));
#line 459 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 1)));

#line 459 "ml_accurate_gc.m"
    {
#line 459 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 459 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_25_25));
#line 459 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_21));
#line 459 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_27_27));
#line 459 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_28_28));
#line 459 "ml_accurate_gc.m"
    }
#line 460 "ml_accurate_gc.m"
    {
#line 460 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_20, &ml_backend__ml_accurate_gc__Stmt_22, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);
    }
#line 461 "ml_accurate_gc.m"
    {
#line 461 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__Statement_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_11, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_22));
#line 461 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_11, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_21));
#line 461 "ml_accurate_gc.m"
    }
#line 520 "ml_accurate_gc.m"
    {
#line 520 "ml_accurate_gc.m"
      MR_Word base;
#line 520 "ml_accurate_gc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 520 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__Case_6 = base;
#line 520 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__FirstCond_8));
#line 520 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__LaterConds_9));
#line 520 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_11));
#line 520 "ml_accurate_gc.m"
    }
#line 517 "ml_accurate_gc.m"
  }
#line 514 "ml_accurate_gc.m"
}

#line 483 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2(
#line 483 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 483 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 483 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 483 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 483 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
#line 483 "ml_accurate_gc.m"
{
#line 483 "ml_accurate_gc.m"
  {
#line 483 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
#line 483 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv4_Case_6;
#line 483 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13;

#line 483 "ml_accurate_gc.m"
    {
#line 483 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv4_Case_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13);
    }
#line 483 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv4_Case_6));
#line 483 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13));
#line 483 "ml_accurate_gc.m"
  }
#line 483 "ml_accurate_gc.m"
}

#line 469 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1(
#line 469 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 469 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 469 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 469 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 469 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
#line 469 "ml_accurate_gc.m"
{
#line 469 "ml_accurate_gc.m"
  {
#line 469 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
#line 469 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv1_Statement_6;
#line 469 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12;

#line 469 "ml_accurate_gc.m"
    {
#line 469 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Statement_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12);
    }
#line 469 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Statement_6));
#line 469 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12));
#line 469 "ml_accurate_gc.m"
  }
#line 469 "ml_accurate_gc.m"
}

#line 463 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(
#line 463 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Stmt0_5,
#line 463 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
#line 463 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42,
#line 463 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43)
#line 463 "ml_accurate_gc.m"
{
#line 468 "ml_accurate_gc.m"
  {
#line 468 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;

#line 468 "ml_accurate_gc.m"
#line 468 "ml_accurate_gc.m"
    switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) {
#line 468 "ml_accurate_gc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 468 "ml_accurate_gc.m"
      case (MR_Integer) 0:
#line 468 "ml_accurate_gc.m"
        {
#line 468 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_62_62 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 468 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Defns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
#line 468 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Statements0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
#line 468 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Statements_10;
#line 469 "ml_accurate_gc.m"
          MR_Box ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_43;

#line 469 "ml_accurate_gc.m"
          {
#line 469 "ml_accurate_gc.m"
            mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_62_62, ml_backend__ml_accurate_gc__TypeCtorInfo_62_62, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[1], ml_backend__ml_accurate_gc__Statements0_9, &ml_backend__ml_accurate_gc__Statements_10, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42)), &ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_43);
          }
#line 469 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ((MR_Word) ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_43);
#line 471 "ml_accurate_gc.m"
          {
#line 471 "ml_accurate_gc.m"
            MR_Word base;
#line 471 "ml_accurate_gc.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 471 "ml_accurate_gc.m"
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 471 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Defns_8));
#line 471 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Statements_10));
#line 471 "ml_accurate_gc.m"
          }
#line 468 "ml_accurate_gc.m"
        }
#line 468 "ml_accurate_gc.m"
        break;
#line 468 "ml_accurate_gc.m"
      case (MR_Integer) 1:
#line 473 "ml_accurate_gc.m"
        {
#line 473 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
#line 473 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
#line 473 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Statement0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
#line 473 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Statement_14;

#line 474 "ml_accurate_gc.m"
          {
#line 474 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_13, &ml_backend__ml_accurate_gc__Statement_14, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);
          }
#line 475 "ml_accurate_gc.m"
          {
#line 475 "ml_accurate_gc.m"
            MR_Word base;
#line 475 "ml_accurate_gc.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 475 "ml_accurate_gc.m"
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 475 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Kind_11));
#line 475 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Rval_12));
#line 475 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_14));
#line 475 "ml_accurate_gc.m"
          }
#line 473 "ml_accurate_gc.m"
        }
#line 468 "ml_accurate_gc.m"
        break;
#line 468 "ml_accurate_gc.m"
      case (MR_Integer) 2:
#line 477 "ml_accurate_gc.m"
        {
#line 477 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
#line 477 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Then0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
#line 477 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__MaybeElse0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
#line 477 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Then_18;
#line 477 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__MaybeElse_19;
#line 477 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_50_50;
#line 477 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Stmt0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Then0_16, (MR_Integer) 0)));
#line 477 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Context_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Then0_16, (MR_Integer) 1)));
#line 477 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Stmt_77;
#line 477 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78;
#line 459 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, (MR_Integer) 0)));
#line 459 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, (MR_Integer) 2)));
#line 459 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, (MR_Integer) 3)));
#line 459 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, (MR_Integer) 1)));

#line 459 "ml_accurate_gc.m"
          {
#line 459 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 459 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_80_80));
#line 459 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_76));
#line 459 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_82_82));
#line 459 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_83_83));
#line 459 "ml_accurate_gc.m"
          }
#line 460 "ml_accurate_gc.m"
          {
#line 460 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_75, &ml_backend__ml_accurate_gc__Stmt_77, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_50_50);
          }
#line 461 "ml_accurate_gc.m"
          {
#line 461 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__Then_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Then_18, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_77));
#line 461 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Then_18, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_76));
#line 461 "ml_accurate_gc.m"
          }
#line 479 "ml_accurate_gc.m"
          {
#line 479 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(ml_backend__ml_accurate_gc__MaybeElse0_17, &ml_backend__ml_accurate_gc__MaybeElse_19, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_50_50, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);
          }
#line 480 "ml_accurate_gc.m"
          {
#line 480 "ml_accurate_gc.m"
            MR_Word base;
#line 480 "ml_accurate_gc.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 480 "ml_accurate_gc.m"
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 480 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Cond_15));
#line 480 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Then_18));
#line 480 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__MaybeElse_19));
#line 480 "ml_accurate_gc.m"
          }
#line 477 "ml_accurate_gc.m"
        }
#line 468 "ml_accurate_gc.m"
        break;
#line 468 "ml_accurate_gc.m"
      case (MR_Integer) 3:
#line 468 "ml_accurate_gc.m"
#line 468 "ml_accurate_gc.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)))) {
#line 468 "ml_accurate_gc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 468 "ml_accurate_gc.m"
          case (MR_Integer) 0:
#line 482 "ml_accurate_gc.m"
            {
#line 482 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_68_68 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
#line 482 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
#line 482 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Val_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
#line 482 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Range_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 3)));
#line 482 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 4)));
#line 482 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Default0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 5)));
#line 482 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Cases_25;
#line 482 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Default_26;
#line 482 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_48_48;
#line 483 "ml_accurate_gc.m"
              MR_Box ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_48_48;

#line 483 "ml_accurate_gc.m"
              {
#line 483 "ml_accurate_gc.m"
                mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_68_68, ml_backend__ml_accurate_gc__TypeCtorInfo_68_68, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[2], ml_backend__ml_accurate_gc__Cases0_23, &ml_backend__ml_accurate_gc__Cases_25, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42)), &ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_48_48);
              }
#line 483 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_48_48 = ((MR_Word) ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_48_48);
#line 484 "ml_accurate_gc.m"
              {
#line 484 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(ml_backend__ml_accurate_gc__Default0_24, &ml_backend__ml_accurate_gc__Default_26, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_48_48, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);
              }
#line 485 "ml_accurate_gc.m"
              {
#line 485 "ml_accurate_gc.m"
                MR_Word base;
#line 485 "ml_accurate_gc.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 485 "ml_accurate_gc.m"
                *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 485 "ml_accurate_gc.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 485 "ml_accurate_gc.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Type_20));
#line 485 "ml_accurate_gc.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Val_21));
#line 485 "ml_accurate_gc.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Range_22));
#line 485 "ml_accurate_gc.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__Cases_25));
#line 485 "ml_accurate_gc.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Default_26));
#line 485 "ml_accurate_gc.m"
              }
#line 482 "ml_accurate_gc.m"
            }
#line 468 "ml_accurate_gc.m"
            break;
#line 468 "ml_accurate_gc.m"
          case (MR_Integer) 1:
#line 487 "ml_accurate_gc.m"
            {
#line 488 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 487 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 487 "ml_accurate_gc.m"
            }
#line 468 "ml_accurate_gc.m"
            break;
#line 468 "ml_accurate_gc.m"
          case (MR_Integer) 2:
#line 490 "ml_accurate_gc.m"
            {
#line 491 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 490 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 490 "ml_accurate_gc.m"
            }
#line 468 "ml_accurate_gc.m"
            break;
#line 468 "ml_accurate_gc.m"
          case (MR_Integer) 3:
#line 493 "ml_accurate_gc.m"
            {
#line 494 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 493 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 493 "ml_accurate_gc.m"
            }
#line 468 "ml_accurate_gc.m"
            break;
#line 468 "ml_accurate_gc.m"
          case (MR_Integer) 4:
#line 496 "ml_accurate_gc.m"
            {
#line 497 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 496 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 496 "ml_accurate_gc.m"
            }
#line 468 "ml_accurate_gc.m"
            break;
#line 468 "ml_accurate_gc.m"
          case (MR_Integer) 5:
#line 499 "ml_accurate_gc.m"
            {
#line 500 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 499 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 499 "ml_accurate_gc.m"
            }
#line 468 "ml_accurate_gc.m"
            break;
#line 468 "ml_accurate_gc.m"
          case (MR_Integer) 6:
#line 505 "ml_accurate_gc.m"
            {
#line 505 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Ref_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
#line 505 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Handler0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 3)));
#line 505 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Handler_40;
#line 505 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_45_45;
#line 505 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Statement0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
#line 505 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Statement_57;

#line 506 "ml_accurate_gc.m"
              {
#line 506 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_56, &ml_backend__ml_accurate_gc__Statement_57, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_45_45);
              }
#line 507 "ml_accurate_gc.m"
              {
#line 507 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Handler0_39, &ml_backend__ml_accurate_gc__Handler_40, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_45_45, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);
              }
#line 508 "ml_accurate_gc.m"
              {
#line 508 "ml_accurate_gc.m"
                MR_Word base;
#line 508 "ml_accurate_gc.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 508 "ml_accurate_gc.m"
                *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 508 "ml_accurate_gc.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 508 "ml_accurate_gc.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Ref_38));
#line 508 "ml_accurate_gc.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_57));
#line 508 "ml_accurate_gc.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Handler_40));
#line 508 "ml_accurate_gc.m"
              }
#line 505 "ml_accurate_gc.m"
            }
#line 468 "ml_accurate_gc.m"
            break;
#line 468 "ml_accurate_gc.m"
          case (MR_Integer) 7:
#line 502 "ml_accurate_gc.m"
            {
#line 503 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 502 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 502 "ml_accurate_gc.m"
            }
#line 468 "ml_accurate_gc.m"
            break;
#line 468 "ml_accurate_gc.m"
          case (MR_Integer) 8:
#line 510 "ml_accurate_gc.m"
            {
#line 510 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__AtomicStmt0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));

#line 511 "ml_accurate_gc.m"
              {
#line 511 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(ml_backend__ml_accurate_gc__AtomicStmt0_41, ml_backend__ml_accurate_gc__Stmt_6, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);
#line 511 "ml_accurate_gc.m"
                return;
              }
#line 510 "ml_accurate_gc.m"
            }
#line 468 "ml_accurate_gc.m"
            break;
#line 468 "ml_accurate_gc.m"
        }
#line 468 "ml_accurate_gc.m"
        break;
#line 468 "ml_accurate_gc.m"
    }
#line 468 "ml_accurate_gc.m"
  }
#line 463 "ml_accurate_gc.m"
}

#line 454 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(
#line 454 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Statement0_5,
#line 454 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_6,
#line 454 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11,
#line 454 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12)
#line 454 "ml_accurate_gc.m"
{
#line 457 "ml_accurate_gc.m"
  {
#line 457 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 457 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_5, (MR_Integer) 0)));
#line 457 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_5, (MR_Integer) 1)));
#line 457 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt_10;
#line 457 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13;
#line 459 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 459 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 459 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 459 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));

#line 459 "ml_accurate_gc.m"
    {
#line 459 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 459 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_15_15));
#line 459 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_9));
#line 459 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_17_17));
#line 459 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_18_18));
#line 459 "ml_accurate_gc.m"
    }
#line 460 "ml_accurate_gc.m"
    {
#line 460 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_8, &ml_backend__ml_accurate_gc__Stmt_10, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12);
    }
#line 461 "ml_accurate_gc.m"
    {
#line 461 "ml_accurate_gc.m"
      MR_Word base;
#line 461 "ml_accurate_gc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__Statement_6 = base;
#line 461 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_10));
#line 461 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_9));
#line 461 "ml_accurate_gc.m"
    }
#line 457 "ml_accurate_gc.m"
  }
#line 454 "ml_accurate_gc.m"
}

#line 444 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_4_p_0(
#line 444 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Statement0_5,
#line 444 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ModuleName_6,
#line 444 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_7,
#line 444 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Defns_8)
#line 444 "ml_accurate_gc.m"
{
#line 447 "ml_accurate_gc.m"
  {
#line 447 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 447 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_5, (MR_Integer) 0)));
#line 447 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_5, (MR_Integer) 1)));
#line 447 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Info0_11;
#line 447 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt_12;
#line 447 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Info_13;
#line 447 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_15_15;
#line 452 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_17_17;
#line 452 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_18_18;
#line 452 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_19_19;

#line 449 "ml_accurate_gc.m"
    {
#line 449 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_15_15 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 449 "ml_accurate_gc.m"
    {
#line 449 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__Info0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 449 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_11, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__ModuleName_6));
#line 449 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_11, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_10));
#line 449 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_11, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_15_15));
#line 449 "ml_accurate_gc.m"
    }
#line 450 "ml_accurate_gc.m"
    {
#line 450 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_9, &ml_backend__ml_accurate_gc__Stmt_12, ml_backend__ml_accurate_gc__Info0_11, &ml_backend__ml_accurate_gc__Info_13);
    }
#line 451 "ml_accurate_gc.m"
    {
#line 451 "ml_accurate_gc.m"
      MR_Word base;
#line 451 "ml_accurate_gc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 451 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__Statement_7 = base;
#line 451 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_12));
#line 451 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_10));
#line 451 "ml_accurate_gc.m"
    }
#line 452 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_13, (MR_Integer) 0)));
#line 452 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_13, (MR_Integer) 1)));
#line 452 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__Defns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_13, (MR_Integer) 2)));
#line 452 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_13, (MR_Integer) 3)));
#line 447 "ml_accurate_gc.m"
  }
#line 444 "ml_accurate_gc.m"
}

#line 360 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(
#line 360 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Info_7,
#line 360 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 360 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Type_9,
#line 360 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_10,
#line 360 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 360 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__TraceStatement_12)
#line 360 "ml_accurate_gc.m"
{
#line 363 "ml_accurate_gc.m"
  {
#line 363 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_13;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_Type_14;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__VarLval_15;
#line 363 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__ProcId_19;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredModule_20;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_Module_21;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ProcLabel_22;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__QualProcLabel_23;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__CPointerType_24;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ArgTypes_25;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Signature_26;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__FuncAddr_27;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__CastVarAddr_28;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__TraceStmt_29;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_35_35;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_38_38;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_39_39;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_41_41;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_44_44;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_45_45;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_46_46;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_47_47;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_49_49;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_50_50;
#line 363 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_54_54;

#line 365 "ml_accurate_gc.m"
    {
#line 365 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_accurate_gc__Info_7, &ml_backend__ml_accurate_gc__ModuleInfo_13);
    }
#line 366 "ml_accurate_gc.m"
    {
#line 366 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__MLDS_Type_14 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_accurate_gc__ModuleInfo_13, ml_backend__ml_accurate_gc__Type_9);
    }
#line 367 "ml_accurate_gc.m"
    {
#line 367 "ml_accurate_gc.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_accurate_gc__Info_7, ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__MLDS_Type_14, &ml_backend__ml_accurate_gc__VarLval_15);
    }
#line 374 "ml_accurate_gc.m"
    {
#line 374 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__ProcId_19 = hlds__hlds_pred__initial_proc_id_0_f_0();
    }
#line 375 "ml_accurate_gc.m"
    {
#line 375 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__PredModule_20 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 376 "ml_accurate_gc.m"
    {
#line 376 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__MLDS_Module_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_accurate_gc__PredModule_20);
    }
#line 377 "ml_accurate_gc.m"
    {
#line 377 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__ProcLabel_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 377 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__ProcLabel_22, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_6[0]));
#line 377 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__ProcLabel_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ProcId_19));
#line 377 "ml_accurate_gc.m"
    }
#line 378 "ml_accurate_gc.m"
    {
#line 378 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__QualProcLabel_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 378 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_Module_21));
#line 378 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 1) = ((MR_Box) ((MR_Integer) 0));
#line 378 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__ProcLabel_22));
#line 378 "ml_accurate_gc.m"
    }
#line 379 "ml_accurate_gc.m"
    {
#line 379 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_35_35 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 380 "ml_accurate_gc.m"
    {
#line 380 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_39_39 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 380 "ml_accurate_gc.m"
    {
#line 380 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_38_38 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_accurate_gc__V_39_39);
    }
#line 379 "ml_accurate_gc.m"
    {
#line 379 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__CPointerType_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 379 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_35_35));
#line 379 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[3])));
#line 379 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_38_38));
#line 379 "ml_accurate_gc.m"
    }
#line 381 "ml_accurate_gc.m"
    {
#line 381 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_41_41, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CPointerType_24));
#line 381 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "ml_accurate_gc.m"
    }
#line 381 "ml_accurate_gc.m"
    {
#line 381 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__ArgTypes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ArgTypes_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 381 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ArgTypes_25, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_41_41));
#line 381 "ml_accurate_gc.m"
    }
#line 382 "ml_accurate_gc.m"
    {
#line 382 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__Signature_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 382 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Signature_26, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__ArgTypes_25));
#line 382 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Signature_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "ml_accurate_gc.m"
    }
#line 384 "ml_accurate_gc.m"
    {
#line 384 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_45_45, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__QualProcLabel_23));
#line 384 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_45_45, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Signature_26));
#line 384 "ml_accurate_gc.m"
    }
#line 383 "ml_accurate_gc.m"
    {
#line 383 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 383 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_44_44, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_45_45));
#line 383 "ml_accurate_gc.m"
    }
#line 383 "ml_accurate_gc.m"
    {
#line 383 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__FuncAddr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__FuncAddr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 383 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__FuncAddr_27, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_44_44));
#line 383 "ml_accurate_gc.m"
    }
#line 388 "ml_accurate_gc.m"
    {
#line 388 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_46_46, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CPointerType_24));
#line 388 "ml_accurate_gc.m"
    }
#line 388 "ml_accurate_gc.m"
    {
#line 388 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_47_47, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarLval_15));
#line 388 "ml_accurate_gc.m"
    }
#line 388 "ml_accurate_gc.m"
    {
#line 388 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__CastVarAddr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_46_46));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_47_47));
#line 388 "ml_accurate_gc.m"
    }
#line 390 "ml_accurate_gc.m"
    {
#line 390 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_50_50, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CastVarAddr_28));
#line 390 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "ml_accurate_gc.m"
    }
#line 390 "ml_accurate_gc.m"
    {
#line 390 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_49_49, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TypeInfoRval_10));
#line 390 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_49_49, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_50_50));
#line 390 "ml_accurate_gc.m"
    }
#line 389 "ml_accurate_gc.m"
    {
#line 389 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__TraceStmt_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 389 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 389 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Signature_26));
#line 389 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__FuncAddr_27));
#line 389 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__V_49_49));
#line 389 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 6) = ((MR_Box) ((MR_Integer) 2));
#line 389 "ml_accurate_gc.m"
    }
#line 391 "ml_accurate_gc.m"
    {
#line 391 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_54_54 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_accurate_gc__Context_11);
    }
#line 391 "ml_accurate_gc.m"
    {
#line 391 "ml_accurate_gc.m"
      MR_Word base;
#line 391 "ml_accurate_gc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__TraceStatement_12 = base;
#line 391 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TraceStmt_29));
#line 391 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_54_54));
#line 391 "ml_accurate_gc.m"
    }
#line 363 "ml_accurate_gc.m"
  }
#line 360 "ml_accurate_gc.m"
}

#line 340 "ml_accurate_gc.m"
static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2(
#line 340 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 340 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1)
#line 340 "ml_accurate_gc.m"
{
#line 340 "ml_accurate_gc.m"
  {
#line 340 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2;
#line 340 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
#line 340 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv1_HeadVar__6_53;

#line 340 "ml_accurate_gc.m"
    {
#line 340 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__conv1_HeadVar__6_53 = ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__340__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1));
    }
#line 340 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_HeadVar__6_53));
#line 340 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__wrapper_arg_2;
#line 340 "ml_accurate_gc.m"
  }
#line 340 "ml_accurate_gc.m"
}

#line 302 "ml_accurate_gc.m"
static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1(
#line 302 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 302 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1)
#line 302 "ml_accurate_gc.m"
{
#line 302 "ml_accurate_gc.m"
  {
#line 302 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2;
#line 302 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
#line 302 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv0_HeadVar__2_45;

#line 302 "ml_accurate_gc.m"
    {
#line 302 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__conv0_HeadVar__2_45 = ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__302__1_1_f_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1));
    }
#line 302 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__2_45));
#line 302 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__wrapper_arg_2;
#line 302 "ml_accurate_gc.m"
  }
#line 302 "ml_accurate_gc.m"
}

#line 293 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(
#line 293 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 293 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
#line 293 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ActualType_10,
#line 293 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 293 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__GC_TraceCode_12,
#line 293 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40,
#line 293 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41)
#line 293 "ml_accurate_gc.m"
{
#line 298 "ml_accurate_gc.m"
  {
#line 298 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_67_67;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_69_69;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__TypeInfoVar_14;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__NonLocalsList_16;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__NonLocals_19;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__InstMapDelta_20;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GoalInfo_21;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Conj_22;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement0_23;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleName_25;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement_26;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__TypeInfoLval_28;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_TraceStatement_29;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__VarSet_30;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__VarTypes_31;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_Context_32;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GenLocalVarDecl_33;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__NonLocalVarList_38;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_39;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_42_42;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_50_50;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_51_51;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_57_57;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_58_58;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_59_59;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo0_77;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredId_78;
#line 298 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__ProcId_79;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredInfo0_80;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ProcInfo0_81;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PolyInfo0_82;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PolyInfo_83;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredInfo_84;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ProcInfo_85;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo1_86;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_87;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__VarSet_88;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__VarTypes_89;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_27_90;
#line 298 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_28_91;

#line 400 "ml_accurate_gc.m"
    {
#line 400 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40, &ml_backend__ml_accurate_gc__ModuleInfo0_77);
    }
#line 401 "ml_accurate_gc.m"
    {
#line 401 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40, &ml_backend__ml_accurate_gc__PredId_78);
    }
#line 402 "ml_accurate_gc.m"
    {
#line 402 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40, &ml_backend__ml_accurate_gc__ProcId_79);
    }
#line 403 "ml_accurate_gc.m"
    {
#line 403 "ml_accurate_gc.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_accurate_gc__ModuleInfo0_77, ml_backend__ml_accurate_gc__PredId_78, ml_backend__ml_accurate_gc__ProcId_79, &ml_backend__ml_accurate_gc__PredInfo0_80, &ml_backend__ml_accurate_gc__ProcInfo0_81);
    }
#line 407 "ml_accurate_gc.m"
    {
#line 407 "ml_accurate_gc.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(ml_backend__ml_accurate_gc__ModuleInfo0_77, ml_backend__ml_accurate_gc__PredInfo0_80, ml_backend__ml_accurate_gc__ProcInfo0_81, &ml_backend__ml_accurate_gc__PolyInfo0_82);
    }
#line 408 "ml_accurate_gc.m"
    {
#line 408 "ml_accurate_gc.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(ml_backend__ml_accurate_gc__ActualType_10, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__TypeInfoVar_14, &ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15, ml_backend__ml_accurate_gc__PolyInfo0_82, &ml_backend__ml_accurate_gc__PolyInfo_83);
    }
#line 410 "ml_accurate_gc.m"
    {
#line 410 "ml_accurate_gc.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(ml_backend__ml_accurate_gc__PolyInfo_83, ml_backend__ml_accurate_gc__PredInfo0_80, &ml_backend__ml_accurate_gc__PredInfo_84, ml_backend__ml_accurate_gc__ProcInfo0_81, &ml_backend__ml_accurate_gc__ProcInfo_85, &ml_backend__ml_accurate_gc__ModuleInfo1_86);
    }
#line 414 "ml_accurate_gc.m"
    {
#line 414 "ml_accurate_gc.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(ml_backend__ml_accurate_gc__PredId_78, ml_backend__ml_accurate_gc__ProcId_79, ml_backend__ml_accurate_gc__PredInfo_84, ml_backend__ml_accurate_gc__ProcInfo_85, ml_backend__ml_accurate_gc__ModuleInfo1_86, &ml_backend__ml_accurate_gc__ModuleInfo_87);
    }
#line 416 "ml_accurate_gc.m"
    {
#line 416 "ml_accurate_gc.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_accurate_gc__ProcInfo_85, &ml_backend__ml_accurate_gc__VarSet_88);
    }
#line 417 "ml_accurate_gc.m"
    {
#line 417 "ml_accurate_gc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__ml_accurate_gc__ProcInfo_85, &ml_backend__ml_accurate_gc__VarTypes_89);
    }
#line 418 "ml_accurate_gc.m"
    {
#line 418 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_p_0(ml_backend__ml_accurate_gc__ModuleInfo_87, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_27_90);
    }
#line 419 "ml_accurate_gc.m"
    {
#line 419 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_set_varset_3_p_0(ml_backend__ml_accurate_gc__VarSet_88, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_27_90, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_28_91);
    }
#line 420 "ml_accurate_gc.m"
    {
#line 420 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_p_0(ml_backend__ml_accurate_gc__VarTypes_89, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_28_91, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_42_42);
    }
#line 302 "ml_accurate_gc.m"
    {
#line 302 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__NonLocalsList_16 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[1], (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[0], ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15);
    }
#line 3798 "ml_backend.ml_accurate_gc.c"
    ml_backend__ml_accurate_gc__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 305 "ml_accurate_gc.m"
    {
#line 305 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__NonLocals_19 = parse_tree__set_of_var__union_list_1_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_67_67, ml_backend__ml_accurate_gc__NonLocalsList_16);
    }
#line 306 "ml_accurate_gc.m"
    {
#line 306 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__InstMapDelta_20 = hlds__instmap__instmap_delta_bind_var_1_f_0(ml_backend__ml_accurate_gc__TypeInfoVar_14);
    }
#line 307 "ml_accurate_gc.m"
    {
#line 307 "ml_accurate_gc.m"
      hlds__hlds_goal__goal_info_init_5_p_0(ml_backend__ml_accurate_gc__NonLocals_19, ml_backend__ml_accurate_gc__InstMapDelta_20, (MR_Integer) 0, (MR_Integer) 2, &ml_backend__ml_accurate_gc__GoalInfo_21);
    }
#line 309 "ml_accurate_gc.m"
    {
#line 309 "ml_accurate_gc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15, ml_backend__ml_accurate_gc__GoalInfo_21, &ml_backend__ml_accurate_gc__Conj_22);
    }
#line 312 "ml_accurate_gc.m"
    {
#line 312 "ml_accurate_gc.m"
      ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0((MR_Integer) 0, ml_backend__ml_accurate_gc__Conj_22, &ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement0_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_42_42, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41);
    }
#line 318 "ml_accurate_gc.m"
    {
#line 318 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, &ml_backend__ml_accurate_gc__ModuleInfo_24);
    }
#line 319 "ml_accurate_gc.m"
    {
#line 319 "ml_accurate_gc.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_accurate_gc__ModuleInfo_24, &ml_backend__ml_accurate_gc__ModuleName_25);
    }
#line 321 "ml_accurate_gc.m"
    {
#line 321 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_50_50 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_accurate_gc__ModuleName_25);
    }
#line 320 "ml_accurate_gc.m"
    {
#line 320 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_4_p_0(ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement0_23, ml_backend__ml_accurate_gc__V_50_50, &ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement_26, &ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27);
    }
#line 325 "ml_accurate_gc.m"
    {
#line 325 "ml_accurate_gc.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, ml_backend__ml_accurate_gc__TypeInfoVar_14, &ml_backend__ml_accurate_gc__TypeInfoLval_28);
    }
#line 326 "ml_accurate_gc.m"
    {
#line 326 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_51_51, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TypeInfoLval_28));
#line 326 "ml_accurate_gc.m"
    }
#line 326 "ml_accurate_gc.m"
    {
#line 326 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__V_51_51, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__MLDS_TraceStatement_29);
    }
#line 337 "ml_accurate_gc.m"
    {
#line 337 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, &ml_backend__ml_accurate_gc__VarSet_30);
    }
#line 338 "ml_accurate_gc.m"
    {
#line 338 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, &ml_backend__ml_accurate_gc__VarTypes_31);
    }
#line 339 "ml_accurate_gc.m"
    {
#line 339 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__MLDS_Context_32 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_accurate_gc__Context_11);
    }
#line 340 "ml_accurate_gc.m"
    {
#line 340 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__GenLocalVarDecl_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 340 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_5[0]));
#line 340 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2));
#line 340 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 340 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__ModuleInfo_24));
#line 340 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__VarSet_30));
#line 340 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__VarTypes_31));
#line 340 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 6) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_Context_32));
#line 340 "ml_accurate_gc.m"
    }
#line 348 "ml_accurate_gc.m"
    {
#line 348 "ml_accurate_gc.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_67_67, ml_backend__ml_accurate_gc__NonLocals_19, &ml_backend__ml_accurate_gc__NonLocalVarList_38);
    }
#line 3903 "ml_backend.ml_accurate_gc.c"
    ml_backend__ml_accurate_gc__TypeCtorInfo_69_69 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 349 "ml_accurate_gc.m"
    {
#line 349 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_39 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[0], ml_backend__ml_accurate_gc__TypeCtorInfo_69_69, ml_backend__ml_accurate_gc__GenLocalVarDecl_33, ml_backend__ml_accurate_gc__NonLocalVarList_38);
    }
#line 352 "ml_accurate_gc.m"
    {
#line 352 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_57_57 = mercury__list__f_43_43_2_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_69_69, ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27, ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_39);
    }
#line 353 "ml_accurate_gc.m"
    {
#line 353 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_59_59, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_TraceStatement_29));
#line 353 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "ml_accurate_gc.m"
    }
#line 353 "ml_accurate_gc.m"
    {
#line 353 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_58_58, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement_26));
#line 353 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_58_58, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_59_59));
#line 353 "ml_accurate_gc.m"
    }
#line 352 "ml_accurate_gc.m"
    {
#line 352 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__GC_TraceCode_12 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_accurate_gc__V_57_57, ml_backend__ml_accurate_gc__V_58_58, ml_backend__ml_accurate_gc__Context_11);
    }
#line 298 "ml_accurate_gc.m"
  }
#line 293 "ml_accurate_gc.m"
}

#line 139 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(
#line 139 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 139 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
#line 139 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_10,
#line 139 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 139 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_12,
#line 139 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25,
#line 139 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26)
#line 139 "ml_accurate_gc.m"
{
#line 171 "ml_accurate_gc.m"
  {
#line 171 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 146 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_14;
#line 146 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_DeclType_15;
#line 146 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredId_16;
#line 146 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredModule_17;
#line 146 "ml_accurate_gc.m"
    MR_String ml_backend__ml_accurate_gc__PredName_18;
#line 146 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__PredArity_19;

#line 146 "ml_accurate_gc.m"
    {
#line 146 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, &ml_backend__ml_accurate_gc__ModuleInfo_14);
    }
#line 147 "ml_accurate_gc.m"
    {
#line 147 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__MLDS_DeclType_15 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_accurate_gc__ModuleInfo_14, ml_backend__ml_accurate_gc__DeclType_9);
    }
#line 200 "ml_accurate_gc.m"
#line 200 "ml_accurate_gc.m"
    switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__MLDS_DeclType_15)) {
#line 200 "ml_accurate_gc.m"
      default:
#line 200 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 200 "ml_accurate_gc.m"
        break;
#line 200 "ml_accurate_gc.m"
      case (MR_Integer) 0:
#line 200 "ml_accurate_gc.m"
#line 200 "ml_accurate_gc.m"
        switch (MR_unmkbody(ml_backend__ml_accurate_gc__MLDS_DeclType_15)) {
#line 200 "ml_accurate_gc.m"
          default:
#line 200 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 200 "ml_accurate_gc.m"
            break;
#line 200 "ml_accurate_gc.m"
          case (MR_Integer) 5:
#line 200 "ml_accurate_gc.m"
          case (MR_Integer) 6:
#line 200 "ml_accurate_gc.m"
          case (MR_Integer) 7:
#line 200 "ml_accurate_gc.m"
          case (MR_Integer) 8:
#line 200 "ml_accurate_gc.m"
          case (MR_Integer) 9:
#line 222 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 200 "ml_accurate_gc.m"
            break;
#line 200 "ml_accurate_gc.m"
        }
#line 200 "ml_accurate_gc.m"
        break;
#line 200 "ml_accurate_gc.m"
      case (MR_Integer) 2:
#line 200 "ml_accurate_gc.m"
        {
#line 200 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__TypeCategory_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 1)));
#line 200 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc___Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 0)));
#line 200 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 2)));

#line 254 "ml_accurate_gc.m"
#line 254 "ml_accurate_gc.m"
          switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__TypeCategory_32)) {
#line 254 "ml_accurate_gc.m"
            default:
#line 254 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 254 "ml_accurate_gc.m"
              break;
#line 254 "ml_accurate_gc.m"
            case (MR_Integer) 0:
#line 254 "ml_accurate_gc.m"
#line 254 "ml_accurate_gc.m"
              switch (MR_unmkbody(ml_backend__ml_accurate_gc__TypeCategory_32)) {
#line 254 "ml_accurate_gc.m"
                default:
#line 254 "ml_accurate_gc.m"
                  ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 254 "ml_accurate_gc.m"
                  break;
#line 254 "ml_accurate_gc.m"
                case (MR_Integer) 0:
#line 265 "ml_accurate_gc.m"
                  ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 254 "ml_accurate_gc.m"
                  break;
#line 254 "ml_accurate_gc.m"
                case (MR_Integer) 1:
#line 265 "ml_accurate_gc.m"
                  ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 254 "ml_accurate_gc.m"
                  break;
#line 254 "ml_accurate_gc.m"
                case (MR_Integer) 3:
#line 265 "ml_accurate_gc.m"
                  ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 254 "ml_accurate_gc.m"
                  break;
#line 254 "ml_accurate_gc.m"
              }
#line 254 "ml_accurate_gc.m"
              break;
#line 254 "ml_accurate_gc.m"
            case (MR_Integer) 1:
#line 254 "ml_accurate_gc.m"
              {
#line 254 "ml_accurate_gc.m"
                MR_Word ml_backend__ml_accurate_gc__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 0)));

#line 4089 "ml_backend.ml_accurate_gc.c"
                ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__V_60_60 == (MR_Integer) 3);
#line 254 "ml_accurate_gc.m"
              }
#line 254 "ml_accurate_gc.m"
              break;
#line 254 "ml_accurate_gc.m"
            case (MR_Integer) 3:
#line 254 "ml_accurate_gc.m"
#line 254 "ml_accurate_gc.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 0)))) {
#line 254 "ml_accurate_gc.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 254 "ml_accurate_gc.m"
                case (MR_Integer) 0:
#line 254 "ml_accurate_gc.m"
                  {
#line 254 "ml_accurate_gc.m"
                    MR_Word ml_backend__ml_accurate_gc__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 1)));

#line 254 "ml_accurate_gc.m"
#line 254 "ml_accurate_gc.m"
                    switch (ml_backend__ml_accurate_gc__V_61_61) {
#line 254 "ml_accurate_gc.m"
                      default:
#line 254 "ml_accurate_gc.m"
                        ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 254 "ml_accurate_gc.m"
                        break;
#line 254 "ml_accurate_gc.m"
                      case (MR_Integer) 0:
#line 266 "ml_accurate_gc.m"
                        ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 254 "ml_accurate_gc.m"
                        break;
#line 254 "ml_accurate_gc.m"
                      case (MR_Integer) 2:
#line 266 "ml_accurate_gc.m"
                        ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 254 "ml_accurate_gc.m"
                        break;
#line 254 "ml_accurate_gc.m"
                    }
#line 254 "ml_accurate_gc.m"
                  }
#line 254 "ml_accurate_gc.m"
                  break;
#line 254 "ml_accurate_gc.m"
                case (MR_Integer) 1:
#line 254 "ml_accurate_gc.m"
                  {
#line 254 "ml_accurate_gc.m"
                    MR_Word ml_backend__ml_accurate_gc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 1)));

#line 254 "ml_accurate_gc.m"
#line 254 "ml_accurate_gc.m"
                    switch (ml_backend__ml_accurate_gc__V_62_62) {
#line 254 "ml_accurate_gc.m"
                      default:
#line 254 "ml_accurate_gc.m"
                        ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 254 "ml_accurate_gc.m"
                        break;
#line 254 "ml_accurate_gc.m"
                      case (MR_Integer) 2:
#line 266 "ml_accurate_gc.m"
                        ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 254 "ml_accurate_gc.m"
                        break;
#line 254 "ml_accurate_gc.m"
                      case (MR_Integer) 1:
#line 266 "ml_accurate_gc.m"
                        ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 254 "ml_accurate_gc.m"
                        break;
#line 254 "ml_accurate_gc.m"
                    }
#line 254 "ml_accurate_gc.m"
                  }
#line 254 "ml_accurate_gc.m"
                  break;
#line 254 "ml_accurate_gc.m"
              }
#line 254 "ml_accurate_gc.m"
              break;
#line 254 "ml_accurate_gc.m"
          }
#line 200 "ml_accurate_gc.m"
        }
#line 200 "ml_accurate_gc.m"
        break;
#line 200 "ml_accurate_gc.m"
      case (MR_Integer) 3:
#line 200 "ml_accurate_gc.m"
#line 200 "ml_accurate_gc.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 0)))) {
#line 200 "ml_accurate_gc.m"
          default:
#line 200 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 200 "ml_accurate_gc.m"
            break;
#line 200 "ml_accurate_gc.m"
          case (MR_Integer) 0:
#line 200 "ml_accurate_gc.m"
          case (MR_Integer) 4:
#line 200 "ml_accurate_gc.m"
          case (MR_Integer) 5:
#line 200 "ml_accurate_gc.m"
          case (MR_Integer) 6:
#line 200 "ml_accurate_gc.m"
          case (MR_Integer) 7:
#line 222 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 200 "ml_accurate_gc.m"
            break;
#line 200 "ml_accurate_gc.m"
          case (MR_Integer) 3:
#line 204 "ml_accurate_gc.m"
            {
#line 204 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__Category_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 3)));
#line 204 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 1)));
#line 204 "ml_accurate_gc.m"
              MR_Integer ml_backend__ml_accurate_gc__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 2)));

#line 205 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__Category_36 == (MR_Integer) 4);
#line 207 "ml_accurate_gc.m"
              if (ml_backend__ml_accurate_gc__succeeded)
#line 206 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 207 "ml_accurate_gc.m"
              else
#line 208 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 204 "ml_accurate_gc.m"
            }
#line 200 "ml_accurate_gc.m"
            break;
#line 200 "ml_accurate_gc.m"
        }
#line 200 "ml_accurate_gc.m"
        break;
#line 200 "ml_accurate_gc.m"
    }
#line 146 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 146 "ml_accurate_gc.m"
      {
#line 150 "ml_accurate_gc.m"
        {
#line 150 "ml_accurate_gc.m"
          ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, &ml_backend__ml_accurate_gc__PredId_16);
        }
#line 151 "ml_accurate_gc.m"
        {
#line 151 "ml_accurate_gc.m"
          hlds__hlds_module__predicate_id_5_p_0(ml_backend__ml_accurate_gc__ModuleInfo_14, ml_backend__ml_accurate_gc__PredId_16, &ml_backend__ml_accurate_gc__PredModule_17, &ml_backend__ml_accurate_gc__PredName_18, &ml_backend__ml_accurate_gc__PredArity_19);
        }
#line 152 "ml_accurate_gc.m"
        {
#line 152 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(ml_backend__ml_accurate_gc__PredModule_17, ml_backend__ml_accurate_gc__PredName_18, ml_backend__ml_accurate_gc__PredArity_19);
        }
#line 152 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
#line 146 "ml_accurate_gc.m"
      }
#line 171 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 169 "ml_accurate_gc.m"
      {
#line 169 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__GC_TraceCode_23;

#line 165 "ml_accurate_gc.m"
        if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HowToGetTypeInfo_10)) == (MR_mktag((MR_Integer) 1))))
#line 166 "ml_accurate_gc.m"
          {
#line 166 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HowToGetTypeInfo_10, (MR_Integer) 0)));

#line 167 "ml_accurate_gc.m"
            {
#line 167 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__TypeInfoRval_24, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__GC_TraceCode_23);
            }
#line 166 "ml_accurate_gc.m"
            *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25;
#line 166 "ml_accurate_gc.m"
          }
#line 165 "ml_accurate_gc.m"
        else
#line 155 "ml_accurate_gc.m"
          {
#line 155 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__ActualType0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HowToGetTypeInfo_10, (MR_Integer) 0)));
#line 155 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__ActualType_22;
#line 160 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__ActualType1_21;
#line 276 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__TypeName_65;
#line 276 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__PrivateBuiltin_68;
#line 276 "ml_accurate_gc.m"
            MR_String ml_backend__ml_accurate_gc__Name_69;
#line 276 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__V_70_70;
#line 277 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__V_66_66;
#line 277 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__V_67_67;
#line 281 "ml_accurate_gc.m"
            MR_Integer ml_backend__ml_accurate_gc__slot_0;
#line 281 "ml_accurate_gc.m"
            MR_String ml_backend__ml_accurate_gc__str_1;

#line 277 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__ActualType0_20)) == (MR_mktag((MR_Integer) 1)));
#line 277 "ml_accurate_gc.m"
            if (ml_backend__ml_accurate_gc__succeeded)
#line 277 "ml_accurate_gc.m"
              {
#line 277 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__TypeName_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ActualType0_20, (MR_Integer) 0)));
#line 277 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ActualType0_20, (MR_Integer) 1)));
#line 277 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ActualType0_20, (MR_Integer) 2)));
#line 278 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__TypeName_65)) == (MR_mktag((MR_Integer) 1)));
#line 278 "ml_accurate_gc.m"
                if (ml_backend__ml_accurate_gc__succeeded)
#line 278 "ml_accurate_gc.m"
                  {
#line 278 "ml_accurate_gc.m"
                    ml_backend__ml_accurate_gc__PrivateBuiltin_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__TypeName_65, (MR_Integer) 0)));
#line 278 "ml_accurate_gc.m"
                    ml_backend__ml_accurate_gc__Name_69 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__TypeName_65, (MR_Integer) 1)));
#line 279 "ml_accurate_gc.m"
                    {
#line 279 "ml_accurate_gc.m"
                      ml_backend__ml_accurate_gc__V_70_70 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                    }
#line 279 "ml_accurate_gc.m"
                    {
#line 279 "ml_accurate_gc.m"
                      ml_backend__ml_accurate_gc__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_accurate_gc__PrivateBuiltin_68, ml_backend__ml_accurate_gc__V_70_70);
                    }
#line 276 "ml_accurate_gc.m"
                    if (ml_backend__ml_accurate_gc__succeeded)
#line 276 "ml_accurate_gc.m"
                      {
#line 281 "ml_accurate_gc.m"
                        /* hashed string jump switch */
#line 281 "ml_accurate_gc.m"
                        /* compute the hash value of the input string */
#line 281 "ml_accurate_gc.m"
                        ml_backend__ml_accurate_gc__slot_0 = ((MR_hash_string5(ml_backend__ml_accurate_gc__Name_69)) & (MR_Integer) 15);
#line 281 "ml_accurate_gc.m"
                        /* hash chain loop */
#line 281 "ml_accurate_gc.m"
                        do
#line 281 "ml_accurate_gc.m"
                          {
#line 281 "ml_accurate_gc.m"
                            /* lookup the string for this hash slot */
#line 281 "ml_accurate_gc.m"
                            ml_backend__ml_accurate_gc__str_1 = ((&ml_backend__ml_accurate_gc_vector_common_2[0 + ml_backend__ml_accurate_gc__slot_0]))->ml_backend__ml_accurate_gc__vector_common_type_2_0__vct_2_f_0;
#line 281 "ml_accurate_gc.m"
                            /* did we find a match? */
#line 281 "ml_accurate_gc.m"
                            if ((((ml_backend__ml_accurate_gc__str_1 != NULL)) && ((strcmp(ml_backend__ml_accurate_gc__str_1, ml_backend__ml_accurate_gc__Name_69) == 0))))
#line 281 "ml_accurate_gc.m"
                              {
#line 281 "ml_accurate_gc.m"
                                /* we found a match; dispatch to the corresponding code */
#line 281 "ml_accurate_gc.m"
#line 281 "ml_accurate_gc.m"
                                switch (ml_backend__ml_accurate_gc__slot_0) {
#line 281 "ml_accurate_gc.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 281 "ml_accurate_gc.m"
                                  case (MR_Integer) 0:
#line 287 "ml_accurate_gc.m"
                                    {
#line 287 "ml_accurate_gc.m"
                                      /* case "zero_base_typeclass_info" */
#line 287 "ml_accurate_gc.m"
                                      {
#line 287 "ml_accurate_gc.m"
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                                      }
#line 287 "ml_accurate_gc.m"
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 287 "ml_accurate_gc.m"
                                    }
#line 281 "ml_accurate_gc.m"
                                    break;
#line 281 "ml_accurate_gc.m"
                                  case (MR_Integer) 1:
#line 285 "ml_accurate_gc.m"
                                    {
#line 285 "ml_accurate_gc.m"
                                      /* case "zero_type_ctor_info" */
#line 285 "ml_accurate_gc.m"
                                      {
#line 285 "ml_accurate_gc.m"
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                                      }
#line 285 "ml_accurate_gc.m"
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 285 "ml_accurate_gc.m"
                                    }
#line 281 "ml_accurate_gc.m"
                                    break;
#line 281 "ml_accurate_gc.m"
                                  case (MR_Integer) 2:
#line 281 "ml_accurate_gc.m"
                                    {
#line 281 "ml_accurate_gc.m"
                                      /* case "type_ctor_info" */
#line 281 "ml_accurate_gc.m"
                                      {
#line 281 "ml_accurate_gc.m"
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                                      }
#line 281 "ml_accurate_gc.m"
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 281 "ml_accurate_gc.m"
                                    }
#line 281 "ml_accurate_gc.m"
                                    break;
#line 281 "ml_accurate_gc.m"
                                  case (MR_Integer) 5:
#line 282 "ml_accurate_gc.m"
                                    {
#line 282 "ml_accurate_gc.m"
                                      /* case "typeclass_info" */
#line 282 "ml_accurate_gc.m"
                                      {
#line 282 "ml_accurate_gc.m"
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0();
                                      }
#line 282 "ml_accurate_gc.m"
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 282 "ml_accurate_gc.m"
                                    }
#line 281 "ml_accurate_gc.m"
                                    break;
#line 281 "ml_accurate_gc.m"
                                  case (MR_Integer) 8:
#line 280 "ml_accurate_gc.m"
                                    {
#line 280 "ml_accurate_gc.m"
                                      /* case "type_info" */
#line 280 "ml_accurate_gc.m"
                                      {
#line 280 "ml_accurate_gc.m"
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_type_info_type_0_f_0();
                                      }
#line 280 "ml_accurate_gc.m"
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 280 "ml_accurate_gc.m"
                                    }
#line 281 "ml_accurate_gc.m"
                                    break;
#line 281 "ml_accurate_gc.m"
                                  case (MR_Integer) 9:
#line 286 "ml_accurate_gc.m"
                                    {
#line 286 "ml_accurate_gc.m"
                                      /* case "zero_typeclass_info" */
#line 286 "ml_accurate_gc.m"
                                      {
#line 286 "ml_accurate_gc.m"
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0();
                                      }
#line 286 "ml_accurate_gc.m"
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 286 "ml_accurate_gc.m"
                                    }
#line 281 "ml_accurate_gc.m"
                                    break;
#line 281 "ml_accurate_gc.m"
                                  case (MR_Integer) 10:
#line 284 "ml_accurate_gc.m"
                                    {
#line 284 "ml_accurate_gc.m"
                                      /* case "zero_type_info" */
#line 284 "ml_accurate_gc.m"
                                      {
#line 284 "ml_accurate_gc.m"
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_type_info_type_0_f_0();
                                      }
#line 284 "ml_accurate_gc.m"
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 284 "ml_accurate_gc.m"
                                    }
#line 281 "ml_accurate_gc.m"
                                    break;
#line 281 "ml_accurate_gc.m"
                                  case (MR_Integer) 14:
#line 283 "ml_accurate_gc.m"
                                    {
#line 283 "ml_accurate_gc.m"
                                      /* case "base_typeclass_info" */
#line 283 "ml_accurate_gc.m"
                                      {
#line 283 "ml_accurate_gc.m"
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                                      }
#line 283 "ml_accurate_gc.m"
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 283 "ml_accurate_gc.m"
                                    }
#line 281 "ml_accurate_gc.m"
                                    break;
#line 281 "ml_accurate_gc.m"
                                }
#line 281 "ml_accurate_gc.m"
                                /* jump out of search loop */
#line 281 "ml_accurate_gc.m"
                                goto label_0;
#line 281 "ml_accurate_gc.m"
                              }
#line 281 "ml_accurate_gc.m"
                            else
#line 281 "ml_accurate_gc.m"
                              {
#line 281 "ml_accurate_gc.m"
                                /* no match yet, so get next slot in hash chain */
#line 281 "ml_accurate_gc.m"
                                ml_backend__ml_accurate_gc__slot_0 = ((&ml_backend__ml_accurate_gc_vector_common_2[0 + ml_backend__ml_accurate_gc__slot_0]))->ml_backend__ml_accurate_gc__vector_common_type_2_0__vct_2_f_1;
#line 281 "ml_accurate_gc.m"
                              }
#line 281 "ml_accurate_gc.m"
                          }
#line 281 "ml_accurate_gc.m"
                        while ((ml_backend__ml_accurate_gc__slot_0 >= (MR_Integer) 0));
#line 281 "ml_accurate_gc.m"
                        ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 281 "ml_accurate_gc.m"
                      label_0:;
#line 276 "ml_accurate_gc.m"
                      }
#line 278 "ml_accurate_gc.m"
                  }
#line 277 "ml_accurate_gc.m"
              }
#line 160 "ml_accurate_gc.m"
            if (ml_backend__ml_accurate_gc__succeeded)
#line 159 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__ActualType_22 = ml_backend__ml_accurate_gc__ActualType1_21;
#line 160 "ml_accurate_gc.m"
            else
#line 161 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__ActualType_22 = ml_backend__ml_accurate_gc__ActualType0_20;
#line 163 "ml_accurate_gc.m"
            {
#line 163 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__ActualType_22, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__GC_TraceCode_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26);
            }
#line 155 "ml_accurate_gc.m"
          }
#line 170 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_accurate_gc__GC_TraceCode_23);
#line 169 "ml_accurate_gc.m"
      }
#line 171 "ml_accurate_gc.m"
    else
#line 172 "ml_accurate_gc.m"
      {
#line 172 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 172 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25;
#line 172 "ml_accurate_gc.m"
      }
#line 171 "ml_accurate_gc.m"
  }
#line 139 "ml_accurate_gc.m"
}

#line 71 "ml_accurate_gc.m"
void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_p_0(
#line 71 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 71 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
#line 71 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_10,
#line 71 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 71 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_12,
#line 71 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16,
#line 71 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17)
#line 71 "ml_accurate_gc.m"
{
#line 125 "ml_accurate_gc.m"
  {
#line 125 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 125 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GC_14;

#line 126 "ml_accurate_gc.m"
    {
#line 126 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, &ml_backend__ml_accurate_gc__GC_14);
    }
#line 127 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__GC_14 == (MR_Integer) 5);
#line 131 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 128 "ml_accurate_gc.m"
      {
#line 128 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_15;

#line 128 "ml_accurate_gc.m"
        {
#line 128 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__HowToGetTypeInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 128 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TypeInfoRval_10));
#line 128 "ml_accurate_gc.m"
        }
#line 129 "ml_accurate_gc.m"
        {
#line 129 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, ml_backend__ml_accurate_gc__Context_11, ml_backend__ml_accurate_gc__GCStatement_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17);
#line 129 "ml_accurate_gc.m"
          return;
        }
#line 128 "ml_accurate_gc.m"
      }
#line 131 "ml_accurate_gc.m"
    else
#line 132 "ml_accurate_gc.m"
      {
#line 132 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 132 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16;
#line 132 "ml_accurate_gc.m"
      }
#line 125 "ml_accurate_gc.m"
  }
#line 71 "ml_accurate_gc.m"
}

#line 57 "ml_accurate_gc.m"
void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_p_0(
#line 57 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 57 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
#line 57 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ActualType_10,
#line 57 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 57 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_12,
#line 57 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16,
#line 57 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17)
#line 57 "ml_accurate_gc.m"
{
#line 114 "ml_accurate_gc.m"
  {
#line 114 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 114 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GC_14;

#line 115 "ml_accurate_gc.m"
    {
#line 115 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, &ml_backend__ml_accurate_gc__GC_14);
    }
#line 116 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__GC_14 == (MR_Integer) 5);
#line 120 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 117 "ml_accurate_gc.m"
      {
#line 117 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_15;

#line 117 "ml_accurate_gc.m"
        {
#line 117 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__HowToGetTypeInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 117 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__ActualType_10));
#line 117 "ml_accurate_gc.m"
        }
#line 118 "ml_accurate_gc.m"
        {
#line 118 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, ml_backend__ml_accurate_gc__Context_11, ml_backend__ml_accurate_gc__GCStatement_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17);
#line 118 "ml_accurate_gc.m"
          return;
        }
#line 117 "ml_accurate_gc.m"
      }
#line 120 "ml_accurate_gc.m"
    else
#line 121 "ml_accurate_gc.m"
      {
#line 121 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 121 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16;
#line 121 "ml_accurate_gc.m"
      }
#line 114 "ml_accurate_gc.m"
  }
#line 57 "ml_accurate_gc.m"
}

#line 35 "ml_accurate_gc.m"
void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(
#line 35 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_7,
#line 35 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Type_8,
#line 35 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_9,
#line 35 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_10,
#line 35 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12,
#line 35 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13)
#line 35 "ml_accurate_gc.m"
{
#line 114 "ml_accurate_gc.m"
  {
#line 114 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 114 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GC_24;

#line 115 "ml_accurate_gc.m"
    {
#line 115 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12, &ml_backend__ml_accurate_gc__GC_24);
    }
#line 116 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__GC_24 == (MR_Integer) 5);
#line 120 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 117 "ml_accurate_gc.m"
      {
#line 117 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_25;

#line 117 "ml_accurate_gc.m"
        {
#line 117 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__HowToGetTypeInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 117 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HowToGetTypeInfo_25, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Type_8));
#line 117 "ml_accurate_gc.m"
        }
#line 118 "ml_accurate_gc.m"
        {
#line 118 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_7, ml_backend__ml_accurate_gc__Type_8, ml_backend__ml_accurate_gc__HowToGetTypeInfo_25, ml_backend__ml_accurate_gc__Context_9, ml_backend__ml_accurate_gc__GCStatement_10, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13);
#line 118 "ml_accurate_gc.m"
          return;
        }
#line 117 "ml_accurate_gc.m"
      }
#line 120 "ml_accurate_gc.m"
    else
#line 121 "ml_accurate_gc.m"
      {
#line 121 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__GCStatement_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 121 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12;
#line 121 "ml_accurate_gc.m"
      }
#line 114 "ml_accurate_gc.m"
  }
#line 35 "ml_accurate_gc.m"
}

void mercury__ml_backend__ml_accurate_gc__init(void)
{
}

void mercury__ml_backend__ml_accurate_gc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_how_to_get_type_info_0);
}

void mercury__ml_backend__ml_accurate_gc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_accurate_gc. */
