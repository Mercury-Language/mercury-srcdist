/*
** Automatically generated from `parse_string_format.m'
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


/* :- module check_hlds.simplify.format_call.parse_string_format. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__format_call__parse_string_format__init
ENDINIT
*/

#include "check_hlds.simplify.format_call.parse_string_format.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.format_call.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.parse_util.mih"




#line 152 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_0[2];

#line 158 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0;

#line 161 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_1[2];

#line 164 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1;

#line 167 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_2[2];

#line 170 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2;

#line 173 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_3[2];

#line 176 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3;

#line 179 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_0[1];

#line 182 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_1[1];

#line 185 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_2[1];

#line 188 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3[1];

#line 191 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_abstract_poly_type_0[4];

#line 194 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_abstract_poly_type_0[4];

#line 197 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_abstract_poly_type_0[4];

#line 200 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0;

#line 203 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_1[1];

#line 206 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1;

#line 209 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_2[1];

#line 212 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2;

#line 215 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0[1];

#line 218 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1[1];

#line 221 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2[1];

#line 224 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_prec_0[3];

#line 227 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0[3];

#line 230 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_prec_0[3];

#line 233 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0;

#line 236 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_1[1];

#line 239 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1;

#line 242 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_2[1];

#line 245 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2;

#line 248 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0[1];

#line 251 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1[1];

#line 254 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2[1];

#line 257 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_width_0[3];

#line 260 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_width_0[3];

#line 263 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_width_0[3];

#line 266 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_0[2];

#line 269 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0;

#line 272 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_1[4];

#line 275 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1;

#line 278 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_2[5];

#line 281 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2;

#line 284 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_3[5];

#line 287 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3;

#line 290 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_4[6];

#line 293 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4;

#line 296 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5[6];

#line 299 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5;

#line 302 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_0[1];

#line 305 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_1[1];

#line 308 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_2[1];

#line 311 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3[3];

#line 314 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_spec_0[4];

#line 317 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_spec_0[6];

#line 320 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_spec_0[6];

#line 323 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0_10001(
#line 326 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 328 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2);

#line 331 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0_10001(
#line 334 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 336 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 338 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3);

#line 341 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001(
#line 344 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 346 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2);

#line 349 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001(
#line 352 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 354 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 356 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3);

#line 359 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001(
#line 362 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 364 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2);

#line 367 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001(
#line 370 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 372 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 374 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3);

#line 377 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0_10001(
#line 380 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 382 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2);

#line 385 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0_10001(
#line 388 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 390 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 392 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3);

#line 494 "parse_string_format.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(
#line 494 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1);

#line 323 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_first_spec_11_p_0(
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1,
#line 323 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_2,
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3,
#line 323 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_4,
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__OverallContext_5,
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6,
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7,
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8,
#line 323 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_9,
#line 323 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Spec_10,
#line 323 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_11);

#line 273 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_optional_prec_7_p_0(
#line 273 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17,
#line 273 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_18,
#line 273 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19,
#line 273 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20,
#line 273 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_10,
#line 273 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__MaybePrec_11,
#line 273 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_12);

#line 224 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__parse_conversion_specification_8_p_0(
#line 224 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_22,
#line 224 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23,
#line 224 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24,
#line 224 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_25,
#line 224 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Context_11,
#line 224 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_12,
#line 224 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Spec_13,
#line 224 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_14);

#line 174 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(
#line 174 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_29,
#line 174 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_30,
#line 174 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Context_9,
#line 174 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_10,
#line 174 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Specs_11,
#line 174 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_12);

#line 132 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(
#line 132 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 132 "parse_string_format.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 521 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 529 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 535 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 550 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 556 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 571 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 577 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 592 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_3[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 598 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 613 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0
};

#line 618 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1
};

#line 623 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2
};

#line 628 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3
};

#line 633 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 657 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_abstract_poly_type_0[4] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2
};

#line 665 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_abstract_poly_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 673 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 690 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 705 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 710 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 725 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 730 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 745 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0
};

#line 750 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1
};

#line 755 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2
};

#line 760 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 779 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0[3] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2
};

#line 786 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_prec_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 793 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 810 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 825 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 830 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 845 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 850 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 865 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0
};

#line 870 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1
};

#line 875 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2
};

#line 880 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 899 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_width_0[3] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2
};

#line 906 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_width_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 913 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 930 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 936 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 951 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_1[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 959 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 974 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_2[5] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 983 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 998 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_3[5] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1007 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 1022 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_4[6] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1032 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 1047 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5[6] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1057 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 1072 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0
};

#line 1077 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1
};

#line 1082 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2
};

#line 1087 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3[3] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5
};

#line 1094 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 1118 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_spec_0[6] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4
};

#line 1128 "check_hlds.simplify.format_call.parse_string_format.c"
static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_spec_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2
};

#line 1138 "check_hlds.simplify.format_call.parse_string_format.c"
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

#line 1155 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0_10001(
#line 1158 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1160 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2)
#line 1162 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1164 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1166 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 1169 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1171 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0(((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2));
    }
#line 1174 "check_hlds.simplify.format_call.parse_string_format.c"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 1176 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1178 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1181 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0_10001(
#line 1184 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1186 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 1188 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3)
#line 1190 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1192 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1194 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_Word check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1;

#line 1197 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1199 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0(&check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3));
    }
#line 1202 "check_hlds.simplify.format_call.parse_string_format.c"
    *check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1));
#line 1204 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1206 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1209 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001(
#line 1212 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1214 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2)
#line 1216 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1218 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1220 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 1223 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1225 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2));
    }
#line 1228 "check_hlds.simplify.format_call.parse_string_format.c"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 1230 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1232 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1235 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001(
#line 1238 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1240 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 1242 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3)
#line 1244 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1246 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1248 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_Word check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1;

#line 1251 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1253 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3));
    }
#line 1256 "check_hlds.simplify.format_call.parse_string_format.c"
    *check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1));
#line 1258 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1260 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1263 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001(
#line 1266 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1268 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2)
#line 1270 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1272 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1274 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 1277 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1279 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2));
    }
#line 1282 "check_hlds.simplify.format_call.parse_string_format.c"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 1284 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1286 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1289 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001(
#line 1292 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1294 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 1296 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3)
#line 1298 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1300 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1302 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_Word check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1;

#line 1305 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1307 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3));
    }
#line 1310 "check_hlds.simplify.format_call.parse_string_format.c"
    *check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1));
#line 1312 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1314 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1317 "check_hlds.simplify.format_call.parse_string_format.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0_10001(
#line 1320 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1322 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2)
#line 1324 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1326 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1328 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 1331 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1333 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0(((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2));
    }
#line 1336 "check_hlds.simplify.format_call.parse_string_format.c"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 1338 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1340 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 1343 "check_hlds.simplify.format_call.parse_string_format.c"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0_10001(
#line 1346 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box * check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1,
#line 1348 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2,
#line 1350 "check_hlds.simplify.format_call.parse_string_format.c"
  MR_Box check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3)
#line 1352 "check_hlds.simplify.format_call.parse_string_format.c"
{
#line 1354 "check_hlds.simplify.format_call.parse_string_format.c"
  {
#line 1356 "check_hlds.simplify.format_call.parse_string_format.c"
    MR_Word check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1;

#line 1359 "check_hlds.simplify.format_call.parse_string_format.c"
    {
#line 1361 "check_hlds.simplify.format_call.parse_string_format.c"
      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0(&check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__parse_string_format__wrapper_arg_3));
    }
#line 1364 "check_hlds.simplify.format_call.parse_string_format.c"
    *check_hlds__simplify__format_call__parse_string_format__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__conv0_HeadVar__1_1));
#line 1366 "check_hlds.simplify.format_call.parse_string_format.c"
  }
#line 1368 "check_hlds.simplify.format_call.parse_string_format.c"
}

#line 51 "parse_string_format.m"
void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0(
#line 51 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 51 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2,
#line 51 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)
#line 51 "parse_string_format.m"
{
#line 51 "parse_string_format.m"
  {
#line 51 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 51 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_362 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;
#line 51 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_363 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3;

#line 51 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_362 == check_hlds__simplify__format_call__parse_string_format__CastY_363);
#line 51 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 1395 "check_hlds.simplify.format_call.parse_string_format.c"
      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "parse_string_format.m"
    else
#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) {
#line 51 "parse_string_format.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
        case (MR_Integer) 0:
#line 51 "parse_string_format.m"
          {
#line 51 "parse_string_format.m"
            MR_String check_hlds__simplify__format_call__parse_string_format__V_392_392 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 51 "parse_string_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
              case (MR_Integer) 0:
#line 51 "parse_string_format.m"
                {
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "parse_string_format.m"
                  MR_String check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8;

#line 51 "parse_string_format.m"
                  {
#line 51 "parse_string_format.m"
                    mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_8_8, check_hlds__simplify__format_call__parse_string_format__V_393_393, check_hlds__simplify__format_call__parse_string_format__V_6_6);
                  }
#line 1434 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_8_8 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_8_8;
#line 51 "parse_string_format.m"
                  else
#line 51 "parse_string_format.m"
                    {
#line 51 "parse_string_format.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_392_392, check_hlds__simplify__format_call__parse_string_format__V_7_7);
#line 51 "parse_string_format.m"
                      return;
                    }
#line 51 "parse_string_format.m"
                }
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
              case (MR_Integer) 1:
#line 1457 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
              case (MR_Integer) 2:
#line 1463 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
              case (MR_Integer) 3:
#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) {
#line 51 "parse_string_format.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
                  case (MR_Integer) 0:
#line 1476 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 1:
#line 1482 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 2:
#line 1488 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                }
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
            }
#line 51 "parse_string_format.m"
          }
#line 51 "parse_string_format.m"
          break;
#line 51 "parse_string_format.m"
        case (MR_Integer) 1:
#line 51 "parse_string_format.m"
          {
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 51 "parse_string_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
              case (MR_Integer) 0:
#line 1522 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
              case (MR_Integer) 1:
#line 51 "parse_string_format.m"
                {
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_59_59;

#line 51 "parse_string_format.m"
                  {
#line 51 "parse_string_format.m"
                    mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_59_59, check_hlds__simplify__format_call__parse_string_format__V_397_397, check_hlds__simplify__format_call__parse_string_format__V_55_55);
                  }
#line 1546 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_59_59 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_59_59;
#line 51 "parse_string_format.m"
                  else
#line 51 "parse_string_format.m"
                    {
#line 51 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_60_60;

#line 51 "parse_string_format.m"
                      {
#line 51 "parse_string_format.m"
                        mercury__string__parse_util____Compare____string_format_flags_0_0(&check_hlds__simplify__format_call__parse_string_format__V_60_60, check_hlds__simplify__format_call__parse_string_format__V_396_396, check_hlds__simplify__format_call__parse_string_format__V_56_56);
                      }
#line 1566 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_60_60 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                      if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_60_60;
#line 51 "parse_string_format.m"
                      else
#line 51 "parse_string_format.m"
                        {
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_61_61;

#line 51 "parse_string_format.m"
                          {
#line 51 "parse_string_format.m"
                            check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__V_61_61, check_hlds__simplify__format_call__parse_string_format__V_395_395, check_hlds__simplify__format_call__parse_string_format__V_57_57);
                          }
#line 1586 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_61_61 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                          if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                            *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_61_61;
#line 51 "parse_string_format.m"
                          else
#line 51 "parse_string_format.m"
                            {
#line 51 "parse_string_format.m"
                              {
#line 51 "parse_string_format.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_394_394)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_58_58)));
#line 51 "parse_string_format.m"
                                return;
                              }
#line 51 "parse_string_format.m"
                            }
#line 51 "parse_string_format.m"
                        }
#line 51 "parse_string_format.m"
                    }
#line 51 "parse_string_format.m"
                }
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
              case (MR_Integer) 2:
#line 1617 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
              case (MR_Integer) 3:
#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) {
#line 51 "parse_string_format.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
                  case (MR_Integer) 0:
#line 1630 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 1:
#line 1636 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 2:
#line 1642 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                }
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
            }
#line 51 "parse_string_format.m"
          }
#line 51 "parse_string_format.m"
          break;
#line 51 "parse_string_format.m"
        case (MR_Integer) 2:
#line 51 "parse_string_format.m"
          {
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_409_409 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_411_411 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_412_412 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 51 "parse_string_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
              case (MR_Integer) 0:
#line 1678 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
              case (MR_Integer) 1:
#line 1684 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
              case (MR_Integer) 2:
#line 51 "parse_string_format.m"
                {
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_126_126;

#line 51 "parse_string_format.m"
                  {
#line 51 "parse_string_format.m"
                    mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_126_126, check_hlds__simplify__format_call__parse_string_format__V_413_413, check_hlds__simplify__format_call__parse_string_format__V_121_121);
                  }
#line 1710 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_126_126 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_126_126;
#line 51 "parse_string_format.m"
                  else
#line 51 "parse_string_format.m"
                    {
#line 51 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_127_127;

#line 51 "parse_string_format.m"
                      {
#line 51 "parse_string_format.m"
                        mercury__string__parse_util____Compare____string_format_flags_0_0(&check_hlds__simplify__format_call__parse_string_format__V_127_127, check_hlds__simplify__format_call__parse_string_format__V_412_412, check_hlds__simplify__format_call__parse_string_format__V_122_122);
                      }
#line 1730 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_127_127 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                      if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_127_127;
#line 51 "parse_string_format.m"
                      else
#line 51 "parse_string_format.m"
                        {
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_128_128;

#line 51 "parse_string_format.m"
                          {
#line 51 "parse_string_format.m"
                            check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__V_128_128, check_hlds__simplify__format_call__parse_string_format__V_411_411, check_hlds__simplify__format_call__parse_string_format__V_123_123);
                          }
#line 1750 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_128_128 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                          if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                            *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_128_128;
#line 51 "parse_string_format.m"
                          else
#line 51 "parse_string_format.m"
                            {
#line 51 "parse_string_format.m"
                              MR_Word check_hlds__simplify__format_call__parse_string_format__V_129_129;

#line 51 "parse_string_format.m"
                              {
#line 51 "parse_string_format.m"
                                check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&check_hlds__simplify__format_call__parse_string_format__V_129_129, check_hlds__simplify__format_call__parse_string_format__V_410_410, check_hlds__simplify__format_call__parse_string_format__V_124_124);
                              }
#line 1770 "check_hlds.simplify.format_call.parse_string_format.c"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_129_129 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                              if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_129_129;
#line 51 "parse_string_format.m"
                              else
#line 51 "parse_string_format.m"
                                {
#line 51 "parse_string_format.m"
                                  {
#line 51 "parse_string_format.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_409_409)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_125_125)));
#line 51 "parse_string_format.m"
                                    return;
                                  }
#line 51 "parse_string_format.m"
                                }
#line 51 "parse_string_format.m"
                            }
#line 51 "parse_string_format.m"
                        }
#line 51 "parse_string_format.m"
                    }
#line 51 "parse_string_format.m"
                }
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
              case (MR_Integer) 3:
#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) {
#line 51 "parse_string_format.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
                  case (MR_Integer) 0:
#line 1810 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 1:
#line 1816 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 2:
#line 1822 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                }
#line 51 "parse_string_format.m"
                break;
#line 51 "parse_string_format.m"
            }
#line 51 "parse_string_format.m"
          }
#line 51 "parse_string_format.m"
          break;
#line 51 "parse_string_format.m"
        case (MR_Integer) 3:
#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)))) {
#line 51 "parse_string_format.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
            case (MR_Integer) 0:
#line 51 "parse_string_format.m"
              {
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_407_407 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));

#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
                switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 51 "parse_string_format.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
                  case (MR_Integer) 0:
#line 1865 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 1:
#line 1871 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 2:
#line 1877 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 3:
#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) {
#line 51 "parse_string_format.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
                      case (MR_Integer) 0:
#line 51 "parse_string_format.m"
                        {
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 5)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_198_198;

