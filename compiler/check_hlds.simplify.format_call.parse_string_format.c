/*
** Automatically generated from `parse_string_format.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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


/* :- module check_hlds.simplify.format_call.parse_string_format. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__format_call__parse_string_format__init
ENDINIT
*/

#include "check_hlds.simplify.format_call.parse_string_format.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "exception.mih"
#include "float.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.format_call.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 151 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_0[2];

#line 157 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0;

#line 160 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_1[2];

#line 163 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1;

#line 166 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_2[2];

#line 169 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2;

#line 172 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_3[2];

#line 175 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3;

#line 178 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_0[1];

#line 181 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_1[1];

#line 184 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_2[1];

#line 187 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3[1];

#line 190 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_abstract_poly_type_0[4];

#line 193 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_abstract_poly_type_0[4];

#line 196 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_abstract_poly_type_0[4];

#line 199 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0;

#line 202 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_1[1];

#line 205 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1;

#line 208 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_2[1];

#line 211 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2;

#line 214 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0[1];

#line 217 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1[1];

#line 220 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2[1];

#line 223 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_prec_0[3];

#line 226 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0[3];

#line 229 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_prec_0[3];

#line 232 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0;

#line 235 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_1[1];

#line 238 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1;

#line 241 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_2[1];

#line 244 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2;

#line 247 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0[1];

#line 250 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1[1];

#line 253 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2[1];

#line 256 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_width_0[3];

#line 259 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_width_0[3];

#line 262 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_width_0[3];

#line 265 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_0[2];

#line 268 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0;

#line 271 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_1[4];

#line 274 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1;

#line 277 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_2[5];

#line 280 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2;

#line 283 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_3[5];

#line 286 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3;

#line 289 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_4[6];

#line 292 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4;

#line 295 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5[6];

#line 298 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5;

#line 301 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_0[1];

#line 304 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_1[1];

#line 307 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_2[1];

#line 310 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3[3];

#line 313 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_spec_0[4];

#line 316 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_spec_0[6];

#line 319 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_spec_0[6];

#line 322 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0_10001(
#line 325 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 327 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2);

#line 330 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0_10001(
#line 333 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 335 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 337 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3);

#line 340 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001(
#line 343 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 345 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2);

#line 348 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001(
#line 351 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 353 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 355 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3);

#line 358 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001(
#line 361 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 363 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2);

#line 366 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001(
#line 369 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 371 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 373 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3);

#line 376 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0_10001(
#line 379 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 381 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2);

#line 384 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0_10001(
#line 387 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 389 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 391 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3);

#line 495 "parse_string_format.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(
#line 495 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1);

#line 324 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_first_spec_11_p_0(
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1,
#line 324 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_2,
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3,
#line 324 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_4,
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__OverallContext_5,
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6,
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7,
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8,
#line 324 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_9,
#line 324 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Spec_10,
#line 324 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_11);

#line 274 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_optional_prec_7_p_0(
#line 274 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17,
#line 274 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_18,
#line 274 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19,
#line 274 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20,
#line 274 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_10,
#line 274 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__MaybePrec_11,
#line 274 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_12);

#line 225 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__parse_conversion_specification_8_p_0(
#line 225 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_22,
#line 225 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23,
#line 225 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24,
#line 225 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_25,
#line 225 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Context_11,
#line 225 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_12,
#line 225 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Spec_13,
#line 225 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_14);

#line 175 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(
#line 175 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_29,
#line 175 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_30,
#line 175 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Context_9,
#line 175 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_10,
#line 175 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Specs_11,
#line 175 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_12);

#line 133 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(
#line 133 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 133 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2);


static /* final */ const MR_Box check_hlds__simplify__format_call__parse_string_format_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__simplify__format_call__parse_string_format_scalar_common_2[1][1];




static /* final */ const MR_Box check_hlds__simplify__format_call__parse_string_format_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call__parse_string_format_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 532 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 540 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 546 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0 = {
  (MR_String) "apt_f",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 561 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 567 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1 = {
  (MR_String) "apt_i",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_1,
  NULL,
  NULL,
  NULL
};

#line 582 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 588 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2 = {
  (MR_String) "apt_s",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_2,
  NULL,
  NULL,
  NULL
};

#line 603 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_3[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 609 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3 = {
  (MR_String) "apt_c",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_3,
  NULL,
  NULL,
  NULL
};

#line 624 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0
};

#line 629 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1
};

#line 634 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2
};

#line 639 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3
};

#line 644 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_abstract_poly_type_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3
  }
};

#line 668 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_abstract_poly_type_0[4] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2
};

#line 676 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_abstract_poly_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 684 "check_hlds.simplify.format_call.parse_string_format.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "abstract_poly_type",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_abstract_poly_type_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_abstract_poly_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_abstract_poly_type_0
};

#line 701 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0 = {
  (MR_String) "compiler_no_specified_prec",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 716 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 721 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1 = {
  (MR_String) "compiler_manifest_prec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_1,
  NULL,
  NULL,
  NULL
};

#line 736 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 741 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2 = {
  (MR_String) "compiler_var_prec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_2,
  NULL,
  NULL,
  NULL
};

#line 756 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0
};

#line 761 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1
};

#line 766 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2
};

#line 771 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_prec_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2
  }
};

#line 790 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0[3] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2
};

#line 797 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_prec_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 804 "check_hlds.simplify.format_call.parse_string_format.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "compiler_format_maybe_prec",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_prec_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_prec_0
};

#line 821 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0 = {
  (MR_String) "compiler_no_specified_width",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 836 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 841 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1 = {
  (MR_String) "compiler_manifest_width",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_1,
  NULL,
  NULL,
  NULL
};

#line 856 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 861 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2 = {
  (MR_String) "compiler_var_width",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_2,
  NULL,
  NULL,
  NULL
};

#line 876 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0
};

#line 881 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1
};

#line 886 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2
};

#line 891 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_width_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2
  }
};

#line 910 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_width_0[3] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2
};

#line 917 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_width_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 924 "check_hlds.simplify.format_call.parse_string_format.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "compiler_format_maybe_width",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_width_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_width_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_width_0
};

#line 941 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 947 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0 = {
  (MR_String) "compiler_const_string",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_0,
  NULL,
  NULL,
  NULL
};

#line 962 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_1[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 970 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1 = {
  (MR_String) "compiler_spec_char",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_1,
  NULL,
  NULL,
  NULL
};

#line 985 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_2[5] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 994 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2 = {
  (MR_String) "compiler_spec_string",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_2,
  NULL,
  NULL,
  NULL
};

#line 1009 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_3[5] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1018 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3 = {
  (MR_String) "compiler_spec_signed_int",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_3,
  NULL,
  NULL,
  NULL
};

#line 1033 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_4[6] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1043 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4 = {
  (MR_String) "compiler_spec_unsigned_int",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_4,
  NULL,
  NULL,
  NULL
};

#line 1058 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5[6] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1068 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5 = {
  (MR_String) "compiler_spec_float",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5,
  NULL,
  NULL,
  NULL
};

#line 1083 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0
};

#line 1088 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1
};

#line 1093 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2
};

#line 1098 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3[3] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5
};

#line 1105 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_spec_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3
  }
};

#line 1129 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_spec_0[6] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4
};

#line 1139 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_spec_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2
};

#line 1149 "check_hlds.simplify.format_call.parse_string_format.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "compiler_format_spec",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_spec_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_spec_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_spec_0
};

#line 1166 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0_10001(
#line 1169 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1171 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2)
#line 1173 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1175 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1177 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 1180 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1182 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0(((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2));
    }
#line 1185 "check_hlds.simplify.format_call.parse_string_format.c"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 1187 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1189 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1192 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0_10001(
#line 1195 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1197 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 1199 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3)
#line 1201 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1203 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1205 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_Word check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1;

#line 1208 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1210 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0(&check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3));
    }
#line 1213 "check_hlds.simplify.format_call.parse_string_format.c"
    *check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1));
#line 1215 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1217 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1220 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001(
#line 1223 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1225 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2)
#line 1227 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1229 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1231 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 1234 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1236 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2));
    }
#line 1239 "check_hlds.simplify.format_call.parse_string_format.c"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 1241 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1243 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1246 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001(
#line 1249 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1251 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 1253 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3)
#line 1255 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1257 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1259 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_Word check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1;

#line 1262 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1264 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3));
    }
#line 1267 "check_hlds.simplify.format_call.parse_string_format.c"
    *check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1));
#line 1269 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1271 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1274 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001(
#line 1277 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1279 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2)
#line 1281 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1283 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1285 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 1288 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1290 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2));
    }
#line 1293 "check_hlds.simplify.format_call.parse_string_format.c"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 1295 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1297 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1300 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001(
#line 1303 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1305 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 1307 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3)
#line 1309 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1311 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1313 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_Word check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1;

#line 1316 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1318 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3));
    }
#line 1321 "check_hlds.simplify.format_call.parse_string_format.c"
    *check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1));
#line 1323 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1325 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1328 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0_10001(
#line 1331 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1333 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2)
#line 1335 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1337 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1339 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 1342 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1344 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0(((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2));
    }
#line 1347 "check_hlds.simplify.format_call.parse_string_format.c"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 1349 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1351 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1354 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0_10001(
#line 1357 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1359 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 1361 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3)
#line 1363 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1365 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1367 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_Word check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1;

#line 1370 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1372 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0(&check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3));
    }
#line 1375 "check_hlds.simplify.format_call.parse_string_format.c"
    *check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1));
#line 1377 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1379 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 50 "parse_string_format.m"
void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0(
#line 50 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 50 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2,
#line 50 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)
#line 50 "parse_string_format.m"
{
#line 50 "parse_string_format.m"
  {
#line 50 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 50 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_362 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;
#line 50 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_363 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3;

#line 50 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_362 == check_hlds__simplify__format_call__parse_string_format__CastY_363);
#line 50 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 1406 "check_hlds.simplify.format_call.parse_string_format.c"
      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_String check_hlds__simplify__format_call__parse_string_format__V_392_392 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 50 "parse_string_format.m"
            MR_String check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8;

#line 50 "parse_string_format.m"
            {
#line 50 "parse_string_format.m"
              mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_8_8, check_hlds__simplify__format_call__parse_string_format__V_393_393, check_hlds__simplify__format_call__parse_string_format__V_6_6);
            }
#line 1435 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_8_8 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_8_8;
#line 50 "parse_string_format.m"
            else
#line 50 "parse_string_format.m"
              {
#line 50 "parse_string_format.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_392_392, check_hlds__simplify__format_call__parse_string_format__V_7_7);
#line 50 "parse_string_format.m"
                return;
              }
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1458 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1464 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1470 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1476 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
        else
#line 1480 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1501 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_59_59;

#line 50 "parse_string_format.m"
            {
#line 50 "parse_string_format.m"
              mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_59_59, check_hlds__simplify__format_call__parse_string_format__V_397_397, check_hlds__simplify__format_call__parse_string_format__V_55_55);
            }
#line 1525 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_59_59 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_59_59;
#line 50 "parse_string_format.m"
            else
#line 50 "parse_string_format.m"
              {
#line 50 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_60_60;

#line 50 "parse_string_format.m"
                {
#line 50 "parse_string_format.m"
                  mercury__string__parse_util____Compare____string_format_flags_0_0(&check_hlds__simplify__format_call__parse_string_format__V_60_60, check_hlds__simplify__format_call__parse_string_format__V_396_396, check_hlds__simplify__format_call__parse_string_format__V_56_56);
                }
#line 1545 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_60_60 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                  *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_60_60;
#line 50 "parse_string_format.m"
                else
#line 50 "parse_string_format.m"
                  {
#line 50 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_61_61;

#line 50 "parse_string_format.m"
                    {
#line 50 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__V_61_61, check_hlds__simplify__format_call__parse_string_format__V_395_395, check_hlds__simplify__format_call__parse_string_format__V_57_57);
                    }
#line 1565 "check_hlds.simplify.format_call.parse_string_format.c"
                    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_61_61 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_61_61;
#line 50 "parse_string_format.m"
                    else
#line 50 "parse_string_format.m"
                      {
#line 50 "parse_string_format.m"
                        {
#line 50 "parse_string_format.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_394_394)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_58_58)));
#line 50 "parse_string_format.m"
                          return;
                        }
#line 50 "parse_string_format.m"
                      }
#line 50 "parse_string_format.m"
                  }
#line 50 "parse_string_format.m"
              }
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1596 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1602 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1608 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
        else
#line 1612 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_409_409 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_411_411 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_412_412 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1635 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1641 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_126_126;

#line 50 "parse_string_format.m"
            {
#line 50 "parse_string_format.m"
              mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_126_126, check_hlds__simplify__format_call__parse_string_format__V_413_413, check_hlds__simplify__format_call__parse_string_format__V_121_121);
            }
#line 1667 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_126_126 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_126_126;
#line 50 "parse_string_format.m"
            else
