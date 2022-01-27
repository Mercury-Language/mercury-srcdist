/*
** Automatically generated from `ml_accurate_gc.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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




#line 145 "ml_backend.ml_accurate_gc.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_accurate_gc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 157 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "ml_backend.ml_accurate_gc.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 163 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0[4];

#line 166 "ml_backend.ml_accurate_gc.c"
static const MR_ConstString ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0[4];

#line 169 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0;

#line 172 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0[1];

#line 175 "ml_backend.ml_accurate_gc.c"
static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0[1];

#line 178 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0[1];

#line 181 "ml_backend.ml_accurate_gc.c"
static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0[1];

#line 184 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0[1];

#line 187 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0;

#line 190 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1[1];

#line 193 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1;

#line 196 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0[1];

#line 199 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1[1];

#line 202 "ml_backend.ml_accurate_gc.c"
static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0[2];

#line 205 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0[2];

#line 208 "ml_backend.ml_accurate_gc.c"
static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0[2];

#line 211 "ml_backend.ml_accurate_gc.c"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001(
#line 214 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 216 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2);

#line 219 "ml_backend.ml_accurate_gc.c"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001(
#line 222 "ml_backend.ml_accurate_gc.c"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 224 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 226 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3);

#line 229 "ml_backend.ml_accurate_gc.c"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001(
#line 232 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 234 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2);

#line 237 "ml_backend.ml_accurate_gc.c"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001(
#line 240 "ml_backend.ml_accurate_gc.c"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 242 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 244 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3);

#line 339 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_f_0(
#line 339 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24,
#line 339 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarSet_30,
#line 339 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarTypes_31,
#line 339 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__MLDS_Context_32,
#line 339 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__5_52);

#line 301 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__301__1_1_f_0(
#line 301 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_44);

#line 134 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(
#line 134 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 134 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 134 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3);

#line 134 "ml_accurate_gc.m"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(
#line 134 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 134 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2);

#line 423 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(
#line 423 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 423 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 423 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3);

#line 423 "ml_accurate_gc.m"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(
#line 423 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 423 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2);

#line 612 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__maybe_tag_rval_3_f_0(
#line 612 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 612 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 612 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Rval_3);

#line 599 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__init_field_n_7_p_0(
#line 599 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__PointerType_8,
#line 599 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__PointerRval_9,
#line 599 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_10,
#line 599 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ArgRval_11,
#line 599 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_12,
#line 599 "ml_accurate_gc.m"
  MR_Integer ml_backend__ml_accurate_gc__FieldNum_13,
#line 599 "ml_accurate_gc.m"
  MR_Integer * ml_backend__ml_accurate_gc__HeadVar__7_7);

#line 586 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1(
#line 586 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 586 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 586 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 586 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 586 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

#line 540 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(
#line 540 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__AtomicStatement0_5,
#line 540 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
#line 540 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34,
#line 540 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_35);

#line 529 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(
#line 529 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 529 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 529 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
#line 529 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);

#line 521 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(
#line 521 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 521 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 521 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
#line 521 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);

#line 513 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(
#line 513 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Case0_5,
#line 513 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Case_6,
#line 513 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12,
#line 513 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);

#line 482 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2(
#line 482 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 482 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 482 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 482 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 482 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

#line 468 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1(
#line 468 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 468 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 468 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 468 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 468 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

#line 462 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(
#line 462 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Stmt0_5,
#line 462 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
#line 462 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42,
#line 462 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);

#line 453 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(
#line 453 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Statement0_5,
#line 453 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_6,
#line 453 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11,
#line 453 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12);

#line 443 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_4_p_0(
#line 443 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Statement0_5,
#line 443 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ModuleName_6,
#line 443 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_7,
#line 443 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Defns_8);

#line 359 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(
#line 359 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Info_7,
#line 359 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 359 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Type_9,
#line 359 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_10,
#line 359 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 359 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__TraceStatement_12);

#line 339 "ml_accurate_gc.m"
static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2(
#line 339 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 339 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1);

#line 301 "ml_accurate_gc.m"
static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1(
#line 301 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 301 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1);

#line 292 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(
#line 292 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 292 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
#line 292 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ActualType_10,
#line 292 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 292 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__GC_TraceCode_12,
#line 292 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40,
#line 292 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41);

#line 138 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(
#line 138 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 138 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
#line 138 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_10,
#line 138 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 138 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_12,
#line 138 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25,
#line 138 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26);


static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_1[7][2];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_2[1][5];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_3[3][3];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_4[1][9];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_5[1][6];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_6[2][7];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_7[2][1];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_8[1][10];




static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_6[1])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_4[1][9] = {
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

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_5[1][6] = {
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

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_6[2][7] = {
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

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_7[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[6])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_8[1][10] = {
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



#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 711 "ml_backend.ml_accurate_gc.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 719 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 727 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 735 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_accurate_gc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 744 "ml_backend.ml_accurate_gc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 752 "ml_backend.ml_accurate_gc.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 760 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_accurate_gc__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0
};

#line 768 "ml_backend.ml_accurate_gc.c"
static const MR_ConstString ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0[4] = {
  (MR_String) "fnoi_module_name",
  (MR_String) "fnoi_context",
  (MR_String) "fnoi_locals",
  (MR_String) "fnoi_next_id"
};

#line 776 "ml_backend.ml_accurate_gc.c"
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

#line 791 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0
};

#line 796 "ml_backend.ml_accurate_gc.c"
static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0
  }
};

#line 805 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0
};

#line 810 "ml_backend.ml_accurate_gc.c"
static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0[1] = {
  (MR_Integer) 0
};

#line 815 "ml_backend.ml_accurate_gc.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001)),
  (MR_String) "ml_backend.ml_accurate_gc",
  (MR_String) "fixup_newobj_info",
  {
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0
  },
  {
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0
};

#line 836 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 841 "ml_backend.ml_accurate_gc.c"
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

#line 856 "ml_backend.ml_accurate_gc.c"
static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
};

#line 861 "ml_backend.ml_accurate_gc.c"
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

#line 876 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0
};

#line 881 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1
};

#line 886 "ml_backend.ml_accurate_gc.c"
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

#line 900 "ml_backend.ml_accurate_gc.c"
static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0[2] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1,
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0
};

#line 906 "ml_backend.ml_accurate_gc.c"
static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 912 "ml_backend.ml_accurate_gc.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_how_to_get_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001)),
  (MR_String) "ml_backend.ml_accurate_gc",
  (MR_String) "how_to_get_type_info",
  {
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0
  },
  {
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0
};

#line 933 "ml_backend.ml_accurate_gc.c"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001(
#line 936 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 938 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2)
#line 940 "ml_backend.ml_accurate_gc.c"
{
#line 942 "ml_backend.ml_accurate_gc.c"
  {
#line 944 "ml_backend.ml_accurate_gc.c"
    MR_bool ml_backend__ml_accurate_gc__succeeded;

#line 947 "ml_backend.ml_accurate_gc.c"
    {
#line 949 "ml_backend.ml_accurate_gc.c"
      ml_backend__ml_accurate_gc__succeeded = ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2));
    }
#line 952 "ml_backend.ml_accurate_gc.c"
    return ml_backend__ml_accurate_gc__succeeded;
#line 954 "ml_backend.ml_accurate_gc.c"
  }
#line 956 "ml_backend.ml_accurate_gc.c"
}

#line 959 "ml_backend.ml_accurate_gc.c"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001(
#line 962 "ml_backend.ml_accurate_gc.c"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 964 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 966 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3)
#line 968 "ml_backend.ml_accurate_gc.c"
{
#line 970 "ml_backend.ml_accurate_gc.c"
  {
#line 972 "ml_backend.ml_accurate_gc.c"
    MR_Word ml_backend__ml_accurate_gc__conv0_HeadVar__1_1;

#line 975 "ml_backend.ml_accurate_gc.c"
    {
#line 977 "ml_backend.ml_accurate_gc.c"
      ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(&ml_backend__ml_accurate_gc__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3));
    }
#line 980 "ml_backend.ml_accurate_gc.c"
    *ml_backend__ml_accurate_gc__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__1_1));
#line 982 "ml_backend.ml_accurate_gc.c"
  }
#line 984 "ml_backend.ml_accurate_gc.c"
}

#line 987 "ml_backend.ml_accurate_gc.c"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001(
#line 990 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 992 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2)
#line 994 "ml_backend.ml_accurate_gc.c"
{
#line 996 "ml_backend.ml_accurate_gc.c"
  {
#line 998 "ml_backend.ml_accurate_gc.c"
    MR_bool ml_backend__ml_accurate_gc__succeeded;

#line 1001 "ml_backend.ml_accurate_gc.c"
    {
#line 1003 "ml_backend.ml_accurate_gc.c"
      ml_backend__ml_accurate_gc__succeeded = ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2));
    }
#line 1006 "ml_backend.ml_accurate_gc.c"
    return ml_backend__ml_accurate_gc__succeeded;
#line 1008 "ml_backend.ml_accurate_gc.c"
  }
#line 1010 "ml_backend.ml_accurate_gc.c"
}

#line 1013 "ml_backend.ml_accurate_gc.c"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001(
#line 1016 "ml_backend.ml_accurate_gc.c"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 1018 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 1020 "ml_backend.ml_accurate_gc.c"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3)
#line 1022 "ml_backend.ml_accurate_gc.c"
{
#line 1024 "ml_backend.ml_accurate_gc.c"
  {
#line 1026 "ml_backend.ml_accurate_gc.c"
    MR_Word ml_backend__ml_accurate_gc__conv0_HeadVar__1_1;

#line 1029 "ml_backend.ml_accurate_gc.c"
    {
#line 1031 "ml_backend.ml_accurate_gc.c"
      ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(&ml_backend__ml_accurate_gc__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3));
    }
#line 1034 "ml_backend.ml_accurate_gc.c"
    *ml_backend__ml_accurate_gc__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__1_1));
#line 1036 "ml_backend.ml_accurate_gc.c"
  }
#line 1038 "ml_backend.ml_accurate_gc.c"
}

#line 339 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_f_0(
#line 339 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24,
#line 339 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarSet_30,
#line 339 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarTypes_31,
#line 339 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__MLDS_Context_32,
#line 339 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__5_52)
#line 339 "ml_accurate_gc.m"
{
#line 339 "ml_accurate_gc.m"
  {
#line 339 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 339 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__HeadVar__6_53;
#line 339 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__LocalVarName_36;
#line 339 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__LocalVarType_37;
#line 339 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_54_54;
#line 339 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_55_55;

#line 341 "ml_accurate_gc.m"
    {
#line 341 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__LocalVarName_36 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_accurate_gc__VarSet_30, ml_backend__ml_accurate_gc__HeadVar__5_52);
    }
#line 342 "ml_accurate_gc.m"
    {
#line 342 "ml_accurate_gc.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(ml_backend__ml_accurate_gc__VarTypes_31, ml_backend__ml_accurate_gc__HeadVar__5_52, &ml_backend__ml_accurate_gc__LocalVarType_37);
    }
#line 343 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_accurate_gc__LocalVarName_36);
#line 343 "ml_accurate_gc.m"
    {
#line 343 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_55_55 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_accurate_gc__ModuleInfo_24, ml_backend__ml_accurate_gc__LocalVarType_37);
    }
#line 343 "ml_accurate_gc.m"
    {
#line 343 "ml_accurate_gc.m"
      return ml_backend__ml_accurate_gc__HeadVar__6_53 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_accurate_gc__V_54_54, ml_backend__ml_accurate_gc__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_accurate_gc__MLDS_Context_32);
    }
#line 339 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__HeadVar__6_53;
#line 339 "ml_accurate_gc.m"
  }
#line 339 "ml_accurate_gc.m"
}

#line 301 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__301__1_1_f_0(
#line 301 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_44)
#line 301 "ml_accurate_gc.m"
{
#line 301 "ml_accurate_gc.m"
  {
#line 301 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 301 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__HeadVar__2_45;
#line 301 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GI_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_44, (MR_Integer) 1)));
#line 301 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___GX_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_44, (MR_Integer) 0)));

#line 301 "ml_accurate_gc.m"
    {
#line 301 "ml_accurate_gc.m"
      return ml_backend__ml_accurate_gc__HeadVar__2_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_accurate_gc__GI_63);
    }
#line 301 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__HeadVar__2_45;
#line 301 "ml_accurate_gc.m"
  }
#line 301 "ml_accurate_gc.m"
}

#line 134 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(
#line 134 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 134 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 134 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3)
#line 134 "ml_accurate_gc.m"
{
#line 134 "ml_accurate_gc.m"
  {
#line 134 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 134 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastX_12 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;
#line 134 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastY_13 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__3_3;

#line 134 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_12 == ml_backend__ml_accurate_gc__CastY_13);
#line 134 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 1154 "ml_backend.ml_accurate_gc.c"
      *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 0;
#line 134 "ml_accurate_gc.m"
    else
#line 134 "ml_accurate_gc.m"
      if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 134 "ml_accurate_gc.m"
        {
#line 134 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));

#line 134 "ml_accurate_gc.m"
          if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 134 "ml_accurate_gc.m"
            {
#line 134 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));

#line 134 "ml_accurate_gc.m"
              {
#line 134 "ml_accurate_gc.m"
                ml_backend__mlds____Compare____mlds_rval_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__V_16_16, ml_backend__ml_accurate_gc__V_11_11);
#line 134 "ml_accurate_gc.m"
                return;
              }
#line 134 "ml_accurate_gc.m"
            }
#line 134 "ml_accurate_gc.m"
          else
#line 1183 "ml_backend.ml_accurate_gc.c"
            *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 2;
#line 134 "ml_accurate_gc.m"
        }
#line 134 "ml_accurate_gc.m"
      else
#line 134 "ml_accurate_gc.m"
        {
#line 134 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));

#line 134 "ml_accurate_gc.m"
          if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1196 "ml_backend.ml_accurate_gc.c"
            *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 1;
#line 134 "ml_accurate_gc.m"
          else
#line 134 "ml_accurate_gc.m"
            {
#line 134 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));

#line 134 "ml_accurate_gc.m"
              {
#line 134 "ml_accurate_gc.m"
                parse_tree__prog_data____Compare____mer_type_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__V_17_17, ml_backend__ml_accurate_gc__V_5_5);
#line 134 "ml_accurate_gc.m"
                return;
              }
#line 134 "ml_accurate_gc.m"
            }
#line 134 "ml_accurate_gc.m"
        }
#line 134 "ml_accurate_gc.m"
  }
#line 134 "ml_accurate_gc.m"
}

#line 134 "ml_accurate_gc.m"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(
#line 134 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 134 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2)
#line 134 "ml_accurate_gc.m"
{
#line 134 "ml_accurate_gc.m"
  {
#line 134 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 134 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastX_7 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__1_1;
#line 134 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastY_8 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;

#line 134 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_7 == ml_backend__ml_accurate_gc__CastY_8);
#line 134 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 134 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 134 "ml_accurate_gc.m"
    else
#line 134 "ml_accurate_gc.m"
      if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 134 "ml_accurate_gc.m"
        {
#line 134 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
#line 134 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_6_6;

#line 134 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 134 "ml_accurate_gc.m"
          if (ml_backend__ml_accurate_gc__succeeded)
#line 134 "ml_accurate_gc.m"
            {
#line 134 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
#line 1264 "ml_backend.ml_accurate_gc.c"
              {
#line 1266 "ml_backend.ml_accurate_gc.c"
                return ml_backend__ml_accurate_gc__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_accurate_gc__V_5_5, ml_backend__ml_accurate_gc__V_6_6);
              }
#line 134 "ml_accurate_gc.m"
            }
#line 134 "ml_accurate_gc.m"
        }
#line 134 "ml_accurate_gc.m"
      else
#line 134 "ml_accurate_gc.m"
        {
#line 134 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
#line 134 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_4_4;

#line 134 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 134 "ml_accurate_gc.m"
          if (ml_backend__ml_accurate_gc__succeeded)
#line 134 "ml_accurate_gc.m"
            {
#line 134 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
#line 1290 "ml_backend.ml_accurate_gc.c"
              {
#line 1292 "ml_backend.ml_accurate_gc.c"
                return ml_backend__ml_accurate_gc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_accurate_gc__V_3_3, ml_backend__ml_accurate_gc__V_4_4);
              }
#line 134 "ml_accurate_gc.m"
            }
#line 134 "ml_accurate_gc.m"
        }
#line 134 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__succeeded;
#line 134 "ml_accurate_gc.m"
  }
#line 134 "ml_accurate_gc.m"
}

#line 423 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(
#line 423 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 423 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 423 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3)
#line 423 "ml_accurate_gc.m"
{
#line 423 "ml_accurate_gc.m"
  {
#line 423 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 423 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastX_15 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;
#line 423 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastY_16 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__3_3;

#line 423 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_15 == ml_backend__ml_accurate_gc__CastY_16);
#line 423 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 1330 "ml_backend.ml_accurate_gc.c"
      *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 0;
#line 423 "ml_accurate_gc.m"
    else
#line 423 "ml_accurate_gc.m"
      {
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 1)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 2)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 3)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 1)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 2)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 3)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_12_12;

#line 423 "ml_accurate_gc.m"
        {
#line 423 "ml_accurate_gc.m"
          ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_accurate_gc__V_12_12, ml_backend__ml_accurate_gc__V_4_4, ml_backend__ml_accurate_gc__V_8_8);
        }
#line 1360 "ml_backend.ml_accurate_gc.c"
        ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__V_12_12 == (MR_Integer) 0);
#line 423 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
#line 423 "ml_accurate_gc.m"
        if (ml_backend__ml_accurate_gc__succeeded)
#line 423 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__HeadVar__1_1 = ml_backend__ml_accurate_gc__V_12_12;
#line 423 "ml_accurate_gc.m"
        else
#line 423 "ml_accurate_gc.m"
          {
#line 423 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__V_13_13;

#line 423 "ml_accurate_gc.m"
            {
#line 423 "ml_accurate_gc.m"
              ml_backend__mlds____Compare____mlds_context_0_0(&ml_backend__ml_accurate_gc__V_13_13, ml_backend__ml_accurate_gc__V_5_5, ml_backend__ml_accurate_gc__V_9_9);
            }
#line 1380 "ml_backend.ml_accurate_gc.c"
            ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__V_13_13 == (MR_Integer) 0);
#line 423 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
#line 423 "ml_accurate_gc.m"
            if (ml_backend__ml_accurate_gc__succeeded)
#line 423 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__HeadVar__1_1 = ml_backend__ml_accurate_gc__V_13_13;
#line 423 "ml_accurate_gc.m"
            else
#line 423 "ml_accurate_gc.m"
              {
#line 423 "ml_accurate_gc.m"
                MR_Word ml_backend__ml_accurate_gc__V_14_14;

#line 423 "ml_accurate_gc.m"
                {
#line 423 "ml_accurate_gc.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[2], &ml_backend__ml_accurate_gc__V_14_14, ((MR_Box) (ml_backend__ml_accurate_gc__V_6_6)), ((MR_Box) (ml_backend__ml_accurate_gc__V_10_10)));
                }
#line 1400 "ml_backend.ml_accurate_gc.c"
                ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__V_14_14 == (MR_Integer) 0);
#line 423 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
#line 423 "ml_accurate_gc.m"
                if (ml_backend__ml_accurate_gc__succeeded)
#line 423 "ml_accurate_gc.m"
                  *ml_backend__ml_accurate_gc__HeadVar__1_1 = ml_backend__ml_accurate_gc__V_14_14;
#line 423 "ml_accurate_gc.m"
                else
#line 423 "ml_accurate_gc.m"
                  {
#line 423 "ml_accurate_gc.m"
                    mercury__counter____Compare____counter_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__V_7_7, ml_backend__ml_accurate_gc__V_11_11);
#line 423 "ml_accurate_gc.m"
                    return;
                  }
#line 423 "ml_accurate_gc.m"
              }
#line 423 "ml_accurate_gc.m"
          }
#line 423 "ml_accurate_gc.m"
      }
#line 423 "ml_accurate_gc.m"
  }
#line 423 "ml_accurate_gc.m"
}

#line 423 "ml_accurate_gc.m"
static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(
#line 423 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 423 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2)
#line 423 "ml_accurate_gc.m"
{
#line 423 "ml_accurate_gc.m"
  {
#line 423 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 423 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastX_11 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__1_1;
#line 423 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__CastY_12 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;

#line 423 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_11 == ml_backend__ml_accurate_gc__CastY_12);
#line 423 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 423 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 423 "ml_accurate_gc.m"
    else
#line 423 "ml_accurate_gc.m"
      {
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__TypeInfo_15_15;
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 1)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 2)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 3)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 1)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 2)));
#line 423 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 3)));

#line 1475 "ml_backend.ml_accurate_gc.c"
        {
#line 1477 "ml_backend.ml_accurate_gc.c"
          ml_backend__ml_accurate_gc__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_accurate_gc__V_3_3, ml_backend__ml_accurate_gc__V_7_7);
        }
#line 423 "ml_accurate_gc.m"
        if (ml_backend__ml_accurate_gc__succeeded)
#line 423 "ml_accurate_gc.m"
          {
#line 1484 "ml_backend.ml_accurate_gc.c"
            {
#line 1486 "ml_backend.ml_accurate_gc.c"
              ml_backend__ml_accurate_gc__succeeded = ml_backend__mlds____Unify____mlds_context_0_0(ml_backend__ml_accurate_gc__V_4_4, ml_backend__ml_accurate_gc__V_8_8);
            }
#line 423 "ml_accurate_gc.m"
            if (ml_backend__ml_accurate_gc__succeeded)
#line 423 "ml_accurate_gc.m"
              {
#line 1493 "ml_backend.ml_accurate_gc.c"
                ml_backend__ml_accurate_gc__TypeInfo_15_15 = (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[2];
#line 1495 "ml_backend.ml_accurate_gc.c"
                {
#line 1497 "ml_backend.ml_accurate_gc.c"
                  ml_backend__ml_accurate_gc__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_accurate_gc__TypeInfo_15_15, ((MR_Box) (ml_backend__ml_accurate_gc__V_5_5)), ((MR_Box) (ml_backend__ml_accurate_gc__V_9_9)));
                }
#line 423 "ml_accurate_gc.m"
                if (ml_backend__ml_accurate_gc__succeeded)
#line 1502 "ml_backend.ml_accurate_gc.c"
                  {
#line 1504 "ml_backend.ml_accurate_gc.c"
                    return ml_backend__ml_accurate_gc__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_accurate_gc__V_6_6, ml_backend__ml_accurate_gc__V_10_10);
                  }
#line 423 "ml_accurate_gc.m"
              }
#line 423 "ml_accurate_gc.m"
          }
#line 423 "ml_accurate_gc.m"
      }
#line 423 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__succeeded;
#line 423 "ml_accurate_gc.m"
  }
#line 423 "ml_accurate_gc.m"
}

#line 612 "ml_accurate_gc.m"
static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__maybe_tag_rval_3_f_0(
#line 612 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 612 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 612 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Rval_3)
#line 612 "ml_accurate_gc.m"
{
#line 614 "ml_accurate_gc.m"
  {
#line 614 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 614 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__HeadVar__4_4;

#line 614 "ml_accurate_gc.m"
    if ((ml_backend__ml_accurate_gc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__HeadVar__4_4 = ml_backend__ml_accurate_gc__Rval_3;
#line 614 "ml_accurate_gc.m"
    else
#line 615 "ml_accurate_gc.m"
      {
#line 615 "ml_accurate_gc.m"
        MR_Integer ml_backend__ml_accurate_gc__Tag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
#line 615 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_11_11;
#line 615 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_12_12;

#line 616 "ml_accurate_gc.m"
        {
#line 616 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 616 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_11_11, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__HeadVar__2_2));
#line 616 "ml_accurate_gc.m"
        }
#line 616 "ml_accurate_gc.m"
        {
#line 616 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_12_12, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Tag_7));
#line 616 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_12_12, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Rval_3));
#line 616 "ml_accurate_gc.m"
        }
#line 616 "ml_accurate_gc.m"
        {
#line 616 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 616 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 616 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__HeadVar__4_4, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_11_11));
#line 616 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__HeadVar__4_4, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_12_12));
#line 616 "ml_accurate_gc.m"
        }
#line 615 "ml_accurate_gc.m"
      }
#line 614 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__HeadVar__4_4;
#line 614 "ml_accurate_gc.m"
  }
#line 612 "ml_accurate_gc.m"
}

#line 599 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__init_field_n_7_p_0(
#line 599 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__PointerType_8,
#line 599 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__PointerRval_9,
#line 599 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_10,
#line 599 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ArgRval_11,
#line 599 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_12,
#line 599 "ml_accurate_gc.m"
  MR_Integer ml_backend__ml_accurate_gc__FieldNum_13,
#line 599 "ml_accurate_gc.m"
  MR_Integer * ml_backend__ml_accurate_gc__HeadVar__7_7)
#line 599 "ml_accurate_gc.m"
{
#line 603 "ml_accurate_gc.m"
  {
#line 603 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 603 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__FieldId_14;
#line 603 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Field_17;
#line 603 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__AssignStmt_18;
#line 603 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_20_20;
#line 603 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_21_21;
#line 603 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_23_23;

#line 603 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__HeadVar__7_7 = (ml_backend__ml_accurate_gc__FieldNum_13 + (MR_Integer) 1);
#line 604 "ml_accurate_gc.m"
    {
#line 604 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 604 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_21_21, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__FieldNum_13));
#line 604 "ml_accurate_gc.m"
    }
#line 604 "ml_accurate_gc.m"
    {
#line 604 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 604 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_20_20, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_21_21));
#line 604 "ml_accurate_gc.m"
    }
#line 604 "ml_accurate_gc.m"
    {
#line 604 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__FieldId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 604 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__FieldId_14, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_20_20));
#line 604 "ml_accurate_gc.m"
    }
#line 608 "ml_accurate_gc.m"
    {
#line 608 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__Field_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 608 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_accurate_gc_scalar_common_7[1])));
#line 608 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerRval_9));
#line 608 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__FieldId_14));
#line 608 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 608 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_8));
#line 608 "ml_accurate_gc.m"
    }
#line 609 "ml_accurate_gc.m"
    {
#line 609 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_23_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Field_17));
#line 609 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_23_23, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ArgRval_11));
#line 609 "ml_accurate_gc.m"
    }
#line 609 "ml_accurate_gc.m"
    {
#line 609 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__AssignStmt_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 609 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_18, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_23_23));
#line 609 "ml_accurate_gc.m"
    }
#line 610 "ml_accurate_gc.m"
    {
#line 610 "ml_accurate_gc.m"
      MR_Word base;
#line 610 "ml_accurate_gc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 610 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__Statement_12 = base;
#line 610 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__AssignStmt_18));
#line 610 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_10));
#line 610 "ml_accurate_gc.m"
    }
#line 603 "ml_accurate_gc.m"
  }
#line 599 "ml_accurate_gc.m"
}

#line 586 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1(
#line 586 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 586 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 586 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 586 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 586 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
#line 586 "ml_accurate_gc.m"
{
#line 586 "ml_accurate_gc.m"
  {
#line 586 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
#line 586 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv1_Statement_12;
#line 586 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__conv0_HeadVar__7_7;

#line 586 "ml_accurate_gc.m"
    {
#line 586 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__init_field_n_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Statement_12, ((MR_Integer) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_HeadVar__7_7);
    }
#line 586 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Statement_12));
#line 586 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__7_7));
#line 586 "ml_accurate_gc.m"
  }
#line 586 "ml_accurate_gc.m"
}

#line 540 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(
#line 540 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__AtomicStatement0_5,
#line 540 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
#line 540 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34,
#line 540 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_35)
#line 540 "ml_accurate_gc.m"
{
#line 595 "ml_accurate_gc.m"
  {
#line 595 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__AtomicStatement0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 595 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Lval_8;
#line 595 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MaybeTag_9;
#line 595 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PointerType_11;
#line 595 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ArgRvals_14;
#line 545 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___ExplicitSecTag_10;
#line 545 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___MaybeSizeInWordsRval_12;
#line 545 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___MaybeCtorName_13;
#line 545 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___ArgTypes_15;
#line 545 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___MayUseAtomic_16;
#line 545 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc___AllocId_17;

#line 545 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 545 "ml_accurate_gc.m"
      {
#line 545 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 1)));
#line 545 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__MaybeTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 2)));
#line 545 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___ExplicitSecTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 3)));
#line 545 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__PointerType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 4)));
#line 545 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___MaybeSizeInWordsRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 5)));
#line 545 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___MaybeCtorName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 6)));
#line 545 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__ArgRvals_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 7)));
#line 545 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 8)));
#line 545 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___MayUseAtomic_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 9)));
#line 545 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc___AllocId_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 10)));
#line 557 "ml_accurate_gc.m"
        {
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_85_85;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_91_91;
#line 557 "ml_accurate_gc.m"
          MR_Integer ml_backend__ml_accurate_gc__Id_18;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__NextId_19;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__VarName_20;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__VarType_21;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__NullPointers_22;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Initializer_23;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Context_25;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__VarDecl_26;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__VarLval_27;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__PtrRval_28;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__ArgInitStatements_29;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__TaggedPtrRval_31;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__AssignStmt_32;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__AssignStatement_33;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 3)));
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_38_38;
#line 557 "ml_accurate_gc.m"
          MR_Integer ml_backend__ml_accurate_gc__V_40_40;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_45_45;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_48_48;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_50_50;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_52_52;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_55_55;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_56_56;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_57_57;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_59_59;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_61_61;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_62_62;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_72_72;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_77_77;
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 0)));
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 1)));
#line 557 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 2)));
#line 566 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_67_67;
#line 566 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_68_68;
#line 566 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_69_69;
#line 569 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_70_70;
#line 569 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_71_71;
#line 569 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_73_73;
#line 572 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_78_78;
#line 572 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_80_80;
#line 572 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_79_79;
#line 586 "ml_accurate_gc.m"
          MR_Integer ml_backend__ml_accurate_gc___NumFields_30;
#line 586 "ml_accurate_gc.m"
          MR_Box ml_backend__ml_accurate_gc__conv2__NumFields_30;

#line 557 "ml_accurate_gc.m"
          {
#line 557 "ml_accurate_gc.m"
            mercury__counter__allocate_3_p_0(&ml_backend__ml_accurate_gc__Id_18, ml_backend__ml_accurate_gc__V_36_36, &ml_backend__ml_accurate_gc__NextId_19);
          }
#line 558 "ml_accurate_gc.m"
          {
#line 558 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 558 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_38_38, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Id_18));
#line 558 "ml_accurate_gc.m"
          }
#line 558 "ml_accurate_gc.m"
          {
#line 558 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__VarName_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 558 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__VarName_20, 0) = ((MR_Box) ((MR_String) "new_obj"));
#line 558 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__VarName_20, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_38_38));
#line 558 "ml_accurate_gc.m"
          }
#line 559 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__VarType_21 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[4]);
#line 1931 "ml_backend.ml_accurate_gc.c"
          ml_backend__ml_accurate_gc__TypeCtorInfo_85_85 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 560 "ml_accurate_gc.m"
          {
#line 560 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_40_40 = mercury__list__length_1_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_85_85, ml_backend__ml_accurate_gc__ArgRvals_14);
          }
#line 560 "ml_accurate_gc.m"
          {
#line 560 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__NullPointers_22 = mercury__list__duplicate_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_accurate_gc__V_40_40, ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_accurate_gc_scalar_common_7[0]))));
          }
#line 562 "ml_accurate_gc.m"
          {
#line 562 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__Initializer_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Initializer_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__NullPointers_22));
#line 562 "ml_accurate_gc.m"
          }
#line 566 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 0)));
#line 566 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 1)));
#line 566 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 2)));
#line 566 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 3)));
#line 567 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_accurate_gc__VarName_20);
#line 567 "ml_accurate_gc.m"
          {
#line 567 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__VarDecl_26 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_accurate_gc__V_45_45, ml_backend__ml_accurate_gc__VarType_21, ml_backend__ml_accurate_gc__Initializer_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_accurate_gc__Context_25);
          }
#line 569 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 0)));
#line 569 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 1)));
#line 569 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 2)));
#line 569 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34, (MR_Integer) 3)));
#line 569 "ml_accurate_gc.m"
          {
#line 569 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 569 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_70_70));
#line 569 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_71_71));
#line 569 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_72_72));
#line 569 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__NextId_19));
#line 569 "ml_accurate_gc.m"
          }
#line 572 "ml_accurate_gc.m"
          {
#line 572 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_50_50, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__VarDecl_26));
#line 572 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 572 "ml_accurate_gc.m"
          }
#line 572 "ml_accurate_gc.m"
          {
#line 572 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_accurate_gc__V_72_72, ml_backend__ml_accurate_gc__V_50_50);
          }
#line 572 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, (MR_Integer) 0)));
#line 572 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, (MR_Integer) 1)));
#line 572 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, (MR_Integer) 2)));
#line 572 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, (MR_Integer) 3)));
#line 572 "ml_accurate_gc.m"
          {
#line 572 "ml_accurate_gc.m"
            MR_Word base;
#line 572 "ml_accurate_gc.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 572 "ml_accurate_gc.m"
            *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_35 = base;
#line 572 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_77_77));
#line 572 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_78_78));
#line 572 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_48_48));
#line 572 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_80_80));
#line 572 "ml_accurate_gc.m"
          }
#line 582 "ml_accurate_gc.m"
          {
#line 582 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 582 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_52_52, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_77_77));
#line 582 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 582 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_52_52, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__VarName_20));
#line 582 "ml_accurate_gc.m"
          }
#line 582 "ml_accurate_gc.m"
          {
#line 582 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__VarLval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarLval_27, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_52_52));
#line 582 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarLval_27, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarType_21));
#line 582 "ml_accurate_gc.m"
          }
#line 585 "ml_accurate_gc.m"
          {
#line 585 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_55_55, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_11));
#line 585 "ml_accurate_gc.m"
          }
#line 585 "ml_accurate_gc.m"
          {
#line 585 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 585 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_56_56, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarLval_27));
#line 585 "ml_accurate_gc.m"
          }
#line 585 "ml_accurate_gc.m"
          {
#line 585 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__PtrRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 585 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 585 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_28, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_55_55));
#line 585 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_28, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_56_56));
#line 585 "ml_accurate_gc.m"
          }
#line 586 "ml_accurate_gc.m"
          {
#line 586 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_8[0]));
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1));
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_11));
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__PtrRval_28));
#line 586 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_57_57, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_25));
#line 586 "ml_accurate_gc.m"
          }
#line 2099 "ml_backend.ml_accurate_gc.c"
          ml_backend__ml_accurate_gc__TypeCtorInfo_91_91 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 586 "ml_accurate_gc.m"
          {
#line 586 "ml_accurate_gc.m"
            mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_85_85, ml_backend__ml_accurate_gc__TypeCtorInfo_91_91, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_accurate_gc__V_57_57, ml_backend__ml_accurate_gc__ArgRvals_14, &ml_backend__ml_accurate_gc__ArgInitStatements_29, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_accurate_gc__conv2__NumFields_30);
          }
#line 586 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc___NumFields_30 = ((MR_Integer) ml_backend__ml_accurate_gc__conv2__NumFields_30);
#line 591 "ml_accurate_gc.m"
          {
#line 591 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__TaggedPtrRval_31 = ml_backend__ml_accurate_gc__maybe_tag_rval_3_f_0(ml_backend__ml_accurate_gc__MaybeTag_9, ml_backend__ml_accurate_gc__PointerType_11, ml_backend__ml_accurate_gc__PtrRval_28);
          }
#line 592 "ml_accurate_gc.m"
          {
#line 592 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_59_59, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Lval_8));
#line 592 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_59_59, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__TaggedPtrRval_31));
#line 592 "ml_accurate_gc.m"
          }
#line 592 "ml_accurate_gc.m"
          {
#line 592 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__AssignStmt_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 592 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_32, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_59_59));
#line 592 "ml_accurate_gc.m"
          }
#line 593 "ml_accurate_gc.m"
          {
#line 593 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__AssignStatement_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__AssignStatement_33, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__AssignStmt_32));
#line 593 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__AssignStatement_33, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_25));
#line 593 "ml_accurate_gc.m"
          }
#line 594 "ml_accurate_gc.m"
          {
#line 594 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_62_62, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__AssignStatement_33));
#line 594 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "ml_accurate_gc.m"
          }
#line 594 "ml_accurate_gc.m"
          {
#line 594 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__V_61_61 = mercury__list__f_43_43_2_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_91_91, ml_backend__ml_accurate_gc__ArgInitStatements_29, ml_backend__ml_accurate_gc__V_62_62);
          }
#line 594 "ml_accurate_gc.m"
          {
#line 594 "ml_accurate_gc.m"
            MR_Word base;
#line 594 "ml_accurate_gc.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "ml_accurate_gc.m"
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 594 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_61_61));
#line 594 "ml_accurate_gc.m"
          }
#line 557 "ml_accurate_gc.m"
        }
#line 545 "ml_accurate_gc.m"
      }
#line 545 "ml_accurate_gc.m"
    else
#line 596 "ml_accurate_gc.m"
      {
#line 596 "ml_accurate_gc.m"
        {
#line 596 "ml_accurate_gc.m"
          MR_Word base;
#line 596 "ml_accurate_gc.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 596 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 596 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__AtomicStatement0_5));
#line 596 "ml_accurate_gc.m"
        }
#line 596 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_35 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_34;
#line 596 "ml_accurate_gc.m"
      }
#line 595 "ml_accurate_gc.m"
  }
#line 540 "ml_accurate_gc.m"
}

#line 529 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(
#line 529 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 529 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 529 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
#line 529 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4)
#line 529 "ml_accurate_gc.m"
{
#line 533 "ml_accurate_gc.m"
  {
#line 533 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;

#line 533 "ml_accurate_gc.m"
    if ((ml_backend__ml_accurate_gc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 535 "ml_accurate_gc.m"
      {
#line 535 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 535 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3;
#line 535 "ml_accurate_gc.m"
      }
#line 533 "ml_accurate_gc.m"
    else
#line 533 "ml_accurate_gc.m"
      if ((ml_backend__ml_accurate_gc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "ml_accurate_gc.m"
        {
#line 533 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3;
#line 533 "ml_accurate_gc.m"
        }
#line 533 "ml_accurate_gc.m"
      else
#line 537 "ml_accurate_gc.m"
        {
#line 537 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Statement0_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_accurate_gc__HeadVar__1_1), (MR_Integer) 1);
#line 537 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Statement_12;
#line 537 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Stmt0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_11, (MR_Integer) 0)));
#line 537 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_11, (MR_Integer) 1)));
#line 537 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Stmt_24;
#line 537 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25;
#line 458 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 0)));
#line 458 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 2)));
#line 458 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 3)));
#line 458 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 1)));

#line 458 "ml_accurate_gc.m"
          {
#line 458 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 458 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_27_27));
#line 458 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_23));
#line 458 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_29_29));
#line 458 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_30_30));
#line 458 "ml_accurate_gc.m"
          }
#line 459 "ml_accurate_gc.m"
          {
#line 459 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_22, &ml_backend__ml_accurate_gc__Stmt_24, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
          }
#line 460 "ml_accurate_gc.m"
          {
#line 460 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__Statement_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_12, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_24));
#line 460 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_12, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_23));
#line 460 "ml_accurate_gc.m"
          }
#line 537 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_accurate_gc__Statement_12);
#line 537 "ml_accurate_gc.m"
        }
#line 533 "ml_accurate_gc.m"
  }
#line 529 "ml_accurate_gc.m"
}

#line 521 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(
#line 521 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
#line 521 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
#line 521 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
#line 521 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4)
#line 521 "ml_accurate_gc.m"
{
#line 525 "ml_accurate_gc.m"
  {
#line 525 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;

#line 525 "ml_accurate_gc.m"
    if ((ml_backend__ml_accurate_gc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "ml_accurate_gc.m"
      {
#line 525 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 525 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3;
#line 525 "ml_accurate_gc.m"
      }
#line 525 "ml_accurate_gc.m"
    else
#line 526 "ml_accurate_gc.m"
      {
#line 526 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Statement0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
#line 526 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Statement_9;
#line 526 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Stmt0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_8, (MR_Integer) 0)));
#line 526 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_8, (MR_Integer) 1)));
#line 526 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Stmt_21;
#line 526 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22;
#line 458 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 0)));
#line 458 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 2)));
#line 458 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 3)));
#line 458 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 1)));

#line 458 "ml_accurate_gc.m"
        {
#line 458 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 458 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_24_24));
#line 458 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_20));
#line 458 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_26_26));
#line 458 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_27_27));
#line 458 "ml_accurate_gc.m"
        }
#line 459 "ml_accurate_gc.m"
        {
#line 459 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_19, &ml_backend__ml_accurate_gc__Stmt_21, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
        }
#line 460 "ml_accurate_gc.m"
        {
#line 460 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__Statement_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_9, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_21));
#line 460 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_9, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_20));
#line 460 "ml_accurate_gc.m"
        }
#line 526 "ml_accurate_gc.m"
        {
#line 526 "ml_accurate_gc.m"
          MR_Word base;
#line 526 "ml_accurate_gc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__HeadVar__2_2 = base;
#line 526 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_9));
#line 526 "ml_accurate_gc.m"
        }
#line 526 "ml_accurate_gc.m"
      }
#line 525 "ml_accurate_gc.m"
  }
#line 521 "ml_accurate_gc.m"
}

#line 513 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(
#line 513 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Case0_5,
#line 513 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Case_6,
#line 513 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12,
#line 513 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13)
#line 513 "ml_accurate_gc.m"
{
#line 516 "ml_accurate_gc.m"
  {
#line 516 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 516 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__FirstCond_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Case0_5, (MR_Integer) 0)));
#line 516 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__LaterConds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Case0_5, (MR_Integer) 1)));
#line 516 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Statement0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Case0_5, (MR_Integer) 2)));
#line 516 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Statement_11;
#line 516 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_10, (MR_Integer) 0)));
#line 516 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_10, (MR_Integer) 1)));
#line 516 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt_22;
#line 516 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23;
#line 458 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 0)));
#line 458 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 2)));
#line 458 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 3)));
#line 458 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 1)));

#line 458 "ml_accurate_gc.m"
    {
#line 458 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 458 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_25_25));
#line 458 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_21));
#line 458 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_27_27));
#line 458 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_28_28));
#line 458 "ml_accurate_gc.m"
    }
#line 459 "ml_accurate_gc.m"
    {
#line 459 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_20, &ml_backend__ml_accurate_gc__Stmt_22, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);
    }
#line 460 "ml_accurate_gc.m"
    {
#line 460 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__Statement_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_11, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_22));
#line 460 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_11, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_21));
#line 460 "ml_accurate_gc.m"
    }
#line 519 "ml_accurate_gc.m"
    {
#line 519 "ml_accurate_gc.m"
      MR_Word base;
#line 519 "ml_accurate_gc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 519 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__Case_6 = base;
#line 519 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__FirstCond_8));
#line 519 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__LaterConds_9));
#line 519 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_11));
#line 519 "ml_accurate_gc.m"
    }
#line 516 "ml_accurate_gc.m"
  }
#line 513 "ml_accurate_gc.m"
}

#line 482 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2(
#line 482 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 482 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 482 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 482 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 482 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
#line 482 "ml_accurate_gc.m"
{
#line 482 "ml_accurate_gc.m"
  {
#line 482 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
#line 482 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv4_Case_6;
#line 482 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13;

#line 482 "ml_accurate_gc.m"
    {
#line 482 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv4_Case_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13);
    }
#line 482 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv4_Case_6));
#line 482 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13));
#line 482 "ml_accurate_gc.m"
  }
#line 482 "ml_accurate_gc.m"
}

#line 468 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1(
#line 468 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 468 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
#line 468 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
#line 468 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
#line 468 "ml_accurate_gc.m"
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
#line 468 "ml_accurate_gc.m"
{
#line 468 "ml_accurate_gc.m"
  {
#line 468 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
#line 468 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv1_Statement_6;
#line 468 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12;

#line 468 "ml_accurate_gc.m"
    {
#line 468 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Statement_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12);
    }
#line 468 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Statement_6));
#line 468 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12));
#line 468 "ml_accurate_gc.m"
  }
#line 468 "ml_accurate_gc.m"
}

#line 462 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(
#line 462 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Stmt0_5,
#line 462 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
#line 462 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42,
#line 462 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43)
#line 462 "ml_accurate_gc.m"
{
#line 467 "ml_accurate_gc.m"
  {
#line 467 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;

#line 467 "ml_accurate_gc.m"
    if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) == (MR_mktag((MR_Integer) 0))))
#line 467 "ml_accurate_gc.m"
      {
#line 467 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_62_62 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 467 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Defns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
#line 467 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Statements0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
#line 467 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__Statements_10;
#line 468 "ml_accurate_gc.m"
        MR_Box ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_43;

#line 468 "ml_accurate_gc.m"
        {
#line 468 "ml_accurate_gc.m"
          mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_62_62, ml_backend__ml_accurate_gc__TypeCtorInfo_62_62, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_3[1], ml_backend__ml_accurate_gc__Statements0_9, &ml_backend__ml_accurate_gc__Statements_10, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42)), &ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_43);
        }
#line 468 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ((MR_Word) ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_43);
#line 470 "ml_accurate_gc.m"
        {
#line 470 "ml_accurate_gc.m"
          MR_Word base;
#line 470 "ml_accurate_gc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 470 "ml_accurate_gc.m"
          *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 470 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Defns_8));
#line 470 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Statements_10));
#line 470 "ml_accurate_gc.m"
        }
#line 467 "ml_accurate_gc.m"
      }
#line 467 "ml_accurate_gc.m"
    else
#line 467 "ml_accurate_gc.m"
      if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) == (MR_mktag((MR_Integer) 2))))
#line 476 "ml_accurate_gc.m"
        {
#line 476 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
#line 476 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Then0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
#line 476 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__MaybeElse0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
#line 476 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Then_18;
#line 476 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__MaybeElse_19;
#line 476 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_50_50;
#line 476 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Stmt0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Then0_16, (MR_Integer) 0)));
#line 476 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Context_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Then0_16, (MR_Integer) 1)));
#line 476 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Stmt_77;
#line 476 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78;
#line 458 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, (MR_Integer) 0)));
#line 458 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, (MR_Integer) 2)));
#line 458 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, (MR_Integer) 3)));
#line 458 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, (MR_Integer) 1)));

#line 458 "ml_accurate_gc.m"
          {
#line 458 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 458 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_80_80));
#line 458 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_76));
#line 458 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_82_82));
#line 458 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_83_83));
#line 458 "ml_accurate_gc.m"
          }
#line 459 "ml_accurate_gc.m"
          {
#line 459 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_75, &ml_backend__ml_accurate_gc__Stmt_77, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_78, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_50_50);
          }
#line 460 "ml_accurate_gc.m"
          {
#line 460 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__Then_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Then_18, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_77));
#line 460 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Then_18, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_76));
#line 460 "ml_accurate_gc.m"
          }
#line 478 "ml_accurate_gc.m"
          {
#line 478 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(ml_backend__ml_accurate_gc__MaybeElse0_17, &ml_backend__ml_accurate_gc__MaybeElse_19, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_50_50, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);
          }
#line 479 "ml_accurate_gc.m"
          {
#line 479 "ml_accurate_gc.m"
            MR_Word base;
#line 479 "ml_accurate_gc.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 479 "ml_accurate_gc.m"
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 479 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Cond_15));
#line 479 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Then_18));
#line 479 "ml_accurate_gc.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__MaybeElse_19));
#line 479 "ml_accurate_gc.m"
          }
#line 476 "ml_accurate_gc.m"
        }
#line 467 "ml_accurate_gc.m"
      else
#line 467 "ml_accurate_gc.m"
        if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) == (MR_mktag((MR_Integer) 1))))
#line 472 "ml_accurate_gc.m"
          {
#line 472 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
#line 472 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
#line 472 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__Statement0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
#line 472 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__Statement_14;

#line 473 "ml_accurate_gc.m"
            {
#line 473 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_13, &ml_backend__ml_accurate_gc__Statement_14, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);
            }
#line 474 "ml_accurate_gc.m"
            {
#line 474 "ml_accurate_gc.m"
              MR_Word base;
#line 474 "ml_accurate_gc.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 474 "ml_accurate_gc.m"
              *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 474 "ml_accurate_gc.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Kind_11));
#line 474 "ml_accurate_gc.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Rval_12));
#line 474 "ml_accurate_gc.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_14));
#line 474 "ml_accurate_gc.m"
            }
#line 472 "ml_accurate_gc.m"
          }
#line 467 "ml_accurate_gc.m"
        else
#line 467 "ml_accurate_gc.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 509 "ml_accurate_gc.m"
            {
#line 509 "ml_accurate_gc.m"
              MR_Word ml_backend__ml_accurate_gc__AtomicStmt0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));

#line 510 "ml_accurate_gc.m"
              {
#line 510 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(ml_backend__ml_accurate_gc__AtomicStmt0_41, ml_backend__ml_accurate_gc__Stmt_6, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);
#line 510 "ml_accurate_gc.m"
                return;
              }
#line 509 "ml_accurate_gc.m"
            }
#line 467 "ml_accurate_gc.m"
          else
#line 467 "ml_accurate_gc.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 495 "ml_accurate_gc.m"
              {
#line 496 "ml_accurate_gc.m"
                *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 496 "ml_accurate_gc.m"
                *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 495 "ml_accurate_gc.m"
              }
#line 467 "ml_accurate_gc.m"
            else
#line 467 "ml_accurate_gc.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 492 "ml_accurate_gc.m"
                {
#line 493 "ml_accurate_gc.m"
                  *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 493 "ml_accurate_gc.m"
                  *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 492 "ml_accurate_gc.m"
                }
#line 467 "ml_accurate_gc.m"
              else
#line 467 "ml_accurate_gc.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 501 "ml_accurate_gc.m"
                  {
#line 502 "ml_accurate_gc.m"
                    *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 502 "ml_accurate_gc.m"
                    *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 501 "ml_accurate_gc.m"
                  }
#line 467 "ml_accurate_gc.m"
                else
#line 467 "ml_accurate_gc.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 489 "ml_accurate_gc.m"
                    {
#line 490 "ml_accurate_gc.m"
                      *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 490 "ml_accurate_gc.m"
                      *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 489 "ml_accurate_gc.m"
                    }
#line 467 "ml_accurate_gc.m"
                  else
#line 467 "ml_accurate_gc.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 486 "ml_accurate_gc.m"
                      {
#line 487 "ml_accurate_gc.m"
                        *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 487 "ml_accurate_gc.m"
                        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 486 "ml_accurate_gc.m"
                      }
#line 467 "ml_accurate_gc.m"
                    else
#line 467 "ml_accurate_gc.m"
                      if (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 498 "ml_accurate_gc.m"
                        {
#line 499 "ml_accurate_gc.m"
                          *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
#line 499 "ml_accurate_gc.m"
                          *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42;
#line 498 "ml_accurate_gc.m"
                        }
#line 467 "ml_accurate_gc.m"
                      else
#line 467 "ml_accurate_gc.m"
                        if (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 481 "ml_accurate_gc.m"
                          {
#line 481 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_68_68 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
#line 481 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
#line 481 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Val_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
#line 481 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Range_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 3)));
#line 481 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 4)));
#line 481 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Default0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 5)));
#line 481 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Cases_25;
#line 481 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Default_26;
#line 481 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_48_48;
#line 482 "ml_accurate_gc.m"
                            MR_Box ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_48_48;

#line 482 "ml_accurate_gc.m"
                            {
#line 482 "ml_accurate_gc.m"
                              mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_68_68, ml_backend__ml_accurate_gc__TypeCtorInfo_68_68, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_3[2], ml_backend__ml_accurate_gc__Cases0_23, &ml_backend__ml_accurate_gc__Cases_25, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42)), &ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_48_48);
                            }
#line 482 "ml_accurate_gc.m"
                            ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_48_48 = ((MR_Word) ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_48_48);
#line 483 "ml_accurate_gc.m"
                            {
#line 483 "ml_accurate_gc.m"
                              ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(ml_backend__ml_accurate_gc__Default0_24, &ml_backend__ml_accurate_gc__Default_26, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_48_48, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);
                            }
#line 484 "ml_accurate_gc.m"
                            {
#line 484 "ml_accurate_gc.m"
                              MR_Word base;
#line 484 "ml_accurate_gc.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 484 "ml_accurate_gc.m"
                              *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 484 "ml_accurate_gc.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 484 "ml_accurate_gc.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Type_20));
#line 484 "ml_accurate_gc.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Val_21));
#line 484 "ml_accurate_gc.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Range_22));
#line 484 "ml_accurate_gc.m"
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__Cases_25));
#line 484 "ml_accurate_gc.m"
                              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Default_26));
#line 484 "ml_accurate_gc.m"
                            }
#line 481 "ml_accurate_gc.m"
                          }
#line 467 "ml_accurate_gc.m"
                        else
#line 504 "ml_accurate_gc.m"
                          {
#line 504 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Ref_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
#line 504 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Handler0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 3)));
#line 504 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Handler_40;
#line 504 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_45_45;
#line 504 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Statement0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
#line 504 "ml_accurate_gc.m"
                            MR_Word ml_backend__ml_accurate_gc__Statement_57;

#line 505 "ml_accurate_gc.m"
                            {
#line 505 "ml_accurate_gc.m"
                              ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_56, &ml_backend__ml_accurate_gc__Statement_57, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_42, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_45_45);
                            }
#line 506 "ml_accurate_gc.m"
                            {
#line 506 "ml_accurate_gc.m"
                              ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Handler0_39, &ml_backend__ml_accurate_gc__Handler_40, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_45_45, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_43);
                            }
#line 507 "ml_accurate_gc.m"
                            {
#line 507 "ml_accurate_gc.m"
                              MR_Word base;
#line 507 "ml_accurate_gc.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 507 "ml_accurate_gc.m"
                              *ml_backend__ml_accurate_gc__Stmt_6 = base;
#line 507 "ml_accurate_gc.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 507 "ml_accurate_gc.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Ref_38));
#line 507 "ml_accurate_gc.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_57));
#line 507 "ml_accurate_gc.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Handler_40));
#line 507 "ml_accurate_gc.m"
                            }
#line 504 "ml_accurate_gc.m"
                          }
#line 467 "ml_accurate_gc.m"
  }
#line 462 "ml_accurate_gc.m"
}

#line 453 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(
#line 453 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Statement0_5,
#line 453 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_6,
#line 453 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11,
#line 453 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12)
#line 453 "ml_accurate_gc.m"
{
#line 456 "ml_accurate_gc.m"
  {
#line 456 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 456 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_5, (MR_Integer) 0)));
#line 456 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_5, (MR_Integer) 1)));
#line 456 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt_10;
#line 456 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13;
#line 458 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 458 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 458 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 458 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));

#line 458 "ml_accurate_gc.m"
    {
#line 458 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 458 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_15_15));
#line 458 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_9));
#line 458 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_17_17));
#line 458 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_18_18));
#line 458 "ml_accurate_gc.m"
    }
#line 459 "ml_accurate_gc.m"
    {
#line 459 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_8, &ml_backend__ml_accurate_gc__Stmt_10, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12);
    }
#line 460 "ml_accurate_gc.m"
    {
#line 460 "ml_accurate_gc.m"
      MR_Word base;
#line 460 "ml_accurate_gc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__Statement_6 = base;
#line 460 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_10));
#line 460 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_9));
#line 460 "ml_accurate_gc.m"
    }
#line 456 "ml_accurate_gc.m"
  }
#line 453 "ml_accurate_gc.m"
}

#line 443 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_4_p_0(
#line 443 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Statement0_5,
#line 443 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ModuleName_6,
#line 443 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Statement_7,
#line 443 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__Defns_8)
#line 443 "ml_accurate_gc.m"
{
#line 446 "ml_accurate_gc.m"
  {
#line 446 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 446 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_5, (MR_Integer) 0)));
#line 446 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_5, (MR_Integer) 1)));
#line 446 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Info0_11;
#line 446 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Stmt_12;
#line 446 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Info_13;
#line 446 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_15_15;
#line 451 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_17_17;
#line 451 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_18_18;
#line 451 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_19_19;

#line 448 "ml_accurate_gc.m"
    {
#line 448 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_15_15 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 448 "ml_accurate_gc.m"
    {
#line 448 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__Info0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 448 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_11, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__ModuleName_6));
#line 448 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_11, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_10));
#line 448 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_11, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__V_15_15));
#line 448 "ml_accurate_gc.m"
    }
#line 449 "ml_accurate_gc.m"
    {
#line 449 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_9, &ml_backend__ml_accurate_gc__Stmt_12, ml_backend__ml_accurate_gc__Info0_11, &ml_backend__ml_accurate_gc__Info_13);
    }
#line 450 "ml_accurate_gc.m"
    {
#line 450 "ml_accurate_gc.m"
      MR_Word base;
#line 450 "ml_accurate_gc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 450 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__Statement_7 = base;
#line 450 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_12));
#line 450 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_10));
#line 450 "ml_accurate_gc.m"
    }
#line 451 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_13, (MR_Integer) 0)));
#line 451 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_13, (MR_Integer) 1)));
#line 451 "ml_accurate_gc.m"
    *ml_backend__ml_accurate_gc__Defns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_13, (MR_Integer) 2)));
#line 451 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_13, (MR_Integer) 3)));
#line 446 "ml_accurate_gc.m"
  }
#line 443 "ml_accurate_gc.m"
}

#line 359 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(
#line 359 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Info_7,
#line 359 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 359 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Type_9,
#line 359 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_10,
#line 359 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 359 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__TraceStatement_12)
#line 359 "ml_accurate_gc.m"
{
#line 362 "ml_accurate_gc.m"
  {
#line 362 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_13;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_Type_14;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__VarLval_15;
#line 362 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__ProcId_19;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredModule_20;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_Module_21;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ProcLabel_22;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__QualProcLabel_23;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__CPointerType_24;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ArgTypes_25;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Signature_26;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__FuncAddr_27;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__CastVarAddr_28;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__TraceStmt_29;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_35_35;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_38_38;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_39_39;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_41_41;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_44_44;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_45_45;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_46_46;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_47_47;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_49_49;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_50_50;
#line 362 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_54_54;

#line 364 "ml_accurate_gc.m"
    {
#line 364 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_accurate_gc__Info_7, &ml_backend__ml_accurate_gc__ModuleInfo_13);
    }
#line 365 "ml_accurate_gc.m"
    {
#line 365 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__MLDS_Type_14 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_accurate_gc__ModuleInfo_13, ml_backend__ml_accurate_gc__Type_9);
    }
#line 366 "ml_accurate_gc.m"
    {
#line 366 "ml_accurate_gc.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_accurate_gc__Info_7, ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__MLDS_Type_14, &ml_backend__ml_accurate_gc__VarLval_15);
    }
#line 373 "ml_accurate_gc.m"
    {
#line 373 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__ProcId_19 = hlds__hlds_pred__initial_proc_id_0_f_0();
    }
#line 374 "ml_accurate_gc.m"
    {
#line 374 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__PredModule_20 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 375 "ml_accurate_gc.m"
    {
#line 375 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__MLDS_Module_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_accurate_gc__PredModule_20);
    }
#line 376 "ml_accurate_gc.m"
    {
#line 376 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__ProcLabel_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 376 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__ProcLabel_22, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_5[0]));
#line 376 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__ProcLabel_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ProcId_19));
#line 376 "ml_accurate_gc.m"
    }
#line 377 "ml_accurate_gc.m"
    {
#line 377 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__QualProcLabel_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 377 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_Module_21));
#line 377 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 1) = ((MR_Box) ((MR_Integer) 0));
#line 377 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__ProcLabel_22));
#line 377 "ml_accurate_gc.m"
    }
#line 378 "ml_accurate_gc.m"
    {
#line 378 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_35_35 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 379 "ml_accurate_gc.m"
    {
#line 379 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_39_39 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 378 "ml_accurate_gc.m"
    {
#line 378 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_38_38 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_accurate_gc__V_39_39);
    }
#line 378 "ml_accurate_gc.m"
    {
#line 378 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__CPointerType_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 378 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__V_35_35));
#line 378 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[3])));
#line 378 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_38_38));
#line 378 "ml_accurate_gc.m"
    }
#line 380 "ml_accurate_gc.m"
    {
#line 380 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_41_41, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CPointerType_24));
#line 380 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "ml_accurate_gc.m"
    }
#line 380 "ml_accurate_gc.m"
    {
#line 380 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__ArgTypes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ArgTypes_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 380 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ArgTypes_25, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_41_41));
#line 380 "ml_accurate_gc.m"
    }
#line 381 "ml_accurate_gc.m"
    {
#line 381 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__Signature_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Signature_26, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__ArgTypes_25));
#line 381 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Signature_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "ml_accurate_gc.m"
    }
#line 382 "ml_accurate_gc.m"
    {
#line 382 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 382 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_45_45, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__QualProcLabel_23));
#line 382 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__V_45_45, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Signature_26));
#line 382 "ml_accurate_gc.m"
    }
#line 382 "ml_accurate_gc.m"
    {
#line 382 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 382 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_44_44, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_45_45));
#line 382 "ml_accurate_gc.m"
    }
#line 382 "ml_accurate_gc.m"
    {
#line 382 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__FuncAddr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__FuncAddr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 382 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__FuncAddr_27, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_44_44));
#line 382 "ml_accurate_gc.m"
    }
#line 387 "ml_accurate_gc.m"
    {
#line 387 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__V_46_46, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CPointerType_24));
#line 387 "ml_accurate_gc.m"
    }
#line 387 "ml_accurate_gc.m"
    {
#line 387 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 387 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__V_47_47, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarLval_15));
#line 387 "ml_accurate_gc.m"
    }
#line 387 "ml_accurate_gc.m"
    {
#line 387 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__CastVarAddr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 387 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_46_46));
#line 387 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__V_47_47));
#line 387 "ml_accurate_gc.m"
    }
#line 389 "ml_accurate_gc.m"
    {
#line 389 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_50_50, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CastVarAddr_28));
#line 389 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "ml_accurate_gc.m"
    }
#line 388 "ml_accurate_gc.m"
    {
#line 388 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_49_49, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TypeInfoRval_10));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_49_49, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_50_50));
#line 388 "ml_accurate_gc.m"
    }
#line 388 "ml_accurate_gc.m"
    {
#line 388 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__TraceStmt_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Signature_26));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__FuncAddr_27));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__V_49_49));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 6) = ((MR_Box) ((MR_Integer) 2));
#line 388 "ml_accurate_gc.m"
    }
#line 390 "ml_accurate_gc.m"
    {
#line 390 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_54_54 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_accurate_gc__Context_11);
    }
#line 390 "ml_accurate_gc.m"
    {
#line 390 "ml_accurate_gc.m"
      MR_Word base;
#line 390 "ml_accurate_gc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__TraceStatement_12 = base;
#line 390 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TraceStmt_29));
#line 390 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_54_54));
#line 390 "ml_accurate_gc.m"
    }
#line 362 "ml_accurate_gc.m"
  }
#line 359 "ml_accurate_gc.m"
}

#line 339 "ml_accurate_gc.m"
static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2(
#line 339 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 339 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1)
#line 339 "ml_accurate_gc.m"
{
#line 339 "ml_accurate_gc.m"
  {
#line 339 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2;
#line 339 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
#line 339 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv1_HeadVar__6_53;

#line 339 "ml_accurate_gc.m"
    {
#line 339 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__conv1_HeadVar__6_53 = ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1));
    }
#line 339 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_HeadVar__6_53));
#line 339 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__wrapper_arg_2;
#line 339 "ml_accurate_gc.m"
  }
#line 339 "ml_accurate_gc.m"
}

#line 301 "ml_accurate_gc.m"
static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1(
#line 301 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
#line 301 "ml_accurate_gc.m"
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1)
#line 301 "ml_accurate_gc.m"
{
#line 301 "ml_accurate_gc.m"
  {
#line 301 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2;
#line 301 "ml_accurate_gc.m"
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
#line 301 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__conv0_HeadVar__2_45;

#line 301 "ml_accurate_gc.m"
    {
#line 301 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__conv0_HeadVar__2_45 = ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__301__1_1_f_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1));
    }
#line 301 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__2_45));
#line 301 "ml_accurate_gc.m"
    return ml_backend__ml_accurate_gc__wrapper_arg_2;
#line 301 "ml_accurate_gc.m"
  }
#line 301 "ml_accurate_gc.m"
}

#line 292 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(
#line 292 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 292 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
#line 292 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__ActualType_10,
#line 292 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 292 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__GC_TraceCode_12,
#line 292 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40,
#line 292 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41)
#line 292 "ml_accurate_gc.m"
{
#line 297 "ml_accurate_gc.m"
  {
#line 297 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_67_67;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_69_69;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__TypeInfoVar_14;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__NonLocalsList_16;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__NonLocals_19;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__InstMapDelta_20;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GoalInfo_21;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__Conj_22;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement0_23;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleName_25;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement_26;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__TypeInfoLval_28;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_TraceStatement_29;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__VarSet_30;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__VarTypes_31;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_Context_32;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GenLocalVarDecl_33;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__NonLocalVarList_38;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_39;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_42_42;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_50_50;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_51_51;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_57_57;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_58_58;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__V_59_59;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo0_77;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredId_78;
#line 297 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__ProcId_79;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredInfo0_80;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ProcInfo0_81;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PolyInfo0_82;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PolyInfo_83;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredInfo_84;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ProcInfo_85;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo1_86;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_87;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__VarSet_88;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__VarTypes_89;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_27_90;
#line 297 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_28_91;

#line 399 "ml_accurate_gc.m"
    {
#line 399 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40, &ml_backend__ml_accurate_gc__ModuleInfo0_77);
    }
#line 400 "ml_accurate_gc.m"
    {
#line 400 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40, &ml_backend__ml_accurate_gc__PredId_78);
    }
#line 401 "ml_accurate_gc.m"
    {
#line 401 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40, &ml_backend__ml_accurate_gc__ProcId_79);
    }
#line 402 "ml_accurate_gc.m"
    {
#line 402 "ml_accurate_gc.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_accurate_gc__ModuleInfo0_77, ml_backend__ml_accurate_gc__PredId_78, ml_backend__ml_accurate_gc__ProcId_79, &ml_backend__ml_accurate_gc__PredInfo0_80, &ml_backend__ml_accurate_gc__ProcInfo0_81);
    }
#line 406 "ml_accurate_gc.m"
    {
#line 406 "ml_accurate_gc.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(ml_backend__ml_accurate_gc__ModuleInfo0_77, ml_backend__ml_accurate_gc__PredInfo0_80, ml_backend__ml_accurate_gc__ProcInfo0_81, &ml_backend__ml_accurate_gc__PolyInfo0_82);
    }
#line 407 "ml_accurate_gc.m"
    {
#line 407 "ml_accurate_gc.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(ml_backend__ml_accurate_gc__ActualType_10, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__TypeInfoVar_14, &ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15, ml_backend__ml_accurate_gc__PolyInfo0_82, &ml_backend__ml_accurate_gc__PolyInfo_83);
    }
#line 409 "ml_accurate_gc.m"
    {
#line 409 "ml_accurate_gc.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(ml_backend__ml_accurate_gc__PolyInfo_83, ml_backend__ml_accurate_gc__PredInfo0_80, &ml_backend__ml_accurate_gc__PredInfo_84, ml_backend__ml_accurate_gc__ProcInfo0_81, &ml_backend__ml_accurate_gc__ProcInfo_85, &ml_backend__ml_accurate_gc__ModuleInfo1_86);
    }
#line 413 "ml_accurate_gc.m"
    {
#line 413 "ml_accurate_gc.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(ml_backend__ml_accurate_gc__PredId_78, ml_backend__ml_accurate_gc__ProcId_79, ml_backend__ml_accurate_gc__PredInfo_84, ml_backend__ml_accurate_gc__ProcInfo_85, ml_backend__ml_accurate_gc__ModuleInfo1_86, &ml_backend__ml_accurate_gc__ModuleInfo_87);
    }
#line 415 "ml_accurate_gc.m"
    {
#line 415 "ml_accurate_gc.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_accurate_gc__ProcInfo_85, &ml_backend__ml_accurate_gc__VarSet_88);
    }
#line 416 "ml_accurate_gc.m"
    {
#line 416 "ml_accurate_gc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__ml_accurate_gc__ProcInfo_85, &ml_backend__ml_accurate_gc__VarTypes_89);
    }
#line 417 "ml_accurate_gc.m"
    {
#line 417 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_p_0(ml_backend__ml_accurate_gc__ModuleInfo_87, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_27_90);
    }
#line 418 "ml_accurate_gc.m"
    {
#line 418 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_set_varset_3_p_0(ml_backend__ml_accurate_gc__VarSet_88, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_27_90, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_28_91);
    }
#line 419 "ml_accurate_gc.m"
    {
#line 419 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_p_0(ml_backend__ml_accurate_gc__VarTypes_89, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_28_91, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_42_42);
    }
#line 301 "ml_accurate_gc.m"
    {
#line 301 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__NonLocalsList_16 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[0], (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_3[0], ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15);
    }
#line 3669 "ml_backend.ml_accurate_gc.c"
    ml_backend__ml_accurate_gc__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 304 "ml_accurate_gc.m"
    {
#line 304 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__NonLocals_19 = parse_tree__set_of_var__union_list_1_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_67_67, ml_backend__ml_accurate_gc__NonLocalsList_16);
    }
#line 305 "ml_accurate_gc.m"
    {
#line 305 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__InstMapDelta_20 = hlds__instmap__instmap_delta_bind_var_1_f_0(ml_backend__ml_accurate_gc__TypeInfoVar_14);
    }
#line 306 "ml_accurate_gc.m"
    {
#line 306 "ml_accurate_gc.m"
      hlds__hlds_goal__goal_info_init_5_p_0(ml_backend__ml_accurate_gc__NonLocals_19, ml_backend__ml_accurate_gc__InstMapDelta_20, (MR_Integer) 0, (MR_Integer) 2, &ml_backend__ml_accurate_gc__GoalInfo_21);
    }
#line 308 "ml_accurate_gc.m"
    {
#line 308 "ml_accurate_gc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15, ml_backend__ml_accurate_gc__GoalInfo_21, &ml_backend__ml_accurate_gc__Conj_22);
    }
#line 311 "ml_accurate_gc.m"
    {
#line 311 "ml_accurate_gc.m"
      ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0((MR_Integer) 0, ml_backend__ml_accurate_gc__Conj_22, &ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement0_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_42_42, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41);
    }
#line 317 "ml_accurate_gc.m"
    {
#line 317 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, &ml_backend__ml_accurate_gc__ModuleInfo_24);
    }
#line 318 "ml_accurate_gc.m"
    {
#line 318 "ml_accurate_gc.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_accurate_gc__ModuleInfo_24, &ml_backend__ml_accurate_gc__ModuleName_25);
    }
#line 319 "ml_accurate_gc.m"
    {
#line 319 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_50_50 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_accurate_gc__ModuleName_25);
    }
#line 319 "ml_accurate_gc.m"
    {
#line 319 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__fixup_newobj_4_p_0(ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement0_23, ml_backend__ml_accurate_gc__V_50_50, &ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement_26, &ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27);
    }
#line 324 "ml_accurate_gc.m"
    {
#line 324 "ml_accurate_gc.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, ml_backend__ml_accurate_gc__TypeInfoVar_14, &ml_backend__ml_accurate_gc__TypeInfoLval_28);
    }
#line 325 "ml_accurate_gc.m"
    {
#line 325 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_51_51, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TypeInfoLval_28));
#line 325 "ml_accurate_gc.m"
    }
#line 325 "ml_accurate_gc.m"
    {
#line 325 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__V_51_51, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__MLDS_TraceStatement_29);
    }
#line 336 "ml_accurate_gc.m"
    {
#line 336 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, &ml_backend__ml_accurate_gc__VarSet_30);
    }
#line 337 "ml_accurate_gc.m"
    {
#line 337 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, &ml_backend__ml_accurate_gc__VarTypes_31);
    }
#line 338 "ml_accurate_gc.m"
    {
#line 338 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__MLDS_Context_32 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_accurate_gc__Context_11);
    }
#line 339 "ml_accurate_gc.m"
    {
#line 339 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__GenLocalVarDecl_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 339 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_4[0]));
#line 339 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2));
#line 339 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 339 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__ModuleInfo_24));
#line 339 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__VarSet_30));
#line 339 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__VarTypes_31));
#line 339 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 6) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_Context_32));
#line 339 "ml_accurate_gc.m"
    }
#line 347 "ml_accurate_gc.m"
    {
#line 347 "ml_accurate_gc.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_67_67, ml_backend__ml_accurate_gc__NonLocals_19, &ml_backend__ml_accurate_gc__NonLocalVarList_38);
    }
#line 3774 "ml_backend.ml_accurate_gc.c"
    ml_backend__ml_accurate_gc__TypeCtorInfo_69_69 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 348 "ml_accurate_gc.m"
    {
#line 348 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_39 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[1], ml_backend__ml_accurate_gc__TypeCtorInfo_69_69, ml_backend__ml_accurate_gc__GenLocalVarDecl_33, ml_backend__ml_accurate_gc__NonLocalVarList_38);
    }
#line 351 "ml_accurate_gc.m"
    {
#line 351 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_57_57 = mercury__list__f_43_43_2_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_69_69, ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27, ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_39);
    }
#line 352 "ml_accurate_gc.m"
    {
#line 352 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_59_59, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_TraceStatement_29));
#line 352 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "ml_accurate_gc.m"
    }
#line 351 "ml_accurate_gc.m"
    {
#line 351 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_58_58, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement_26));
#line 351 "ml_accurate_gc.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__V_58_58, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__V_59_59));
#line 351 "ml_accurate_gc.m"
    }
#line 351 "ml_accurate_gc.m"
    {
#line 351 "ml_accurate_gc.m"
      *ml_backend__ml_accurate_gc__GC_TraceCode_12 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_accurate_gc__V_57_57, ml_backend__ml_accurate_gc__V_58_58, ml_backend__ml_accurate_gc__Context_11);
    }
#line 297 "ml_accurate_gc.m"
  }
#line 292 "ml_accurate_gc.m"
}

#line 138 "ml_accurate_gc.m"
static void MR_CALL 
ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(
#line 138 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
#line 138 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
#line 138 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_10,
#line 138 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__Context_11,
#line 138 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_12,
#line 138 "ml_accurate_gc.m"
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25,
#line 138 "ml_accurate_gc.m"
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26)
#line 138 "ml_accurate_gc.m"
{
#line 170 "ml_accurate_gc.m"
  {
#line 170 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 145 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_14;
#line 145 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__MLDS_DeclType_15;
#line 145 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredId_16;
#line 145 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__PredModule_17;
#line 145 "ml_accurate_gc.m"
    MR_String ml_backend__ml_accurate_gc__PredName_18;
#line 145 "ml_accurate_gc.m"
    MR_Integer ml_backend__ml_accurate_gc__PredArity_19;

#line 145 "ml_accurate_gc.m"
    {
#line 145 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, &ml_backend__ml_accurate_gc__ModuleInfo_14);
    }
#line 146 "ml_accurate_gc.m"
    {
#line 146 "ml_accurate_gc.m"
      ml_backend__ml_accurate_gc__MLDS_DeclType_15 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_accurate_gc__ModuleInfo_14, ml_backend__ml_accurate_gc__DeclType_9);
    }
#line 199 "ml_accurate_gc.m"
    if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__MLDS_DeclType_15)) == (MR_mktag((MR_Integer) 2))))
#line 199 "ml_accurate_gc.m"
      {
#line 199 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__TypeCategory_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 1)));
#line 199 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc___Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 0)));
#line 199 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 2)));

#line 253 "ml_accurate_gc.m"
        if ((ml_backend__ml_accurate_gc__TypeCategory_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 253 "ml_accurate_gc.m"
        else
#line 253 "ml_accurate_gc.m"
          if ((ml_backend__ml_accurate_gc__TypeCategory_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 264 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 253 "ml_accurate_gc.m"
          else
#line 253 "ml_accurate_gc.m"
            if ((ml_backend__ml_accurate_gc__TypeCategory_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 264 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 253 "ml_accurate_gc.m"
            else
#line 253 "ml_accurate_gc.m"
              if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__TypeCategory_32)) == (MR_mktag((MR_Integer) 1))))
#line 253 "ml_accurate_gc.m"
                {
#line 253 "ml_accurate_gc.m"
                  MR_Word ml_backend__ml_accurate_gc__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 0)));

#line 3898 "ml_backend.ml_accurate_gc.c"
                  ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__V_60_60 == (MR_Integer) 3);
#line 253 "ml_accurate_gc.m"
                }
#line 253 "ml_accurate_gc.m"
              else
#line 253 "ml_accurate_gc.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__TypeCategory_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 253 "ml_accurate_gc.m"
                  {
#line 253 "ml_accurate_gc.m"
                    MR_Word ml_backend__ml_accurate_gc__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 1)));

#line 253 "ml_accurate_gc.m"
                    if ((ml_backend__ml_accurate_gc__V_61_61 == (MR_Integer) 0))
#line 265 "ml_accurate_gc.m"
                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 253 "ml_accurate_gc.m"
                    else
#line 253 "ml_accurate_gc.m"
                      if ((ml_backend__ml_accurate_gc__V_61_61 == (MR_Integer) 2))
#line 265 "ml_accurate_gc.m"
                        ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 253 "ml_accurate_gc.m"
                      else
#line 253 "ml_accurate_gc.m"
                        ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 253 "ml_accurate_gc.m"
                  }
#line 253 "ml_accurate_gc.m"
                else
#line 253 "ml_accurate_gc.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__TypeCategory_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 253 "ml_accurate_gc.m"
                    {
#line 253 "ml_accurate_gc.m"
                      MR_Word ml_backend__ml_accurate_gc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 1)));

#line 253 "ml_accurate_gc.m"
                      if ((ml_backend__ml_accurate_gc__V_62_62 == (MR_Integer) 2))
#line 265 "ml_accurate_gc.m"
                        ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 253 "ml_accurate_gc.m"
                      else
#line 253 "ml_accurate_gc.m"
                        if ((ml_backend__ml_accurate_gc__V_62_62 == (MR_Integer) 1))
#line 265 "ml_accurate_gc.m"
                          ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 253 "ml_accurate_gc.m"
                        else
#line 253 "ml_accurate_gc.m"
                          ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 253 "ml_accurate_gc.m"
                    }
#line 253 "ml_accurate_gc.m"
                  else
#line 253 "ml_accurate_gc.m"
                    ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 199 "ml_accurate_gc.m"
      }
#line 199 "ml_accurate_gc.m"
    else
#line 199 "ml_accurate_gc.m"
      if (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__MLDS_DeclType_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 203 "ml_accurate_gc.m"
        {
#line 203 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__Category_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 3)));
#line 203 "ml_accurate_gc.m"
          MR_Word ml_backend__ml_accurate_gc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 1)));
#line 203 "ml_accurate_gc.m"
          MR_Integer ml_backend__ml_accurate_gc__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 2)));

#line 204 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__Category_36 == (MR_Integer) 4);
#line 206 "ml_accurate_gc.m"
          if (ml_backend__ml_accurate_gc__succeeded)
#line 205 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 206 "ml_accurate_gc.m"
          else
#line 207 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 203 "ml_accurate_gc.m"
        }
#line 199 "ml_accurate_gc.m"
      else
#line 199 "ml_accurate_gc.m"
        if (((((((((((((((((((((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__MLDS_DeclType_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 0)))) == (MR_Integer) 4)))) || ((ml_backend__ml_accurate_gc__MLDS_DeclType_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))))) || ((ml_backend__ml_accurate_gc__MLDS_DeclType_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))))) || (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__MLDS_DeclType_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__MLDS_DeclType_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || ((ml_backend__ml_accurate_gc__MLDS_DeclType_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))))))) || (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__MLDS_DeclType_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__MLDS_DeclType_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || ((ml_backend__ml_accurate_gc__MLDS_DeclType_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))))))) || ((ml_backend__ml_accurate_gc__MLDS_DeclType_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))))
#line 221 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 199 "ml_accurate_gc.m"
        else
#line 199 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 145 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 145 "ml_accurate_gc.m"
      {
#line 149 "ml_accurate_gc.m"
        {
#line 149 "ml_accurate_gc.m"
          ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, &ml_backend__ml_accurate_gc__PredId_16);
        }
#line 150 "ml_accurate_gc.m"
        {
#line 150 "ml_accurate_gc.m"
          hlds__hlds_module__predicate_id_5_p_0(ml_backend__ml_accurate_gc__ModuleInfo_14, ml_backend__ml_accurate_gc__PredId_16, &ml_backend__ml_accurate_gc__PredModule_17, &ml_backend__ml_accurate_gc__PredName_18, &ml_backend__ml_accurate_gc__PredArity_19);
        }
#line 151 "ml_accurate_gc.m"
        {
#line 151 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(ml_backend__ml_accurate_gc__PredModule_17, ml_backend__ml_accurate_gc__PredName_18, ml_backend__ml_accurate_gc__PredArity_19);
        }
#line 151 "ml_accurate_gc.m"
        ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
#line 145 "ml_accurate_gc.m"
      }
#line 170 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 168 "ml_accurate_gc.m"
      {
#line 168 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__GC_TraceCode_23;

#line 164 "ml_accurate_gc.m"
        if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HowToGetTypeInfo_10)) == (MR_mktag((MR_Integer) 1))))
#line 165 "ml_accurate_gc.m"
          {
#line 165 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HowToGetTypeInfo_10, (MR_Integer) 0)));

#line 166 "ml_accurate_gc.m"
            {
#line 166 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__TypeInfoRval_24, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__GC_TraceCode_23);
            }
#line 166 "ml_accurate_gc.m"
            *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25;
#line 165 "ml_accurate_gc.m"
          }
#line 164 "ml_accurate_gc.m"
        else
#line 154 "ml_accurate_gc.m"
          {
#line 154 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__ActualType0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HowToGetTypeInfo_10, (MR_Integer) 0)));
#line 154 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__ActualType_22;
#line 159 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__ActualType1_21;
#line 275 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__TypeName_65;
#line 275 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__PrivateBuiltin_68;
#line 275 "ml_accurate_gc.m"
            MR_String ml_backend__ml_accurate_gc__Name_69;
#line 275 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__V_70_70;
#line 276 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__V_66_66;
#line 276 "ml_accurate_gc.m"
            MR_Word ml_backend__ml_accurate_gc__V_67_67;

#line 276 "ml_accurate_gc.m"
            ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__ActualType0_20)) == (MR_mktag((MR_Integer) 1)));
#line 276 "ml_accurate_gc.m"
            if (ml_backend__ml_accurate_gc__succeeded)
#line 276 "ml_accurate_gc.m"
              {
#line 276 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__TypeName_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ActualType0_20, (MR_Integer) 0)));
#line 276 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ActualType0_20, (MR_Integer) 1)));
#line 276 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ActualType0_20, (MR_Integer) 2)));
#line 277 "ml_accurate_gc.m"
                ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__TypeName_65)) == (MR_mktag((MR_Integer) 1)));
#line 277 "ml_accurate_gc.m"
                if (ml_backend__ml_accurate_gc__succeeded)
#line 277 "ml_accurate_gc.m"
                  {
#line 277 "ml_accurate_gc.m"
                    ml_backend__ml_accurate_gc__PrivateBuiltin_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__TypeName_65, (MR_Integer) 0)));
#line 277 "ml_accurate_gc.m"
                    ml_backend__ml_accurate_gc__Name_69 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__TypeName_65, (MR_Integer) 1)));
#line 278 "ml_accurate_gc.m"
                    {
#line 278 "ml_accurate_gc.m"
                      ml_backend__ml_accurate_gc__V_70_70 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
                    }
#line 278 "ml_accurate_gc.m"
                    {
#line 278 "ml_accurate_gc.m"
                      ml_backend__ml_accurate_gc__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_accurate_gc__PrivateBuiltin_68, ml_backend__ml_accurate_gc__V_70_70);
                    }
#line 275 "ml_accurate_gc.m"
                    if (ml_backend__ml_accurate_gc__succeeded)
#line 280 "ml_accurate_gc.m"
                      {
#line 280 "ml_accurate_gc.m"
                        if ((strcmp(ml_backend__ml_accurate_gc__Name_69, (MR_String) "type_info") == 0))
#line 279 "ml_accurate_gc.m"
                          {
#line 279 "ml_accurate_gc.m"
                            {
#line 279 "ml_accurate_gc.m"
                              ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_type_info_type_0_f_0();
                            }
#line 279 "ml_accurate_gc.m"
                            ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 279 "ml_accurate_gc.m"
                          }
#line 280 "ml_accurate_gc.m"
                        else
#line 280 "ml_accurate_gc.m"
                          if ((strcmp(ml_backend__ml_accurate_gc__Name_69, (MR_String) "type_ctor_info") == 0))
#line 280 "ml_accurate_gc.m"
                            {
#line 280 "ml_accurate_gc.m"
                              {
#line 280 "ml_accurate_gc.m"
                                ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                              }
#line 280 "ml_accurate_gc.m"
                              ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 280 "ml_accurate_gc.m"
                            }
#line 280 "ml_accurate_gc.m"
                          else
#line 280 "ml_accurate_gc.m"
                            if ((strcmp(ml_backend__ml_accurate_gc__Name_69, (MR_String) "typeclass_info") == 0))
#line 281 "ml_accurate_gc.m"
                              {
#line 281 "ml_accurate_gc.m"
                                {
#line 281 "ml_accurate_gc.m"
                                  ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0();
                                }
#line 281 "ml_accurate_gc.m"
                                ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 281 "ml_accurate_gc.m"
                              }
#line 280 "ml_accurate_gc.m"
                            else
#line 280 "ml_accurate_gc.m"
                              if ((strcmp(ml_backend__ml_accurate_gc__Name_69, (MR_String) "zero_type_info") == 0))
#line 283 "ml_accurate_gc.m"
                                {
#line 283 "ml_accurate_gc.m"
                                  {
#line 283 "ml_accurate_gc.m"
                                    ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_type_info_type_0_f_0();
                                  }
#line 283 "ml_accurate_gc.m"
                                  ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 283 "ml_accurate_gc.m"
                                }
#line 280 "ml_accurate_gc.m"
                              else
#line 280 "ml_accurate_gc.m"
                                if ((strcmp(ml_backend__ml_accurate_gc__Name_69, (MR_String) "base_typeclass_info") == 0))
#line 282 "ml_accurate_gc.m"
                                  {
#line 282 "ml_accurate_gc.m"
                                    {
#line 282 "ml_accurate_gc.m"
                                      ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                                    }
#line 282 "ml_accurate_gc.m"
                                    ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 282 "ml_accurate_gc.m"
                                  }
#line 280 "ml_accurate_gc.m"
                                else
#line 280 "ml_accurate_gc.m"
                                  if ((strcmp(ml_backend__ml_accurate_gc__Name_69, (MR_String) "zero_type_ctor_info") == 0))
#line 284 "ml_accurate_gc.m"
                                    {
#line 284 "ml_accurate_gc.m"
                                      {
#line 284 "ml_accurate_gc.m"
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                                      }
#line 284 "ml_accurate_gc.m"
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 284 "ml_accurate_gc.m"
                                    }
#line 280 "ml_accurate_gc.m"
                                  else
#line 280 "ml_accurate_gc.m"
                                    if ((strcmp(ml_backend__ml_accurate_gc__Name_69, (MR_String) "zero_typeclass_info") == 0))
#line 285 "ml_accurate_gc.m"
                                      {
#line 285 "ml_accurate_gc.m"
                                        {
#line 285 "ml_accurate_gc.m"
                                          ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0();
                                        }
#line 285 "ml_accurate_gc.m"
                                        ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 285 "ml_accurate_gc.m"
                                      }
#line 280 "ml_accurate_gc.m"
                                    else
#line 280 "ml_accurate_gc.m"
                                      if ((strcmp(ml_backend__ml_accurate_gc__Name_69, (MR_String) "zero_base_typeclass_info") == 0))
#line 286 "ml_accurate_gc.m"
                                        {
#line 286 "ml_accurate_gc.m"
                                          {
#line 286 "ml_accurate_gc.m"
                                            ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                                          }
#line 286 "ml_accurate_gc.m"
                                          ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
#line 286 "ml_accurate_gc.m"
                                        }
#line 280 "ml_accurate_gc.m"
                                      else
#line 280 "ml_accurate_gc.m"
                                        ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
#line 280 "ml_accurate_gc.m"
                      }
#line 277 "ml_accurate_gc.m"
                  }
#line 276 "ml_accurate_gc.m"
              }
#line 159 "ml_accurate_gc.m"
            if (ml_backend__ml_accurate_gc__succeeded)
#line 158 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__ActualType_22 = ml_backend__ml_accurate_gc__ActualType1_21;
#line 159 "ml_accurate_gc.m"
            else
#line 160 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__ActualType_22 = ml_backend__ml_accurate_gc__ActualType0_20;
#line 162 "ml_accurate_gc.m"
            {
#line 162 "ml_accurate_gc.m"
              ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__ActualType_22, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__GC_TraceCode_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26);
            }
#line 154 "ml_accurate_gc.m"
          }
#line 169 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_accurate_gc__GC_TraceCode_23);
#line 168 "ml_accurate_gc.m"
      }
#line 170 "ml_accurate_gc.m"
    else
#line 171 "ml_accurate_gc.m"
      {
#line 171 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 171 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25;
#line 171 "ml_accurate_gc.m"
      }
#line 170 "ml_accurate_gc.m"
  }
#line 138 "ml_accurate_gc.m"
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
#line 124 "ml_accurate_gc.m"
  {
#line 124 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 124 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GC_14;

#line 125 "ml_accurate_gc.m"
    {
#line 125 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, &ml_backend__ml_accurate_gc__GC_14);
    }
#line 126 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__GC_14 == (MR_Integer) 6);
#line 130 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 127 "ml_accurate_gc.m"
      {
#line 127 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_15;

#line 127 "ml_accurate_gc.m"
        {
#line 127 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__HowToGetTypeInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 127 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TypeInfoRval_10));
#line 127 "ml_accurate_gc.m"
        }
#line 128 "ml_accurate_gc.m"
        {
#line 128 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, ml_backend__ml_accurate_gc__Context_11, ml_backend__ml_accurate_gc__GCStatement_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17);
#line 128 "ml_accurate_gc.m"
          return;
        }
#line 127 "ml_accurate_gc.m"
      }
#line 130 "ml_accurate_gc.m"
    else
#line 131 "ml_accurate_gc.m"
      {
#line 131 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 131 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16;
#line 131 "ml_accurate_gc.m"
      }
#line 124 "ml_accurate_gc.m"
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
#line 113 "ml_accurate_gc.m"
  {
#line 113 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 113 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GC_14;

#line 114 "ml_accurate_gc.m"
    {
#line 114 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, &ml_backend__ml_accurate_gc__GC_14);
    }
#line 115 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__GC_14 == (MR_Integer) 6);
#line 119 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 116 "ml_accurate_gc.m"
      {
#line 116 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_15;

#line 116 "ml_accurate_gc.m"
        {
#line 116 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__HowToGetTypeInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 116 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__ActualType_10));
#line 116 "ml_accurate_gc.m"
        }
#line 117 "ml_accurate_gc.m"
        {
#line 117 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, ml_backend__ml_accurate_gc__Context_11, ml_backend__ml_accurate_gc__GCStatement_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17);
#line 117 "ml_accurate_gc.m"
          return;
        }
#line 116 "ml_accurate_gc.m"
      }
#line 119 "ml_accurate_gc.m"
    else
#line 120 "ml_accurate_gc.m"
      {
#line 120 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 120 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16;
#line 120 "ml_accurate_gc.m"
      }
#line 113 "ml_accurate_gc.m"
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
#line 113 "ml_accurate_gc.m"
  {
#line 113 "ml_accurate_gc.m"
    MR_bool ml_backend__ml_accurate_gc__succeeded;
#line 113 "ml_accurate_gc.m"
    MR_Word ml_backend__ml_accurate_gc__GC_24;

#line 114 "ml_accurate_gc.m"
    {
#line 114 "ml_accurate_gc.m"
      ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12, &ml_backend__ml_accurate_gc__GC_24);
    }
#line 115 "ml_accurate_gc.m"
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__GC_24 == (MR_Integer) 6);
#line 119 "ml_accurate_gc.m"
    if (ml_backend__ml_accurate_gc__succeeded)
#line 116 "ml_accurate_gc.m"
      {
#line 116 "ml_accurate_gc.m"
        MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_25;

#line 116 "ml_accurate_gc.m"
        {
#line 116 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__HowToGetTypeInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 116 "ml_accurate_gc.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HowToGetTypeInfo_25, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Type_8));
#line 116 "ml_accurate_gc.m"
        }
#line 117 "ml_accurate_gc.m"
        {
#line 117 "ml_accurate_gc.m"
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_7, ml_backend__ml_accurate_gc__Type_8, ml_backend__ml_accurate_gc__HowToGetTypeInfo_25, ml_backend__ml_accurate_gc__Context_9, ml_backend__ml_accurate_gc__GCStatement_10, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13);
#line 117 "ml_accurate_gc.m"
          return;
        }
#line 116 "ml_accurate_gc.m"
      }
#line 119 "ml_accurate_gc.m"
    else
#line 120 "ml_accurate_gc.m"
      {
#line 120 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__GCStatement_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 120 "ml_accurate_gc.m"
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12;
#line 120 "ml_accurate_gc.m"
      }
#line 113 "ml_accurate_gc.m"
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