#line 51 "parse_string_format.m"
                          {
#line 51 "parse_string_format.m"
                            mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_198_198, check_hlds__simplify__format_call__parse_string_format__V_408_408, check_hlds__simplify__format_call__parse_string_format__V_193_193);
                          }
#line 1910 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_198_198 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                          if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                            *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_198_198;
#line 51 "parse_string_format.m"
                          else
#line 51 "parse_string_format.m"
                            {
#line 51 "parse_string_format.m"
                              MR_Word check_hlds__simplify__format_call__parse_string_format__V_199_199;

#line 51 "parse_string_format.m"
                              {
#line 51 "parse_string_format.m"
                                mercury__string__parse_util____Compare____string_format_flags_0_0(&check_hlds__simplify__format_call__parse_string_format__V_199_199, check_hlds__simplify__format_call__parse_string_format__V_407_407, check_hlds__simplify__format_call__parse_string_format__V_194_194);
                              }
#line 1930 "check_hlds.simplify.format_call.parse_string_format.c"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_199_199 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                              if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_199_199;
#line 51 "parse_string_format.m"
                              else
#line 51 "parse_string_format.m"
                                {
#line 51 "parse_string_format.m"
                                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_200_200;

#line 51 "parse_string_format.m"
                                  {
#line 51 "parse_string_format.m"
                                    check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__V_200_200, check_hlds__simplify__format_call__parse_string_format__V_406_406, check_hlds__simplify__format_call__parse_string_format__V_195_195);
                                  }
#line 1950 "check_hlds.simplify.format_call.parse_string_format.c"
                                  check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_200_200 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                                  check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_200_200;
#line 51 "parse_string_format.m"
                                  else
#line 51 "parse_string_format.m"
                                    {
#line 51 "parse_string_format.m"
                                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_201_201;

#line 51 "parse_string_format.m"
                                      {
#line 51 "parse_string_format.m"
                                        check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&check_hlds__simplify__format_call__parse_string_format__V_201_201, check_hlds__simplify__format_call__parse_string_format__V_405_405, check_hlds__simplify__format_call__parse_string_format__V_196_196);
                                      }
#line 1970 "check_hlds.simplify.format_call.parse_string_format.c"
                                      check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_201_201 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                                      check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                                      if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_201_201;
#line 51 "parse_string_format.m"
                                      else
#line 51 "parse_string_format.m"
                                        {
#line 51 "parse_string_format.m"
                                          {
#line 51 "parse_string_format.m"
                                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_404_404)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_197_197)));
#line 51 "parse_string_format.m"
                                            return;
                                          }
#line 51 "parse_string_format.m"
                                        }
#line 51 "parse_string_format.m"
                                    }
#line 51 "parse_string_format.m"
                                }
#line 51 "parse_string_format.m"
                            }
#line 51 "parse_string_format.m"
                        }
#line 51 "parse_string_format.m"
                        break;
#line 51 "parse_string_format.m"
                      case (MR_Integer) 1:
#line 2003 "check_hlds.simplify.format_call.parse_string_format.c"
                        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                        break;
#line 51 "parse_string_format.m"
                      case (MR_Integer) 2:
#line 2009 "check_hlds.simplify.format_call.parse_string_format.c"
                        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                        break;
#line 51 "parse_string_format.m"
                    }
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                }
#line 51 "parse_string_format.m"
              }
#line 51 "parse_string_format.m"
              break;
#line 51 "parse_string_format.m"
            case (MR_Integer) 1:
#line 51 "parse_string_format.m"
              {
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 6)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));

#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
                switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 51 "parse_string_format.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
                  case (MR_Integer) 0:
#line 2047 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 1:
#line 2053 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 2:
#line 2059 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 3:
#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) {
#line 51 "parse_string_format.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
                      case (MR_Integer) 0:
#line 2072 "check_hlds.simplify.format_call.parse_string_format.c"
                        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                        break;
#line 51 "parse_string_format.m"
                      case (MR_Integer) 1:
#line 51 "parse_string_format.m"
                        {
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 5)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 6)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_276_276;

#line 51 "parse_string_format.m"
                          {
#line 51 "parse_string_format.m"
                            mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_276_276, check_hlds__simplify__format_call__parse_string_format__V_419_419, check_hlds__simplify__format_call__parse_string_format__V_270_270);
                          }
#line 2100 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_276_276 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                          if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                            *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_276_276;
#line 51 "parse_string_format.m"
                          else
#line 51 "parse_string_format.m"
                            {
#line 51 "parse_string_format.m"
                              MR_Word check_hlds__simplify__format_call__parse_string_format__V_277_277;

#line 51 "parse_string_format.m"
                              {
#line 51 "parse_string_format.m"
                                mercury__string__parse_util____Compare____string_format_flags_0_0(&check_hlds__simplify__format_call__parse_string_format__V_277_277, check_hlds__simplify__format_call__parse_string_format__V_418_418, check_hlds__simplify__format_call__parse_string_format__V_271_271);
                              }
#line 2120 "check_hlds.simplify.format_call.parse_string_format.c"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_277_277 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                              if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_277_277;
#line 51 "parse_string_format.m"
                              else
#line 51 "parse_string_format.m"
                                {
#line 51 "parse_string_format.m"
                                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_278_278;

#line 51 "parse_string_format.m"
                                  {
#line 51 "parse_string_format.m"
                                    check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__V_278_278, check_hlds__simplify__format_call__parse_string_format__V_417_417, check_hlds__simplify__format_call__parse_string_format__V_272_272);
                                  }
#line 2140 "check_hlds.simplify.format_call.parse_string_format.c"
                                  check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_278_278 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                                  check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_278_278;
#line 51 "parse_string_format.m"
                                  else
#line 51 "parse_string_format.m"
                                    {
#line 51 "parse_string_format.m"
                                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_279_279;

#line 51 "parse_string_format.m"
                                      {
#line 51 "parse_string_format.m"
                                        check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&check_hlds__simplify__format_call__parse_string_format__V_279_279, check_hlds__simplify__format_call__parse_string_format__V_416_416, check_hlds__simplify__format_call__parse_string_format__V_273_273);
                                      }
#line 2160 "check_hlds.simplify.format_call.parse_string_format.c"
                                      check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_279_279 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                                      check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                                      if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_279_279;
#line 51 "parse_string_format.m"
                                      else
#line 51 "parse_string_format.m"
                                        {
#line 51 "parse_string_format.m"
                                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_280_280;
#line 51 "parse_string_format.m"
                                          MR_Integer check_hlds__simplify__format_call__parse_string_format__V_422_422 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__V_415_415;
#line 51 "parse_string_format.m"
                                          MR_Integer check_hlds__simplify__format_call__parse_string_format__V_423_423 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__V_274_274;

#line 51 "parse_string_format.m"
                                          {
#line 51 "parse_string_format.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__parse_string_format__V_280_280, check_hlds__simplify__format_call__parse_string_format__V_422_422, check_hlds__simplify__format_call__parse_string_format__V_423_423);
                                          }
#line 2184 "check_hlds.simplify.format_call.parse_string_format.c"
                                          check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_280_280 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                                          check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                                          if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                            *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_280_280;
#line 51 "parse_string_format.m"
                                          else
#line 51 "parse_string_format.m"
                                            {
#line 51 "parse_string_format.m"
                                              {
#line 51 "parse_string_format.m"
                                                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_414_414)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_275_275)));
#line 51 "parse_string_format.m"
                                                return;
                                              }
#line 51 "parse_string_format.m"
                                            }
#line 51 "parse_string_format.m"
                                        }
#line 51 "parse_string_format.m"
                                    }
#line 51 "parse_string_format.m"
                                }
#line 51 "parse_string_format.m"
                            }
#line 51 "parse_string_format.m"
                        }
#line 51 "parse_string_format.m"
                        break;
#line 51 "parse_string_format.m"
                      case (MR_Integer) 2:
#line 2219 "check_hlds.simplify.format_call.parse_string_format.c"
                        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "parse_string_format.m"
                        break;
#line 51 "parse_string_format.m"
                    }
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                }
#line 51 "parse_string_format.m"
              }
#line 51 "parse_string_format.m"
              break;
#line 51 "parse_string_format.m"
            case (MR_Integer) 2:
#line 51 "parse_string_format.m"
              {
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 6)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_402_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));

#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
                switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 51 "parse_string_format.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
                  case (MR_Integer) 0:
#line 2257 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 1:
#line 2263 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 2:
#line 2269 "check_hlds.simplify.format_call.parse_string_format.c"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                  case (MR_Integer) 3:
#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)))) {
#line 51 "parse_string_format.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
                      case (MR_Integer) 0:
#line 2282 "check_hlds.simplify.format_call.parse_string_format.c"
                        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                        break;
#line 51 "parse_string_format.m"
                      case (MR_Integer) 1:
#line 2288 "check_hlds.simplify.format_call.parse_string_format.c"
                        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "parse_string_format.m"
                        break;
#line 51 "parse_string_format.m"
                      case (MR_Integer) 2:
#line 51 "parse_string_format.m"
                        {
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 5)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 6)));
#line 51 "parse_string_format.m"
                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_357_357;

#line 51 "parse_string_format.m"
                          {
#line 51 "parse_string_format.m"
                            mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__parse_string_format__V_357_357, check_hlds__simplify__format_call__parse_string_format__V_403_403, check_hlds__simplify__format_call__parse_string_format__V_351_351);
                          }
#line 2316 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_357_357 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                          if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                            *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_357_357;
#line 51 "parse_string_format.m"
                          else
#line 51 "parse_string_format.m"
                            {
#line 51 "parse_string_format.m"
                              MR_Word check_hlds__simplify__format_call__parse_string_format__V_358_358;

#line 51 "parse_string_format.m"
                              {
#line 51 "parse_string_format.m"
                                mercury__string__parse_util____Compare____string_format_flags_0_0(&check_hlds__simplify__format_call__parse_string_format__V_358_358, check_hlds__simplify__format_call__parse_string_format__V_402_402, check_hlds__simplify__format_call__parse_string_format__V_352_352);
                              }
#line 2336 "check_hlds.simplify.format_call.parse_string_format.c"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_358_358 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                              if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_358_358;
#line 51 "parse_string_format.m"
                              else
#line 51 "parse_string_format.m"
                                {
#line 51 "parse_string_format.m"
                                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_359_359;

#line 51 "parse_string_format.m"
                                  {
#line 51 "parse_string_format.m"
                                    check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&check_hlds__simplify__format_call__parse_string_format__V_359_359, check_hlds__simplify__format_call__parse_string_format__V_401_401, check_hlds__simplify__format_call__parse_string_format__V_353_353);
                                  }
#line 2356 "check_hlds.simplify.format_call.parse_string_format.c"
                                  check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_359_359 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                                  check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_359_359;
#line 51 "parse_string_format.m"
                                  else
#line 51 "parse_string_format.m"
                                    {
#line 51 "parse_string_format.m"
                                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_360_360;

#line 51 "parse_string_format.m"
                                      {
#line 51 "parse_string_format.m"
                                        check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&check_hlds__simplify__format_call__parse_string_format__V_360_360, check_hlds__simplify__format_call__parse_string_format__V_400_400, check_hlds__simplify__format_call__parse_string_format__V_354_354);
                                      }
#line 2376 "check_hlds.simplify.format_call.parse_string_format.c"
                                      check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_360_360 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                                      check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                                      if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                        *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_360_360;
#line 51 "parse_string_format.m"
                                      else
#line 51 "parse_string_format.m"
                                        {
#line 51 "parse_string_format.m"
                                          MR_Word check_hlds__simplify__format_call__parse_string_format__V_361_361;
#line 51 "parse_string_format.m"
                                          MR_Integer check_hlds__simplify__format_call__parse_string_format__V_420_420 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__V_399_399;
#line 51 "parse_string_format.m"
                                          MR_Integer check_hlds__simplify__format_call__parse_string_format__V_421_421 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__V_355_355;

#line 51 "parse_string_format.m"
                                          {
#line 51 "parse_string_format.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__parse_string_format__V_361_361, check_hlds__simplify__format_call__parse_string_format__V_420_420, check_hlds__simplify__format_call__parse_string_format__V_421_421);
                                          }
#line 2400 "check_hlds.simplify.format_call.parse_string_format.c"
                                          check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_361_361 == (MR_Integer) 0);
#line 51 "parse_string_format.m"
                                          check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 51 "parse_string_format.m"
                                          if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                            *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_361_361;
#line 51 "parse_string_format.m"
                                          else
#line 51 "parse_string_format.m"
                                            {
#line 51 "parse_string_format.m"
                                              {
#line 51 "parse_string_format.m"
                                                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_398_398)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_356_356)));
#line 51 "parse_string_format.m"
                                                return;
                                              }
#line 51 "parse_string_format.m"
                                            }
#line 51 "parse_string_format.m"
                                        }
#line 51 "parse_string_format.m"
                                    }
#line 51 "parse_string_format.m"
                                }
#line 51 "parse_string_format.m"
                            }
#line 51 "parse_string_format.m"
                        }
#line 51 "parse_string_format.m"
                        break;
#line 51 "parse_string_format.m"
                    }
#line 51 "parse_string_format.m"
                    break;
#line 51 "parse_string_format.m"
                }
#line 51 "parse_string_format.m"
              }
#line 51 "parse_string_format.m"
              break;
#line 51 "parse_string_format.m"
          }
#line 51 "parse_string_format.m"
          break;
#line 51 "parse_string_format.m"
      }
#line 51 "parse_string_format.m"
  }
#line 51 "parse_string_format.m"
}

#line 51 "parse_string_format.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0(
#line 51 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 51 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)
#line 51 "parse_string_format.m"
{
#line 51 "parse_string_format.m"
  {
#line 51 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 51 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_59 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 51 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_60 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 51 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_59 == check_hlds__simplify__format_call__parse_string_format__CastY_60);
#line 51 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 51 "parse_string_format.m"
    else
#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) {
#line 51 "parse_string_format.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
        case (MR_Integer) 0:
#line 51 "parse_string_format.m"
          {
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "parse_string_format.m"
            MR_String check_hlds__simplify__format_call__parse_string_format__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_5_5;
#line 51 "parse_string_format.m"
            MR_String check_hlds__simplify__format_call__parse_string_format__V_6_6;

#line 51 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 51 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
              {
#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 2508 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 2510 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_3_3, check_hlds__simplify__format_call__parse_string_format__V_5_5);
                }
#line 51 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 2515 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = (strcmp(check_hlds__simplify__format_call__parse_string_format__V_4_4, check_hlds__simplify__format_call__parse_string_format__V_6_6) == 0);
#line 51 "parse_string_format.m"
              }
#line 51 "parse_string_format.m"
          }
#line 51 "parse_string_format.m"
          break;
#line 51 "parse_string_format.m"
        case (MR_Integer) 1:
#line 51 "parse_string_format.m"
          {
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_64_64;
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_11_11;
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_12_12;
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_13_13;
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_14_14;

#line 51 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 51 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
              {
#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 2560 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 2562 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_7_7, check_hlds__simplify__format_call__parse_string_format__V_11_11);
                }
#line 51 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                  {
#line 2569 "check_hlds.simplify.format_call.parse_string_format.c"
                    {
#line 2571 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(check_hlds__simplify__format_call__parse_string_format__V_8_8, check_hlds__simplify__format_call__parse_string_format__V_12_12);
                    }
#line 51 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                      {
#line 2578 "check_hlds.simplify.format_call.parse_string_format.c"
                        {
#line 2580 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(check_hlds__simplify__format_call__parse_string_format__V_9_9, check_hlds__simplify__format_call__parse_string_format__V_13_13);
                        }
#line 51 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                          {
#line 2587 "check_hlds.simplify.format_call.parse_string_format.c"
                            check_hlds__simplify__format_call__parse_string_format__TypeInfo_64_64 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 2589 "check_hlds.simplify.format_call.parse_string_format.c"
                            {
#line 2591 "check_hlds.simplify.format_call.parse_string_format.c"
                              return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_64_64, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_10_10)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_14_14)));
                            }