#line 50 "parse_string_format.m"
              {
#line 50 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_127_127;

#line 50 "parse_string_format.m"
                {
#line 50 "parse_string_format.m"
                  mercury__string__parse_util____Compare____string_format_flags_0_0(&check_hlds__simplify__format_call__parse_string_format__V_127_127, check_hlds__simplify__format_call__parse_string_format__V_412_412, check_hlds__simplify__format_call__parse_string_format__V_122_122);
                }
#line 1687 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_127_127 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                  *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_127_127;
#line 50 "parse_string_format.m"
                else
#line 50 "parse_string_format.m"
                  {
#line 50 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_128_128;

#line 50 "parse_string_format.m"
                    {
#line 50 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__V_128_128, check_hlds__simplify__format_call__parse_string_format__V_411_411, check_hlds__simplify__format_call__parse_string_format__V_123_123);
                    }
#line 1707 "check_hlds.simplify.format_call.parse_string_format.c"
                    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_128_128 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_128_128;
#line 50 "parse_string_format.m"
                    else
#line 50 "parse_string_format.m"
                      {
#line 50 "parse_string_format.m"
                        MR_Word check_hlds__simplify__format_call__parse_string_format__V_129_129;

#line 50 "parse_string_format.m"
                        {
#line 50 "parse_string_format.m"
                          check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&check_hlds__simplify__format_call__parse_string_format__V_129_129, check_hlds__simplify__format_call__parse_string_format__V_410_410, check_hlds__simplify__format_call__parse_string_format__V_124_124);
                        }
#line 1727 "check_hlds.simplify.format_call.parse_string_format.c"
                        check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_129_129 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_129_129;
#line 50 "parse_string_format.m"
                        else
#line 50 "parse_string_format.m"
                          {
#line 50 "parse_string_format.m"
                            {
#line 50 "parse_string_format.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_409_409)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_125_125)));
#line 50 "parse_string_format.m"
                              return;
                            }
#line 50 "parse_string_format.m"
                          }
#line 50 "parse_string_format.m"
                      }
#line 50 "parse_string_format.m"
                  }
#line 50 "parse_string_format.m"
              }
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1760 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1766 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
        else
#line 1770 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
    if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 6)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_402_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));

#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1795 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1801 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1807 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 5)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 6)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_357_357;

#line 50 "parse_string_format.m"
            {
#line 50 "parse_string_format.m"
              mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_357_357, check_hlds__simplify__format_call__parse_string_format__V_403_403, check_hlds__simplify__format_call__parse_string_format__V_351_351);
            }
#line 1835 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_357_357 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_357_357;
#line 50 "parse_string_format.m"
            else
#line 50 "parse_string_format.m"
              {
#line 50 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_358_358;

#line 50 "parse_string_format.m"
                {
#line 50 "parse_string_format.m"
                  mercury__string__parse_util____Compare____string_format_flags_0_0(&check_hlds__simplify__format_call__parse_string_format__V_358_358, check_hlds__simplify__format_call__parse_string_format__V_402_402, check_hlds__simplify__format_call__parse_string_format__V_352_352);
                }
#line 1855 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_358_358 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                  *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_358_358;
#line 50 "parse_string_format.m"
                else
#line 50 "parse_string_format.m"
                  {
#line 50 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_359_359;

#line 50 "parse_string_format.m"
                    {
#line 50 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__V_359_359, check_hlds__simplify__format_call__parse_string_format__V_401_401, check_hlds__simplify__format_call__parse_string_format__V_353_353);
                    }
#line 1875 "check_hlds.simplify.format_call.parse_string_format.c"
                    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_359_359 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_359_359;
#line 50 "parse_string_format.m"
                    else
#line 50 "parse_string_format.m"
                      {
#line 50 "parse_string_format.m"
                        MR_Word check_hlds__simplify__format_call__parse_string_format__V_360_360;

#line 50 "parse_string_format.m"
                        {
#line 50 "parse_string_format.m"
                          check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&check_hlds__simplify__format_call__parse_string_format__V_360_360, check_hlds__simplify__format_call__parse_string_format__V_400_400, check_hlds__simplify__format_call__parse_string_format__V_354_354);
                        }
#line 1895 "check_hlds.simplify.format_call.parse_string_format.c"
                        check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_360_360 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_360_360;
#line 50 "parse_string_format.m"
                        else
#line 50 "parse_string_format.m"
                          {
#line 50 "parse_string_format.m"
                            MR_Word check_hlds__simplify__format_call__parse_string_format__V_361_361;
#line 50 "parse_string_format.m"
                            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_420_420 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__V_399_399;
#line 50 "parse_string_format.m"
                            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_421_421 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__V_355_355;

#line 50 "parse_string_format.m"
                            {
#line 50 "parse_string_format.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__parse_string_format__V_361_361, check_hlds__simplify__format_call__parse_string_format__V_420_420, check_hlds__simplify__format_call__parse_string_format__V_421_421);
                            }
#line 1919 "check_hlds.simplify.format_call.parse_string_format.c"
                            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_361_361 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_361_361;
#line 50 "parse_string_format.m"
                            else
#line 50 "parse_string_format.m"
                              {
#line 50 "parse_string_format.m"
                                {
#line 50 "parse_string_format.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_398_398)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_356_356)));
#line 50 "parse_string_format.m"
                                  return;
                                }
#line 50 "parse_string_format.m"
                              }
#line 50 "parse_string_format.m"
                          }
#line 50 "parse_string_format.m"
                      }
#line 50 "parse_string_format.m"
                  }
#line 50 "parse_string_format.m"
              }
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1954 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 1958 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
    if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_407_407 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));

#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1981 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1987 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1993 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1999 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 5)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_198_198;

#line 50 "parse_string_format.m"
            {
#line 50 "parse_string_format.m"
              mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_198_198, check_hlds__simplify__format_call__parse_string_format__V_408_408, check_hlds__simplify__format_call__parse_string_format__V_193_193);
            }
#line 2025 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_198_198 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_198_198;
#line 50 "parse_string_format.m"
            else
#line 50 "parse_string_format.m"
              {
#line 50 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_199_199;

#line 50 "parse_string_format.m"
                {
#line 50 "parse_string_format.m"
                  mercury__string__parse_util____Compare____string_format_flags_0_0(&check_hlds__simplify__format_call__parse_string_format__V_199_199, check_hlds__simplify__format_call__parse_string_format__V_407_407, check_hlds__simplify__format_call__parse_string_format__V_194_194);
                }
#line 2045 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_199_199 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                  *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_199_199;
#line 50 "parse_string_format.m"
                else
#line 50 "parse_string_format.m"
                  {
#line 50 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_200_200;

#line 50 "parse_string_format.m"
                    {
#line 50 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__V_200_200, check_hlds__simplify__format_call__parse_string_format__V_406_406, check_hlds__simplify__format_call__parse_string_format__V_195_195);
                    }
#line 2065 "check_hlds.simplify.format_call.parse_string_format.c"
                    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_200_200 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_200_200;
#line 50 "parse_string_format.m"
                    else
#line 50 "parse_string_format.m"
                      {
#line 50 "parse_string_format.m"
                        MR_Word check_hlds__simplify__format_call__parse_string_format__V_201_201;

#line 50 "parse_string_format.m"
                        {
#line 50 "parse_string_format.m"
                          check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&check_hlds__simplify__format_call__parse_string_format__V_201_201, check_hlds__simplify__format_call__parse_string_format__V_405_405, check_hlds__simplify__format_call__parse_string_format__V_196_196);
                        }
#line 2085 "check_hlds.simplify.format_call.parse_string_format.c"
                        check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_201_201 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_201_201;
#line 50 "parse_string_format.m"
                        else
#line 50 "parse_string_format.m"
                          {
#line 50 "parse_string_format.m"
                            {
#line 50 "parse_string_format.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_404_404)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_197_197)));
#line 50 "parse_string_format.m"
                              return;
                            }
#line 50 "parse_string_format.m"
                          }
#line 50 "parse_string_format.m"
                      }
#line 50 "parse_string_format.m"
                  }
#line 50 "parse_string_format.m"
              }
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
        else
#line 2116 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 6)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));

#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2139 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2145 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2151 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2157 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2163 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "parse_string_format.m"
        else
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 5)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 6)));
#line 50 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_276_276;

#line 50 "parse_string_format.m"
            {
#line 50 "parse_string_format.m"
              mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_276_276, check_hlds__simplify__format_call__parse_string_format__V_419_419, check_hlds__simplify__format_call__parse_string_format__V_270_270);
            }
#line 2189 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_276_276 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_276_276;
#line 50 "parse_string_format.m"
            else
#line 50 "parse_string_format.m"
              {
#line 50 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_277_277;

#line 50 "parse_string_format.m"
                {
#line 50 "parse_string_format.m"
                  mercury__string__parse_util____Compare____string_format_flags_0_0(&check_hlds__simplify__format_call__parse_string_format__V_277_277, check_hlds__simplify__format_call__parse_string_format__V_418_418, check_hlds__simplify__format_call__parse_string_format__V_271_271);
                }
#line 2209 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_277_277 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                  *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_277_277;
#line 50 "parse_string_format.m"
                else
#line 50 "parse_string_format.m"
                  {
#line 50 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_278_278;

#line 50 "parse_string_format.m"
                    {
#line 50 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__V_278_278, check_hlds__simplify__format_call__parse_string_format__V_417_417, check_hlds__simplify__format_call__parse_string_format__V_272_272);
                    }
#line 2229 "check_hlds.simplify.format_call.parse_string_format.c"
                    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_278_278 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_278_278;
#line 50 "parse_string_format.m"
                    else
#line 50 "parse_string_format.m"
                      {
#line 50 "parse_string_format.m"
                        MR_Word check_hlds__simplify__format_call__parse_string_format__V_279_279;

#line 50 "parse_string_format.m"
                        {
#line 50 "parse_string_format.m"
                          check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&check_hlds__simplify__format_call__parse_string_format__V_279_279, check_hlds__simplify__format_call__parse_string_format__V_416_416, check_hlds__simplify__format_call__parse_string_format__V_273_273);
                        }
#line 2249 "check_hlds.simplify.format_call.parse_string_format.c"
                        check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_279_279 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_279_279;
#line 50 "parse_string_format.m"
                        else
#line 50 "parse_string_format.m"
                          {
#line 50 "parse_string_format.m"
                            MR_Word check_hlds__simplify__format_call__parse_string_format__V_280_280;
#line 50 "parse_string_format.m"
                            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_422_422 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__V_415_415;
#line 50 "parse_string_format.m"
                            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_423_423 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__V_274_274;

#line 50 "parse_string_format.m"
                            {
#line 50 "parse_string_format.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__parse_string_format__V_280_280, check_hlds__simplify__format_call__parse_string_format__V_422_422, check_hlds__simplify__format_call__parse_string_format__V_423_423);
                            }
#line 2273 "check_hlds.simplify.format_call.parse_string_format.c"
                            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_280_280 == (MR_Integer) 0);
#line 50 "parse_string_format.m"
                            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 50 "parse_string_format.m"
                            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_280_280;
#line 50 "parse_string_format.m"
                            else
#line 50 "parse_string_format.m"
                              {
#line 50 "parse_string_format.m"
                                {
#line 50 "parse_string_format.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_414_414)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_275_275)));
#line 50 "parse_string_format.m"
                                  return;
                                }
#line 50 "parse_string_format.m"
                              }
#line 50 "parse_string_format.m"
                          }
#line 50 "parse_string_format.m"
                      }
#line 50 "parse_string_format.m"
                  }
#line 50 "parse_string_format.m"
              }
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
  }
#line 50 "parse_string_format.m"
}

#line 50 "parse_string_format.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0(
#line 50 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 50 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)
#line 50 "parse_string_format.m"
{
#line 50 "parse_string_format.m"
  {
#line 50 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 50 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_59 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 50 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_60 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 50 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_59 == check_hlds__simplify__format_call__parse_string_format__CastY_60);
#line 50 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 50 "parse_string_format.m"
        MR_String check_hlds__simplify__format_call__parse_string_format__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_5_5;
#line 50 "parse_string_format.m"
        MR_String check_hlds__simplify__format_call__parse_string_format__V_6_6;

#line 50 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 50 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 2360 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 2362 "check_hlds.simplify.format_call.parse_string_format.c"
              check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_3_3, check_hlds__simplify__format_call__parse_string_format__V_5_5);
            }
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 2367 "check_hlds.simplify.format_call.parse_string_format.c"
              check_hlds__simplify__format_call__parse_string_format__succeeded = (strcmp(check_hlds__simplify__format_call__parse_string_format__V_4_4, check_hlds__simplify__format_call__parse_string_format__V_6_6) == 0);
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_64_64;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_11_11;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_12_12;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_13_13;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_14_14;

#line 50 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 50 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 2412 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 2414 "check_hlds.simplify.format_call.parse_string_format.c"
              check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_7_7, check_hlds__simplify__format_call__parse_string_format__V_11_11);
            }
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
              {
#line 2421 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 2423 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(check_hlds__simplify__format_call__parse_string_format__V_8_8, check_hlds__simplify__format_call__parse_string_format__V_12_12);
                }
#line 50 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                  {
#line 2430 "check_hlds.simplify.format_call.parse_string_format.c"
                    {
#line 2432 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(check_hlds__simplify__format_call__parse_string_format__V_9_9, check_hlds__simplify__format_call__parse_string_format__V_13_13);
                    }
#line 50 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                      {
#line 2439 "check_hlds.simplify.format_call.parse_string_format.c"
                        check_hlds__simplify__format_call__parse_string_format__TypeInfo_64_64 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 2441 "check_hlds.simplify.format_call.parse_string_format.c"
                        {
#line 2443 "check_hlds.simplify.format_call.parse_string_format.c"
                          return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_64_64, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_10_10)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_14_14)));
                        }
#line 50 "parse_string_format.m"
                      }
#line 50 "parse_string_format.m"
                  }
#line 50 "parse_string_format.m"
              }
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_73_73;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_20_20;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_21_21;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_22_22;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_23_23;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_24_24;

#line 50 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 50 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 2501 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 2503 "check_hlds.simplify.format_call.parse_string_format.c"
              check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_15_15, check_hlds__simplify__format_call__parse_string_format__V_20_20);
            }
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
              {
#line 2510 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 2512 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(check_hlds__simplify__format_call__parse_string_format__V_16_16, check_hlds__simplify__format_call__parse_string_format__V_21_21);
                }
#line 50 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                  {
#line 2519 "check_hlds.simplify.format_call.parse_string_format.c"
                    {
#line 2521 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(check_hlds__simplify__format_call__parse_string_format__V_17_17, check_hlds__simplify__format_call__parse_string_format__V_22_22);
                    }
#line 50 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                      {
#line 2528 "check_hlds.simplify.format_call.parse_string_format.c"
                        {
#line 2530 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(check_hlds__simplify__format_call__parse_string_format__V_18_18, check_hlds__simplify__format_call__parse_string_format__V_23_23);
                        }
#line 50 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                          {
#line 2537 "check_hlds.simplify.format_call.parse_string_format.c"
                            check_hlds__simplify__format_call__parse_string_format__TypeInfo_73_73 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 2539 "check_hlds.simplify.format_call.parse_string_format.c"
                            {
#line 2541 "check_hlds.simplify.format_call.parse_string_format.c"
                              return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_73_73, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_19_19)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_24_24)));
                            }
#line 50 "parse_string_format.m"
                          }
#line 50 "parse_string_format.m"
                      }
#line 50 "parse_string_format.m"
                  }
#line 50 "parse_string_format.m"
              }
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
    if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_67_67;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 5)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 6)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_53_53;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_54_54;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_55_55;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_56_56;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_57_57;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_58_58;

#line 50 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 50 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 6)));
#line 2607 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 2609 "check_hlds.simplify.format_call.parse_string_format.c"
              check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_47_47, check_hlds__simplify__format_call__parse_string_format__V_53_53);
            }
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
              {
#line 2616 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 2618 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(check_hlds__simplify__format_call__parse_string_format__V_48_48, check_hlds__simplify__format_call__parse_string_format__V_54_54);
                }
#line 50 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                  {
#line 2625 "check_hlds.simplify.format_call.parse_string_format.c"
                    {
#line 2627 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(check_hlds__simplify__format_call__parse_string_format__V_49_49, check_hlds__simplify__format_call__parse_string_format__V_55_55);
                    }
#line 50 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                      {
#line 2634 "check_hlds.simplify.format_call.parse_string_format.c"
                        {
#line 2636 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(check_hlds__simplify__format_call__parse_string_format__V_50_50, check_hlds__simplify__format_call__parse_string_format__V_56_56);
                        }
#line 50 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                          {
#line 2643 "check_hlds.simplify.format_call.parse_string_format.c"
                            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_51_51 == check_hlds__simplify__format_call__parse_string_format__V_57_57);
#line 50 "parse_string_format.m"
                            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                              {
#line 2649 "check_hlds.simplify.format_call.parse_string_format.c"
                                check_hlds__simplify__format_call__parse_string_format__TypeInfo_67_67 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 2651 "check_hlds.simplify.format_call.parse_string_format.c"
                                {
#line 2653 "check_hlds.simplify.format_call.parse_string_format.c"
                                  return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_67_67, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_52_52)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_58_58)));
                                }
#line 50 "parse_string_format.m"
                              }
#line 50 "parse_string_format.m"
                          }
#line 50 "parse_string_format.m"
                      }
#line 50 "parse_string_format.m"
                  }
#line 50 "parse_string_format.m"
              }
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
    if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_70_70;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 5)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_30_30;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_31_31;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_32_32;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_33_33;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_34_34;

#line 50 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 50 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 2715 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 2717 "check_hlds.simplify.format_call.parse_string_format.c"
              check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_25_25, check_hlds__simplify__format_call__parse_string_format__V_30_30);
            }
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
              {
#line 2724 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 2726 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(check_hlds__simplify__format_call__parse_string_format__V_26_26, check_hlds__simplify__format_call__parse_string_format__V_31_31);
                }
#line 50 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                  {
#line 2733 "check_hlds.simplify.format_call.parse_string_format.c"
                    {
#line 2735 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(check_hlds__simplify__format_call__parse_string_format__V_27_27, check_hlds__simplify__format_call__parse_string_format__V_32_32);
                    }
#line 50 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                      {
#line 2742 "check_hlds.simplify.format_call.parse_string_format.c"
                        {
#line 2744 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(check_hlds__simplify__format_call__parse_string_format__V_28_28, check_hlds__simplify__format_call__parse_string_format__V_33_33);
                        }
#line 50 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                          {
#line 2751 "check_hlds.simplify.format_call.parse_string_format.c"
                            check_hlds__simplify__format_call__parse_string_format__TypeInfo_70_70 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 2753 "check_hlds.simplify.format_call.parse_string_format.c"
                            {
#line 2755 "check_hlds.simplify.format_call.parse_string_format.c"
                              return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_70_70, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_29_29)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_34_34)));
                            }
#line 50 "parse_string_format.m"
                          }
#line 50 "parse_string_format.m"
                      }
#line 50 "parse_string_format.m"
                  }
#line 50 "parse_string_format.m"
              }
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
    else
#line 50 "parse_string_format.m"
      {
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_76_76;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 5)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 6)));
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_41_41;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_42_42;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_43_43;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_44_44;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_45_45;
#line 50 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_46_46;

#line 50 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 50 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
          {
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 50 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 6)));
#line 2819 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 2821 "check_hlds.simplify.format_call.parse_string_format.c"
              check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_35_35, check_hlds__simplify__format_call__parse_string_format__V_41_41);
            }
#line 50 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
              {
#line 2828 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 2830 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(check_hlds__simplify__format_call__parse_string_format__V_36_36, check_hlds__simplify__format_call__parse_string_format__V_42_42);
                }
#line 50 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                  {
#line 2837 "check_hlds.simplify.format_call.parse_string_format.c"
                    {
#line 2839 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(check_hlds__simplify__format_call__parse_string_format__V_37_37, check_hlds__simplify__format_call__parse_string_format__V_43_43);
                    }
#line 50 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                      {
#line 2846 "check_hlds.simplify.format_call.parse_string_format.c"
                        {
#line 2848 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(check_hlds__simplify__format_call__parse_string_format__V_38_38, check_hlds__simplify__format_call__parse_string_format__V_44_44);
                        }
#line 50 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                          {
#line 2855 "check_hlds.simplify.format_call.parse_string_format.c"
                            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_39_39 == check_hlds__simplify__format_call__parse_string_format__V_45_45);
#line 50 "parse_string_format.m"
                            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 50 "parse_string_format.m"
                              {
#line 2861 "check_hlds.simplify.format_call.parse_string_format.c"
                                check_hlds__simplify__format_call__parse_string_format__TypeInfo_76_76 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 2863 "check_hlds.simplify.format_call.parse_string_format.c"
                                {
#line 2865 "check_hlds.simplify.format_call.parse_string_format.c"
                                  return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_76_76, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_40_40)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_46_46)));
                                }
#line 50 "parse_string_format.m"
                              }
#line 50 "parse_string_format.m"
                          }
#line 50 "parse_string_format.m"
                      }
#line 50 "parse_string_format.m"
                  }
#line 50 "parse_string_format.m"
              }
#line 50 "parse_string_format.m"
          }
#line 50 "parse_string_format.m"
      }
#line 50 "parse_string_format.m"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 50 "parse_string_format.m"
  }
#line 50 "parse_string_format.m"
}

#line 40 "parse_string_format.m"
void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(
#line 40 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 40 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2,
#line 40 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)
#line 40 "parse_string_format.m"
{
#line 40 "parse_string_format.m"
  {
#line 40 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 40 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_16 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;
#line 40 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_17 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3;

#line 40 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_16 == check_hlds__simplify__format_call__parse_string_format__CastY_17);
#line 40 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 2913 "check_hlds.simplify.format_call.parse_string_format.c"
      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "parse_string_format.m"
    else
#line 40 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "parse_string_format.m"
      if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "parse_string_format.m"
      else
#line 40 "parse_string_format.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2927 "check_hlds.simplify.format_call.parse_string_format.c"
        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "parse_string_format.m"
      else
#line 2931 "check_hlds.simplify.format_call.parse_string_format.c"
        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "parse_string_format.m"
    else
#line 40 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 40 "parse_string_format.m"
      {
#line 40 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2944 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "parse_string_format.m"
        else
#line 40 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 40 "parse_string_format.m"
          {
#line 40 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));

#line 40 "parse_string_format.m"
            {
#line 40 "parse_string_format.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_20_20, check_hlds__simplify__format_call__parse_string_format__V_8_8);
#line 40 "parse_string_format.m"
              return;
            }
#line 40 "parse_string_format.m"
          }
#line 40 "parse_string_format.m"
        else
#line 2966 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "parse_string_format.m"
      }
#line 40 "parse_string_format.m"
    else
#line 40 "parse_string_format.m"
      {
#line 40 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2979 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "parse_string_format.m"
        else
#line 40 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2985 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "parse_string_format.m"
        else
#line 40 "parse_string_format.m"
          {
#line 40 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));

#line 40 "parse_string_format.m"
            {
#line 40 "parse_string_format.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_21_21)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_15_15)));
#line 40 "parse_string_format.m"
              return;
            }
#line 40 "parse_string_format.m"
          }
#line 40 "parse_string_format.m"
      }
#line 40 "parse_string_format.m"
  }
#line 40 "parse_string_format.m"
}

#line 40 "parse_string_format.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(
#line 40 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 40 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)
#line 40 "parse_string_format.m"
{
#line 40 "parse_string_format.m"
  {
#line 40 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 40 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 40 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 40 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_9 == check_hlds__simplify__format_call__parse_string_format__CastY_10);
#line 40 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 40 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 40 "parse_string_format.m"
    else
#line 40 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "parse_string_format.m"
      {
#line 40 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_3 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 40 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_4 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 40 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastY_4 == check_hlds__simplify__format_call__parse_string_format__CastX_3);
#line 40 "parse_string_format.m"
      }
#line 40 "parse_string_format.m"
    else
#line 40 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 40 "parse_string_format.m"
      {
#line 40 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__V_6_6;

#line 40 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 40 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 40 "parse_string_format.m"
          {
#line 40 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 3068 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_5_5 == check_hlds__simplify__format_call__parse_string_format__V_6_6);
#line 40 "parse_string_format.m"
          }
#line 40 "parse_string_format.m"
      }
#line 40 "parse_string_format.m"
    else
#line 40 "parse_string_format.m"
      {
#line 40 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11;
#line 40 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8;

#line 40 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 40 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 40 "parse_string_format.m"
          {
#line 40 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 3093 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 3095 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 3097 "check_hlds.simplify.format_call.parse_string_format.c"
              return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_7_7)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_8_8)));
            }
#line 40 "parse_string_format.m"
          }
#line 40 "parse_string_format.m"
      }
#line 40 "parse_string_format.m"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 40 "parse_string_format.m"
  }
#line 40 "parse_string_format.m"
}

#line 45 "parse_string_format.m"
void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(
#line 45 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 45 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2,
#line 45 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)
#line 45 "parse_string_format.m"
{
#line 45 "parse_string_format.m"
  {
#line 45 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 45 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_16 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;
#line 45 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_17 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3;

#line 45 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_16 == check_hlds__simplify__format_call__parse_string_format__CastY_17);
#line 45 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 3135 "check_hlds.simplify.format_call.parse_string_format.c"
      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "parse_string_format.m"
    else
#line 45 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 45 "parse_string_format.m"
      if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 45 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "parse_string_format.m"
      else
#line 45 "parse_string_format.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3149 "check_hlds.simplify.format_call.parse_string_format.c"
        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "parse_string_format.m"
      else
#line 3153 "check_hlds.simplify.format_call.parse_string_format.c"
        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "parse_string_format.m"
    else
#line 45 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 45 "parse_string_format.m"
      {
#line 45 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 45 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3166 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "parse_string_format.m"
        else
#line 45 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 45 "parse_string_format.m"
          {
#line 45 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));

#line 45 "parse_string_format.m"
            {
#line 45 "parse_string_format.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_20_20, check_hlds__simplify__format_call__parse_string_format__V_8_8);
#line 45 "parse_string_format.m"
              return;
            }
#line 45 "parse_string_format.m"
          }
#line 45 "parse_string_format.m"
        else
#line 3188 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "parse_string_format.m"
      }
#line 45 "parse_string_format.m"
    else
#line 45 "parse_string_format.m"
      {
#line 45 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 45 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3201 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "parse_string_format.m"
        else
#line 45 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3207 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "parse_string_format.m"
        else
#line 45 "parse_string_format.m"
          {
#line 45 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));

#line 45 "parse_string_format.m"
            {
#line 45 "parse_string_format.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_21_21)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_15_15)));
#line 45 "parse_string_format.m"
              return;
            }
#line 45 "parse_string_format.m"
          }
#line 45 "parse_string_format.m"
      }
#line 45 "parse_string_format.m"
  }
#line 45 "parse_string_format.m"
}

#line 45 "parse_string_format.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(
#line 45 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 45 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)
#line 45 "parse_string_format.m"
{
#line 45 "parse_string_format.m"
  {
#line 45 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 45 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 45 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 45 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_9 == check_hlds__simplify__format_call__parse_string_format__CastY_10);
#line 45 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 45 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 45 "parse_string_format.m"
    else
#line 45 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 45 "parse_string_format.m"
      {
#line 45 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_3 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 45 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_4 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 45 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastY_4 == check_hlds__simplify__format_call__parse_string_format__CastX_3);
#line 45 "parse_string_format.m"
      }
#line 45 "parse_string_format.m"
    else
#line 45 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 45 "parse_string_format.m"
      {
#line 45 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 45 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__V_6_6;

#line 45 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 45 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 45 "parse_string_format.m"
          {
#line 45 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 3290 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_5_5 == check_hlds__simplify__format_call__parse_string_format__V_6_6);
#line 45 "parse_string_format.m"
          }
#line 45 "parse_string_format.m"
      }
#line 45 "parse_string_format.m"
    else
#line 45 "parse_string_format.m"
      {
#line 45 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11;
#line 45 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 45 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8;

#line 45 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 45 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 45 "parse_string_format.m"
          {
#line 45 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 3315 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 3317 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 3319 "check_hlds.simplify.format_call.parse_string_format.c"
              return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_7_7)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_8_8)));
            }