#line 51 "parse_string_format.m"
                          }
#line 51 "parse_string_format.m"
                      }
#line 51 "parse_string_format.m"
                  }
#line 51 "parse_string_format.m"
              }
#line 51 "parse_string_format.m"
          }
#line 51 "parse_string_format.m"
          break;
#line 51 "parse_string_format.m"
        case (MR_Integer) 2:
#line 51 "parse_string_format.m"
          {
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_73_73;
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_20_20;
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_21_21;
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_22_22;
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_23_23;
#line 51 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_24_24;

#line 51 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 51 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
              {
#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 2649 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 2651 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_15_15, check_hlds__simplify__format_call__parse_string_format__V_20_20);
                }
#line 51 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                  {
#line 2658 "check_hlds.simplify.format_call.parse_string_format.c"
                    {
#line 2660 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(check_hlds__simplify__format_call__parse_string_format__V_16_16, check_hlds__simplify__format_call__parse_string_format__V_21_21);
                    }
#line 51 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                      {
#line 2667 "check_hlds.simplify.format_call.parse_string_format.c"
                        {
#line 2669 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(check_hlds__simplify__format_call__parse_string_format__V_17_17, check_hlds__simplify__format_call__parse_string_format__V_22_22);
                        }
#line 51 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                          {
#line 2676 "check_hlds.simplify.format_call.parse_string_format.c"
                            {
#line 2678 "check_hlds.simplify.format_call.parse_string_format.c"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(check_hlds__simplify__format_call__parse_string_format__V_18_18, check_hlds__simplify__format_call__parse_string_format__V_23_23);
                            }
#line 51 "parse_string_format.m"
                            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                              {
#line 2685 "check_hlds.simplify.format_call.parse_string_format.c"
                                check_hlds__simplify__format_call__parse_string_format__TypeInfo_73_73 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 2687 "check_hlds.simplify.format_call.parse_string_format.c"
                                {
#line 2689 "check_hlds.simplify.format_call.parse_string_format.c"
                                  return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_73_73, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_19_19)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_24_24)));
                                }
#line 51 "parse_string_format.m"
                              }
#line 51 "parse_string_format.m"
                          }
#line 51 "parse_string_format.m"
                      }
#line 51 "parse_string_format.m"
                  }
#line 51 "parse_string_format.m"
              }
#line 51 "parse_string_format.m"
          }
#line 51 "parse_string_format.m"
          break;
#line 51 "parse_string_format.m"
        case (MR_Integer) 3:
#line 51 "parse_string_format.m"
#line 51 "parse_string_format.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)))) {
#line 51 "parse_string_format.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 51 "parse_string_format.m"
            case (MR_Integer) 0:
#line 51 "parse_string_format.m"
              {
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_70_70;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 5)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_30_30;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_31_31;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_32_32;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_33_33;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_34_34;

#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 51 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                  {
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 2756 "check_hlds.simplify.format_call.parse_string_format.c"
                    {
#line 2758 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_25_25, check_hlds__simplify__format_call__parse_string_format__V_30_30);
                    }
#line 51 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                      {
#line 2765 "check_hlds.simplify.format_call.parse_string_format.c"
                        {
#line 2767 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(check_hlds__simplify__format_call__parse_string_format__V_26_26, check_hlds__simplify__format_call__parse_string_format__V_31_31);
                        }
#line 51 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                          {
#line 2774 "check_hlds.simplify.format_call.parse_string_format.c"
                            {
#line 2776 "check_hlds.simplify.format_call.parse_string_format.c"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(check_hlds__simplify__format_call__parse_string_format__V_27_27, check_hlds__simplify__format_call__parse_string_format__V_32_32);
                            }
#line 51 "parse_string_format.m"
                            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                              {
#line 2783 "check_hlds.simplify.format_call.parse_string_format.c"
                                {
#line 2785 "check_hlds.simplify.format_call.parse_string_format.c"
                                  check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(check_hlds__simplify__format_call__parse_string_format__V_28_28, check_hlds__simplify__format_call__parse_string_format__V_33_33);
                                }
#line 51 "parse_string_format.m"
                                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                  {
#line 2792 "check_hlds.simplify.format_call.parse_string_format.c"
                                    check_hlds__simplify__format_call__parse_string_format__TypeInfo_70_70 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 2794 "check_hlds.simplify.format_call.parse_string_format.c"
                                    {
#line 2796 "check_hlds.simplify.format_call.parse_string_format.c"
                                      return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_70_70, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_29_29)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_34_34)));
                                    }
#line 51 "parse_string_format.m"
                                  }
#line 51 "parse_string_format.m"
                              }
#line 51 "parse_string_format.m"
                          }
#line 51 "parse_string_format.m"
                      }
#line 51 "parse_string_format.m"
                  }
#line 51 "parse_string_format.m"
              }
#line 51 "parse_string_format.m"
              break;
#line 51 "parse_string_format.m"
            case (MR_Integer) 1:
#line 51 "parse_string_format.m"
              {
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_76_76;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 5)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 6)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_41_41;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_42_42;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_43_43;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_44_44;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_45_45;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_46_46;

#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                  {
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 6)));
#line 2862 "check_hlds.simplify.format_call.parse_string_format.c"
                    {
#line 2864 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_35_35, check_hlds__simplify__format_call__parse_string_format__V_41_41);
                    }
#line 51 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                      {
#line 2871 "check_hlds.simplify.format_call.parse_string_format.c"
                        {
#line 2873 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(check_hlds__simplify__format_call__parse_string_format__V_36_36, check_hlds__simplify__format_call__parse_string_format__V_42_42);
                        }
#line 51 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                          {
#line 2880 "check_hlds.simplify.format_call.parse_string_format.c"
                            {
#line 2882 "check_hlds.simplify.format_call.parse_string_format.c"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(check_hlds__simplify__format_call__parse_string_format__V_37_37, check_hlds__simplify__format_call__parse_string_format__V_43_43);
                            }
#line 51 "parse_string_format.m"
                            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                              {
#line 2889 "check_hlds.simplify.format_call.parse_string_format.c"
                                {
#line 2891 "check_hlds.simplify.format_call.parse_string_format.c"
                                  check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(check_hlds__simplify__format_call__parse_string_format__V_38_38, check_hlds__simplify__format_call__parse_string_format__V_44_44);
                                }
#line 51 "parse_string_format.m"
                                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                  {
#line 2898 "check_hlds.simplify.format_call.parse_string_format.c"
                                    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_39_39 == check_hlds__simplify__format_call__parse_string_format__V_45_45);
#line 51 "parse_string_format.m"
                                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                      {
#line 2904 "check_hlds.simplify.format_call.parse_string_format.c"
                                        check_hlds__simplify__format_call__parse_string_format__TypeInfo_76_76 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 2906 "check_hlds.simplify.format_call.parse_string_format.c"
                                        {
#line 2908 "check_hlds.simplify.format_call.parse_string_format.c"
                                          return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_76_76, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_40_40)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_46_46)));
                                        }
#line 51 "parse_string_format.m"
                                      }
#line 51 "parse_string_format.m"
                                  }
#line 51 "parse_string_format.m"
                              }
#line 51 "parse_string_format.m"
                          }
#line 51 "parse_string_format.m"
                      }
#line 51 "parse_string_format.m"
                  }
#line 51 "parse_string_format.m"
              }
#line 51 "parse_string_format.m"
              break;
#line 51 "parse_string_format.m"
            case (MR_Integer) 2:
#line 51 "parse_string_format.m"
              {
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_67_67;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 5)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 6)));
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_53_53;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_54_54;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_55_55;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_56_56;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_57_57;
#line 51 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_58_58;

#line 51 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                  {
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 3)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 4)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 5)));
#line 51 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 6)));
#line 2976 "check_hlds.simplify.format_call.parse_string_format.c"
                    {
#line 2978 "check_hlds.simplify.format_call.parse_string_format.c"
                      check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_47_47, check_hlds__simplify__format_call__parse_string_format__V_53_53);
                    }
#line 51 "parse_string_format.m"
                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                      {
#line 2985 "check_hlds.simplify.format_call.parse_string_format.c"
                        {
#line 2987 "check_hlds.simplify.format_call.parse_string_format.c"
                          check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(check_hlds__simplify__format_call__parse_string_format__V_48_48, check_hlds__simplify__format_call__parse_string_format__V_54_54);
                        }
#line 51 "parse_string_format.m"
                        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                          {
#line 2994 "check_hlds.simplify.format_call.parse_string_format.c"
                            {
#line 2996 "check_hlds.simplify.format_call.parse_string_format.c"
                              check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(check_hlds__simplify__format_call__parse_string_format__V_49_49, check_hlds__simplify__format_call__parse_string_format__V_55_55);
                            }
#line 51 "parse_string_format.m"
                            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                              {
#line 3003 "check_hlds.simplify.format_call.parse_string_format.c"
                                {
#line 3005 "check_hlds.simplify.format_call.parse_string_format.c"
                                  check_hlds__simplify__format_call__parse_string_format__succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(check_hlds__simplify__format_call__parse_string_format__V_50_50, check_hlds__simplify__format_call__parse_string_format__V_56_56);
                                }
#line 51 "parse_string_format.m"
                                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                  {
#line 3012 "check_hlds.simplify.format_call.parse_string_format.c"
                                    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_51_51 == check_hlds__simplify__format_call__parse_string_format__V_57_57);
#line 51 "parse_string_format.m"
                                    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 51 "parse_string_format.m"
                                      {
#line 3018 "check_hlds.simplify.format_call.parse_string_format.c"
                                        check_hlds__simplify__format_call__parse_string_format__TypeInfo_67_67 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 3020 "check_hlds.simplify.format_call.parse_string_format.c"
                                        {
#line 3022 "check_hlds.simplify.format_call.parse_string_format.c"
                                          return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_67_67, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_52_52)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_58_58)));
                                        }
#line 51 "parse_string_format.m"
                                      }
#line 51 "parse_string_format.m"
                                  }
#line 51 "parse_string_format.m"
                              }
#line 51 "parse_string_format.m"
                          }
#line 51 "parse_string_format.m"
                      }
#line 51 "parse_string_format.m"
                  }
#line 51 "parse_string_format.m"
              }
#line 51 "parse_string_format.m"
              break;
#line 51 "parse_string_format.m"
          }
#line 51 "parse_string_format.m"
          break;
#line 51 "parse_string_format.m"
      }
#line 51 "parse_string_format.m"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 51 "parse_string_format.m"
  }
#line 51 "parse_string_format.m"
}

#line 41 "parse_string_format.m"
void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(
#line 41 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 41 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2,
#line 41 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)
#line 41 "parse_string_format.m"
{
#line 41 "parse_string_format.m"
  {
#line 41 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 41 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_16 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;
#line 41 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_17 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3;

#line 41 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_16 == check_hlds__simplify__format_call__parse_string_format__CastY_17);
#line 41 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 3078 "check_hlds.simplify.format_call.parse_string_format.c"
      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "parse_string_format.m"
    else
#line 41 "parse_string_format.m"
#line 41 "parse_string_format.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) {
#line 41 "parse_string_format.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 41 "parse_string_format.m"
        case (MR_Integer) 0:
#line 41 "parse_string_format.m"
#line 41 "parse_string_format.m"
          switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 41 "parse_string_format.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 41 "parse_string_format.m"
            case (MR_Integer) 0:
#line 41 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "parse_string_format.m"
              break;
#line 41 "parse_string_format.m"
            case (MR_Integer) 1:
#line 3102 "check_hlds.simplify.format_call.parse_string_format.c"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "parse_string_format.m"
              break;
#line 41 "parse_string_format.m"
            case (MR_Integer) 2:
#line 3108 "check_hlds.simplify.format_call.parse_string_format.c"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "parse_string_format.m"
              break;
#line 41 "parse_string_format.m"
          }
#line 41 "parse_string_format.m"
          break;
#line 41 "parse_string_format.m"
        case (MR_Integer) 1:
#line 41 "parse_string_format.m"
          {
#line 41 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 41 "parse_string_format.m"
#line 41 "parse_string_format.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 41 "parse_string_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 41 "parse_string_format.m"
              case (MR_Integer) 0:
#line 3130 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "parse_string_format.m"
                break;
#line 41 "parse_string_format.m"
              case (MR_Integer) 1:
#line 41 "parse_string_format.m"
                {
#line 41 "parse_string_format.m"
                  MR_Integer check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));

#line 41 "parse_string_format.m"
                  {
#line 41 "parse_string_format.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_20_20, check_hlds__simplify__format_call__parse_string_format__V_8_8);
#line 41 "parse_string_format.m"
                    return;
                  }
#line 41 "parse_string_format.m"
                }
#line 41 "parse_string_format.m"
                break;
#line 41 "parse_string_format.m"
              case (MR_Integer) 2:
#line 3154 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "parse_string_format.m"
                break;
#line 41 "parse_string_format.m"
            }
#line 41 "parse_string_format.m"
          }
#line 41 "parse_string_format.m"
          break;
#line 41 "parse_string_format.m"
        case (MR_Integer) 2:
#line 41 "parse_string_format.m"
          {
#line 41 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 41 "parse_string_format.m"
#line 41 "parse_string_format.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 41 "parse_string_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 41 "parse_string_format.m"
              case (MR_Integer) 0:
#line 3178 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "parse_string_format.m"
                break;
#line 41 "parse_string_format.m"
              case (MR_Integer) 1:
#line 3184 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "parse_string_format.m"
                break;
#line 41 "parse_string_format.m"
              case (MR_Integer) 2:
#line 41 "parse_string_format.m"
                {
#line 41 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));

#line 41 "parse_string_format.m"
                  {
#line 41 "parse_string_format.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_21_21)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_15_15)));
#line 41 "parse_string_format.m"
                    return;
                  }
#line 41 "parse_string_format.m"
                }
#line 41 "parse_string_format.m"
                break;
#line 41 "parse_string_format.m"
            }
#line 41 "parse_string_format.m"
          }
#line 41 "parse_string_format.m"
          break;
#line 41 "parse_string_format.m"
      }
#line 41 "parse_string_format.m"
  }
#line 41 "parse_string_format.m"
}

#line 41 "parse_string_format.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(
#line 41 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 41 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)
#line 41 "parse_string_format.m"
{
#line 41 "parse_string_format.m"
  {
#line 41 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 41 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 41 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 41 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_9 == check_hlds__simplify__format_call__parse_string_format__CastY_10);
#line 41 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 41 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 41 "parse_string_format.m"
    else
#line 41 "parse_string_format.m"
#line 41 "parse_string_format.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) {
#line 41 "parse_string_format.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 41 "parse_string_format.m"
        case (MR_Integer) 0:
#line 41 "parse_string_format.m"
          {
#line 41 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_3 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 41 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_4 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 41 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastY_4 == check_hlds__simplify__format_call__parse_string_format__CastX_3);
#line 41 "parse_string_format.m"
          }
#line 41 "parse_string_format.m"
          break;
#line 41 "parse_string_format.m"
        case (MR_Integer) 1:
#line 41 "parse_string_format.m"
          {
#line 41 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_6_6;

#line 41 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 41 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 41 "parse_string_format.m"
              {
#line 41 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 3282 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_5_5 == check_hlds__simplify__format_call__parse_string_format__V_6_6);
#line 41 "parse_string_format.m"
              }
#line 41 "parse_string_format.m"
          }
#line 41 "parse_string_format.m"
          break;
#line 41 "parse_string_format.m"
        case (MR_Integer) 2:
#line 41 "parse_string_format.m"
          {
#line 41 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11;
#line 41 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8;

#line 41 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 41 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 41 "parse_string_format.m"
              {
#line 41 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 3309 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 3311 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 3313 "check_hlds.simplify.format_call.parse_string_format.c"
                  return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_7_7)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_8_8)));
                }