#line 45 "parse_string_format.m"
          }
#line 45 "parse_string_format.m"
      }
#line 45 "parse_string_format.m"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 45 "parse_string_format.m"
  }
#line 45 "parse_string_format.m"
}

#line 34 "parse_string_format.m"
void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0(
#line 34 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 34 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2,
#line 34 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)
#line 34 "parse_string_format.m"
{
#line 34 "parse_string_format.m"
  {
#line 34 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 34 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_72 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;
#line 34 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_73 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3;

#line 34 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_72 == check_hlds__simplify__format_call__parse_string_format__CastY_73);
#line 34 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 3357 "check_hlds.simplify.format_call.parse_string_format.c"
      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 34 "parse_string_format.m"
    else
#line 34 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 34 "parse_string_format.m"
      {
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 34 "parse_string_format.m"
          {
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_71_71;

#line 34 "parse_string_format.m"
            {
#line 34 "parse_string_format.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &check_hlds__simplify__format_call__parse_string_format__V_71_71, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_83_83)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_69_69)));
            }
#line 3386 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_71_71 == (MR_Integer) 0);
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 34 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 34 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_71_71;
#line 34 "parse_string_format.m"
            else
#line 34 "parse_string_format.m"
              {
#line 34 "parse_string_format.m"
                mercury__term____Compare____context_0_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_82_82, check_hlds__simplify__format_call__parse_string_format__V_70_70);
#line 34 "parse_string_format.m"
                return;
              }
#line 34 "parse_string_format.m"
          }
#line 34 "parse_string_format.m"
        else
#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3409 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "parse_string_format.m"
        else
#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3415 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "parse_string_format.m"
        else
#line 3419 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "parse_string_format.m"
      }
#line 34 "parse_string_format.m"
    else
#line 34 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 34 "parse_string_format.m"
      {
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3436 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "parse_string_format.m"
        else
#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 34 "parse_string_format.m"
          {
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8;

#line 34 "parse_string_format.m"
            {
#line 34 "parse_string_format.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &check_hlds__simplify__format_call__parse_string_format__V_8_8, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_85_85)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_6_6)));
            }
#line 3456 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_8_8 == (MR_Integer) 0);
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 34 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 34 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_8_8;
#line 34 "parse_string_format.m"
            else
#line 34 "parse_string_format.m"
              {
#line 34 "parse_string_format.m"
                mercury__term____Compare____context_0_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_84_84, check_hlds__simplify__format_call__parse_string_format__V_7_7);
#line 34 "parse_string_format.m"
                return;
              }
#line 34 "parse_string_format.m"
          }
#line 34 "parse_string_format.m"
        else
#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3479 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "parse_string_format.m"
        else
#line 3483 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "parse_string_format.m"
      }
#line 34 "parse_string_format.m"
    else
#line 34 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 34 "parse_string_format.m"
      {
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3500 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "parse_string_format.m"
        else
#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3506 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "parse_string_format.m"
        else
#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 34 "parse_string_format.m"
          {
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_29_29;

#line 34 "parse_string_format.m"
            {
#line 34 "parse_string_format.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &check_hlds__simplify__format_call__parse_string_format__V_29_29, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_87_87)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_27_27)));
            }
#line 3526 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_29_29 == (MR_Integer) 0);
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 34 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 34 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_29_29;
#line 34 "parse_string_format.m"
            else
#line 34 "parse_string_format.m"
              {
#line 34 "parse_string_format.m"
                mercury__term____Compare____context_0_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_86_86, check_hlds__simplify__format_call__parse_string_format__V_28_28);
#line 34 "parse_string_format.m"
                return;
              }
#line 34 "parse_string_format.m"
          }
#line 34 "parse_string_format.m"
        else
#line 3547 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "parse_string_format.m"
      }
#line 34 "parse_string_format.m"
    else
#line 34 "parse_string_format.m"
      {
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3562 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "parse_string_format.m"
        else
#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3568 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "parse_string_format.m"
        else
#line 34 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3574 "check_hlds.simplify.format_call.parse_string_format.c"
          *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "parse_string_format.m"
        else
#line 34 "parse_string_format.m"
          {
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_50_50;

#line 34 "parse_string_format.m"
            {
#line 34 "parse_string_format.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &check_hlds__simplify__format_call__parse_string_format__V_50_50, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_89_89)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_48_48)));
            }
#line 3592 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_50_50 == (MR_Integer) 0);
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 34 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 34 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_50_50;
#line 34 "parse_string_format.m"
            else
#line 34 "parse_string_format.m"
              {
#line 34 "parse_string_format.m"
                mercury__term____Compare____context_0_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_88_88, check_hlds__simplify__format_call__parse_string_format__V_49_49);
#line 34 "parse_string_format.m"
                return;
              }
#line 34 "parse_string_format.m"
          }
#line 34 "parse_string_format.m"
      }
#line 34 "parse_string_format.m"
  }
#line 34 "parse_string_format.m"
}

#line 34 "parse_string_format.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0(
#line 34 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 34 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)
#line 34 "parse_string_format.m"
{
#line 34 "parse_string_format.m"
  {
#line 34 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 34 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_19 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 34 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_20 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 34 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_19 == check_hlds__simplify__format_call__parse_string_format__CastY_20);
#line 34 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 34 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 34 "parse_string_format.m"
    else
#line 34 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 34 "parse_string_format.m"
      {
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_21_21;
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_17_17;
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_18_18;

#line 34 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 34 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 34 "parse_string_format.m"
          {
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 3669 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 3671 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 3673 "check_hlds.simplify.format_call.parse_string_format.c"
              check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_21_21, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_15_15)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_17_17)));
            }
#line 34 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 3678 "check_hlds.simplify.format_call.parse_string_format.c"
              {
#line 3680 "check_hlds.simplify.format_call.parse_string_format.c"
                return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_16_16, check_hlds__simplify__format_call__parse_string_format__V_18_18);
              }
#line 34 "parse_string_format.m"
          }
#line 34 "parse_string_format.m"
      }
#line 34 "parse_string_format.m"
    else
#line 34 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 34 "parse_string_format.m"
      {
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_23_23;
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_5_5;
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_6_6;

#line 34 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 34 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 34 "parse_string_format.m"
          {
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 3714 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__TypeInfo_23_23 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 3716 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 3718 "check_hlds.simplify.format_call.parse_string_format.c"
              check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_23_23, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_3_3)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_5_5)));
            }
#line 34 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 3723 "check_hlds.simplify.format_call.parse_string_format.c"
              {
#line 3725 "check_hlds.simplify.format_call.parse_string_format.c"
                return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_4_4, check_hlds__simplify__format_call__parse_string_format__V_6_6);
              }
#line 34 "parse_string_format.m"
          }
#line 34 "parse_string_format.m"
      }
#line 34 "parse_string_format.m"
    else
#line 34 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 34 "parse_string_format.m"
      {
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_25_25;
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_9_9;
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_10_10;

#line 34 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 34 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 34 "parse_string_format.m"
          {
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 3759 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__TypeInfo_25_25 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 3761 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 3763 "check_hlds.simplify.format_call.parse_string_format.c"
              check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_25_25, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_7_7)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_9_9)));
            }
#line 34 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 3768 "check_hlds.simplify.format_call.parse_string_format.c"
              {
#line 3770 "check_hlds.simplify.format_call.parse_string_format.c"
                return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_8_8, check_hlds__simplify__format_call__parse_string_format__V_10_10);
              }
#line 34 "parse_string_format.m"
          }
#line 34 "parse_string_format.m"
      }
#line 34 "parse_string_format.m"
    else
#line 34 "parse_string_format.m"
      {
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_27_27;
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_13_13;
#line 34 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_14_14;

#line 34 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 34 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 34 "parse_string_format.m"
          {
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 3802 "check_hlds.simplify.format_call.parse_string_format.c"
            check_hlds__simplify__format_call__parse_string_format__TypeInfo_27_27 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 3804 "check_hlds.simplify.format_call.parse_string_format.c"
            {
#line 3806 "check_hlds.simplify.format_call.parse_string_format.c"
              check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_27_27, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_11_11)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_13_13)));
            }
#line 34 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 3811 "check_hlds.simplify.format_call.parse_string_format.c"
              {
#line 3813 "check_hlds.simplify.format_call.parse_string_format.c"
                return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_12_12, check_hlds__simplify__format_call__parse_string_format__V_14_14);
              }
#line 34 "parse_string_format.m"
          }
#line 34 "parse_string_format.m"
      }
#line 34 "parse_string_format.m"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 34 "parse_string_format.m"
  }
#line 34 "parse_string_format.m"
}

#line 495 "parse_string_format.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(
#line 495 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)
#line 495 "parse_string_format.m"
{
#line 497 "parse_string_format.m"
  {
#line 497 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 497 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 497 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 497 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = (MR_Integer) 0;
#line 497 "parse_string_format.m"
    else
#line 497 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 500 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = (MR_Integer) 3;
#line 497 "parse_string_format.m"
    else
#line 497 "parse_string_format.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 499 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = (MR_Integer) 2;
#line 497 "parse_string_format.m"
    else
#line 498 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = (MR_Integer) 1;
#line 497 "parse_string_format.m"
    return check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;
#line 497 "parse_string_format.m"
  }
#line 495 "parse_string_format.m"
}

#line 324 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_first_spec_11_p_0(
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1,
#line 324 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_2,
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3,
#line 324 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_4,
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__OverallContext_5,
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6,
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7,
#line 324 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8,
#line 324 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_9,
#line 324 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Spec_10,
#line 324 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_11)
#line 324 "parse_string_format.m"
{
#line 331 "parse_string_format.m"
  {
#line 331 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 331 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "parse_string_format.m"
      {
#line 331 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_26_26;
#line 331 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__V_27_27;

#line 333 "parse_string_format.m"
        {
#line 333 "parse_string_format.m"
          MR_Word base;
#line 333 "parse_string_format.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__Spec_10 = base;
#line 333 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 333 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_String) ""));
#line 333 "parse_string_format.m"
        }
#line 334 "parse_string_format.m"
        {
#line 334 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__V_27_27 = mercury__list__length_1_f_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3);
        }
#line 334 "parse_string_format.m"
        {
#line 334 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 334 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__V_26_26, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 334 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__V_26_26, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_27_27));
#line 334 "parse_string_format.m"
        }
#line 334 "parse_string_format.m"
        {
#line 334 "parse_string_format.m"
          MR_Word base;
#line 334 "parse_string_format.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__Errors_11 = base;
#line 334 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_26_26));
#line 334 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "parse_string_format.m"
        }
#line 330 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_4 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 330 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_2 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1;
#line 331 "parse_string_format.m"
      }
#line 331 "parse_string_format.m"
    else
#line 336 "parse_string_format.m"
      {
#line 336 "parse_string_format.m"
        MR_Char check_hlds__simplify__format_call__parse_string_format__SpecChar_38 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1, (MR_Integer) 0)));
#line 487 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPrime_39;
#line 487 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40;
#line 487 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84;

#line 337 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1, (MR_Integer) 1)));
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 37))
#line 341 "parse_string_format.m"
          {
#line 342 "parse_string_format.m"
            {
#line 342 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 342 "parse_string_format.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 342 "parse_string_format.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) "%"));
#line 342 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 341 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 341 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 341 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 69))
#line 423 "parse_string_format.m"
          {
#line 436 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "parse_string_format.m"
              {
#line 437 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_117;

#line 438 "parse_string_format.m"
                {
#line 438 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_117, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_117, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 438 "parse_string_format.m"
                }
#line 439 "parse_string_format.m"
                {
#line 439 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 439 "parse_string_format.m"
                }
#line 440 "parse_string_format.m"
                {
#line 440 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_117));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "parse_string_format.m"
                }
#line 437 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 437 "parse_string_format.m"
              }
#line 436 "parse_string_format.m"
            else
#line 425 "parse_string_format.m"
              {
#line 425 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_47;
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_112;

#line 425 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_114)) == (MR_mktag((MR_Integer) 0)));
#line 426 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 426 "parse_string_format.m"
                  {
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__FloatVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_114, (MR_Integer) 0)));
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_114, (MR_Integer) 1)));
#line 427 "parse_string_format.m"
                    {
#line 427 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_112));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 1));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_47));
#line 427 "parse_string_format.m"
                    }
#line 429 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "parse_string_format.m"
                  }
#line 426 "parse_string_format.m"
                else
#line 432 "parse_string_format.m"
                  {
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_71_71;
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_111;

#line 432 "parse_string_format.m"
                    {
#line 432 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_71_71 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_114);
                    }
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_111, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_111, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_111, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_71_71));
#line 431 "parse_string_format.m"
                    }
#line 433 "parse_string_format.m"
                    {
#line 433 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 433 "parse_string_format.m"
                    }
#line 434 "parse_string_format.m"
                    {
#line 434 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_111));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "parse_string_format.m"
                    }
#line 432 "parse_string_format.m"
                  }
#line 425 "parse_string_format.m"
              }
#line 423 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 423 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 70))
#line 423 "parse_string_format.m"
          {
#line 436 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "parse_string_format.m"
              {
#line 437 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_170;

#line 438 "parse_string_format.m"
                {
#line 438 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_170, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_170, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 438 "parse_string_format.m"
                }
#line 439 "parse_string_format.m"
                {
#line 439 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 439 "parse_string_format.m"
                }
#line 440 "parse_string_format.m"
                {
#line 440 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_170));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "parse_string_format.m"
                }
#line 437 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 437 "parse_string_format.m"
              }
#line 436 "parse_string_format.m"
            else
#line 425 "parse_string_format.m"
              {
#line 425 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_175;
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_180;

#line 425 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_187)) == (MR_mktag((MR_Integer) 0)));
#line 426 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 426 "parse_string_format.m"
                  {
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__FloatVar_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_187, (MR_Integer) 0)));
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_187, (MR_Integer) 1)));
#line 427 "parse_string_format.m"
                    {
#line 427 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_180));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 3));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_175));
#line 427 "parse_string_format.m"
                    }
#line 429 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "parse_string_format.m"
                  }
#line 426 "parse_string_format.m"
                else
#line 432 "parse_string_format.m"
                  {
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_171_171;
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_174;

#line 432 "parse_string_format.m"
                    {
#line 432 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_171_171 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_187);
                    }
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_174 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_174, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_174, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_174, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_171_171));
#line 431 "parse_string_format.m"
                    }
#line 433 "parse_string_format.m"
                    {
#line 433 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 433 "parse_string_format.m"
                    }
#line 434 "parse_string_format.m"
                    {
#line 434 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_174));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "parse_string_format.m"
                    }
#line 432 "parse_string_format.m"
                  }
#line 425 "parse_string_format.m"
              }
#line 423 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 423 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 71))
#line 423 "parse_string_format.m"
          {
#line 436 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "parse_string_format.m"
              {
#line 437 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_213;

#line 438 "parse_string_format.m"
                {
#line 438 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_213, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_213, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 438 "parse_string_format.m"
                }
#line 439 "parse_string_format.m"
                {
#line 439 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 439 "parse_string_format.m"
                }
#line 440 "parse_string_format.m"
                {
#line 440 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_213));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "parse_string_format.m"
                }
#line 437 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 437 "parse_string_format.m"
              }
#line 436 "parse_string_format.m"
            else
#line 425 "parse_string_format.m"
              {
#line 425 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_218;
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_223;

#line 425 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_230)) == (MR_mktag((MR_Integer) 0)));
#line 426 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 426 "parse_string_format.m"
                  {
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__FloatVar_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_230, (MR_Integer) 0)));
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_230, (MR_Integer) 1)));
#line 427 "parse_string_format.m"
                    {
#line 427 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_223));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 5));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_218));
#line 427 "parse_string_format.m"
                    }
#line 429 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "parse_string_format.m"
                  }
#line 426 "parse_string_format.m"
                else
#line 432 "parse_string_format.m"
                  {
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_214_214;
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_217;

#line 432 "parse_string_format.m"
                    {
#line 432 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_214_214 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_230);
                    }
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_217 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_217, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_217, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_217, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_214_214));
#line 431 "parse_string_format.m"
                    }
#line 433 "parse_string_format.m"
                    {
#line 433 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 433 "parse_string_format.m"
                    }
#line 434 "parse_string_format.m"
                    {
#line 434 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_217));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "parse_string_format.m"
                    }
#line 432 "parse_string_format.m"
                  }
#line 425 "parse_string_format.m"
              }
#line 423 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 423 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 88))
#line 385 "parse_string_format.m"
          {
#line 398 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "parse_string_format.m"
              {
#line 399 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_102;

#line 400 "parse_string_format.m"
                {
#line 400 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_102, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_102, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 400 "parse_string_format.m"
                }
#line 401 "parse_string_format.m"
                {
#line 401 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 401 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 401 "parse_string_format.m"
                }
#line 402 "parse_string_format.m"
                {
#line 402 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_102));
#line 402 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "parse_string_format.m"
                }
#line 399 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 399 "parse_string_format.m"
              }
#line 398 "parse_string_format.m"
            else
#line 387 "parse_string_format.m"
              {
#line 387 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 392 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_95;
#line 392 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_96;

#line 387 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 388 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_98)) == (MR_mktag((MR_Integer) 1)));
#line 388 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 388 "parse_string_format.m"
                  {
#line 388 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__IntVar_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_98, (MR_Integer) 0)));
#line 388 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_98, (MR_Integer) 1)));
#line 389 "parse_string_format.m"
                    {
#line 389 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_96));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 3));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_95));
#line 389 "parse_string_format.m"
                    }
#line 391 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "parse_string_format.m"
                  }
#line 388 "parse_string_format.m"
                else
#line 394 "parse_string_format.m"
                  {
#line 394 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_79_79;
#line 394 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_94;

#line 394 "parse_string_format.m"
                    {
#line 394 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_79_79 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_98);
                    }
#line 393 "parse_string_format.m"
                    {
#line 393 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_94, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_94, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_94, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_79_79));
#line 393 "parse_string_format.m"
                    }
#line 395 "parse_string_format.m"
                    {
#line 395 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 395 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 395 "parse_string_format.m"
                    }
#line 396 "parse_string_format.m"
                    {
#line 396 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_94));
#line 396 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "parse_string_format.m"
                    }
#line 394 "parse_string_format.m"
                  }
#line 387 "parse_string_format.m"
              }
#line 385 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 385 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 99))
#line 457 "parse_string_format.m"
          {
#line 457 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 458 "parse_string_format.m"
              {
#line 458 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_130;

#line 459 "parse_string_format.m"
                {
#line 459 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 459 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 459 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_130, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 459 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_130, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 459 "parse_string_format.m"
                }
#line 460 "parse_string_format.m"
                {
#line 460 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 460 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 460 "parse_string_format.m"
                }
#line 461 "parse_string_format.m"
                {
#line 461 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_130));
#line 461 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "parse_string_format.m"
                }
#line 458 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 458 "parse_string_format.m"
              }
#line 457 "parse_string_format.m"
            else
#line 445 "parse_string_format.m"
              {
#line 445 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 451 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__CharVar_48;
#line 451 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_125;

#line 445 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 446 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_127)) == (MR_mktag((MR_Integer) 3)));
#line 446 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 446 "parse_string_format.m"
                  {
#line 446 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__CharVar_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_127, (MR_Integer) 0)));
#line 446 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_127, (MR_Integer) 1)));
#line 448 "parse_string_format.m"
                    {
#line 448 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 448 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_125));
#line 448 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 448 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 448 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__CharVar_48));
#line 448 "parse_string_format.m"
                    }
#line 450 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 446 "parse_string_format.m"
                  }
#line 446 "parse_string_format.m"
                else
#line 453 "parse_string_format.m"
                  {
#line 453 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_65_65;
#line 453 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_124;

#line 453 "parse_string_format.m"
                    {
#line 453 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_65_65 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_127);
                    }
#line 452 "parse_string_format.m"
                    {
#line 452 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 452 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_124, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 452 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_124, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 452 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_124, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_65_65));
#line 452 "parse_string_format.m"
                    }
#line 454 "parse_string_format.m"
                    {
#line 454 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 454 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 454 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 454 "parse_string_format.m"
                    }
#line 455 "parse_string_format.m"
                    {
#line 455 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_124));
#line 455 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "parse_string_format.m"
                    }
#line 453 "parse_string_format.m"
                  }
#line 445 "parse_string_format.m"
              }
#line 457 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 457 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 101))
#line 423 "parse_string_format.m"
          {
#line 436 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "parse_string_format.m"
              {
#line 437 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_256;

#line 438 "parse_string_format.m"
                {
#line 438 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_256 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_256, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_256, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_256, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 438 "parse_string_format.m"
                }
#line 439 "parse_string_format.m"
                {
#line 439 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 439 "parse_string_format.m"
                }
#line 440 "parse_string_format.m"
                {
#line 440 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_256));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "parse_string_format.m"
                }
#line 437 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 437 "parse_string_format.m"
              }
#line 436 "parse_string_format.m"
            else
#line 425 "parse_string_format.m"
              {
#line 425 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_273 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_261;
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_266;

#line 425 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_273)) == (MR_mktag((MR_Integer) 0)));
#line 426 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 426 "parse_string_format.m"
                  {
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__FloatVar_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_273, (MR_Integer) 0)));
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_273, (MR_Integer) 1)));
#line 427 "parse_string_format.m"
                    {
#line 427 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_266));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 0));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_261));
#line 427 "parse_string_format.m"
                    }
#line 429 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "parse_string_format.m"
                  }
#line 426 "parse_string_format.m"
                else
#line 432 "parse_string_format.m"
                  {
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_257_257;
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_260;

#line 432 "parse_string_format.m"
                    {
#line 432 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_257_257 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_273);
                    }
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_260 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_260, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_260, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_260, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_257_257));
#line 431 "parse_string_format.m"
                    }
#line 433 "parse_string_format.m"
                    {
#line 433 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 433 "parse_string_format.m"
                    }
#line 434 "parse_string_format.m"
                    {
#line 434 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_260));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "parse_string_format.m"
                    }
#line 432 "parse_string_format.m"
                  }
#line 425 "parse_string_format.m"
              }
#line 423 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 423 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 102))
#line 423 "parse_string_format.m"
          {
#line 436 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "parse_string_format.m"
              {
#line 437 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_299;

#line 438 "parse_string_format.m"
                {
#line 438 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_299 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_299, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_299, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_299, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 438 "parse_string_format.m"
                }
#line 439 "parse_string_format.m"
                {
#line 439 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 439 "parse_string_format.m"
                }
#line 440 "parse_string_format.m"
                {
#line 440 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_299));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "parse_string_format.m"
                }
#line 437 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 437 "parse_string_format.m"
              }
#line 436 "parse_string_format.m"
            else
#line 425 "parse_string_format.m"
              {
#line 425 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_316 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_304;
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_309;

#line 425 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_316)) == (MR_mktag((MR_Integer) 0)));
#line 426 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 426 "parse_string_format.m"
                  {
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__FloatVar_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_316, (MR_Integer) 0)));
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_316, (MR_Integer) 1)));
#line 427 "parse_string_format.m"
                    {
#line 427 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_309));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 2));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_304));
#line 427 "parse_string_format.m"
                    }
#line 429 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "parse_string_format.m"
                  }
#line 426 "parse_string_format.m"
                else
#line 432 "parse_string_format.m"
                  {
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_300_300;
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_303;

#line 432 "parse_string_format.m"
                    {
#line 432 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_300_300 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_316);
                    }
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_303 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_303, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_303, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_303, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_300_300));
#line 431 "parse_string_format.m"
                    }
#line 433 "parse_string_format.m"
                    {
#line 433 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 433 "parse_string_format.m"
                    }
#line 434 "parse_string_format.m"
                    {
#line 434 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_303));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "parse_string_format.m"
                    }
#line 432 "parse_string_format.m"
                  }
#line 425 "parse_string_format.m"
              }
#line 423 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 423 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 103))
#line 423 "parse_string_format.m"
          {
#line 436 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "parse_string_format.m"
              {
#line 437 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_342;

#line 438 "parse_string_format.m"
                {
#line 438 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_342 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_342, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_342, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 438 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_342, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 438 "parse_string_format.m"
                }
#line 439 "parse_string_format.m"
                {
#line 439 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 439 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 439 "parse_string_format.m"
                }
#line 440 "parse_string_format.m"
                {
#line 440 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_342));
#line 440 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "parse_string_format.m"
                }
#line 437 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 437 "parse_string_format.m"
              }
#line 436 "parse_string_format.m"
            else
#line 425 "parse_string_format.m"
              {
#line 425 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_359 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_347;
#line 430 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_352;

#line 425 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_359)) == (MR_mktag((MR_Integer) 0)));
#line 426 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 426 "parse_string_format.m"
                  {
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__FloatVar_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_359, (MR_Integer) 0)));
#line 426 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_359, (MR_Integer) 1)));
#line 427 "parse_string_format.m"
                    {
#line 427 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_352));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 4));
#line 427 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_347));
#line 427 "parse_string_format.m"
                    }