#line 41 "parse_string_format.m"
              }
#line 41 "parse_string_format.m"
          }
#line 41 "parse_string_format.m"
          break;
#line 41 "parse_string_format.m"
      }
#line 41 "parse_string_format.m"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 41 "parse_string_format.m"
  }
#line 41 "parse_string_format.m"
}

#line 46 "parse_string_format.m"
void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(
#line 46 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 46 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2,
#line 46 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)
#line 46 "parse_string_format.m"
{
#line 46 "parse_string_format.m"
  {
#line 46 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 46 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_16 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;
#line 46 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_17 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3;

#line 46 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_16 == check_hlds__simplify__format_call__parse_string_format__CastY_17);
#line 46 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 3355 "check_hlds.simplify.format_call.parse_string_format.c"
      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "parse_string_format.m"
    else
#line 46 "parse_string_format.m"
#line 46 "parse_string_format.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) {
#line 46 "parse_string_format.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 46 "parse_string_format.m"
        case (MR_Integer) 0:
#line 46 "parse_string_format.m"
#line 46 "parse_string_format.m"
          switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 46 "parse_string_format.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 46 "parse_string_format.m"
            case (MR_Integer) 0:
#line 46 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "parse_string_format.m"
              break;
#line 46 "parse_string_format.m"
            case (MR_Integer) 1:
#line 3379 "check_hlds.simplify.format_call.parse_string_format.c"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "parse_string_format.m"
              break;
#line 46 "parse_string_format.m"
            case (MR_Integer) 2:
#line 3385 "check_hlds.simplify.format_call.parse_string_format.c"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "parse_string_format.m"
              break;
#line 46 "parse_string_format.m"
          }
#line 46 "parse_string_format.m"
          break;
#line 46 "parse_string_format.m"
        case (MR_Integer) 1:
#line 46 "parse_string_format.m"
          {
#line 46 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 46 "parse_string_format.m"
#line 46 "parse_string_format.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 46 "parse_string_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 46 "parse_string_format.m"
              case (MR_Integer) 0:
#line 3407 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "parse_string_format.m"
                break;
#line 46 "parse_string_format.m"
              case (MR_Integer) 1:
#line 46 "parse_string_format.m"
                {
#line 46 "parse_string_format.m"
                  MR_Integer check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));

#line 46 "parse_string_format.m"
                  {
#line 46 "parse_string_format.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_20_20, check_hlds__simplify__format_call__parse_string_format__V_8_8);
#line 46 "parse_string_format.m"
                    return;
                  }
#line 46 "parse_string_format.m"
                }
#line 46 "parse_string_format.m"
                break;
#line 46 "parse_string_format.m"
              case (MR_Integer) 2:
#line 3431 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "parse_string_format.m"
                break;
#line 46 "parse_string_format.m"
            }
#line 46 "parse_string_format.m"
          }
#line 46 "parse_string_format.m"
          break;
#line 46 "parse_string_format.m"
        case (MR_Integer) 2:
#line 46 "parse_string_format.m"
          {
#line 46 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 46 "parse_string_format.m"
#line 46 "parse_string_format.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 46 "parse_string_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 46 "parse_string_format.m"
              case (MR_Integer) 0:
#line 3455 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "parse_string_format.m"
                break;
#line 46 "parse_string_format.m"
              case (MR_Integer) 1:
#line 3461 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "parse_string_format.m"
                break;
#line 46 "parse_string_format.m"
              case (MR_Integer) 2:
#line 46 "parse_string_format.m"
                {
#line 46 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));

#line 46 "parse_string_format.m"
                  {
#line 46 "parse_string_format.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_21_21)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_15_15)));
#line 46 "parse_string_format.m"
                    return;
                  }
#line 46 "parse_string_format.m"
                }
#line 46 "parse_string_format.m"
                break;
#line 46 "parse_string_format.m"
            }
#line 46 "parse_string_format.m"
          }
#line 46 "parse_string_format.m"
          break;
#line 46 "parse_string_format.m"
      }
#line 46 "parse_string_format.m"
  }
#line 46 "parse_string_format.m"
}

#line 46 "parse_string_format.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(
#line 46 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 46 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)
#line 46 "parse_string_format.m"
{
#line 46 "parse_string_format.m"
  {
#line 46 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 46 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 46 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 46 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_9 == check_hlds__simplify__format_call__parse_string_format__CastY_10);
#line 46 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 46 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 46 "parse_string_format.m"
    else
#line 46 "parse_string_format.m"
#line 46 "parse_string_format.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) {
#line 46 "parse_string_format.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 46 "parse_string_format.m"
        case (MR_Integer) 0:
#line 46 "parse_string_format.m"
          {
#line 46 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_3 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 46 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_4 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 46 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastY_4 == check_hlds__simplify__format_call__parse_string_format__CastX_3);
#line 46 "parse_string_format.m"
          }
#line 46 "parse_string_format.m"
          break;
#line 46 "parse_string_format.m"
        case (MR_Integer) 1:
#line 46 "parse_string_format.m"
          {
#line 46 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 46 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_6_6;

#line 46 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 46 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 46 "parse_string_format.m"
              {
#line 46 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 3559 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_5_5 == check_hlds__simplify__format_call__parse_string_format__V_6_6);
#line 46 "parse_string_format.m"
              }
#line 46 "parse_string_format.m"
          }
#line 46 "parse_string_format.m"
          break;
#line 46 "parse_string_format.m"
        case (MR_Integer) 2:
#line 46 "parse_string_format.m"
          {
#line 46 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11;
#line 46 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 46 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8;

#line 46 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 46 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 46 "parse_string_format.m"
              {
#line 46 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 3586 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 3588 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 3590 "check_hlds.simplify.format_call.parse_string_format.c"
                  return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_7_7)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_8_8)));
                }
#line 46 "parse_string_format.m"
              }
#line 46 "parse_string_format.m"
          }
#line 46 "parse_string_format.m"
          break;
#line 46 "parse_string_format.m"
      }
#line 46 "parse_string_format.m"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 46 "parse_string_format.m"
  }
#line 46 "parse_string_format.m"
}

#line 35 "parse_string_format.m"
void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0(
#line 35 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 35 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2,
#line 35 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)
#line 35 "parse_string_format.m"
{
#line 35 "parse_string_format.m"
  {
#line 35 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 35 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_72 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;
#line 35 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_73 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3;

#line 35 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_72 == check_hlds__simplify__format_call__parse_string_format__CastY_73);
#line 35 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 3632 "check_hlds.simplify.format_call.parse_string_format.c"
      *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "parse_string_format.m"
    else
#line 35 "parse_string_format.m"
#line 35 "parse_string_format.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) {
#line 35 "parse_string_format.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 35 "parse_string_format.m"
        case (MR_Integer) 0:
#line 35 "parse_string_format.m"
          {
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 35 "parse_string_format.m"
#line 35 "parse_string_format.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 35 "parse_string_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 35 "parse_string_format.m"
              case (MR_Integer) 0:
#line 35 "parse_string_format.m"
                {
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8;

#line 35 "parse_string_format.m"
                  {
#line 35 "parse_string_format.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &check_hlds__simplify__format_call__parse_string_format__V_8_8, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_85_85)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_6_6)));
                  }
#line 3671 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_8_8 == (MR_Integer) 0);
#line 35 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 35 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 35 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_8_8;
#line 35 "parse_string_format.m"
                  else
#line 35 "parse_string_format.m"
                    {
#line 35 "parse_string_format.m"
                      mercury__term____Compare____context_0_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_84_84, check_hlds__simplify__format_call__parse_string_format__V_7_7);
#line 35 "parse_string_format.m"
                      return;
                    }
#line 35 "parse_string_format.m"
                }
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 1:
#line 3694 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 2:
#line 3700 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 3:
#line 3706 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
            }
#line 35 "parse_string_format.m"
          }
#line 35 "parse_string_format.m"
          break;
#line 35 "parse_string_format.m"
        case (MR_Integer) 1:
#line 35 "parse_string_format.m"
          {
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 35 "parse_string_format.m"
#line 35 "parse_string_format.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 35 "parse_string_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 35 "parse_string_format.m"
              case (MR_Integer) 0:
#line 3732 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 1:
#line 35 "parse_string_format.m"
                {
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_29_29;

#line 35 "parse_string_format.m"
                  {
#line 35 "parse_string_format.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &check_hlds__simplify__format_call__parse_string_format__V_29_29, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_87_87)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_27_27)));
                  }
#line 3752 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_29_29 == (MR_Integer) 0);
#line 35 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 35 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 35 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_29_29;
#line 35 "parse_string_format.m"
                  else
#line 35 "parse_string_format.m"
                    {
#line 35 "parse_string_format.m"
                      mercury__term____Compare____context_0_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_86_86, check_hlds__simplify__format_call__parse_string_format__V_28_28);
#line 35 "parse_string_format.m"
                      return;
                    }
#line 35 "parse_string_format.m"
                }
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 2:
#line 3775 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 3:
#line 3781 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
            }
#line 35 "parse_string_format.m"
          }
#line 35 "parse_string_format.m"
          break;
#line 35 "parse_string_format.m"
        case (MR_Integer) 2:
#line 35 "parse_string_format.m"
          {
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 35 "parse_string_format.m"
#line 35 "parse_string_format.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 35 "parse_string_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 35 "parse_string_format.m"
              case (MR_Integer) 0:
#line 3807 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 1:
#line 3813 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 2:
#line 35 "parse_string_format.m"
                {
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_50_50;

#line 35 "parse_string_format.m"
                  {
#line 35 "parse_string_format.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &check_hlds__simplify__format_call__parse_string_format__V_50_50, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_89_89)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_48_48)));
                  }
#line 3833 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_50_50 == (MR_Integer) 0);
#line 35 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 35 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 35 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_50_50;
#line 35 "parse_string_format.m"
                  else
#line 35 "parse_string_format.m"
                    {
#line 35 "parse_string_format.m"
                      mercury__term____Compare____context_0_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_88_88, check_hlds__simplify__format_call__parse_string_format__V_49_49);
#line 35 "parse_string_format.m"
                      return;
                    }
#line 35 "parse_string_format.m"
                }
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 3:
#line 3856 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
            }
#line 35 "parse_string_format.m"
          }
#line 35 "parse_string_format.m"
          break;
#line 35 "parse_string_format.m"
        case (MR_Integer) 3:
#line 35 "parse_string_format.m"
          {
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));

#line 35 "parse_string_format.m"
#line 35 "parse_string_format.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3)) {
#line 35 "parse_string_format.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 35 "parse_string_format.m"
              case (MR_Integer) 0:
#line 3882 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 1:
#line 3888 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 2:
#line 3894 "check_hlds.simplify.format_call.parse_string_format.c"
                *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
              case (MR_Integer) 3:
#line 35 "parse_string_format.m"
                {
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__3_3, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__V_71_71;

#line 35 "parse_string_format.m"
                  {
#line 35 "parse_string_format.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &check_hlds__simplify__format_call__parse_string_format__V_71_71, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_83_83)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_69_69)));
                  }
#line 3914 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_71_71 == (MR_Integer) 0);
#line 35 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = !(check_hlds__simplify__format_call__parse_string_format__succeeded);
#line 35 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 35 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 = check_hlds__simplify__format_call__parse_string_format__V_71_71;
#line 35 "parse_string_format.m"
                  else
#line 35 "parse_string_format.m"
                    {
#line 35 "parse_string_format.m"
                      mercury__term____Compare____context_0_0(check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, check_hlds__simplify__format_call__parse_string_format__V_82_82, check_hlds__simplify__format_call__parse_string_format__V_70_70);
#line 35 "parse_string_format.m"
                      return;
                    }
#line 35 "parse_string_format.m"
                }
#line 35 "parse_string_format.m"
                break;
#line 35 "parse_string_format.m"
            }
#line 35 "parse_string_format.m"
          }
#line 35 "parse_string_format.m"
          break;
#line 35 "parse_string_format.m"
      }
#line 35 "parse_string_format.m"
  }
#line 35 "parse_string_format.m"
}

#line 35 "parse_string_format.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0(
#line 35 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 35 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)
#line 35 "parse_string_format.m"
{
#line 35 "parse_string_format.m"
  {
#line 35 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 35 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastX_19 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1;
#line 35 "parse_string_format.m"
    MR_Integer check_hlds__simplify__format_call__parse_string_format__CastY_20 = (MR_Integer) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 35 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__CastX_19 == check_hlds__simplify__format_call__parse_string_format__CastY_20);
#line 35 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 35 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 35 "parse_string_format.m"
    else
#line 35 "parse_string_format.m"
#line 35 "parse_string_format.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) {
#line 35 "parse_string_format.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 35 "parse_string_format.m"
        case (MR_Integer) 0:
#line 35 "parse_string_format.m"
          {
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_23_23;
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_5_5;
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_6_6;

#line 35 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 35 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 35 "parse_string_format.m"
              {
#line 35 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 4004 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__TypeInfo_23_23 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 4006 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 4008 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_23_23, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_3_3)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_5_5)));
                }
#line 35 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 4013 "check_hlds.simplify.format_call.parse_string_format.c"
                  {
#line 4015 "check_hlds.simplify.format_call.parse_string_format.c"
                    return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_4_4, check_hlds__simplify__format_call__parse_string_format__V_6_6);
                  }
#line 35 "parse_string_format.m"
              }
#line 35 "parse_string_format.m"
          }
#line 35 "parse_string_format.m"
          break;
#line 35 "parse_string_format.m"
        case (MR_Integer) 1:
#line 35 "parse_string_format.m"
          {
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_25_25;
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_9_9;
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_10_10;

#line 35 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 35 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 35 "parse_string_format.m"
              {
#line 35 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 4049 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__TypeInfo_25_25 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 4051 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 4053 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_25_25, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_7_7)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_9_9)));
                }
#line 35 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 4058 "check_hlds.simplify.format_call.parse_string_format.c"
                  {
#line 4060 "check_hlds.simplify.format_call.parse_string_format.c"
                    return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_8_8, check_hlds__simplify__format_call__parse_string_format__V_10_10);
                  }
#line 35 "parse_string_format.m"
              }
#line 35 "parse_string_format.m"
          }
#line 35 "parse_string_format.m"
          break;
#line 35 "parse_string_format.m"
        case (MR_Integer) 2:
#line 35 "parse_string_format.m"
          {
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_27_27;
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_13_13;
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_14_14;

#line 35 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 35 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 35 "parse_string_format.m"
              {
#line 35 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 4094 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__TypeInfo_27_27 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 4096 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 4098 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_27_27, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_11_11)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_13_13)));
                }
#line 35 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 4103 "check_hlds.simplify.format_call.parse_string_format.c"
                  {
#line 4105 "check_hlds.simplify.format_call.parse_string_format.c"
                    return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_12_12, check_hlds__simplify__format_call__parse_string_format__V_14_14);
                  }
#line 35 "parse_string_format.m"
              }
#line 35 "parse_string_format.m"
          }
#line 35 "parse_string_format.m"
          break;
#line 35 "parse_string_format.m"
        case (MR_Integer) 3:
#line 35 "parse_string_format.m"
          {
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__TypeInfo_21_21;
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_17_17;
#line 35 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_18_18;

#line 35 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 35 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 35 "parse_string_format.m"
              {
#line 35 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2, (MR_Integer) 1)));
#line 4139 "check_hlds.simplify.format_call.parse_string_format.c"
                check_hlds__simplify__format_call__parse_string_format__TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
#line 4141 "check_hlds.simplify.format_call.parse_string_format.c"
                {
#line 4143 "check_hlds.simplify.format_call.parse_string_format.c"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__parse_string_format__TypeInfo_21_21, ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_15_15)), ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_17_17)));
                }
#line 35 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 4148 "check_hlds.simplify.format_call.parse_string_format.c"
                  {
#line 4150 "check_hlds.simplify.format_call.parse_string_format.c"
                    return check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__parse_string_format__V_16_16, check_hlds__simplify__format_call__parse_string_format__V_18_18);
                  }
#line 35 "parse_string_format.m"
              }