#line 429 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "parse_string_format.m"
                  }
#line 426 "parse_string_format.m"
                else
#line 432 "parse_string_format.m"
                  {
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_343_343;
#line 432 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_346;

#line 432 "parse_string_format.m"
                    {
#line 432 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_343_343 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_359);
                    }
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_346 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_346, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_346, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 431 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_346, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_343_343));
#line 431 "parse_string_format.m"
                    }
#line 433 "parse_string_format.m"
                    {
#line 433 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 433 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 433 "parse_string_format.m"
                    }
#line 434 "parse_string_format.m"
                    {
#line 434 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_346));
#line 434 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "parse_string_format.m"
                    }
#line 432 "parse_string_format.m"
                  }
#line 425 "parse_string_format.m"
              }
#line 423 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 423 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 111))
#line 385 "parse_string_format.m"
          {
#line 398 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "parse_string_format.m"
              {
#line 399 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_385;

#line 400 "parse_string_format.m"
                {
#line 400 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_385 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_385, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_385, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_385, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 400 "parse_string_format.m"
                }
#line 401 "parse_string_format.m"
                {
#line 401 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 401 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 401 "parse_string_format.m"
                }
#line 402 "parse_string_format.m"
                {
#line 402 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_385));
#line 402 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "parse_string_format.m"
                }
#line 399 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 399 "parse_string_format.m"
              }
#line 398 "parse_string_format.m"
            else
#line 387 "parse_string_format.m"
              {
#line 387 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_402 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 392 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_394;
#line 392 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_395;

#line 387 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 388 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_402)) == (MR_mktag((MR_Integer) 1)));
#line 388 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 388 "parse_string_format.m"
                  {
#line 388 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__IntVar_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_402, (MR_Integer) 0)));
#line 388 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_402, (MR_Integer) 1)));
#line 389 "parse_string_format.m"
                    {
#line 389 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_395));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 0));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_394));
#line 389 "parse_string_format.m"
                    }
#line 391 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "parse_string_format.m"
                  }
#line 388 "parse_string_format.m"
                else
#line 394 "parse_string_format.m"
                  {
#line 394 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_386_386;
#line 394 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_389;

#line 394 "parse_string_format.m"
                    {
#line 394 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_386_386 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_402);
                    }
#line 393 "parse_string_format.m"
                    {
#line 393 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_389 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_389, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_389, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_389, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_386_386));
#line 393 "parse_string_format.m"
                    }
#line 395 "parse_string_format.m"
                    {
#line 395 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 395 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 395 "parse_string_format.m"
                    }
#line 396 "parse_string_format.m"
                    {
#line 396 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_389));
#line 396 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "parse_string_format.m"
                    }
#line 394 "parse_string_format.m"
                  }
#line 387 "parse_string_format.m"
              }
#line 385 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 385 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 112))
#line 385 "parse_string_format.m"
          {
#line 385 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Flags_74_466;
#line 384 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 384 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_155_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 384 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_156_156 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 384 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_157_157 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 384 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_153_153 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 384 "parse_string_format.m"
            {
#line 384 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Flags_74_466 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 384 "parse_string_format.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Flags_74_466, 0) = ((MR_Box) (((MR_Integer) 1 | ((((check_hlds__simplify__format_call__parse_string_format__V_154_154 << (MR_Integer) 1)) | ((((check_hlds__simplify__format_call__parse_string_format__V_155_155 << (MR_Integer) 2)) | ((((check_hlds__simplify__format_call__parse_string_format__V_156_156 << (MR_Integer) 3)) | ((check_hlds__simplify__format_call__parse_string_format__V_157_157 << (MR_Integer) 4)))))))))));
#line 384 "parse_string_format.m"
            }
#line 398 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "parse_string_format.m"
              {
#line 399 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_427;

#line 400 "parse_string_format.m"
                {
#line 400 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_427 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_427, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_427, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_427, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 400 "parse_string_format.m"
                }
#line 401 "parse_string_format.m"
                {
#line 401 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 401 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 401 "parse_string_format.m"
                }
#line 402 "parse_string_format.m"
                {
#line 402 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_427));
#line 402 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "parse_string_format.m"
                }
#line 399 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 399 "parse_string_format.m"
              }
#line 398 "parse_string_format.m"
            else
#line 387 "parse_string_format.m"
              {
#line 387 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_444 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 392 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_436;
#line 392 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_437;

#line 387 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 388 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_444)) == (MR_mktag((MR_Integer) 1)));
#line 388 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 388 "parse_string_format.m"
                  {
#line 388 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__IntVar_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_444, (MR_Integer) 0)));
#line 388 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_437 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_444, (MR_Integer) 1)));
#line 389 "parse_string_format.m"
                    {
#line 389 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_437));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Flags_74_466));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 4));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_436));
#line 389 "parse_string_format.m"
                    }
#line 391 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "parse_string_format.m"
                  }
#line 388 "parse_string_format.m"
                else
#line 394 "parse_string_format.m"
                  {
#line 394 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_428_428;
#line 394 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_431;

#line 394 "parse_string_format.m"
                    {
#line 394 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_428_428 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_444);
                    }
#line 393 "parse_string_format.m"
                    {
#line 393 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_431 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_431, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_431, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_431, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_428_428));
#line 393 "parse_string_format.m"
                    }
#line 395 "parse_string_format.m"
                    {
#line 395 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 395 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 395 "parse_string_format.m"
                    }
#line 396 "parse_string_format.m"
                    {
#line 396 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_431));
#line 396 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "parse_string_format.m"
                    }
#line 394 "parse_string_format.m"
                  }
#line 387 "parse_string_format.m"
              }
#line 385 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 385 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 115))
#line 477 "parse_string_format.m"
          {
#line 477 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "parse_string_format.m"
              {
#line 478 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_143;

#line 479 "parse_string_format.m"
                {
#line 479 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 479 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 479 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_143, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 479 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_143, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 479 "parse_string_format.m"
                }
#line 480 "parse_string_format.m"
                {
#line 480 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 480 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 480 "parse_string_format.m"
                }
#line 481 "parse_string_format.m"
                {
#line 481 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_143));
#line 481 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "parse_string_format.m"
                }
#line 478 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 478 "parse_string_format.m"
              }
#line 477 "parse_string_format.m"
            else
#line 466 "parse_string_format.m"
              {
#line 466 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 471 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__StrVar_49;
#line 471 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_138;

#line 466 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 467 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_140)) == (MR_mktag((MR_Integer) 2)));
#line 467 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 467 "parse_string_format.m"
                  {
#line 467 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__StrVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_140, (MR_Integer) 0)));
#line 467 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_138 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_140, (MR_Integer) 1)));
#line 468 "parse_string_format.m"
                    {
#line 468 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 468 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_138));
#line 468 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 468 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 468 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 468 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__StrVar_49));
#line 468 "parse_string_format.m"
                    }
#line 470 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 467 "parse_string_format.m"
                  }
#line 467 "parse_string_format.m"
                else
#line 473 "parse_string_format.m"
                  {
#line 473 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_59_59;
#line 473 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_137;

#line 473 "parse_string_format.m"
                    {
#line 473 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_59_59 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_140);
                    }
#line 472 "parse_string_format.m"
                    {
#line 472 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_137 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 472 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_137, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 472 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_137, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 472 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_137, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_59_59));
#line 472 "parse_string_format.m"
                    }
#line 474 "parse_string_format.m"
                    {
#line 474 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 474 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 474 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 474 "parse_string_format.m"
                    }
#line 475 "parse_string_format.m"
                    {
#line 475 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_137));
#line 475 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "parse_string_format.m"
                    }
#line 473 "parse_string_format.m"
                  }
#line 466 "parse_string_format.m"
              }
#line 477 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 477 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 117))
#line 385 "parse_string_format.m"
          {
#line 398 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "parse_string_format.m"
              {
#line 399 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_469;

#line 400 "parse_string_format.m"
                {
#line 400 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_469 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_469, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_469, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_469, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 400 "parse_string_format.m"
                }
#line 401 "parse_string_format.m"
                {
#line 401 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 401 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 401 "parse_string_format.m"
                }
#line 402 "parse_string_format.m"
                {
#line 402 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_469));
#line 402 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "parse_string_format.m"
                }
#line 399 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 399 "parse_string_format.m"
              }
#line 398 "parse_string_format.m"
            else
#line 387 "parse_string_format.m"
              {
#line 387 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_486 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 392 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_478;
#line 392 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_479;

#line 387 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 388 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_486)) == (MR_mktag((MR_Integer) 1)));
#line 388 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 388 "parse_string_format.m"
                  {
#line 388 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__IntVar_478 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_486, (MR_Integer) 0)));
#line 388 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_479 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_486, (MR_Integer) 1)));
#line 389 "parse_string_format.m"
                    {
#line 389 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_479));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 1));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_478));
#line 389 "parse_string_format.m"
                    }
#line 391 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "parse_string_format.m"
                  }
#line 388 "parse_string_format.m"
                else
#line 394 "parse_string_format.m"
                  {
#line 394 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_470_470;
#line 394 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_473;

#line 394 "parse_string_format.m"
                    {
#line 394 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_470_470 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_486);
                    }
#line 393 "parse_string_format.m"
                    {
#line 393 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_473 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_473, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_473, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_473, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_470_470));
#line 393 "parse_string_format.m"
                    }
#line 395 "parse_string_format.m"
                    {
#line 395 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 395 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 395 "parse_string_format.m"
                    }
#line 396 "parse_string_format.m"
                    {
#line 396 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_473));
#line 396 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "parse_string_format.m"
                    }
#line 394 "parse_string_format.m"
                  }
#line 387 "parse_string_format.m"
              }
#line 385 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 385 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 120))
#line 385 "parse_string_format.m"
          {
#line 398 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "parse_string_format.m"
              {
#line 399 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_511;

#line 400 "parse_string_format.m"
                {
#line 400 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_511 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_511, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_511, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 400 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_511, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 400 "parse_string_format.m"
                }
#line 401 "parse_string_format.m"
                {
#line 401 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 401 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 401 "parse_string_format.m"
                }
#line 402 "parse_string_format.m"
                {
#line 402 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_511));
#line 402 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "parse_string_format.m"
                }
#line 399 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 399 "parse_string_format.m"
              }
#line 398 "parse_string_format.m"
            else
#line 387 "parse_string_format.m"
              {
#line 387 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_528 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 392 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_520;
#line 392 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_521;

#line 387 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 388 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_528)) == (MR_mktag((MR_Integer) 1)));
#line 388 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 388 "parse_string_format.m"
                  {
#line 388 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__IntVar_520 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_528, (MR_Integer) 0)));
#line 388 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_521 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_528, (MR_Integer) 1)));
#line 389 "parse_string_format.m"
                    {
#line 389 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_521));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 2));
#line 389 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_520));
#line 389 "parse_string_format.m"
                    }
#line 391 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "parse_string_format.m"
                  }
#line 388 "parse_string_format.m"
                else
#line 394 "parse_string_format.m"
                  {
#line 394 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_512_512;
#line 394 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_515;

#line 394 "parse_string_format.m"
                    {
#line 394 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_512_512 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_528);
                    }
#line 393 "parse_string_format.m"
                    {
#line 393 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_515 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_515, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_515, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 393 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_515, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_512_512));
#line 393 "parse_string_format.m"
                    }
#line 395 "parse_string_format.m"
                    {
#line 395 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 395 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 395 "parse_string_format.m"
                    }
#line 396 "parse_string_format.m"
                    {
#line 396 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_515));
#line 396 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "parse_string_format.m"
                    }
#line 394 "parse_string_format.m"
                  }
#line 387 "parse_string_format.m"
              }
#line 385 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 385 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
        if ((((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 100)) || ((check_hlds__simplify__format_call__parse_string_format__SpecChar_38 == (MR_Char) 105))))
#line 361 "parse_string_format.m"
          {
#line 361 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "parse_string_format.m"
              {
#line 362 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__Error_93;

#line 363 "parse_string_format.m"
                {
#line 363 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__Error_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 363 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 363 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_93, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 363 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_93, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 363 "parse_string_format.m"
                }
#line 364 "parse_string_format.m"
                {
#line 364 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 364 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 364 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 364 "parse_string_format.m"
                }
#line 365 "parse_string_format.m"
                {
#line 365 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_93));
#line 365 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "parse_string_format.m"
                }
#line 362 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 362 "parse_string_format.m"
              }
#line 361 "parse_string_format.m"
            else
#line 349 "parse_string_format.m"
              {
#line 349 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 355 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_42;
#line 355 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_43;

#line 349 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 350 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_41)) == (MR_mktag((MR_Integer) 1)));
#line 350 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 350 "parse_string_format.m"
                  {
#line 350 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__IntVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_41, (MR_Integer) 0)));
#line 350 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_41, (MR_Integer) 1)));
#line 352 "parse_string_format.m"
                    {
#line 352 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 352 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 352 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_43));
#line 352 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 352 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 352 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 352 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_42));
#line 352 "parse_string_format.m"
                    }
#line 354 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "parse_string_format.m"
                  }
#line 350 "parse_string_format.m"
                else
#line 357 "parse_string_format.m"
                  {
#line 357 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__Error_44;
#line 357 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_85_85;

#line 357 "parse_string_format.m"
                    {
#line 357 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_85_85 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_41);
                    }
#line 356 "parse_string_format.m"
                    {
#line 356 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__Error_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 356 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_44, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 356 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_44, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 356 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_44, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_85_85));
#line 356 "parse_string_format.m"
                    }
#line 358 "parse_string_format.m"
                    {
#line 358 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 358 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 358 "parse_string_format.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 358 "parse_string_format.m"
                    }
#line 359 "parse_string_format.m"
                    {
#line 359 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_44));
#line 359 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "parse_string_format.m"
                    }
#line 357 "parse_string_format.m"
                  }
#line 349 "parse_string_format.m"
              }
#line 361 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 361 "parse_string_format.m"
          }
#line 344 "parse_string_format.m"
        else
#line 344 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__succeeded = MR_FALSE;
#line 487 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 485 "parse_string_format.m"
          {
#line 485 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_4 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84;
#line 485 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__Spec_10 = check_hlds__simplify__format_call__parse_string_format__SpecPrime_39;
#line 486 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__Errors_11 = check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40;
#line 485 "parse_string_format.m"
          }
#line 487 "parse_string_format.m"
        else
#line 488 "parse_string_format.m"
          {
#line 488 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__Error_151;

#line 488 "parse_string_format.m"
            {
#line 488 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__Error_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Error_151, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 488 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Error_151, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 488 "parse_string_format.m"
            }
#line 489 "parse_string_format.m"
            {
#line 489 "parse_string_format.m"
              MR_Word base;
#line 489 "parse_string_format.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 489 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__Spec_10 = base;
#line 489 "parse_string_format.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 489 "parse_string_format.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_String) ""));
#line 489 "parse_string_format.m"
            }
#line 490 "parse_string_format.m"
            {
#line 490 "parse_string_format.m"
              MR_Word base;
#line 490 "parse_string_format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__Errors_11 = base;
#line 490 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_151));
#line 490 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 490 "parse_string_format.m"
            }
#line 488 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_4 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 488 "parse_string_format.m"
          }
#line 336 "parse_string_format.m"
      }
#line 331 "parse_string_format.m"
  }
#line 324 "parse_string_format.m"
}

#line 274 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_optional_prec_7_p_0(
#line 274 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17,
#line 274 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_18,
#line 274 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19,
#line 274 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20,
#line 274 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_10,
#line 274 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__MaybePrec_11,
#line 274 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_12)
#line 274 "parse_string_format.m"
{
#line 302 "parse_string_format.m"
  {
#line 302 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17)) == (MR_mktag((MR_Integer) 1)));
#line 302 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21;
#line 279 "parse_string_format.m"
    MR_Char check_hlds__simplify__format_call__parse_string_format__V_22_22;

#line 279 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 279 "parse_string_format.m"
      {
#line 279 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__V_22_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17, (MR_Integer) 0)));
#line 279 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17, (MR_Integer) 1)));
#line 279 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_22_22 == (MR_Char) 46);
#line 279 "parse_string_format.m"
      }
#line 302 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 296 "parse_string_format.m"
      {
#line 296 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23_23;
#line 280 "parse_string_format.m"
        MR_Char check_hlds__simplify__format_call__parse_string_format__V_24_24;

#line 280 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 280 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 280 "parse_string_format.m"
          {
#line 280 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_24_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21, (MR_Integer) 0)));
#line 280 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21, (MR_Integer) 1)));
#line 280 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_24_24 == (MR_Char) 42);
#line 280 "parse_string_format.m"
          }
#line 296 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 291 "parse_string_format.m"
          {
#line 291 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_18 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23_23;
#line 291 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "parse_string_format.m"
              {
#line 292 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_25_25;

#line 293 "parse_string_format.m"
                *check_hlds__simplify__format_call__parse_string_format__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 294 "parse_string_format.m"
                {
#line 294 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 294 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_25_25, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_10));
#line 294 "parse_string_format.m"
                }
#line 294 "parse_string_format.m"
                {
#line 294 "parse_string_format.m"
                  MR_Word base;
#line 294 "parse_string_format.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "parse_string_format.m"
                  *check_hlds__simplify__format_call__parse_string_format__Errors_12 = base;
#line 294 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_25_25));
#line 294 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "parse_string_format.m"
                }
#line 292 "parse_string_format.m"
                *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19;
#line 292 "parse_string_format.m"
              }
#line 291 "parse_string_format.m"
            else
#line 282 "parse_string_format.m"
              {
#line 282 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19, (MR_Integer) 0)));
#line 286 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyPrecVar_14;
#line 283 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format___Context_15;

#line 282 "parse_string_format.m"
                *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19, (MR_Integer) 1)));
#line 283 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_13)) == (MR_mktag((MR_Integer) 1)));
#line 283 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 283 "parse_string_format.m"
                  {
#line 283 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyPrecVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__PolyType_13, (MR_Integer) 0)));
#line 283 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__PolyType_13, (MR_Integer) 1)));
#line 284 "parse_string_format.m"
                    {
#line 284 "parse_string_format.m"
                      MR_Word base;
#line 284 "parse_string_format.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 284 "parse_string_format.m"
                      *check_hlds__simplify__format_call__parse_string_format__MaybePrec_11 = base;
#line 284 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyPrecVar_14));
#line 284 "parse_string_format.m"
                    }
#line 285 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "parse_string_format.m"
                  }
#line 283 "parse_string_format.m"
                else
#line 287 "parse_string_format.m"
                  {
#line 287 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_28_28;
#line 287 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_29_29;

#line 287 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 497 "parse_string_format.m"
                    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_13)) == (MR_mktag((MR_Integer) 3))))
#line 497 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_29_29 = (MR_Integer) 0;
#line 497 "parse_string_format.m"
                    else
#line 497 "parse_string_format.m"
                    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_13)) == (MR_mktag((MR_Integer) 0))))