#line 35 "parse_string_format.m"
          }
#line 35 "parse_string_format.m"
          break;
#line 35 "parse_string_format.m"
      }
#line 35 "parse_string_format.m"
    return check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 35 "parse_string_format.m"
  }
#line 35 "parse_string_format.m"
}

#line 494 "parse_string_format.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(
#line 494 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)
#line 494 "parse_string_format.m"
{
#line 496 "parse_string_format.m"
  {
#line 496 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 496 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;

#line 496 "parse_string_format.m"
#line 496 "parse_string_format.m"
    switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1)) {
#line 496 "parse_string_format.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 496 "parse_string_format.m"
      case (MR_Integer) 0:
#line 499 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = (MR_Integer) 3;
#line 496 "parse_string_format.m"
        break;
#line 496 "parse_string_format.m"
      case (MR_Integer) 1:
#line 498 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = (MR_Integer) 2;
#line 496 "parse_string_format.m"
        break;
#line 496 "parse_string_format.m"
      case (MR_Integer) 2:
#line 497 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = (MR_Integer) 1;
#line 496 "parse_string_format.m"
        break;
#line 496 "parse_string_format.m"
      case (MR_Integer) 3:
#line 496 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = (MR_Integer) 0;
#line 496 "parse_string_format.m"
        break;
#line 496 "parse_string_format.m"
    }
#line 496 "parse_string_format.m"
    return check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2;
#line 496 "parse_string_format.m"
  }
#line 494 "parse_string_format.m"
}

#line 323 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_first_spec_11_p_0(
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1,
#line 323 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_2,
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3,
#line 323 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_4,
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__OverallContext_5,
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6,
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7,
#line 323 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8,
#line 323 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_9,
#line 323 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Spec_10,
#line 323 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_11)
#line 323 "parse_string_format.m"
{
#line 330 "parse_string_format.m"
  {
#line 330 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 330 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "parse_string_format.m"
      {
#line 330 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__V_26_26;
#line 330 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__V_27_27;

#line 332 "parse_string_format.m"
        {
#line 332 "parse_string_format.m"
          MR_Word base;
#line 332 "parse_string_format.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__Spec_10 = base;
#line 332 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 332 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_String) ""));
#line 332 "parse_string_format.m"
        }
#line 333 "parse_string_format.m"
        {
#line 333 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__V_27_27 = mercury__list__length_1_f_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3);
        }
#line 333 "parse_string_format.m"
        {
#line 333 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__V_26_26, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 333 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__V_26_26, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_27_27));
#line 333 "parse_string_format.m"
        }
#line 333 "parse_string_format.m"
        {
#line 333 "parse_string_format.m"
          MR_Word base;
#line 333 "parse_string_format.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__Errors_11 = base;
#line 333 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_26_26));
#line 333 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "parse_string_format.m"
        }
#line 329 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_4 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 329 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_2 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1;
#line 330 "parse_string_format.m"
      }
#line 330 "parse_string_format.m"
    else
#line 335 "parse_string_format.m"
      {
#line 335 "parse_string_format.m"
        MR_Char check_hlds__simplify__format_call__parse_string_format__SpecChar_38 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1, (MR_Integer) 0)));
#line 486 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPrime_39;
#line 486 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40;
#line 486 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84;

#line 336 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_1, (MR_Integer) 1)));
#line 343 "parse_string_format.m"
#line 343 "parse_string_format.m"
        switch (check_hlds__simplify__format_call__parse_string_format__SpecChar_38) {
#line 343 "parse_string_format.m"
          default:
#line 343 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = MR_FALSE;
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 37:
#line 340 "parse_string_format.m"
            {
#line 341 "parse_string_format.m"
              {
#line 341 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 341 "parse_string_format.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 341 "parse_string_format.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) "%"));
#line 341 "parse_string_format.m"
              }
#line 342 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 340 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 340 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 340 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 69:
#line 422 "parse_string_format.m"
            {
#line 435 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "parse_string_format.m"
                {
#line 436 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_117;

#line 437 "parse_string_format.m"
                  {
#line 437 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_117, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_117, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 437 "parse_string_format.m"
                  }
#line 438 "parse_string_format.m"
                  {
#line 438 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 438 "parse_string_format.m"
                  }
#line 439 "parse_string_format.m"
                  {
#line 439 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_117));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "parse_string_format.m"
                  }
#line 436 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 436 "parse_string_format.m"
                }
#line 435 "parse_string_format.m"
              else
#line 424 "parse_string_format.m"
                {
#line 424 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_47;
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_112;

#line 424 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 425 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_114)) == (MR_mktag((MR_Integer) 0)));
#line 425 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 425 "parse_string_format.m"
                    {
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__FloatVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_114, (MR_Integer) 0)));
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_114, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                      {
#line 426 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_112));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 1));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_47));
#line 426 "parse_string_format.m"
                      }
#line 428 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "parse_string_format.m"
                    }
#line 425 "parse_string_format.m"
                  else
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_71_71;
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_111;

#line 431 "parse_string_format.m"
                      {
#line 431 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_71_71 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_114);
                      }
#line 430 "parse_string_format.m"
                      {
#line 430 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_111, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_111, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_111, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_71_71));
#line 430 "parse_string_format.m"
                      }
#line 432 "parse_string_format.m"
                      {
#line 432 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 432 "parse_string_format.m"
                      }
#line 433 "parse_string_format.m"
                      {
#line 433 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_111));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "parse_string_format.m"
                      }
#line 431 "parse_string_format.m"
                    }
#line 424 "parse_string_format.m"
                }
#line 422 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 422 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 70:
#line 422 "parse_string_format.m"
            {
#line 435 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "parse_string_format.m"
                {
#line 436 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_170;

#line 437 "parse_string_format.m"
                  {
#line 437 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_170, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_170, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 437 "parse_string_format.m"
                  }
#line 438 "parse_string_format.m"
                  {
#line 438 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 438 "parse_string_format.m"
                  }
#line 439 "parse_string_format.m"
                  {
#line 439 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_170));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "parse_string_format.m"
                  }
#line 436 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 436 "parse_string_format.m"
                }
#line 435 "parse_string_format.m"
              else
#line 424 "parse_string_format.m"
                {
#line 424 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_175;
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_180;

#line 424 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 425 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_187)) == (MR_mktag((MR_Integer) 0)));
#line 425 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 425 "parse_string_format.m"
                    {
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__FloatVar_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_187, (MR_Integer) 0)));
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_187, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                      {
#line 426 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_180));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 3));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_175));
#line 426 "parse_string_format.m"
                      }
#line 428 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "parse_string_format.m"
                    }
#line 425 "parse_string_format.m"
                  else
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_171_171;
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_174;

#line 431 "parse_string_format.m"
                      {
#line 431 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_171_171 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_187);
                      }
#line 430 "parse_string_format.m"
                      {
#line 430 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_174 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_174, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_174, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_174, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_171_171));
#line 430 "parse_string_format.m"
                      }
#line 432 "parse_string_format.m"
                      {
#line 432 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 432 "parse_string_format.m"
                      }
#line 433 "parse_string_format.m"
                      {
#line 433 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_174));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "parse_string_format.m"
                      }
#line 431 "parse_string_format.m"
                    }
#line 424 "parse_string_format.m"
                }
#line 422 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 422 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 71:
#line 422 "parse_string_format.m"
            {
#line 435 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "parse_string_format.m"
                {
#line 436 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_213;

#line 437 "parse_string_format.m"
                  {
#line 437 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_213, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_213, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 437 "parse_string_format.m"
                  }
#line 438 "parse_string_format.m"
                  {
#line 438 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 438 "parse_string_format.m"
                  }
#line 439 "parse_string_format.m"
                  {
#line 439 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_213));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "parse_string_format.m"
                  }
#line 436 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 436 "parse_string_format.m"
                }
#line 435 "parse_string_format.m"
              else
#line 424 "parse_string_format.m"
                {
#line 424 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_218;
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_223;

#line 424 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 425 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_230)) == (MR_mktag((MR_Integer) 0)));
#line 425 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 425 "parse_string_format.m"
                    {
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__FloatVar_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_230, (MR_Integer) 0)));
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_230, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                      {
#line 426 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_223));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 5));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_218));
#line 426 "parse_string_format.m"
                      }
#line 428 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "parse_string_format.m"
                    }
#line 425 "parse_string_format.m"
                  else
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_214_214;
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_217;

#line 431 "parse_string_format.m"
                      {
#line 431 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_214_214 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_230);
                      }
#line 430 "parse_string_format.m"
                      {
#line 430 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_217 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_217, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_217, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_217, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_214_214));
#line 430 "parse_string_format.m"
                      }
#line 432 "parse_string_format.m"
                      {
#line 432 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 432 "parse_string_format.m"
                      }
#line 433 "parse_string_format.m"
                      {
#line 433 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_217));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "parse_string_format.m"
                      }
#line 431 "parse_string_format.m"
                    }
#line 424 "parse_string_format.m"
                }
#line 422 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 422 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 88:
#line 384 "parse_string_format.m"
            {
#line 397 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "parse_string_format.m"
                {
#line 398 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_102;

#line 399 "parse_string_format.m"
                  {
#line 399 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_102, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_102, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 399 "parse_string_format.m"
                  }
#line 400 "parse_string_format.m"
                  {
#line 400 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 400 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 400 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 400 "parse_string_format.m"
                  }
#line 401 "parse_string_format.m"
                  {
#line 401 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_102));
#line 401 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "parse_string_format.m"
                  }
#line 398 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 398 "parse_string_format.m"
                }
#line 397 "parse_string_format.m"
              else
#line 386 "parse_string_format.m"
                {
#line 386 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 391 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_95;
#line 391 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_96;

#line 386 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 387 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_98)) == (MR_mktag((MR_Integer) 1)));
#line 387 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 387 "parse_string_format.m"
                    {
#line 387 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__IntVar_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_98, (MR_Integer) 0)));
#line 387 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_98, (MR_Integer) 1)));
#line 388 "parse_string_format.m"
                      {
#line 388 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_96));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 3));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_95));
#line 388 "parse_string_format.m"
                      }
#line 390 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "parse_string_format.m"
                    }
#line 387 "parse_string_format.m"
                  else
#line 393 "parse_string_format.m"
                    {
#line 393 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_79_79;
#line 393 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_94;

#line 393 "parse_string_format.m"
                      {
#line 393 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_79_79 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_98);
                      }
#line 392 "parse_string_format.m"
                      {
#line 392 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_94, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_94, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_94, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_79_79));
#line 392 "parse_string_format.m"
                      }
#line 394 "parse_string_format.m"
                      {
#line 394 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 394 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 394 "parse_string_format.m"
                      }
#line 395 "parse_string_format.m"
                      {
#line 395 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_94));
#line 395 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "parse_string_format.m"
                      }
#line 393 "parse_string_format.m"
                    }
#line 386 "parse_string_format.m"
                }
#line 384 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 384 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 99:
#line 456 "parse_string_format.m"
            {
#line 456 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "parse_string_format.m"
                {
#line 457 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_130;

#line 458 "parse_string_format.m"
                  {
#line 458 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 458 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 458 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_130, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 458 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_130, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 458 "parse_string_format.m"
                  }
#line 459 "parse_string_format.m"
                  {
#line 459 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 459 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 459 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 459 "parse_string_format.m"
                  }
#line 460 "parse_string_format.m"
                  {
#line 460 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_130));
#line 460 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 460 "parse_string_format.m"
                  }
#line 457 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 457 "parse_string_format.m"
                }
#line 456 "parse_string_format.m"
              else
#line 444 "parse_string_format.m"
                {
#line 444 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 450 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__CharVar_48;
#line 450 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_125;

#line 444 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 445 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_127)) == (MR_mktag((MR_Integer) 3)));
#line 445 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 445 "parse_string_format.m"
                    {
#line 445 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__CharVar_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_127, (MR_Integer) 0)));
#line 445 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_127, (MR_Integer) 1)));
#line 447 "parse_string_format.m"
                      {
#line 447 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 447 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_125));
#line 447 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 447 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 447 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__CharVar_48));
#line 447 "parse_string_format.m"
                      }
#line 449 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 445 "parse_string_format.m"
                    }
#line 445 "parse_string_format.m"
                  else
#line 452 "parse_string_format.m"
                    {
#line 452 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_65_65;
#line 452 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_124;

#line 452 "parse_string_format.m"
                      {
#line 452 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_65_65 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_127);
                      }
#line 451 "parse_string_format.m"
                      {
#line 451 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 451 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_124, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 451 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_124, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 451 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_124, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_65_65));
#line 451 "parse_string_format.m"
                      }
#line 453 "parse_string_format.m"
                      {
#line 453 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 453 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 453 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 453 "parse_string_format.m"
                      }
#line 454 "parse_string_format.m"
                      {
#line 454 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_124));
#line 454 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 454 "parse_string_format.m"
                      }
#line 452 "parse_string_format.m"
                    }
#line 444 "parse_string_format.m"
                }
#line 456 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 456 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 100:
#line 343 "parse_string_format.m"
          case (MR_Char) 105:
#line 360 "parse_string_format.m"
            {
#line 360 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "parse_string_format.m"
                {
#line 361 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_93;

#line 362 "parse_string_format.m"
                  {
#line 362 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 362 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 362 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_93, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 362 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_93, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 362 "parse_string_format.m"
                  }
#line 363 "parse_string_format.m"
                  {
#line 363 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 363 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 363 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 363 "parse_string_format.m"
                  }
#line 364 "parse_string_format.m"
                  {
#line 364 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_93));
#line 364 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "parse_string_format.m"
                  }
#line 361 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 361 "parse_string_format.m"
                }
#line 360 "parse_string_format.m"
              else
#line 348 "parse_string_format.m"
                {
#line 348 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 354 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_42;
#line 354 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_43;

#line 348 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 349 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_41)) == (MR_mktag((MR_Integer) 1)));
#line 349 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 349 "parse_string_format.m"
                    {
#line 349 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__IntVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_41, (MR_Integer) 0)));
#line 349 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_41, (MR_Integer) 1)));
#line 351 "parse_string_format.m"
                      {
#line 351 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 351 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 351 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_43));
#line 351 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 351 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 351 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 351 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_42));
#line 351 "parse_string_format.m"
                      }
#line 353 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "parse_string_format.m"
                    }
#line 349 "parse_string_format.m"
                  else
#line 356 "parse_string_format.m"
                    {
#line 356 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_44;
#line 356 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_85_85;

#line 356 "parse_string_format.m"
                      {
#line 356 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_85_85 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_41);
                      }
#line 355 "parse_string_format.m"
                      {
#line 355 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 355 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_44, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 355 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_44, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 355 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_44, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_85_85));
#line 355 "parse_string_format.m"
                      }
#line 357 "parse_string_format.m"
                      {
#line 357 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 357 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 357 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 357 "parse_string_format.m"
                      }
#line 358 "parse_string_format.m"
                      {
#line 358 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_44));
#line 358 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "parse_string_format.m"
                      }
#line 356 "parse_string_format.m"
                    }
#line 348 "parse_string_format.m"
                }
#line 360 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 360 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 101:
#line 422 "parse_string_format.m"
            {
#line 435 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "parse_string_format.m"
                {
#line 436 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_256;

#line 437 "parse_string_format.m"
                  {
#line 437 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_256 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_256, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_256, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_256, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 437 "parse_string_format.m"
                  }
#line 438 "parse_string_format.m"
                  {
#line 438 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 438 "parse_string_format.m"
                  }
#line 439 "parse_string_format.m"
                  {
#line 439 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_256));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "parse_string_format.m"
                  }
#line 436 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 436 "parse_string_format.m"
                }
#line 435 "parse_string_format.m"
              else
#line 424 "parse_string_format.m"
                {
#line 424 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_273 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_261;
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_266;

#line 424 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 425 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_273)) == (MR_mktag((MR_Integer) 0)));
#line 425 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 425 "parse_string_format.m"
                    {
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__FloatVar_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_273, (MR_Integer) 0)));
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_273, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                      {
#line 426 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_266));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 0));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_261));
#line 426 "parse_string_format.m"
                      }
#line 428 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "parse_string_format.m"
                    }
#line 425 "parse_string_format.m"
                  else
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_257_257;
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_260;

#line 431 "parse_string_format.m"
                      {
#line 431 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_257_257 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_273);
                      }
#line 430 "parse_string_format.m"
                      {
#line 430 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_260 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_260, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_260, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_260, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_257_257));
#line 430 "parse_string_format.m"
                      }
#line 432 "parse_string_format.m"
                      {
#line 432 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 432 "parse_string_format.m"
                      }
#line 433 "parse_string_format.m"
                      {
#line 433 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_260));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "parse_string_format.m"
                      }
#line 431 "parse_string_format.m"
                    }
#line 424 "parse_string_format.m"
                }
#line 422 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 422 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 102:
#line 422 "parse_string_format.m"
            {
#line 435 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "parse_string_format.m"
                {
#line 436 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_299;

#line 437 "parse_string_format.m"
                  {
#line 437 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_299 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_299, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_299, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_299, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 437 "parse_string_format.m"
                  }
#line 438 "parse_string_format.m"
                  {
#line 438 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 438 "parse_string_format.m"
                  }
#line 439 "parse_string_format.m"
                  {
#line 439 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_299));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "parse_string_format.m"
                  }
#line 436 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 436 "parse_string_format.m"
                }
#line 435 "parse_string_format.m"
              else
#line 424 "parse_string_format.m"
                {
#line 424 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_316 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_304;
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_309;

#line 424 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 425 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_316)) == (MR_mktag((MR_Integer) 0)));
#line 425 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 425 "parse_string_format.m"
                    {
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__FloatVar_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_316, (MR_Integer) 0)));
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_316, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                      {
#line 426 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_309));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 2));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_304));
#line 426 "parse_string_format.m"
                      }
#line 428 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "parse_string_format.m"
                    }
#line 425 "parse_string_format.m"
                  else
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_300_300;
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_303;

#line 431 "parse_string_format.m"
                      {
#line 431 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_300_300 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_316);
                      }
#line 430 "parse_string_format.m"
                      {
#line 430 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_303 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_303, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_303, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_303, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_300_300));
#line 430 "parse_string_format.m"
                      }
#line 432 "parse_string_format.m"
                      {
#line 432 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 432 "parse_string_format.m"
                      }
#line 433 "parse_string_format.m"
                      {
#line 433 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_303));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "parse_string_format.m"
                      }
#line 431 "parse_string_format.m"
                    }
#line 424 "parse_string_format.m"
                }
#line 422 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 422 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 103:
#line 422 "parse_string_format.m"
            {
#line 435 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "parse_string_format.m"
                {
#line 436 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_342;

#line 437 "parse_string_format.m"
                  {
#line 437 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_342 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_342, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_342, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 437 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_342, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 437 "parse_string_format.m"
                  }
#line 438 "parse_string_format.m"
                  {
#line 438 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 438 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 438 "parse_string_format.m"
                  }
#line 439 "parse_string_format.m"
                  {
#line 439 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_342));
#line 439 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "parse_string_format.m"
                  }
#line 436 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 436 "parse_string_format.m"
                }
#line 435 "parse_string_format.m"
              else
#line 424 "parse_string_format.m"
                {
#line 424 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_359 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__FloatVar_347;
#line 429 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_352;

#line 424 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 425 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_359)) == (MR_mktag((MR_Integer) 0)));
#line 425 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 425 "parse_string_format.m"
                    {
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__FloatVar_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_359, (MR_Integer) 0)));
#line 425 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_359, (MR_Integer) 1)));
#line 426 "parse_string_format.m"
                      {
#line 426 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_352));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 4));
#line 426 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FloatVar_347));
#line 426 "parse_string_format.m"
                      }
#line 428 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "parse_string_format.m"
                    }
#line 425 "parse_string_format.m"
                  else
#line 431 "parse_string_format.m"
                    {
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_343_343;
#line 431 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_346;

#line 431 "parse_string_format.m"
                      {
#line 431 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_343_343 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_359);
                      }
#line 430 "parse_string_format.m"
                      {
#line 430 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_346 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_346, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_346, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 430 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_346, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_343_343));
#line 430 "parse_string_format.m"
                      }
#line 432 "parse_string_format.m"
                      {
#line 432 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 432 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 432 "parse_string_format.m"
                      }
#line 433 "parse_string_format.m"
                      {
#line 433 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_346));
#line 433 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "parse_string_format.m"
                      }
#line 431 "parse_string_format.m"
                    }
#line 424 "parse_string_format.m"
                }
#line 422 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 422 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 111:
#line 384 "parse_string_format.m"
            {
#line 397 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "parse_string_format.m"
                {
#line 398 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_385;

#line 399 "parse_string_format.m"
                  {
#line 399 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_385 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_385, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_385, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_385, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 399 "parse_string_format.m"
                  }
#line 400 "parse_string_format.m"
                  {
#line 400 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 400 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 400 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 400 "parse_string_format.m"
                  }
#line 401 "parse_string_format.m"
                  {
#line 401 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_385));
#line 401 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "parse_string_format.m"
                  }
#line 398 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 398 "parse_string_format.m"
                }
#line 397 "parse_string_format.m"
              else
#line 386 "parse_string_format.m"
                {
#line 386 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_402 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 391 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_394;
#line 391 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_395;

#line 386 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 387 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_402)) == (MR_mktag((MR_Integer) 1)));
#line 387 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 387 "parse_string_format.m"
                    {
#line 387 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__IntVar_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_402, (MR_Integer) 0)));
#line 387 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_402, (MR_Integer) 1)));
#line 388 "parse_string_format.m"
                      {
#line 388 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_395));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 0));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_394));
#line 388 "parse_string_format.m"
                      }
#line 390 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "parse_string_format.m"
                    }
#line 387 "parse_string_format.m"
                  else
#line 393 "parse_string_format.m"
                    {
#line 393 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_386_386;
#line 393 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_389;

#line 393 "parse_string_format.m"
                      {
#line 393 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_386_386 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_402);
                      }
#line 392 "parse_string_format.m"
                      {
#line 392 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_389 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_389, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_389, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_389, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_386_386));
#line 392 "parse_string_format.m"
                      }
#line 394 "parse_string_format.m"
                      {
#line 394 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 394 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 394 "parse_string_format.m"
                      }
#line 395 "parse_string_format.m"
                      {
#line 395 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_389));
#line 395 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "parse_string_format.m"
                      }
#line 393 "parse_string_format.m"
                    }
#line 386 "parse_string_format.m"
                }
#line 384 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 384 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 112:
#line 384 "parse_string_format.m"
            {
#line 384 "parse_string_format.m"
              MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Flags_74_466;
#line 383 "parse_string_format.m"
              MR_Word check_hlds__simplify__format_call__parse_string_format__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 383 "parse_string_format.m"
              MR_Word check_hlds__simplify__format_call__parse_string_format__V_155_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 383 "parse_string_format.m"
              MR_Word check_hlds__simplify__format_call__parse_string_format__V_156_156 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 383 "parse_string_format.m"
              MR_Word check_hlds__simplify__format_call__parse_string_format__V_157_157 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 383 "parse_string_format.m"
              MR_Word check_hlds__simplify__format_call__parse_string_format__V_153_153 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 383 "parse_string_format.m"
              {
#line 383 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Flags_74_466 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 383 "parse_string_format.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Flags_74_466, 0) = ((MR_Box) (((MR_Integer) 1 | ((((check_hlds__simplify__format_call__parse_string_format__V_154_154 << (MR_Integer) 1)) | ((((check_hlds__simplify__format_call__parse_string_format__V_155_155 << (MR_Integer) 2)) | ((((check_hlds__simplify__format_call__parse_string_format__V_156_156 << (MR_Integer) 3)) | ((check_hlds__simplify__format_call__parse_string_format__V_157_157 << (MR_Integer) 4)))))))))));
#line 383 "parse_string_format.m"
              }
#line 397 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "parse_string_format.m"
                {
#line 398 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_427;

#line 399 "parse_string_format.m"
                  {
#line 399 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_427 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_427, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_427, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_427, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 399 "parse_string_format.m"
                  }
#line 400 "parse_string_format.m"
                  {
#line 400 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 400 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 400 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 400 "parse_string_format.m"
                  }
#line 401 "parse_string_format.m"
                  {
#line 401 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_427));
#line 401 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "parse_string_format.m"
                  }
#line 398 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 398 "parse_string_format.m"
                }
#line 397 "parse_string_format.m"
              else
#line 386 "parse_string_format.m"
                {
#line 386 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_444 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 391 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_436;
#line 391 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_437;

#line 386 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 387 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_444)) == (MR_mktag((MR_Integer) 1)));
#line 387 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 387 "parse_string_format.m"
                    {
#line 387 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__IntVar_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_444, (MR_Integer) 0)));
#line 387 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_437 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_444, (MR_Integer) 1)));
#line 388 "parse_string_format.m"
                      {
#line 388 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_437));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Flags_74_466));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 4));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_436));
#line 388 "parse_string_format.m"
                      }
#line 390 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "parse_string_format.m"
                    }
#line 387 "parse_string_format.m"
                  else
#line 393 "parse_string_format.m"
                    {
#line 393 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_428_428;
#line 393 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_431;

#line 393 "parse_string_format.m"
                      {
#line 393 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_428_428 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_444);
                      }
#line 392 "parse_string_format.m"
                      {
#line 392 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_431 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_431, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_431, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_431, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_428_428));
#line 392 "parse_string_format.m"
                      }
#line 394 "parse_string_format.m"
                      {
#line 394 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 394 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 394 "parse_string_format.m"
                      }
#line 395 "parse_string_format.m"
                      {
#line 395 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_431));
#line 395 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "parse_string_format.m"
                      }
#line 393 "parse_string_format.m"
                    }
#line 386 "parse_string_format.m"
                }
#line 384 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 384 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 115:
#line 476 "parse_string_format.m"
            {
#line 476 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "parse_string_format.m"
                {
#line 477 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_143;

#line 478 "parse_string_format.m"
                  {
#line 478 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 478 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 478 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_143, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 478 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_143, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 478 "parse_string_format.m"
                  }
#line 479 "parse_string_format.m"
                  {
#line 479 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 479 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 479 "parse_string_format.m"
                  }
#line 480 "parse_string_format.m"
                  {
#line 480 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_143));
#line 480 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "parse_string_format.m"
                  }
#line 477 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 477 "parse_string_format.m"
                }
#line 476 "parse_string_format.m"
              else
#line 465 "parse_string_format.m"
                {
#line 465 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 470 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__StrVar_49;
#line 470 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_138;

#line 465 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 466 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_140)) == (MR_mktag((MR_Integer) 2)));
#line 466 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 466 "parse_string_format.m"
                    {
#line 466 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__StrVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_140, (MR_Integer) 0)));
#line 466 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_138 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_140, (MR_Integer) 1)));
#line 467 "parse_string_format.m"
                      {
#line 467 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 467 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_138));
#line 467 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 467 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 467 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 467 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__StrVar_49));
#line 467 "parse_string_format.m"
                      }
#line 469 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "parse_string_format.m"
                    }
#line 466 "parse_string_format.m"
                  else
#line 472 "parse_string_format.m"
                    {
#line 472 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_59_59;
#line 472 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_137;

#line 472 "parse_string_format.m"
                      {
#line 472 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_59_59 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_140);
                      }
#line 471 "parse_string_format.m"
                      {
#line 471 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_137 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 471 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_137, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 471 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_137, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 471 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_137, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_59_59));
#line 471 "parse_string_format.m"
                      }
#line 473 "parse_string_format.m"
                      {
#line 473 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 473 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 473 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 473 "parse_string_format.m"
                      }
#line 474 "parse_string_format.m"
                      {
#line 474 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_137));
#line 474 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 474 "parse_string_format.m"
                      }
#line 472 "parse_string_format.m"
                    }
#line 465 "parse_string_format.m"
                }
#line 476 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 476 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 117:
#line 384 "parse_string_format.m"
            {
#line 397 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "parse_string_format.m"
                {
#line 398 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_469;

#line 399 "parse_string_format.m"
                  {
#line 399 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_469 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_469, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_469, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_469, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 399 "parse_string_format.m"
                  }
#line 400 "parse_string_format.m"
                  {
#line 400 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 400 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 400 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 400 "parse_string_format.m"
                  }
#line 401 "parse_string_format.m"
                  {
#line 401 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_469));
#line 401 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "parse_string_format.m"
                  }
#line 398 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 398 "parse_string_format.m"
                }
#line 397 "parse_string_format.m"
              else
#line 386 "parse_string_format.m"
                {
#line 386 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_486 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 391 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_478;
#line 391 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_479;

#line 386 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 387 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_486)) == (MR_mktag((MR_Integer) 1)));
#line 387 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 387 "parse_string_format.m"
                    {
#line 387 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__IntVar_478 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_486, (MR_Integer) 0)));
#line 387 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_479 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_486, (MR_Integer) 1)));
#line 388 "parse_string_format.m"
                      {
#line 388 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_479));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 1));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_478));
#line 388 "parse_string_format.m"
                      }
#line 390 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "parse_string_format.m"
                    }
#line 387 "parse_string_format.m"
                  else
#line 393 "parse_string_format.m"
                    {
#line 393 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_470_470;
#line 393 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_473;

#line 393 "parse_string_format.m"
                      {
#line 393 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_470_470 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_486);
                      }
#line 392 "parse_string_format.m"
                      {
#line 392 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_473 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_473, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_473, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_473, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_470_470));
#line 392 "parse_string_format.m"
                      }
#line 394 "parse_string_format.m"
                      {
#line 394 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 394 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 394 "parse_string_format.m"
                      }
#line 395 "parse_string_format.m"
                      {
#line 395 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_473));
#line 395 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "parse_string_format.m"
                      }
#line 393 "parse_string_format.m"
                    }
#line 386 "parse_string_format.m"
                }
#line 384 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 384 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
          case (MR_Char) 120:
#line 384 "parse_string_format.m"
            {
#line 397 "parse_string_format.m"
              if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "parse_string_format.m"
                {
#line 398 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__Error_511;

#line 399 "parse_string_format.m"
                  {
#line 399 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__Error_511 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_511, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_511, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 399 "parse_string_format.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_511, 2) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 399 "parse_string_format.m"
                  }
#line 400 "parse_string_format.m"
                  {
#line 400 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 400 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 400 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 400 "parse_string_format.m"
                  }
#line 401 "parse_string_format.m"
                  {
#line 401 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_511));
#line 401 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "parse_string_format.m"
                  }
#line 398 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 398 "parse_string_format.m"
                }
#line 397 "parse_string_format.m"
              else
#line 386 "parse_string_format.m"
                {
#line 386 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__SpecPolyType_528 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 391 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__IntVar_520;
#line 391 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyContext_521;

#line 386 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 387 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__SpecPolyType_528)) == (MR_mktag((MR_Integer) 1)));
#line 387 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 387 "parse_string_format.m"
                    {
#line 387 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__IntVar_520 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_528, (MR_Integer) 0)));
#line 387 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__PolyContext_521 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__SpecPolyType_528, (MR_Integer) 1)));
#line 388 "parse_string_format.m"
                      {
#line 388 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyContext_521));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__6_6));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__7_7));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadVar__8_8));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 2));
#line 388 "parse_string_format.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 6) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__IntVar_520));
#line 388 "parse_string_format.m"
                      }
#line 390 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "parse_string_format.m"
                    }
#line 387 "parse_string_format.m"
                  else
#line 393 "parse_string_format.m"
                    {
#line 393 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__V_512_512;
#line 393 "parse_string_format.m"
                      MR_Word check_hlds__simplify__format_call__parse_string_format__Error_515;

#line 393 "parse_string_format.m"
                      {
#line 393 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_512_512 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(check_hlds__simplify__format_call__parse_string_format__SpecPolyType_528);
                      }
#line 392 "parse_string_format.m"
                      {
#line 392 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__Error_515 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_515, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_515, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 392 "parse_string_format.m"
                        MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__Error_515, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_512_512));
#line 392 "parse_string_format.m"
                      }
#line 394 "parse_string_format.m"
                      {
#line 394 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 394 "parse_string_format.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
#line 394 "parse_string_format.m"
                      }
#line 395 "parse_string_format.m"
                      {
#line 395 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_515));
#line 395 "parse_string_format.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "parse_string_format.m"
                      }
#line 393 "parse_string_format.m"
                    }
#line 386 "parse_string_format.m"
                }
#line 384 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = MR_TRUE;
#line 384 "parse_string_format.m"
            }
#line 343 "parse_string_format.m"
            break;
#line 343 "parse_string_format.m"
        }
#line 486 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 484 "parse_string_format.m"
          {
#line 484 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_4 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_84_84;
#line 484 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__Spec_10 = check_hlds__simplify__format_call__parse_string_format__SpecPrime_39;
#line 485 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__Errors_11 = check_hlds__simplify__format_call__parse_string_format__ErrorsPrime_40;
#line 484 "parse_string_format.m"
          }
#line 486 "parse_string_format.m"
        else
#line 487 "parse_string_format.m"
          {
#line 487 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__Error_151;

#line 487 "parse_string_format.m"
            {
#line 487 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__Error_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Error_151, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_9));
#line 487 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Error_151, 1) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__parse_string_format__SpecChar_38));
#line 487 "parse_string_format.m"
            }
#line 488 "parse_string_format.m"
            {
#line 488 "parse_string_format.m"
              MR_Word base;
#line 488 "parse_string_format.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__Spec_10 = base;
#line 488 "parse_string_format.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__OverallContext_5));
#line 488 "parse_string_format.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_String) ""));
#line 488 "parse_string_format.m"
            }
#line 489 "parse_string_format.m"
            {
#line 489 "parse_string_format.m"
              MR_Word base;
#line 489 "parse_string_format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__Errors_11 = base;
#line 489 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_151));
#line 489 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 489 "parse_string_format.m"
            }
#line 487 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_4 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_3;
#line 487 "parse_string_format.m"
          }
#line 335 "parse_string_format.m"
      }