#line 500 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_29_29 = (MR_Integer) 3;
#line 497 "parse_string_format.m"
                    else
#line 497 "parse_string_format.m"
                    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_13)) == (MR_mktag((MR_Integer) 1))))
#line 499 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_29_29 = (MR_Integer) 2;
#line 497 "parse_string_format.m"
                    else
#line 498 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_29_29 = (MR_Integer) 1;
#line 288 "parse_string_format.m"
                    {
#line 288 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 288 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 288 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_28_28, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_10));
#line 288 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_28_28, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_29_29));
#line 288 "parse_string_format.m"
                    }
#line 289 "parse_string_format.m"
                    {
#line 289 "parse_string_format.m"
                      MR_Word base;
#line 289 "parse_string_format.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "parse_string_format.m"
                      *check_hlds__simplify__format_call__parse_string_format__Errors_12 = base;
#line 289 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_28_28));
#line 289 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "parse_string_format.m"
                    }
#line 287 "parse_string_format.m"
                  }
#line 282 "parse_string_format.m"
              }
#line 291 "parse_string_format.m"
          }
#line 296 "parse_string_format.m"
        else
#line 298 "parse_string_format.m"
          {
#line 298 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__Prec_16;

#line 298 "parse_string_format.m"
            {
#line 298 "parse_string_format.m"
              mercury__string__parse_util__get_number_prefix_3_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_18, &check_hlds__simplify__format_call__parse_string_format__Prec_16);
            }
#line 299 "parse_string_format.m"
            {
#line 299 "parse_string_format.m"
              MR_Word base;
#line 299 "parse_string_format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 299 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__MaybePrec_11 = base;
#line 299 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Prec_16));
#line 299 "parse_string_format.m"
            }
#line 300 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19;
#line 298 "parse_string_format.m"
          }
#line 296 "parse_string_format.m"
      }
#line 302 "parse_string_format.m"
    else
#line 303 "parse_string_format.m"
      {
#line 303 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 304 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19;
#line 303 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_18 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17;
#line 303 "parse_string_format.m"
      }
#line 302 "parse_string_format.m"
  }
#line 274 "parse_string_format.m"
}

#line 225 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__parse_conversion_specification_8_p_0(
#line 225 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_22,
#line 225 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23,
#line 225 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24,
#line 225 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_25,
#line 225 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Context_11,
#line 225 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_12,
#line 225 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Spec_13,
#line 225 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_14)
#line 225 "parse_string_format.m"
{
#line 231 "parse_string_format.m"
  {
#line 231 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__TypeCtorInfo_39_39;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__Flags_16;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__WidthErrors_18;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__MaybePrec_19;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__PrecErrors_20;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__SpecErrors_21;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_32;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_33;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_34_34;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_35_35;
#line 231 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__V_38_38;
#line 264 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_53;
#line 248 "parse_string_format.m"
    MR_Char check_hlds__simplify__format_call__parse_string_format__V_54_54;

#line 234 "parse_string_format.m"
    {
#line 234 "parse_string_format.m"
      mercury__string__parse_util__gather_flag_chars_4_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_22, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31, (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_2[0], &check_hlds__simplify__format_call__parse_string_format__Flags_16);
    }
#line 248 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 248 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 248 "parse_string_format.m"
      {
#line 248 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__V_54_54 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31, (MR_Integer) 0)));
#line 248 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31, (MR_Integer) 1)));
#line 248 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_54_54 == (MR_Char) 42);
#line 248 "parse_string_format.m"
      }
#line 264 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 259 "parse_string_format.m"
      {
#line 259 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_32 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_53;
#line 259 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "parse_string_format.m"
          {
#line 260 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_55_55;

#line 261 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 262 "parse_string_format.m"
            {
#line 262 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "parse_string_format.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 262 "parse_string_format.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_55_55, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_12));
#line 262 "parse_string_format.m"
            }
#line 262 "parse_string_format.m"
            {
#line 262 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__WidthErrors_18, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_55_55));
#line 262 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__WidthErrors_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 262 "parse_string_format.m"
            }
#line 260 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_33 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24;
#line 260 "parse_string_format.m"
          }
#line 259 "parse_string_format.m"
        else
#line 250 "parse_string_format.m"
          {
#line 250 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__PolyType_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24, (MR_Integer) 0)));
#line 254 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__PolyWidthVar_50;
#line 251 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format___Context_51;

#line 250 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24, (MR_Integer) 1)));
#line 251 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_49)) == (MR_mktag((MR_Integer) 1)));
#line 251 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 251 "parse_string_format.m"
              {
#line 251 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__PolyWidthVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__PolyType_49, (MR_Integer) 0)));
#line 251 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format___Context_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__PolyType_49, (MR_Integer) 1)));
#line 252 "parse_string_format.m"
                {
#line 252 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 252 "parse_string_format.m"
                  MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyWidthVar_50));
#line 252 "parse_string_format.m"
                }
#line 253 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 251 "parse_string_format.m"
              }
#line 251 "parse_string_format.m"
            else
#line 255 "parse_string_format.m"
              {
#line 255 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_58_58;
#line 255 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_59_59;

#line 255 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 497 "parse_string_format.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_49)) == (MR_mktag((MR_Integer) 3))))
#line 497 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__V_59_59 = (MR_Integer) 0;
#line 497 "parse_string_format.m"
                else
#line 497 "parse_string_format.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_49)) == (MR_mktag((MR_Integer) 0))))
#line 500 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__V_59_59 = (MR_Integer) 3;
#line 497 "parse_string_format.m"
                else
#line 497 "parse_string_format.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_49)) == (MR_mktag((MR_Integer) 1))))
#line 499 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__V_59_59 = (MR_Integer) 2;
#line 497 "parse_string_format.m"
                else
#line 498 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__V_59_59 = (MR_Integer) 1;
#line 256 "parse_string_format.m"
                {
#line 256 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 256 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 256 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_58_58, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_12));
#line 256 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_58_58, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_59_59));
#line 256 "parse_string_format.m"
                }
#line 257 "parse_string_format.m"
                {
#line 257 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__WidthErrors_18, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_58_58));
#line 257 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__WidthErrors_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "parse_string_format.m"
                }
#line 255 "parse_string_format.m"
              }
#line 250 "parse_string_format.m"
          }
#line 259 "parse_string_format.m"
      }
#line 264 "parse_string_format.m"
    else
#line 267 "parse_string_format.m"
      {
#line 267 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__Width_52;
#line 267 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_29_61;

#line 264 "parse_string_format.m"
        {
#line 264 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_29_61, &check_hlds__simplify__format_call__parse_string_format__Width_52);
        }
#line 267 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 265 "parse_string_format.m"
          {
#line 265 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_32 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_29_61;
#line 265 "parse_string_format.m"
            {
#line 265 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 265 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Width_52));
#line 265 "parse_string_format.m"
            }
#line 266 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "parse_string_format.m"
          }
#line 267 "parse_string_format.m"
        else
#line 268 "parse_string_format.m"
          {
#line 268 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 269 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 268 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_32 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31;
#line 268 "parse_string_format.m"
          }
#line 267 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_33 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24;
#line 267 "parse_string_format.m"
      }
#line 236 "parse_string_format.m"
    {
#line 236 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__get_optional_prec_7_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_32, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_34_34, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_33, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_35_35, check_hlds__simplify__format_call__parse_string_format__SpecNum_12, &check_hlds__simplify__format_call__parse_string_format__MaybePrec_19, &check_hlds__simplify__format_call__parse_string_format__PrecErrors_20);
    }