#line 330 "parse_string_format.m"
  }
#line 323 "parse_string_format.m"
}

#line 273 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_optional_prec_7_p_0(
#line 273 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17,
#line 273 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_18,
#line 273 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19,
#line 273 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20,
#line 273 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_10,
#line 273 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__MaybePrec_11,
#line 273 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_12)
#line 273 "parse_string_format.m"
{
#line 301 "parse_string_format.m"
  {
#line 301 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17)) == (MR_mktag((MR_Integer) 1)));
#line 301 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21;
#line 278 "parse_string_format.m"
    MR_Char check_hlds__simplify__format_call__parse_string_format__V_22_22;

#line 278 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 278 "parse_string_format.m"
      {
#line 278 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__V_22_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17, (MR_Integer) 0)));
#line 278 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17, (MR_Integer) 1)));
#line 278 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_22_22 == (MR_Char) 46);
#line 278 "parse_string_format.m"
      }
#line 301 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 295 "parse_string_format.m"
      {
#line 295 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23_23;
#line 279 "parse_string_format.m"
        MR_Char check_hlds__simplify__format_call__parse_string_format__V_24_24;

#line 279 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 279 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 279 "parse_string_format.m"
          {
#line 279 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__V_24_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21, (MR_Integer) 0)));
#line 279 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21, (MR_Integer) 1)));
#line 279 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_24_24 == (MR_Char) 42);
#line 279 "parse_string_format.m"
          }
#line 295 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 290 "parse_string_format.m"
          {
#line 290 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_18 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23_23;
#line 290 "parse_string_format.m"
            if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 291 "parse_string_format.m"
              {
#line 291 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_25_25;

#line 292 "parse_string_format.m"
                *check_hlds__simplify__format_call__parse_string_format__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 293 "parse_string_format.m"
                {
#line 293 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 293 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_25_25, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_10));
#line 293 "parse_string_format.m"
                }
#line 293 "parse_string_format.m"
                {
#line 293 "parse_string_format.m"
                  MR_Word base;
#line 293 "parse_string_format.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "parse_string_format.m"
                  *check_hlds__simplify__format_call__parse_string_format__Errors_12 = base;
#line 293 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_25_25));
#line 293 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "parse_string_format.m"
                }
#line 291 "parse_string_format.m"
                *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19;
#line 291 "parse_string_format.m"
              }
#line 290 "parse_string_format.m"
            else
#line 281 "parse_string_format.m"
              {
#line 281 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19, (MR_Integer) 0)));
#line 285 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__PolyPrecVar_14;
#line 282 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format___Context_15;

#line 281 "parse_string_format.m"
                *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19, (MR_Integer) 1)));
#line 282 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_13)) == (MR_mktag((MR_Integer) 1)));
#line 282 "parse_string_format.m"
                if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 282 "parse_string_format.m"
                  {
#line 282 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__PolyPrecVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__PolyType_13, (MR_Integer) 0)));
#line 282 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__PolyType_13, (MR_Integer) 1)));
#line 283 "parse_string_format.m"
                    {
#line 283 "parse_string_format.m"
                      MR_Word base;
#line 283 "parse_string_format.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 283 "parse_string_format.m"
                      *check_hlds__simplify__format_call__parse_string_format__MaybePrec_11 = base;
#line 283 "parse_string_format.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyPrecVar_14));
#line 283 "parse_string_format.m"
                    }
#line 284 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 282 "parse_string_format.m"
                  }
#line 282 "parse_string_format.m"
                else
#line 286 "parse_string_format.m"
                  {
#line 286 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_28_28;
#line 286 "parse_string_format.m"
                    MR_Word check_hlds__simplify__format_call__parse_string_format__V_29_29;

#line 286 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "parse_string_format.m"
#line 496 "parse_string_format.m"
                    switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_13)) {
#line 496 "parse_string_format.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 496 "parse_string_format.m"
                      case (MR_Integer) 0:
#line 499 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_29_29 = (MR_Integer) 3;
#line 496 "parse_string_format.m"
                        break;
#line 496 "parse_string_format.m"
                      case (MR_Integer) 1:
#line 498 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_29_29 = (MR_Integer) 2;
#line 496 "parse_string_format.m"
                        break;
#line 496 "parse_string_format.m"
                      case (MR_Integer) 2:
#line 497 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_29_29 = (MR_Integer) 1;
#line 496 "parse_string_format.m"
                        break;
#line 496 "parse_string_format.m"
                      case (MR_Integer) 3:
#line 496 "parse_string_format.m"
                        check_hlds__simplify__format_call__parse_string_format__V_29_29 = (MR_Integer) 0;
#line 496 "parse_string_format.m"
                        break;
#line 496 "parse_string_format.m"
                    }
#line 287 "parse_string_format.m"
                    {
#line 287 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 287 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 287 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_28_28, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_10));
#line 287 "parse_string_format.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_28_28, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_29_29));
#line 287 "parse_string_format.m"
                    }
#line 288 "parse_string_format.m"
                    {
#line 288 "parse_string_format.m"
                      MR_Word base;
#line 288 "parse_string_format.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "parse_string_format.m"
                      *check_hlds__simplify__format_call__parse_string_format__Errors_12 = base;
#line 288 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_28_28));
#line 288 "parse_string_format.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "parse_string_format.m"
                    }
#line 286 "parse_string_format.m"
                  }
#line 281 "parse_string_format.m"
              }
#line 290 "parse_string_format.m"
          }
#line 295 "parse_string_format.m"
        else
#line 297 "parse_string_format.m"
          {
#line 297 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__Prec_16;

#line 297 "parse_string_format.m"
            {
#line 297 "parse_string_format.m"
              mercury__string__parse_util__get_number_prefix_3_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_21, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_18, &check_hlds__simplify__format_call__parse_string_format__Prec_16);
            }
#line 298 "parse_string_format.m"
            {
#line 298 "parse_string_format.m"
              MR_Word base;
#line 298 "parse_string_format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 298 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__MaybePrec_11 = base;
#line 298 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Prec_16));
#line 298 "parse_string_format.m"
            }
#line 299 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19;
#line 297 "parse_string_format.m"
          }
#line 295 "parse_string_format.m"
      }
#line 301 "parse_string_format.m"
    else
#line 302 "parse_string_format.m"
      {
#line 302 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_20 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_19;
#line 302 "parse_string_format.m"
        *check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_18 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_17;
#line 302 "parse_string_format.m"
      }
#line 301 "parse_string_format.m"
  }
#line 273 "parse_string_format.m"
}

#line 224 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__parse_conversion_specification_8_p_0(
#line 224 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_22,
#line 224 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23,
#line 224 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24,
#line 224 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_25,
#line 224 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Context_11,
#line 224 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_12,
#line 224 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Spec_13,
#line 224 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_14)
#line 224 "parse_string_format.m"
{
#line 230 "parse_string_format.m"
  {
#line 230 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__TypeCtorInfo_39_39;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__Flags_16;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__WidthErrors_18;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__MaybePrec_19;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__PrecErrors_20;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__SpecErrors_21;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_32;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_33;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_34_34;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_35_35;
#line 230 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__V_38_38;
#line 263 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_53;
#line 247 "parse_string_format.m"
    MR_Char check_hlds__simplify__format_call__parse_string_format__V_54_54;

#line 233 "parse_string_format.m"
    {
#line 233 "parse_string_format.m"
      mercury__string__parse_util__gather_flag_chars_4_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_22, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31, (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_2[0], &check_hlds__simplify__format_call__parse_string_format__Flags_16);
    }
#line 247 "parse_string_format.m"
    check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 247 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 247 "parse_string_format.m"
      {
#line 247 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__V_54_54 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31, (MR_Integer) 0)));
#line 247 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31, (MR_Integer) 1)));
#line 247 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__succeeded = (check_hlds__simplify__format_call__parse_string_format__V_54_54 == (MR_Char) 42);
#line 247 "parse_string_format.m"
      }
#line 263 "parse_string_format.m"
    if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 258 "parse_string_format.m"
      {
#line 258 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_32 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_21_53;
#line 258 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "parse_string_format.m"
          {
#line 259 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__V_55_55;

#line 260 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 261 "parse_string_format.m"
            {
#line 261 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "parse_string_format.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 261 "parse_string_format.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_55_55, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_12));
#line 261 "parse_string_format.m"
            }
#line 261 "parse_string_format.m"
            {
#line 261 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__WidthErrors_18, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_55_55));
#line 261 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__WidthErrors_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 261 "parse_string_format.m"
            }
#line 259 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_33 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24;
#line 259 "parse_string_format.m"
          }
#line 258 "parse_string_format.m"
        else
#line 249 "parse_string_format.m"
          {
#line 249 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__PolyType_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24, (MR_Integer) 0)));
#line 253 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__PolyWidthVar_50;
#line 250 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format___Context_51;

#line 249 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24, (MR_Integer) 1)));
#line 250 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_49)) == (MR_mktag((MR_Integer) 1)));
#line 250 "parse_string_format.m"
            if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 250 "parse_string_format.m"
              {
#line 250 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__PolyWidthVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__PolyType_49, (MR_Integer) 0)));
#line 250 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format___Context_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__PolyType_49, (MR_Integer) 1)));
#line 251 "parse_string_format.m"
                {
#line 251 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 251 "parse_string_format.m"
                  MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__PolyWidthVar_50));
#line 251 "parse_string_format.m"
                }
#line 252 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "parse_string_format.m"
              }
#line 250 "parse_string_format.m"
            else
#line 254 "parse_string_format.m"
              {
#line 254 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_58_58;
#line 254 "parse_string_format.m"
                MR_Word check_hlds__simplify__format_call__parse_string_format__V_59_59;

#line 254 "parse_string_format.m"
                check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "parse_string_format.m"
#line 496 "parse_string_format.m"
                switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__PolyType_49)) {
#line 496 "parse_string_format.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 496 "parse_string_format.m"
                  case (MR_Integer) 0:
#line 499 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_59_59 = (MR_Integer) 3;
#line 496 "parse_string_format.m"
                    break;
#line 496 "parse_string_format.m"
                  case (MR_Integer) 1:
#line 498 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_59_59 = (MR_Integer) 2;
#line 496 "parse_string_format.m"
                    break;
#line 496 "parse_string_format.m"
                  case (MR_Integer) 2:
#line 497 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_59_59 = (MR_Integer) 1;
#line 496 "parse_string_format.m"
                    break;
#line 496 "parse_string_format.m"
                  case (MR_Integer) 3:
#line 496 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_59_59 = (MR_Integer) 0;
#line 496 "parse_string_format.m"
                    break;
#line 496 "parse_string_format.m"
                }
#line 255 "parse_string_format.m"
                {
#line 255 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 255 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 255 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_58_58, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_12));
#line 255 "parse_string_format.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__V_58_58, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_59_59));
#line 255 "parse_string_format.m"
                }
#line 256 "parse_string_format.m"
                {
#line 256 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__WidthErrors_18, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_58_58));
#line 256 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__WidthErrors_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "parse_string_format.m"
                }
#line 254 "parse_string_format.m"
              }
#line 249 "parse_string_format.m"
          }
#line 258 "parse_string_format.m"
      }
#line 263 "parse_string_format.m"
    else
#line 266 "parse_string_format.m"
      {
#line 266 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__Width_52;
#line 266 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_29_61;

#line 263 "parse_string_format.m"
        {
#line 263 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__succeeded = mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_29_61, &check_hlds__simplify__format_call__parse_string_format__Width_52);
        }
#line 266 "parse_string_format.m"
        if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 264 "parse_string_format.m"
          {
#line 264 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_32 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_29_61;
#line 264 "parse_string_format.m"
            {
#line 264 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Width_52));
#line 264 "parse_string_format.m"
            }
#line 265 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 264 "parse_string_format.m"
          }
#line 266 "parse_string_format.m"
        else
#line 267 "parse_string_format.m"
          {
#line 267 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 268 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_32 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31;
#line 267 "parse_string_format.m"
          }
#line 266 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_33 = check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_24;
#line 266 "parse_string_format.m"
      }
#line 235 "parse_string_format.m"
    {
#line 235 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__get_optional_prec_7_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_32, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_34_34, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_33, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_35_35, check_hlds__simplify__format_call__parse_string_format__SpecNum_12, &check_hlds__simplify__format_call__parse_string_format__MaybePrec_19, &check_hlds__simplify__format_call__parse_string_format__PrecErrors_20);
    }
#line 236 "parse_string_format.m"
    {
#line 236 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__get_first_spec_11_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_34_34, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_23, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_35_35, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_25, check_hlds__simplify__format_call__parse_string_format__Context_11, check_hlds__simplify__format_call__parse_string_format__Flags_16, check_hlds__simplify__format_call__parse_string_format__MaybeWidth_17, check_hlds__simplify__format_call__parse_string_format__MaybePrec_19, check_hlds__simplify__format_call__parse_string_format__SpecNum_12, check_hlds__simplify__format_call__parse_string_format__Spec_13, &check_hlds__simplify__format_call__parse_string_format__SpecErrors_21);
    }
#line 7086 "check_hlds.simplify.format_call.parse_string_format.c"
    check_hlds__simplify__format_call__parse_string_format__TypeCtorInfo_39_39 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
#line 238 "parse_string_format.m"
    {
#line 238 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__V_38_38 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__parse_string_format__TypeCtorInfo_39_39, check_hlds__simplify__format_call__parse_string_format__PrecErrors_20, check_hlds__simplify__format_call__parse_string_format__SpecErrors_21);
    }
#line 238 "parse_string_format.m"
    {
#line 238 "parse_string_format.m"
      *check_hlds__simplify__format_call__parse_string_format__Errors_14 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__parse_string_format__TypeCtorInfo_39_39, check_hlds__simplify__format_call__parse_string_format__WidthErrors_18, check_hlds__simplify__format_call__parse_string_format__V_38_38);
    }
#line 230 "parse_string_format.m"
  }
#line 224 "parse_string_format.m"
}

#line 174 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(
#line 174 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_29,
#line 174 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_30,
#line 174 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Context_9,
#line 174 "parse_string_format.m"
  MR_Integer check_hlds__simplify__format_call__parse_string_format__SpecNum_10,
#line 174 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Specs_11,
#line 174 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__Errors_12)
#line 174 "parse_string_format.m"
{
#line 179 "parse_string_format.m"
  {
#line 179 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 179 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__NonConversionSpecChars_13;
#line 179 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__GatherEndedBy_14;
#line 179 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__Specs0_15;

#line 180 "parse_string_format.m"
    {
#line 180 "parse_string_format.m"
      mercury__string__parse_util__gather_non_percent_chars_3_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_0_29, &check_hlds__simplify__format_call__parse_string_format__NonConversionSpecChars_13, &check_hlds__simplify__format_call__parse_string_format__GatherEndedBy_14);
    }
#line 192 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__GatherEndedBy_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 182 "parse_string_format.m"
      {
#line 183 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__Specs0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 187 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 187 "parse_string_format.m"
        else
#line 188 "parse_string_format.m"
          {
#line 188 "parse_string_format.m"
            MR_Word check_hlds__simplify__format_call__parse_string_format__Error_18;
#line 188 "parse_string_format.m"
            MR_Integer check_hlds__simplify__format_call__parse_string_format__V_36_36;

#line 189 "parse_string_format.m"
            {
#line 189 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__V_36_36 = mercury__list__length_1_f_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_30);
            }
#line 189 "parse_string_format.m"
            {
#line 189 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__Error_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 189 "parse_string_format.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 189 "parse_string_format.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_18, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__SpecNum_10));
#line 189 "parse_string_format.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__parse_string_format__Error_18, 2) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_36_36));
#line 189 "parse_string_format.m"
            }
#line 190 "parse_string_format.m"
            {
#line 190 "parse_string_format.m"
              MR_Word base;
#line 190 "parse_string_format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__Errors_12 = base;
#line 190 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Error_18));
#line 190 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "parse_string_format.m"
            }
#line 188 "parse_string_format.m"
          }
#line 182 "parse_string_format.m"
      }
#line 192 "parse_string_format.m"
    else
#line 193 "parse_string_format.m"
      {
#line 193 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__HeadSpec_19;
#line 193 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__HeadErrors_20;
#line 193 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TailSpecs_21;
#line 193 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TailErrors_22;
#line 193 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__GatherEndedBy_14, (MR_Integer) 0)));
#line 193 "parse_string_format.m"
        MR_Integer check_hlds__simplify__format_call__parse_string_format__V_34_34;
#line 193 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_38;
#line 193 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_39;

#line 194 "parse_string_format.m"
        {
#line 194 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__parse_conversion_specification_8_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_31_31, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_38, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_0_30, &check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_39, check_hlds__simplify__format_call__parse_string_format__Context_9, check_hlds__simplify__format_call__parse_string_format__SpecNum_10, &check_hlds__simplify__format_call__parse_string_format__HeadSpec_19, &check_hlds__simplify__format_call__parse_string_format__HeadErrors_20);
        }
#line 197 "parse_string_format.m"
        check_hlds__simplify__format_call__parse_string_format__V_34_34 = (check_hlds__simplify__format_call__parse_string_format__SpecNum_10 + (MR_Integer) 1);
#line 196 "parse_string_format.m"
        {
#line 196 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_Chars_32_38, check_hlds__simplify__format_call__parse_string_format__STATE_VARIABLE_PolyTypes_33_39, check_hlds__simplify__format_call__parse_string_format__Context_9, check_hlds__simplify__format_call__parse_string_format__V_34_34, &check_hlds__simplify__format_call__parse_string_format__TailSpecs_21, &check_hlds__simplify__format_call__parse_string_format__TailErrors_22);
        }
#line 202 "parse_string_format.m"
        if ((check_hlds__simplify__format_call__parse_string_format__HeadErrors_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "parse_string_format.m"
          {
#line 200 "parse_string_format.m"
            {
#line 200 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__Specs0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Specs0_15, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadSpec_19));
#line 200 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Specs0_15, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__TailSpecs_21));
#line 200 "parse_string_format.m"
            }
#line 201 "parse_string_format.m"
            *check_hlds__simplify__format_call__parse_string_format__Errors_12 = check_hlds__simplify__format_call__parse_string_format__TailErrors_22;
#line 199 "parse_string_format.m"
          }
#line 202 "parse_string_format.m"
        else
#line 203 "parse_string_format.m"
          {
#line 204 "parse_string_format.m"
            check_hlds__simplify__format_call__parse_string_format__Specs0_15 = check_hlds__simplify__format_call__parse_string_format__TailSpecs_21;
#line 205 "parse_string_format.m"
            {
#line 205 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__Errors_12 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0, check_hlds__simplify__format_call__parse_string_format__HeadErrors_20, check_hlds__simplify__format_call__parse_string_format__TailErrors_22);
            }
#line 203 "parse_string_format.m"
          }
#line 193 "parse_string_format.m"
      }
#line 211 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__NonConversionSpecChars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "parse_string_format.m"
      *check_hlds__simplify__format_call__parse_string_format__Specs_11 = check_hlds__simplify__format_call__parse_string_format__Specs0_15;
#line 211 "parse_string_format.m"
    else
#line 212 "parse_string_format.m"
      {
#line 212 "parse_string_format.m"
        MR_String check_hlds__simplify__format_call__parse_string_format__NonConversionSpecString_27;
#line 212 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__StringConst_28;

#line 213 "parse_string_format.m"
        {
#line 213 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__NonConversionSpecString_27 = mercury__string__from_char_list_1_f_0(check_hlds__simplify__format_call__parse_string_format__NonConversionSpecChars_13);
        }
#line 215 "parse_string_format.m"
        {
#line 215 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__StringConst_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 215 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__StringConst_28, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Context_9));
#line 215 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__StringConst_28, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__NonConversionSpecString_27));
#line 215 "parse_string_format.m"
        }
#line 216 "parse_string_format.m"
        {
#line 216 "parse_string_format.m"
          MR_Word base;
#line 216 "parse_string_format.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__Specs_11 = base;
#line 216 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__StringConst_28));
#line 216 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__Specs0_15));
#line 216 "parse_string_format.m"
        }
#line 212 "parse_string_format.m"
      }
#line 179 "parse_string_format.m"
  }
#line 174 "parse_string_format.m"
}

#line 132 "parse_string_format.m"
static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(
#line 132 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1,
#line 132 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2)
#line 132 "parse_string_format.m"
{
#line 135 "parse_string_format.m"
  {
#line 135 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;

#line 135 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "parse_string_format.m"
      *check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 135 "parse_string_format.m"
    else
#line 136 "parse_string_format.m"
      {
#line 136 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__HeadSpec_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TailSpecs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6;

#line 137 "parse_string_format.m"
        {
#line 137 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(check_hlds__simplify__format_call__parse_string_format__TailSpecs_4, &check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6);
        }
#line 151 "parse_string_format.m"
#line 151 "parse_string_format.m"
        switch (MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__HeadSpec_3)) {
#line 151 "parse_string_format.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 151 "parse_string_format.m"
          case (MR_Integer) 0:
#line 139 "parse_string_format.m"
            {
#line 139 "parse_string_format.m"
              MR_Word check_hlds__simplify__format_call__parse_string_format__HeadContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadSpec_3, (MR_Integer) 0)));
#line 139 "parse_string_format.m"
              MR_String check_hlds__simplify__format_call__parse_string_format__HeadConstString_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadSpec_3, (MR_Integer) 1)));
#line 148 "parse_string_format.m"
              MR_Word check_hlds__simplify__format_call__parse_string_format__LaterTailMergedSpecs_10;
#line 148 "parse_string_format.m"
              MR_String check_hlds__simplify__format_call__parse_string_format__TailConstString_12;
#line 141 "parse_string_format.m"
              MR_Word check_hlds__simplify__format_call__parse_string_format__FirstTailMergedSpec_9;
#line 142 "parse_string_format.m"
              MR_Word check_hlds__simplify__format_call__parse_string_format___TailContext_11;

#line 141 "parse_string_format.m"
              check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6)) == (MR_mktag((MR_Integer) 1)));
#line 141 "parse_string_format.m"
              if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 141 "parse_string_format.m"
                {
#line 141 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__FirstTailMergedSpec_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6, (MR_Integer) 0)));
#line 141 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__LaterTailMergedSpecs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6, (MR_Integer) 1)));
#line 142 "parse_string_format.m"
                  check_hlds__simplify__format_call__parse_string_format__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__parse_string_format__FirstTailMergedSpec_9)) == (MR_mktag((MR_Integer) 0)));
#line 142 "parse_string_format.m"
                  if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 142 "parse_string_format.m"
                    {
#line 142 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format___TailContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__FirstTailMergedSpec_9, (MR_Integer) 0)));
#line 142 "parse_string_format.m"
                      check_hlds__simplify__format_call__parse_string_format__TailConstString_12 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__FirstTailMergedSpec_9, (MR_Integer) 1)));
#line 142 "parse_string_format.m"
                    }
#line 141 "parse_string_format.m"
                }
#line 148 "parse_string_format.m"
              if (check_hlds__simplify__format_call__parse_string_format__succeeded)
#line 146 "parse_string_format.m"
                {
#line 146 "parse_string_format.m"
                  MR_Word check_hlds__simplify__format_call__parse_string_format__HeadMergedSpec_13;
#line 146 "parse_string_format.m"
                  MR_String check_hlds__simplify__format_call__parse_string_format__V_40_40;

#line 146 "parse_string_format.m"
                  {
#line 146 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__V_40_40 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__parse_string_format__HeadConstString_8, check_hlds__simplify__format_call__parse_string_format__TailConstString_12);
                  }
#line 145 "parse_string_format.m"
                  {
#line 145 "parse_string_format.m"
                    check_hlds__simplify__format_call__parse_string_format__HeadMergedSpec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 145 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadMergedSpec_13, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadContext_7));
#line 145 "parse_string_format.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__parse_string_format__HeadMergedSpec_13, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__V_40_40));
#line 145 "parse_string_format.m"
                  }
#line 147 "parse_string_format.m"
                  {
#line 147 "parse_string_format.m"
                    MR_Word base;
#line 147 "parse_string_format.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "parse_string_format.m"
                    *check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = base;
#line 147 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadMergedSpec_13));
#line 147 "parse_string_format.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__LaterTailMergedSpecs_10));
#line 147 "parse_string_format.m"
                  }
#line 146 "parse_string_format.m"
                }
#line 148 "parse_string_format.m"
              else
#line 149 "parse_string_format.m"
                {
#line 149 "parse_string_format.m"
                  MR_Word base;
#line 149 "parse_string_format.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "parse_string_format.m"
                  *check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = base;
#line 149 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadSpec_3));
#line 149 "parse_string_format.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6));
#line 149 "parse_string_format.m"
                }
#line 139 "parse_string_format.m"
            }
#line 151 "parse_string_format.m"
            break;
#line 151 "parse_string_format.m"
          case (MR_Integer) 1:
#line 151 "parse_string_format.m"
          case (MR_Integer) 2:
#line 158 "parse_string_format.m"
            {
#line 158 "parse_string_format.m"
              MR_Word base;
#line 158 "parse_string_format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = base;
#line 158 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadSpec_3));
#line 158 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6));
#line 158 "parse_string_format.m"
            }
#line 151 "parse_string_format.m"
            break;
#line 151 "parse_string_format.m"
          case (MR_Integer) 3:
#line 158 "parse_string_format.m"
            {
#line 158 "parse_string_format.m"
              MR_Word base;
#line 158 "parse_string_format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "parse_string_format.m"
              *check_hlds__simplify__format_call__parse_string_format__HeadVar__2_2 = base;
#line 158 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadSpec_3));
#line 158 "parse_string_format.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__TailMergedSpecs_6));
#line 158 "parse_string_format.m"
            }
#line 151 "parse_string_format.m"
            break;
#line 151 "parse_string_format.m"
        }
#line 136 "parse_string_format.m"
      }
#line 135 "parse_string_format.m"
  }
#line 132 "parse_string_format.m"
}

#line 96 "parse_string_format.m"
void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__parse_and_optimize_format_string_4_p_0(
#line 96 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Chars_5,
#line 96 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__PolyTypes_6,
#line 96 "parse_string_format.m"
  MR_Word check_hlds__simplify__format_call__parse_string_format__Context_7,
#line 96 "parse_string_format.m"
  MR_Word * check_hlds__simplify__format_call__parse_string_format__MaybeMergedSpecs_8)
#line 96 "parse_string_format.m"
{
#line 114 "parse_string_format.m"
  {
#line 114 "parse_string_format.m"
    MR_bool check_hlds__simplify__format_call__parse_string_format__succeeded;
#line 114 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__Specs_9;
#line 114 "parse_string_format.m"
    MR_Word check_hlds__simplify__format_call__parse_string_format__Errors_10;

#line 115 "parse_string_format.m"
    {
#line 115 "parse_string_format.m"
      check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(check_hlds__simplify__format_call__parse_string_format__Chars_5, check_hlds__simplify__format_call__parse_string_format__PolyTypes_6, check_hlds__simplify__format_call__parse_string_format__Context_7, (MR_Integer) 1, &check_hlds__simplify__format_call__parse_string_format__Specs_9, &check_hlds__simplify__format_call__parse_string_format__Errors_10);
    }
#line 119 "parse_string_format.m"
    if ((check_hlds__simplify__format_call__parse_string_format__Errors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 120 "parse_string_format.m"
      {
#line 120 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__FlatSpecs_13;

#line 121 "parse_string_format.m"
        {
#line 121 "parse_string_format.m"
          check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(check_hlds__simplify__format_call__parse_string_format__Specs_9, &check_hlds__simplify__format_call__parse_string_format__FlatSpecs_13);
        }
#line 122 "parse_string_format.m"
        {
#line 122 "parse_string_format.m"
          MR_Word base;
#line 122 "parse_string_format.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 122 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__MaybeMergedSpecs_8 = base;
#line 122 "parse_string_format.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__FlatSpecs_13));
#line 122 "parse_string_format.m"
        }
#line 120 "parse_string_format.m"
      }
#line 119 "parse_string_format.m"
    else
#line 117 "parse_string_format.m"
      {
#line 117 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__HeadError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Errors_10, (MR_Integer) 0)));
#line 117 "parse_string_format.m"
        MR_Word check_hlds__simplify__format_call__parse_string_format__TailErrors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__parse_string_format__Errors_10, (MR_Integer) 1)));

#line 118 "parse_string_format.m"
        {
#line 118 "parse_string_format.m"
          MR_Word base;
#line 118 "parse_string_format.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "parse_string_format.m"
          *check_hlds__simplify__format_call__parse_string_format__MaybeMergedSpecs_8 = base;
#line 118 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__HeadError_11));
#line 118 "parse_string_format.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__parse_string_format__TailErrors_12));
#line 118 "parse_string_format.m"
        }
#line 117 "parse_string_format.m"
      }
#line 114 "parse_string_format.m"
  }
#line 96 "parse_string_format.m"
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