#line 237 "parse_string_format.m"
    {
#line 237 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__get_first_spec_11_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_34_34, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_35_35, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_25, check_hlds__simplify__format_call__parse_string_format__Context_11, check_hlds__simplify__format_call__parse_string_format__Flags_16, check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17, check_hlds__simplify__format_call__parse_string_format__MaybePrec_19, check_hlds__simplify__format_call__parse_string_format__SpecNum_12, check_hlds__simplify__format_call__parse_string_format__Spec_13, &check_hlds__simplify__format_call__parse_string_format__SpecErrors_21);
    }
#line 6701 "check_hlds.simplify.format_call.parse_string_format.c"
    check_hlds__simplify__format_call__parse_string_format__TypeCtorInfo_39_39 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
#line 239 "parse_string_format.m"
    {
#line 239 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__V_38_38 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__parse_string_format__TypeCtorInfo_39_39, check_hlds__simplify__format_call__parse_string_format__PrecErrors_20, check_hlds__simplify__format_call__parse_string_format__SpecErrors_21);
    }
#line 239 "parse_string_format.m"
    {
#line 239 "parse_string_format.m"
      *check_hlds__simplify__format_call__parse_string_format__Errors_14 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__parse_string_format__TypeCtorInfo_39_39, check_hlds__simplify__format_call__parse_string_format__WidthErrors_18, check_hlds__simplify__format_call__parse_string_format__V_38_38);
    }
#line 231 "parse_string_format.m"
  }
#line 225 "parse_string_format.m"
}

#line 175 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(
#line 175 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_29,
#line 175 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_30,
#line 175 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Context_9,
#line 175 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_10,
#line 175 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Specs_11,
#line 175 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_12)
#line 175 "parse_string_format.m"
{
#line 180 "parse_string_format.m"
  {
#line 180 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 180 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__NonConversionSpecChars_13;
#line 180 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__GatherEndedBy_14;
#line 180 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__Specs0_15;

#line 181 "parse_string_format.m"
    {
#line 181 "parse_string_format.m"
      mercury__string__parse_util__gather_non_percent_chars_3_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_29, &check_hlds__simplify__format_call__parse_string_format__NonConversionSpecChars_13, &check_hlds__simplify__format_call__parse_string_format__GatherEndedBy_14);
    }
#line 193 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__GatherEndedBy_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "parse_string_format.m"
      {
#line 184 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__Specs0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 187 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "parse_string_format.m"
        else
#line 189 "parse_string_format.m"
          {
#line 189 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__Error_18;
#line 189 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_36_36;

#line 190 "parse_string_format.m"
            {
#line 190 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__V_36_36 = mercury__list__length_1_f_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_30);
            }
#line 190 "parse_string_format.m"
            {
#line 190 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__Error_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 190 "parse_string_format.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 190 "parse_string_format.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_18, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_10));
#line 190 "parse_string_format.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_18, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_36_36));
#line 190 "parse_string_format.m"
            }
#line 191 "parse_string_format.m"
            {
#line 191 "parse_string_format.m"
              MR_Word base;
#line 191 "parse_string_format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__Errors_12 = base;
#line 191 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_18));
#line 191 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "parse_string_format.m"
            }
#line 189 "parse_string_format.m"
          }
#line 183 "parse_string_format.m"
      }
#line 193 "parse_string_format.m"
    else
#line 194 "parse_string_format.m"
      {
#line 194 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__HeadSpec_19;
#line 194 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__HeadErrors_20;
#line 194 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TailSpecs_21;
#line 194 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TailErrors_22;
#line 194 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__GatherEndedBy_14, (MR_Integer) 0)));
#line 194 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__V_34_34;
#line 194 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_38;
#line 194 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_39;

#line 195 "parse_string_format.m"
        {
#line 195 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__parse_conversion_specification_8_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_38, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_30, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_39, check_hlds__simplify__format_call__parse_string_format__Context_9, check_hlds__simplify__format_call__parse_string_format__SpecNum_10, &check_hlds__simplify__format_call__parse_string_format__HeadSpec_19, &check_hlds__simplify__format_call__parse_string_format__HeadErrors_20);
        }
#line 198 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__V_34_34 = (check_hlds__simplify__format_call__parse_string_format__SpecNum_10 + (MR_Integer) 1);
#line 197 "parse_string_format.m"
        {
#line 197 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_38, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_39, check_hlds__simplify__format_call__parse_string_format__Context_9, check_hlds__simplify__format_call__parse_string_format__V_34_34, &check_hlds__simplify__format_call__parse_string_format__TailSpecs_21, &check_hlds__simplify__format_call__parse_string_format__TailErrors_22);
        }
#line 203 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__HeadErrors_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "parse_string_format.m"
          {
#line 201 "parse_string_format.m"
            {
#line 201 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__Specs0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Specs0_15, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadSpec_19));
#line 201 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Specs0_15, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__TailSpecs_21));
#line 201 "parse_string_format.m"
            }
#line 202 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__Errors_12 = check_hlds__simplify__format_call__parse_string_format__TailErrors_22;
#line 200 "parse_string_format.m"
          }
#line 203 "parse_string_format.m"
        else
#line 204 "parse_string_format.m"
          {
#line 205 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__Specs0_15 = check_hlds__simplify__format_call__parse_string_format__TailSpecs_21;
#line 206 "parse_string_format.m"
            {
#line 206 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__Errors_12 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0, check_hlds__simplify__format_call__parse_string_format__HeadErrors_20, check_hlds__simplify__format_call__parse_string_format__TailErrors_22);
            }
#line 204 "parse_string_format.m"
          }
#line 194 "parse_string_format.m"
      }
#line 212 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__NonConversionSpecChars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "parse_string_format.m"
      *check_hlds__simplify__format_call__parse_string_format__Specs_11 = check_hlds__simplify__format_call__parse_string_format__Specs0_15;
#line 212 "parse_string_format.m"
    else
#line 213 "parse_string_format.m"
      {
#line 213 "parse_string_format.m"
        MR_String check_hlds__simplify__format_call__parse_string_format__NonConversionSpecString_27;
#line 213 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__StringConst_28;

#line 214 "parse_string_format.m"
        {
#line 214 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__NonConversionSpecString_27 = mercury__string__from_char_list_1_f_0(check_hlds__simplify__format_call__parse_string_format__NonConversionSpecChars_13);
        }
#line 216 "parse_string_format.m"
        {
#line 216 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__StringConst_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 216 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__StringConst_28, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Context_9));
#line 216 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__StringConst_28, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__NonConversionSpecString_27));
#line 216 "parse_string_format.m"
        }
#line 217 "parse_string_format.m"
        {
#line 217 "parse_string_format.m"
          MR_Word base;
#line 217 "parse_string_format.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__Specs_11 = base;
#line 217 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__StringConst_28));
#line 217 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Specs0_15));
#line 217 "parse_string_format.m"
        }
#line 213 "parse_string_format.m"
      }
#line 180 "parse_string_format.m"
  }
#line 175 "parse_string_format.m"
}

#line 133 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(
#line 133 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 133 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)
#line 133 "parse_string_format.m"
{
#line 136 "parse_string_format.m"
  {
#line 136 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 136 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "parse_string_format.m"
      *check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "parse_string_format.m"
    else
#line 137 "parse_string_format.m"
      {
#line 137 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__HeadSpec_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 137 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TailSpecs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 137 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6;

#line 138 "parse_string_format.m"
        {
#line 138 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(check_hlds__simplify__format_call__parse_string_format__TailSpecs_4, &check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6);
        }
#line 152 "parse_string_format.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadSpec_3)) == (MR_mktag((MR_Integer) 0))))
#line 140 "parse_string_format.m"
          {
#line 140 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__HeadContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadSpec_3, (MR_Integer) 0)));
#line 140 "parse_string_format.m"
            MR_String check_hlds__simplify__format_call__parse_string_format__HeadConstString_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadSpec_3, (MR_Integer) 1)));
#line 149 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__LaterTailMergedSpecs_10;
#line 149 "parse_string_format.m"
            MR_String check_hlds__simplify__format_call__parse_string_format__TailConstString_12;
#line 142 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__FirstTailMergedSpec_9;
#line 143 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format___TailContext_11;

#line 142 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6)) == (MR_mktag((MR_Integer) 1)));
#line 142 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 142 "parse_string_format.m"
              {
#line 142 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__FirstTailMergedSpec_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6, (MR_Integer) 0)));
#line 142 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__LaterTailMergedSpecs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6, (MR_Integer) 1)));
#line 143 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__FirstTailMergedSpec_9)) == (MR_mktag((MR_Integer) 0)));
#line 143 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 143 "parse_string_format.m"
                  {
#line 143 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format___TailContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__FirstTailMergedSpec_9, (MR_Integer) 0)));
#line 143 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__TailConstString_12 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__FirstTailMergedSpec_9, (MR_Integer) 1)));
#line 143 "parse_string_format.m"
                  }
#line 142 "parse_string_format.m"
              }
#line 149 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 147 "parse_string_format.m"
              {
#line 147 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__HeadMergedSpec_13;
#line 147 "parse_string_format.m"
                MR_String check_hlds__simplify__format_call__parse_string_format__V_40_40;

#line 147 "parse_string_format.m"
                {
#line 147 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__V_40_40 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__parse_string_format__HeadConstString_8, check_hlds__simplify__format_call__parse_string_format__TailConstString_12);
                }
#line 146 "parse_string_format.m"
                {
#line 146 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__HeadMergedSpec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 146 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadMergedSpec_13, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadContext_7));
#line 146 "parse_string_format.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadMergedSpec_13, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_40_40));
#line 146 "parse_string_format.m"
                }
#line 148 "parse_string_format.m"
                {
#line 148 "parse_string_format.m"
                  MR_Word base;
#line 148 "parse_string_format.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "parse_string_format.m"
                  *check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = base;
#line 148 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadMergedSpec_13));
#line 148 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__LaterTailMergedSpecs_10));
#line 148 "parse_string_format.m"
                }
#line 147 "parse_string_format.m"
              }
#line 149 "parse_string_format.m"
            else
#line 150 "parse_string_format.m"
              {
#line 150 "parse_string_format.m"
                MR_Word base;
#line 150 "parse_string_format.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "parse_string_format.m"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = base;
#line 150 "parse_string_format.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadSpec_3));
#line 150 "parse_string_format.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6));
#line 150 "parse_string_format.m"
              }
#line 140 "parse_string_format.m"
          }
#line 152 "parse_string_format.m"
        else
#line 159 "parse_string_format.m"
          {
#line 159 "parse_string_format.m"
            MR_Word base;
#line 159 "parse_string_format.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = base;
#line 159 "parse_string_format.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadSpec_3));
#line 159 "parse_string_format.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6));
#line 159 "parse_string_format.m"
          }
#line 137 "parse_string_format.m"
      }
#line 136 "parse_string_format.m"
  }
#line 133 "parse_string_format.m"
}

#line 95 "parse_string_format.m"
void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__parse_and_optimize_format_string_4_p_0(
#line 95 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Chars_5,
#line 95 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyTypes_6,
#line 95 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Context_7,
#line 95 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__MaybeMergedSpecs_8)
#line 95 "parse_string_format.m"
{
#line 115 "parse_string_format.m"
  {
#line 115 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 115 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__Specs_9;
#line 115 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__Errors_10;

#line 116 "parse_string_format.m"
    {
#line 116 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(check_hlds__simplify__format_call__parse_string_format__Chars_5, check_hlds__simplify__format_call__parse_string_format__PolyTypes_6, check_hlds__simplify__format_call__parse_string_format__Context_7, (MR_Integer) 1, &check_hlds__simplify__format_call__parse_string_format__Specs_9, &check_hlds__simplify__format_call__parse_string_format__Errors_10);
    }
#line 120 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__Errors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "parse_string_format.m"
      {
#line 121 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__FlatSpecs_13;

#line 122 "parse_string_format.m"
        {
#line 122 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(check_hlds__simplify__format_call__parse_string_format__Specs_9, &check_hlds__simplify__format_call__parse_string_format__FlatSpecs_13);
        }
#line 123 "parse_string_format.m"
        {
#line 123 "parse_string_format.m"
          MR_Word base;
#line 123 "parse_string_format.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 123 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__MaybeMergedSpecs_8 = base;
#line 123 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FlatSpecs_13));
#line 123 "parse_string_format.m"
        }
#line 121 "parse_string_format.m"
      }
#line 120 "parse_string_format.m"
    else
#line 118 "parse_string_format.m"
      {
#line 118 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__HeadError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Errors_10, (MR_Integer) 0)));
#line 118 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TailErrors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Errors_10, (MR_Integer) 1)));

#line 119 "parse_string_format.m"
        {
#line 119 "parse_string_format.m"
          MR_Word base;
#line 119 "parse_string_format.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__MaybeMergedSpecs_8 = base;
#line 119 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadError_11));
#line 119 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__TailErrors_12));
#line 119 "parse_string_format.m"
        }
#line 118 "parse_string_format.m"
      }
#line 115 "parse_string_format.m"
  }
#line 95 "parse_string_format.m"
}

void mercury__check_hlds__simplify__format_call__parse_string_format__init(void)
{
}

void mercury__check_hlds__simplify__format_call__parse_string_format__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_spec_0);
}

void mercury__check_hlds__simplify__format_call__parse_string_format__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.format_call.parse_string_format. */
