/*
** Automatically generated from `prog_foreign.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module parse_tree.prog_foreign. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_foreign__init
ENDINIT
*/

#include "parse_tree.prog_foreign.mih"


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
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 344 "prog_foreign.m"
struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s {
#line 344 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1;
#line 344 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont;
#line 344 "prog_foreign.m"
  void * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr;
#line 344 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1;
#line 344 "prog_foreign.m"
};


#line 144 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3];

#line 147 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3];

#line 150 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0;

#line 153 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1];

#line 156 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1];

#line 159 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1];

#line 162 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1];

#line 165 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 168 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4];

#line 171 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4];

#line 174 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0;

#line 177 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1];

#line 180 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1];

#line 183 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1];

#line 186 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1];

#line 189 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 192 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4];

#line 195 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4];

#line 198 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0;

#line 201 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1];

#line 204 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1];

#line 207 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1];

#line 210 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1];

#line 213 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0;

#line 216 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2];

#line 219 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2];

#line 222 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0;

#line 225 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1];

#line 228 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1];

#line 231 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1];

#line 234 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1];

#line 237 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1builtin__type_ctor_info_string_0;

#line 240 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_user_foreign_code_0_0[3];

#line 243 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_user_foreign_code_0_0;

#line 246 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_user_foreign_code_0_0[1];

#line 249 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_user_foreign_code_0[1];

#line 252 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_user_foreign_code_0[1];

#line 255 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_user_foreign_code_0[1];

#line 258 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
#line 261 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 263 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 266 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
#line 269 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 271 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 273 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 276 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_info_0_0_10001(
#line 279 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 281 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 284 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_info_0_0_10001(
#line 287 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 289 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 291 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 294 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
#line 297 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 299 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 302 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
#line 305 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 307 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 309 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 312 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_info_0_0_10001(
#line 315 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 317 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 320 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_info_0_0_10001(
#line 323 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 325 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 327 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 330 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_0_0_10001(
#line 333 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 335 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 338 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_0_0_10001(
#line 341 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 343 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 345 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 348 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
#line 351 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 353 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 356 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
#line 359 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 361 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 363 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 366 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
#line 369 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 371 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 374 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
#line 377 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 379 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 381 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 384 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
#line 387 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 389 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 392 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
#line 395 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 397 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 399 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 402 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____user_foreign_code_0_0_10001(
#line 405 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 407 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 410 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____user_foreign_code_0_0_10001(
#line 413 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 415 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 417 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 311 "prog_foreign.m"
static MR_Integer MR_CALL 
parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__311__1_2_f_0(
#line 311 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__PreferredList_13,
#line 311 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_24);

#line 460 "prog_foreign.m"
static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
#line 460 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3);

#line 349 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
#line 349 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 349 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 349 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr);

#line 344 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
#line 344 "prog_foreign.m"
  void * parse_tree__prog_foreign__env_ptr_arg);

#line 344 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
#line 344 "prog_foreign.m"
  MR_Box parse_tree__prog_foreign__closure_arg,
#line 344 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 344 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 344 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr);


static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_1[6][2];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_4[1][3];


#line 351 "prog_foreign.m"
/* sealed */ struct parse_tree__prog_foreign__vector_common_type_5_0_s {
#line 351 "prog_foreign.m"
  const MR_Word parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
#line 351 "prog_foreign.m"
};

static /* final */ const struct parse_tree__prog_foreign__vector_common_type_5_0_s parse_tree__prog_foreign_vector_common_5[5];



static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_foreign_scalar_common_1[4])))
  },
};

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "mercury"))
  },
};

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_foreign_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_foreign__all_foreign_languages_0_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__prog_foreign__vector_common_type_5_0_s parse_tree__prog_foreign_vector_common_5[5] = {
  /* row 0 */
  {
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_Integer) 2
  },
  /* row 2 */
  {
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_Integer) 4
  },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 582 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 589 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3] = {
  (MR_String) "fbody_lang",
  (MR_String) "fbody_code",
  (MR_String) "fbody_context"
};

#line 596 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0 = {
  (MR_String) "foreign_body_code",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0,
  NULL,
  NULL
};

#line 611 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

#line 616 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0
  }
};

#line 625 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

#line 630 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1] = {
  (MR_Integer) 0
};

#line 635 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_body_code",
  {
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0
  },
  {
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0
};

#line 656 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 664 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_body_info_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_body_info_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_body_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 685 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 693 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4] = {
  (MR_String) "fdecl_lang",
  (MR_String) "fdecl_is_local",
  (MR_String) "fdecl_code",
  (MR_String) "fdecl_context"
};

#line 701 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0 = {
  (MR_String) "foreign_decl_code",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0,
  NULL,
  NULL
};

#line 716 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

#line 721 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0
  }
};

#line 730 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

#line 735 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1] = {
  (MR_Integer) 0
};

#line 740 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_decl_code",
  {
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0
  },
  {
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0
};

#line 761 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 769 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_decl_info_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_decl_info_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_decl_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 790 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 811 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 819 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4] = {
  (MR_String) "fexp_decl_lang",
  (MR_String) "fexp_decl_ret_type",
  (MR_String) "fexp_decl_func_name",
  (MR_String) "fexp_decl_arg_decls"
};

#line 827 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0 = {
  (MR_String) "foreign_export_decl",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0,
  NULL,
  NULL
};

#line 842 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

#line 847 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0
  }
};

#line 856 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

#line 861 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1] = {
  (MR_Integer) 0
};

#line 866 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export_decl",
  {
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0
  },
  {
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0
};

#line 887 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
  }
};

#line 895 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
};

#line 901 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2] = {
  (MR_String) "fexp_decls_info",
  (MR_String) "fexp_decls_list"
};

#line 907 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0 = {
  (MR_String) "foreign_export_decls",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0,
  NULL,
  NULL
};

#line 922 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

#line 927 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0
  }
};

#line 936 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

#line 941 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1] = {
  (MR_Integer) 0
};

#line 946 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export_decls",
  {
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0
  },
  {
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0
};

#line 967 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 975 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defns_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export_defns",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 996 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_user_foreign_code_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1003 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_user_foreign_code_0_0 = {
  (MR_String) "user_foreign_code",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_user_foreign_code_0_0,
  NULL,
  NULL,
  NULL
};

#line 1018 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_user_foreign_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_user_foreign_code_0_0
};

#line 1023 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_user_foreign_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_user_foreign_code_0_0
  }
};

#line 1032 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_user_foreign_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_user_foreign_code_0_0
};

#line 1037 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_user_foreign_code_0[1] = {
  (MR_Integer) 0
};

#line 1042 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____user_foreign_code_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____user_foreign_code_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "user_foreign_code",
  {
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_user_foreign_code_0
  },
  {
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_user_foreign_code_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_user_foreign_code_0
};

#line 1063 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
#line 1066 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1068 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1070 "parse_tree.prog_foreign.c"
{
#line 1072 "parse_tree.prog_foreign.c"
  {
#line 1074 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1077 "parse_tree.prog_foreign.c"
    {
#line 1079 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1082 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1084 "parse_tree.prog_foreign.c"
  }
#line 1086 "parse_tree.prog_foreign.c"
}

#line 1089 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
#line 1092 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1094 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1096 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1098 "parse_tree.prog_foreign.c"
{
#line 1100 "parse_tree.prog_foreign.c"
  {
#line 1102 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1105 "parse_tree.prog_foreign.c"
    {
#line 1107 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_body_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1110 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1112 "parse_tree.prog_foreign.c"
  }
#line 1114 "parse_tree.prog_foreign.c"
}

#line 1117 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_info_0_0_10001(
#line 1120 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1122 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1124 "parse_tree.prog_foreign.c"
{
#line 1126 "parse_tree.prog_foreign.c"
  {
#line 1128 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1131 "parse_tree.prog_foreign.c"
    {
#line 1133 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_info_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1136 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1138 "parse_tree.prog_foreign.c"
  }
#line 1140 "parse_tree.prog_foreign.c"
}

#line 1143 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_info_0_0_10001(
#line 1146 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1148 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1150 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1152 "parse_tree.prog_foreign.c"
{
#line 1154 "parse_tree.prog_foreign.c"
  {
#line 1156 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1159 "parse_tree.prog_foreign.c"
    {
#line 1161 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_body_info_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1164 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1166 "parse_tree.prog_foreign.c"
  }
#line 1168 "parse_tree.prog_foreign.c"
}

#line 1171 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
#line 1174 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1176 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1178 "parse_tree.prog_foreign.c"
{
#line 1180 "parse_tree.prog_foreign.c"
  {
#line 1182 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1185 "parse_tree.prog_foreign.c"
    {
#line 1187 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1190 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1192 "parse_tree.prog_foreign.c"
  }
#line 1194 "parse_tree.prog_foreign.c"
}

#line 1197 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
#line 1200 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1202 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1204 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1206 "parse_tree.prog_foreign.c"
{
#line 1208 "parse_tree.prog_foreign.c"
  {
#line 1210 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1213 "parse_tree.prog_foreign.c"
    {
#line 1215 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1218 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1220 "parse_tree.prog_foreign.c"
  }
#line 1222 "parse_tree.prog_foreign.c"
}

#line 1225 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_info_0_0_10001(
#line 1228 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1230 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1232 "parse_tree.prog_foreign.c"
{
#line 1234 "parse_tree.prog_foreign.c"
  {
#line 1236 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1239 "parse_tree.prog_foreign.c"
    {
#line 1241 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_info_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1244 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1246 "parse_tree.prog_foreign.c"
  }
#line 1248 "parse_tree.prog_foreign.c"
}

#line 1251 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_info_0_0_10001(
#line 1254 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1256 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1258 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1260 "parse_tree.prog_foreign.c"
{
#line 1262 "parse_tree.prog_foreign.c"
  {
#line 1264 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1267 "parse_tree.prog_foreign.c"
    {
#line 1269 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_decl_info_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1272 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1274 "parse_tree.prog_foreign.c"
  }
#line 1276 "parse_tree.prog_foreign.c"
}

#line 1279 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_0_0_10001(
#line 1282 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1284 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1286 "parse_tree.prog_foreign.c"
{
#line 1288 "parse_tree.prog_foreign.c"
  {
#line 1290 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1293 "parse_tree.prog_foreign.c"
    {
#line 1295 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_0_0(((MR_String) parse_tree__prog_foreign__wrapper_arg_1), ((MR_String) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1298 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1300 "parse_tree.prog_foreign.c"
  }
#line 1302 "parse_tree.prog_foreign.c"
}

#line 1305 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_0_0_10001(
#line 1308 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1310 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1312 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1314 "parse_tree.prog_foreign.c"
{
#line 1316 "parse_tree.prog_foreign.c"
  {
#line 1318 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1321 "parse_tree.prog_foreign.c"
    {
#line 1323 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_String) parse_tree__prog_foreign__wrapper_arg_2), ((MR_String) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1326 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1328 "parse_tree.prog_foreign.c"
  }
#line 1330 "parse_tree.prog_foreign.c"
}

#line 1333 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
#line 1336 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1338 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1340 "parse_tree.prog_foreign.c"
{
#line 1342 "parse_tree.prog_foreign.c"
  {
#line 1344 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1347 "parse_tree.prog_foreign.c"
    {
#line 1349 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1352 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1354 "parse_tree.prog_foreign.c"
  }
#line 1356 "parse_tree.prog_foreign.c"
}

#line 1359 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
#line 1362 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1364 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1366 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1368 "parse_tree.prog_foreign.c"
{
#line 1370 "parse_tree.prog_foreign.c"
  {
#line 1372 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1375 "parse_tree.prog_foreign.c"
    {
#line 1377 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1380 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1382 "parse_tree.prog_foreign.c"
  }
#line 1384 "parse_tree.prog_foreign.c"
}

#line 1387 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
#line 1390 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1392 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1394 "parse_tree.prog_foreign.c"
{
#line 1396 "parse_tree.prog_foreign.c"
  {
#line 1398 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1401 "parse_tree.prog_foreign.c"
    {
#line 1403 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1406 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1408 "parse_tree.prog_foreign.c"
  }
#line 1410 "parse_tree.prog_foreign.c"
}

#line 1413 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
#line 1416 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1418 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1420 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1422 "parse_tree.prog_foreign.c"
{
#line 1424 "parse_tree.prog_foreign.c"
  {
#line 1426 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1429 "parse_tree.prog_foreign.c"
    {
#line 1431 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1434 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1436 "parse_tree.prog_foreign.c"
  }
#line 1438 "parse_tree.prog_foreign.c"
}

#line 1441 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
#line 1444 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1446 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1448 "parse_tree.prog_foreign.c"
{
#line 1450 "parse_tree.prog_foreign.c"
  {
#line 1452 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1455 "parse_tree.prog_foreign.c"
    {
#line 1457 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_defns_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1460 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1462 "parse_tree.prog_foreign.c"
  }
#line 1464 "parse_tree.prog_foreign.c"
}

#line 1467 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
#line 1470 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1472 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1474 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1476 "parse_tree.prog_foreign.c"
{
#line 1478 "parse_tree.prog_foreign.c"
  {
#line 1480 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1483 "parse_tree.prog_foreign.c"
    {
#line 1485 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_defns_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1488 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1490 "parse_tree.prog_foreign.c"
  }
#line 1492 "parse_tree.prog_foreign.c"
}

#line 1495 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____user_foreign_code_0_0_10001(
#line 1498 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1500 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1502 "parse_tree.prog_foreign.c"
{
#line 1504 "parse_tree.prog_foreign.c"
  {
#line 1506 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1509 "parse_tree.prog_foreign.c"
    {
#line 1511 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____user_foreign_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1514 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1516 "parse_tree.prog_foreign.c"
  }
#line 1518 "parse_tree.prog_foreign.c"
}

#line 1521 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____user_foreign_code_0_0_10001(
#line 1524 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1526 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1528 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1530 "parse_tree.prog_foreign.c"
{
#line 1532 "parse_tree.prog_foreign.c"
  {
#line 1534 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1537 "parse_tree.prog_foreign.c"
    {
#line 1539 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____user_foreign_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1542 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1544 "parse_tree.prog_foreign.c"
  }
#line 1546 "parse_tree.prog_foreign.c"
}

#line 152 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(
#line 152 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 152 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3,
#line 152 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__4_4)
#line 152 "prog_foreign.m"
{
#line 295 "prog_foreign.m"
  {
#line 295 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 295 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__HeadVar__5_5;

#line 295 "prog_foreign.m"
    if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 0))
#line 295 "prog_foreign.m"
      {
#line 297 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__HeadVar__4_4 == (MR_Integer) 0);
#line 297 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 297 "prog_foreign.m"
          {
#line 297 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__HeadVar__3_3 == (MR_Integer) 0);
#line 297 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 297 "prog_foreign.m"
          }
#line 295 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 295 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 1;
#line 295 "prog_foreign.m"
        else
#line 295 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 295 "prog_foreign.m"
      }
#line 295 "prog_foreign.m"
    else
#line 295 "prog_foreign.m"
      if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 2))
#line 322 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 295 "prog_foreign.m"
      else
#line 295 "prog_foreign.m"
        if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 5))
#line 337 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 295 "prog_foreign.m"
        else
#line 295 "prog_foreign.m"
          if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 1))
#line 303 "prog_foreign.m"
            {
#line 303 "prog_foreign.m"
              MR_Word parse_tree__prog_foreign__PreferredList_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_foreign_scalar_common_1[5]);
#line 303 "prog_foreign.m"
              MR_Integer parse_tree__prog_foreign__N1_18;
#line 303 "prog_foreign.m"
              MR_Integer parse_tree__prog_foreign__N2_19;

#line 314 "prog_foreign.m"
              {
#line 314 "prog_foreign.m"
                parse_tree__prog_foreign__N1_18 = parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__311__1_2_f_0(parse_tree__prog_foreign__PreferredList_13, parse_tree__prog_foreign__HeadVar__3_3);
              }
#line 315 "prog_foreign.m"
              {
#line 315 "prog_foreign.m"
                parse_tree__prog_foreign__N2_19 = parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__311__1_2_f_0(parse_tree__prog_foreign__PreferredList_13, parse_tree__prog_foreign__HeadVar__4_4);
              }
#line 316 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__N2_19 < parse_tree__prog_foreign__N1_18);
#line 318 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 317 "prog_foreign.m"
                parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 1;
#line 318 "prog_foreign.m"
              else
#line 319 "prog_foreign.m"
                parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 303 "prog_foreign.m"
            }
#line 295 "prog_foreign.m"
          else
#line 295 "prog_foreign.m"
            if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 3))
#line 324 "prog_foreign.m"
              parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 295 "prog_foreign.m"
            else
#line 328 "prog_foreign.m"
              {
#line 331 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__HeadVar__4_4 == (MR_Integer) 0);
#line 331 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 331 "prog_foreign.m"
                  {
#line 331 "prog_foreign.m"
                    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__HeadVar__3_3 == (MR_Integer) 0);
#line 331 "prog_foreign.m"
                    parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 331 "prog_foreign.m"
                  }
#line 328 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 328 "prog_foreign.m"
                  parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 1;
#line 328 "prog_foreign.m"
                else
#line 328 "prog_foreign.m"
                  parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 328 "prog_foreign.m"
              }
#line 295 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__5_5;
#line 295 "prog_foreign.m"
  }
#line 152 "prog_foreign.m"
}

#line 311 "prog_foreign.m"
static MR_Integer MR_CALL 
parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__311__1_2_f_0(
#line 311 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__PreferredList_13,
#line 311 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_24)
#line 311 "prog_foreign.m"
{
#line 311 "prog_foreign.m"
  {
#line 311 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 311 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__HeadVar__3_25;
#line 311 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__X0_17;

#line 309 "prog_foreign.m"
    {
#line 309 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__list__nth_member_search_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__prog_foreign__PreferredList_13, ((MR_Box) (parse_tree__prog_foreign__HeadVar__2_24)), &parse_tree__prog_foreign__X0_17);
    }
#line 311 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 310 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__3_25 = parse_tree__prog_foreign__X0_17;
#line 311 "prog_foreign.m"
    else
#line 312 "prog_foreign.m"
      {
#line 312 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_26_26;

#line 312 "prog_foreign.m"
        {
#line 312 "prog_foreign.m"
          parse_tree__prog_foreign__V_26_26 = mercury__list__length_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__prog_foreign__PreferredList_13);
        }
#line 312 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__3_25 = (parse_tree__prog_foreign__V_26_26 + (MR_Integer) 1);
#line 312 "prog_foreign.m"
      }
#line 311 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__3_25;
#line 311 "prog_foreign.m"
  }
#line 311 "prog_foreign.m"
}

#line 86 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____user_foreign_code_0_0(
#line 86 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 86 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 86 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 86 "prog_foreign.m"
{
#line 86 "prog_foreign.m"
  {
#line 86 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 86 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 86 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_13 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 86 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_12 == parse_tree__prog_foreign__CastY_13);
#line 86 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1753 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 86 "prog_foreign.m"
    else
#line 86 "prog_foreign.m"
      {
#line 86 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 86 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 86 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 86 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 86 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10;
#line 86 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_17_17 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 86 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_18_18 = (MR_Integer) parse_tree__prog_foreign__V_7_7;

#line 86 "prog_foreign.m"
        {
#line 86 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_10_10, parse_tree__prog_foreign__V_17_17, parse_tree__prog_foreign__V_18_18);
        }
#line 1783 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_10_10 == (MR_Integer) 0);
#line 86 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 86 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 86 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_10_10;
#line 86 "prog_foreign.m"
        else
#line 86 "prog_foreign.m"
          {
#line 86 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_11_11;

#line 86 "prog_foreign.m"
            {
#line 86 "prog_foreign.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
            }
#line 1803 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_11_11 == (MR_Integer) 0);
#line 86 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 86 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 86 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_11_11;
#line 86 "prog_foreign.m"
            else
#line 86 "prog_foreign.m"
              {
#line 86 "prog_foreign.m"
                mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_9_9);
#line 86 "prog_foreign.m"
                return;
              }
#line 86 "prog_foreign.m"
          }
#line 86 "prog_foreign.m"
      }
#line 86 "prog_foreign.m"
  }
#line 86 "prog_foreign.m"
}

#line 86 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____user_foreign_code_0_0(
#line 86 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 86 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 86 "prog_foreign.m"
{
#line 86 "prog_foreign.m"
  {
#line 86 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 86 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 86 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 86 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
#line 86 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 86 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 86 "prog_foreign.m"
    else
#line 86 "prog_foreign.m"
      {
#line 86 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 86 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 86 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 86 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));

#line 1870 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_6_6);
#line 86 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 86 "prog_foreign.m"
          {
#line 1876 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_7_7) == 0);
#line 86 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 1880 "parse_tree.prog_foreign.c"
              {
#line 1882 "parse_tree.prog_foreign.c"
                return parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
              }
#line 86 "prog_foreign.m"
          }
#line 86 "prog_foreign.m"
      }
#line 86 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 86 "prog_foreign.m"
  }
#line 86 "prog_foreign.m"
}

#line 61 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0(
#line 61 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 61 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 61 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 61 "prog_foreign.m"
{
#line 61 "prog_foreign.m"
  {
#line 61 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 61 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 61 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 61 "prog_foreign.m"
    {
#line 61 "prog_foreign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[3], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
#line 61 "prog_foreign.m"
      return;
    }
#line 61 "prog_foreign.m"
  }
#line 61 "prog_foreign.m"
}

#line 61 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0(
#line 61 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 61 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 61 "prog_foreign.m"
{
#line 61 "prog_foreign.m"
  {
#line 61 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 61 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 61 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 61 "prog_foreign.m"
    {
#line 61 "prog_foreign.m"
      return parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[3], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
#line 61 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 61 "prog_foreign.m"
  }
#line 61 "prog_foreign.m"
}

#line 62 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(
#line 62 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 62 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 62 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 62 "prog_foreign.m"
{
#line 62 "prog_foreign.m"
  {
#line 62 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 62 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 62 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 62 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
#line 62 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1982 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 62 "prog_foreign.m"
    else
#line 62 "prog_foreign.m"
      {
#line 62 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 62 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 62 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8;

#line 62 "prog_foreign.m"
        {
#line 62 "prog_foreign.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[1], &parse_tree__prog_foreign__V_8_8, ((MR_Box) (parse_tree__prog_foreign__V_4_4)), ((MR_Box) (parse_tree__prog_foreign__V_6_6)));
        }
#line 2004 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_8_8 == (MR_Integer) 0);
#line 62 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 62 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 62 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_8_8;
#line 62 "prog_foreign.m"
        else
#line 62 "prog_foreign.m"
          {
#line 62 "prog_foreign.m"
            {
#line 62 "prog_foreign.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[2], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__V_5_5)), ((MR_Box) (parse_tree__prog_foreign__V_7_7)));
#line 62 "prog_foreign.m"
              return;
            }
#line 62 "prog_foreign.m"
          }
#line 62 "prog_foreign.m"
      }
#line 62 "prog_foreign.m"
  }
#line 62 "prog_foreign.m"
}

#line 62 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(
#line 62 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 62 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 62 "prog_foreign.m"
{
#line 62 "prog_foreign.m"
  {
#line 62 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 62 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_7 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 62 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_8 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 62 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_7 == parse_tree__prog_foreign__CastY_8);
#line 62 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 62 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 62 "prog_foreign.m"
    else
#line 62 "prog_foreign.m"
      {
#line 62 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__TypeInfo_10_10;
#line 62 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 62 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 62 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));

#line 2071 "parse_tree.prog_foreign.c"
        {
#line 2073 "parse_tree.prog_foreign.c"
          parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[1], ((MR_Box) (parse_tree__prog_foreign__V_3_3)), ((MR_Box) (parse_tree__prog_foreign__V_5_5)));
        }
#line 62 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 62 "prog_foreign.m"
          {
#line 2080 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_foreign_scalar_common_1[2];
#line 2082 "parse_tree.prog_foreign.c"
            {
#line 2084 "parse_tree.prog_foreign.c"
              return parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_foreign__TypeInfo_10_10, ((MR_Box) (parse_tree__prog_foreign__V_4_4)), ((MR_Box) (parse_tree__prog_foreign__V_6_6)));
            }
#line 62 "prog_foreign.m"
          }
#line 62 "prog_foreign.m"
      }
#line 62 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 62 "prog_foreign.m"
  }
#line 62 "prog_foreign.m"
}

#line 68 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(
#line 68 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 68 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 68 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 68 "prog_foreign.m"
{
#line 68 "prog_foreign.m"
  {
#line 68 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 68 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_15 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 68 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_16 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 68 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_15 == parse_tree__prog_foreign__CastY_16);
#line 68 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 2122 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "prog_foreign.m"
    else
#line 68 "prog_foreign.m"
      {
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 3)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 68 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_21_21 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 68 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_22_22 = (MR_Integer) parse_tree__prog_foreign__V_8_8;

#line 68 "prog_foreign.m"
        {
#line 68 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_12_12, parse_tree__prog_foreign__V_21_21, parse_tree__prog_foreign__V_22_22);
        }
#line 2156 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_12_12 == (MR_Integer) 0);
#line 68 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 68 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_12_12;
#line 68 "prog_foreign.m"
        else
#line 68 "prog_foreign.m"
          {
#line 68 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_13_13;

#line 68 "prog_foreign.m"
            {
#line 68 "prog_foreign.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9);
            }
#line 2176 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_13_13 == (MR_Integer) 0);
#line 68 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 68 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_13_13;
#line 68 "prog_foreign.m"
            else
#line 68 "prog_foreign.m"
              {
#line 68 "prog_foreign.m"
                MR_Word parse_tree__prog_foreign__V_14_14;

#line 68 "prog_foreign.m"
                {
#line 68 "prog_foreign.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__V_14_14, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                }
#line 2196 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_14_14 == (MR_Integer) 0);
#line 68 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 68 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
                  *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_14_14;
#line 68 "prog_foreign.m"
                else
#line 68 "prog_foreign.m"
                  {
#line 68 "prog_foreign.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_7_7, parse_tree__prog_foreign__V_11_11);
#line 68 "prog_foreign.m"
                    return;
                  }
#line 68 "prog_foreign.m"
              }
#line 68 "prog_foreign.m"
          }
#line 68 "prog_foreign.m"
      }
#line 68 "prog_foreign.m"
  }
#line 68 "prog_foreign.m"
}

#line 68 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(
#line 68 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 68 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 68 "prog_foreign.m"
{
#line 68 "prog_foreign.m"
  {
#line 68 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 68 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_11 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 68 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 68 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_11 == parse_tree__prog_foreign__CastY_12);
#line 68 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 68 "prog_foreign.m"
    else
#line 68 "prog_foreign.m"
      {
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 3)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 68 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));

#line 2269 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_7_7);
#line 68 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
          {
#line 2275 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_8_8) == 0);
#line 68 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
              {
#line 2281 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9) == 0);
#line 68 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 2285 "parse_tree.prog_foreign.c"
                  parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10) == 0);
#line 68 "prog_foreign.m"
              }
#line 68 "prog_foreign.m"
          }
#line 68 "prog_foreign.m"
      }
#line 68 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 68 "prog_foreign.m"
  }
#line 68 "prog_foreign.m"
}

#line 96 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_0_0(
#line 96 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 96 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__HeadVar__2_2,
#line 96 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__HeadVar__3_3)
#line 96 "prog_foreign.m"
{
#line 96 "prog_foreign.m"
  {
#line 96 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 96 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 96 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 96 "prog_foreign.m"
    {
#line 96 "prog_foreign.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__Cast_HeadVar1_4, parse_tree__prog_foreign__Cast_HeadVar2_5);
#line 96 "prog_foreign.m"
      return;
    }
#line 96 "prog_foreign.m"
  }
#line 96 "prog_foreign.m"
}

#line 96 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_0_0(
#line 96 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__HeadVar__1_1,
#line 96 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__HeadVar__2_2)
#line 96 "prog_foreign.m"
{
#line 96 "prog_foreign.m"
  {
#line 96 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 96 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 96 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 96 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__Cast_HeadVar1_3, parse_tree__prog_foreign__Cast_HeadVar2_4) == 0);
#line 96 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 96 "prog_foreign.m"
  }
#line 96 "prog_foreign.m"
}

#line 41 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_info_0_0(
#line 41 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 41 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 41 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 41 "prog_foreign.m"
{
#line 41 "prog_foreign.m"
  {
#line 41 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 41 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 41 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 41 "prog_foreign.m"
    {
#line 41 "prog_foreign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[1], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
#line 41 "prog_foreign.m"
      return;
    }
#line 41 "prog_foreign.m"
  }
#line 41 "prog_foreign.m"
}

#line 41 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_info_0_0(
#line 41 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 41 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 41 "prog_foreign.m"
{
#line 41 "prog_foreign.m"
  {
#line 41 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 41 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 41 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 41 "prog_foreign.m"
    {
#line 41 "prog_foreign.m"
      return parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[1], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
#line 41 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 41 "prog_foreign.m"
  }
#line 41 "prog_foreign.m"
}

#line 46 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(
#line 46 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 46 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 46 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 46 "prog_foreign.m"
{
#line 46 "prog_foreign.m"
  {
#line 46 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 46 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_15 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 46 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_16 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 46 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_15 == parse_tree__prog_foreign__CastY_16);
#line 46 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 2445 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "prog_foreign.m"
    else
#line 46 "prog_foreign.m"
      {
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 46 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 3)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 46 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_21_21 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 46 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_22_22 = (MR_Integer) parse_tree__prog_foreign__V_8_8;

#line 46 "prog_foreign.m"
        {
#line 46 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_12_12, parse_tree__prog_foreign__V_21_21, parse_tree__prog_foreign__V_22_22);
        }
#line 2479 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_12_12 == (MR_Integer) 0);
#line 46 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 46 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 46 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_12_12;
#line 46 "prog_foreign.m"
        else
#line 46 "prog_foreign.m"
          {
#line 46 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_13_13;
#line 46 "prog_foreign.m"
            MR_Integer parse_tree__prog_foreign__V_23_23 = (MR_Integer) parse_tree__prog_foreign__V_5_5;
#line 46 "prog_foreign.m"
            MR_Integer parse_tree__prog_foreign__V_24_24 = (MR_Integer) parse_tree__prog_foreign__V_9_9;

#line 46 "prog_foreign.m"
            {
#line 46 "prog_foreign.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_23_23, parse_tree__prog_foreign__V_24_24);
            }
#line 2503 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_13_13 == (MR_Integer) 0);
#line 46 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 46 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 46 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_13_13;
#line 46 "prog_foreign.m"
            else
#line 46 "prog_foreign.m"
              {
#line 46 "prog_foreign.m"
                MR_Word parse_tree__prog_foreign__V_14_14;

#line 46 "prog_foreign.m"
                {
#line 46 "prog_foreign.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__V_14_14, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                }
#line 2523 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_14_14 == (MR_Integer) 0);
#line 46 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 46 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 46 "prog_foreign.m"
                  *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_14_14;
#line 46 "prog_foreign.m"
                else
#line 46 "prog_foreign.m"
                  {
#line 46 "prog_foreign.m"
                    mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_7_7, parse_tree__prog_foreign__V_11_11);
#line 46 "prog_foreign.m"
                    return;
                  }
#line 46 "prog_foreign.m"
              }
#line 46 "prog_foreign.m"
          }
#line 46 "prog_foreign.m"
      }
#line 46 "prog_foreign.m"
  }
#line 46 "prog_foreign.m"
}

#line 46 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(
#line 46 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 46 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 46 "prog_foreign.m"
{
#line 46 "prog_foreign.m"
  {
#line 46 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 46 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_11 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 46 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 46 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_11 == parse_tree__prog_foreign__CastY_12);
#line 46 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 46 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 46 "prog_foreign.m"
    else
#line 46 "prog_foreign.m"
      {
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 46 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 3)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));

#line 2596 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_7_7);
#line 46 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 46 "prog_foreign.m"
          {
#line 2602 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_4_4 == parse_tree__prog_foreign__V_8_8);
#line 46 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 46 "prog_foreign.m"
              {
#line 2608 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9) == 0);
#line 46 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 2612 "parse_tree.prog_foreign.c"
                  {
#line 2614 "parse_tree.prog_foreign.c"
                    return parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                  }
#line 46 "prog_foreign.m"
              }
#line 46 "prog_foreign.m"
          }
#line 46 "prog_foreign.m"
      }
#line 46 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 46 "prog_foreign.m"
  }
#line 46 "prog_foreign.m"
}

#line 43 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_info_0_0(
#line 43 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 43 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 43 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 43 "prog_foreign.m"
{
#line 43 "prog_foreign.m"
  {
#line 43 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 43 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 43 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 43 "prog_foreign.m"
    {
#line 43 "prog_foreign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[0], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
#line 43 "prog_foreign.m"
      return;
    }
#line 43 "prog_foreign.m"
  }
#line 43 "prog_foreign.m"
}

#line 43 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_info_0_0(
#line 43 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 43 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 43 "prog_foreign.m"
{
#line 43 "prog_foreign.m"
  {
#line 43 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 43 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 43 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 43 "prog_foreign.m"
    {
#line 43 "prog_foreign.m"
      return parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[0], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
#line 43 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 43 "prog_foreign.m"
  }
#line 43 "prog_foreign.m"
}

#line 54 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0(
#line 54 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 54 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 54 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 54 "prog_foreign.m"
{
#line 54 "prog_foreign.m"
  {
#line 54 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 54 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 54 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_13 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 54 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_12 == parse_tree__prog_foreign__CastY_13);
#line 54 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 2716 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "prog_foreign.m"
    else
#line 54 "prog_foreign.m"
      {
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 54 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10;
#line 54 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_17_17 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 54 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_18_18 = (MR_Integer) parse_tree__prog_foreign__V_7_7;

#line 54 "prog_foreign.m"
        {
#line 54 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_10_10, parse_tree__prog_foreign__V_17_17, parse_tree__prog_foreign__V_18_18);
        }
#line 2746 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_10_10 == (MR_Integer) 0);
#line 54 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 54 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 54 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_10_10;
#line 54 "prog_foreign.m"
        else
#line 54 "prog_foreign.m"
          {
#line 54 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_11_11;

#line 54 "prog_foreign.m"
            {
#line 54 "prog_foreign.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
            }
#line 2766 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_11_11 == (MR_Integer) 0);
#line 54 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 54 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 54 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_11_11;
#line 54 "prog_foreign.m"
            else
#line 54 "prog_foreign.m"
              {
#line 54 "prog_foreign.m"
                mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_9_9);
#line 54 "prog_foreign.m"
                return;
              }
#line 54 "prog_foreign.m"
          }
#line 54 "prog_foreign.m"
      }
#line 54 "prog_foreign.m"
  }
#line 54 "prog_foreign.m"
}

#line 54 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0(
#line 54 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 54 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 54 "prog_foreign.m"
{
#line 54 "prog_foreign.m"
  {
#line 54 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 54 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 54 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 54 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
#line 54 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 54 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 54 "prog_foreign.m"
    else
#line 54 "prog_foreign.m"
      {
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));

#line 2833 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_6_6);
#line 54 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 54 "prog_foreign.m"
          {
#line 2839 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_7_7) == 0);
#line 54 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 2843 "parse_tree.prog_foreign.c"
              {
#line 2845 "parse_tree.prog_foreign.c"
                return parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
              }
#line 54 "prog_foreign.m"
          }
#line 54 "prog_foreign.m"
      }
#line 54 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 54 "prog_foreign.m"
  }
#line 54 "prog_foreign.m"
}

#line 460 "prog_foreign.m"
static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
#line 460 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3)
#line 460 "prog_foreign.m"
{
#line 471 "prog_foreign.m"
  {
#line 471 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 471 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_4;
#line 471 "prog_foreign.m"
    MR_Char parse_tree__prog_foreign__Char_5;
#line 471 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Rest_6;

#line 463 "prog_foreign.m"
    {
#line 463 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__first_char_3_p_3(parse_tree__prog_foreign__String_3, &parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Rest_6);
    }
#line 471 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 466 "prog_foreign.m"
      {
#line 466 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__Code_7;
#line 466 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__CodeString_8;
#line 466 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__ThisCharString_9;
#line 466 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name0_10;

#line 466 "prog_foreign.m"
        {
#line 466 "prog_foreign.m"
          mercury__char__to_int_2_p_0(parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Code_7);
        }
#line 467 "prog_foreign.m"
        {
#line 467 "prog_foreign.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_foreign__Code_7, &parse_tree__prog_foreign__CodeString_8);
        }
#line 468 "prog_foreign.m"
        {
#line 468 "prog_foreign.m"
          mercury__string__append_3_p_2((MR_String) "_", parse_tree__prog_foreign__CodeString_8, &parse_tree__prog_foreign__ThisCharString_9);
        }
#line 469 "prog_foreign.m"
        {
#line 469 "prog_foreign.m"
          parse_tree__prog_foreign__Name0_10 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__Rest_6);
        }
#line 470 "prog_foreign.m"
        {
#line 470 "prog_foreign.m"
          mercury__string__append_3_p_2(parse_tree__prog_foreign__ThisCharString_9, parse_tree__prog_foreign__Name0_10, &parse_tree__prog_foreign__Name_4);
        }
#line 466 "prog_foreign.m"
      }
#line 471 "prog_foreign.m"
    else
#line 473 "prog_foreign.m"
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__String_3;
#line 471 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_4;
#line 471 "prog_foreign.m"
  }
#line 460 "prog_foreign.m"
}

#line 349 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
#line 349 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 349 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 349 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr)
#line 349 "prog_foreign.m"
{
#line 351 "prog_foreign.m"
  {
#line 351 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 351 "prog_foreign.m"
    {
#line 351 "prog_foreign.m"
      MR_Integer parse_tree__prog_foreign__slot_0 = (MR_Integer) 0;

#line 351 "prog_foreign.m"
      do
#line 351 "prog_foreign.m"
        {
#line 351 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = ((&parse_tree__prog_foreign_vector_common_5[0 + parse_tree__prog_foreign__slot_0]))->parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
#line 351 "prog_foreign.m"
          {
#line 351 "prog_foreign.m"
            parse_tree__prog_foreign__cont(parse_tree__prog_foreign__cont_env_ptr);
          }
#line 351 "prog_foreign.m"
          parse_tree__prog_foreign__slot_0 = (parse_tree__prog_foreign__slot_0 + (MR_Integer) 1);
#line 351 "prog_foreign.m"
        }
#line 351 "prog_foreign.m"
      while ((parse_tree__prog_foreign__slot_0 < (MR_Integer) 5));
#line 351 "prog_foreign.m"
    }
#line 351 "prog_foreign.m"
  }
#line 349 "prog_foreign.m"
}

#line 189 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(
#line 189 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3)
#line 189 "prog_foreign.m"
{
#line 420 "prog_foreign.m"
  {
#line 420 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 420 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_4;
#line 420 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name0_5;

#line 435 "prog_foreign.m"
    if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "!") == 0))
#line 447 "prog_foreign.m"
      {
#line 447 "prog_foreign.m"
        parse_tree__prog_foreign__Name0_5 = (MR_String) "f_cut";
#line 447 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 447 "prog_foreign.m"
      }
#line 435 "prog_foreign.m"
    else
#line 435 "prog_foreign.m"
      if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "*") == 0))
#line 443 "prog_foreign.m"
        {
#line 443 "prog_foreign.m"
          parse_tree__prog_foreign__Name0_5 = (MR_String) "f_times";
#line 443 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 443 "prog_foreign.m"
        }
#line 435 "prog_foreign.m"
      else
#line 435 "prog_foreign.m"
        if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "+") == 0))
#line 442 "prog_foreign.m"
          {
#line 442 "prog_foreign.m"
            parse_tree__prog_foreign__Name0_5 = (MR_String) "f_plus";
#line 442 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 442 "prog_foreign.m"
          }
#line 435 "prog_foreign.m"
        else
#line 435 "prog_foreign.m"
          if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ",") == 0))
#line 445 "prog_foreign.m"
            {
#line 445 "prog_foreign.m"
              parse_tree__prog_foreign__Name0_5 = (MR_String) "f_comma";
#line 445 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 445 "prog_foreign.m"
            }
#line 435 "prog_foreign.m"
          else
#line 435 "prog_foreign.m"
            if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "-") == 0))
#line 441 "prog_foreign.m"
              {
#line 441 "prog_foreign.m"
                parse_tree__prog_foreign__Name0_5 = (MR_String) "f_minus";
#line 441 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 441 "prog_foreign.m"
              }
#line 435 "prog_foreign.m"
            else
#line 435 "prog_foreign.m"
              if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "/") == 0))
#line 444 "prog_foreign.m"
                {
#line 444 "prog_foreign.m"
                  parse_tree__prog_foreign__Name0_5 = (MR_String) "f_slash";
#line 444 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 444 "prog_foreign.m"
                }
#line 435 "prog_foreign.m"
              else
#line 435 "prog_foreign.m"
                if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ";") == 0))
#line 446 "prog_foreign.m"
                  {
#line 446 "prog_foreign.m"
                    parse_tree__prog_foreign__Name0_5 = (MR_String) "f_semicolon";
#line 446 "prog_foreign.m"
                    parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 446 "prog_foreign.m"
                  }
#line 435 "prog_foreign.m"
                else
#line 435 "prog_foreign.m"
                  if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "<") == 0))
#line 439 "prog_foreign.m"
                    {
#line 439 "prog_foreign.m"
                      parse_tree__prog_foreign__Name0_5 = (MR_String) "f_less_than";
#line 439 "prog_foreign.m"
                      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 439 "prog_foreign.m"
                    }
#line 435 "prog_foreign.m"
                  else
#line 435 "prog_foreign.m"
                    if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "=") == 0))
#line 438 "prog_foreign.m"
                      {
#line 438 "prog_foreign.m"
                        parse_tree__prog_foreign__Name0_5 = (MR_String) "f_equal";
#line 438 "prog_foreign.m"
                        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 438 "prog_foreign.m"
                      }
#line 435 "prog_foreign.m"
                    else
#line 435 "prog_foreign.m"
                      if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ">") == 0))
#line 440 "prog_foreign.m"
                        {
#line 440 "prog_foreign.m"
                          parse_tree__prog_foreign__Name0_5 = (MR_String) "f_greater_than";
#line 440 "prog_foreign.m"
                          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 440 "prog_foreign.m"
                        }
#line 435 "prog_foreign.m"
                      else
#line 435 "prog_foreign.m"
                        if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "=<") == 0))
#line 437 "prog_foreign.m"
                          {
#line 437 "prog_foreign.m"
                            parse_tree__prog_foreign__Name0_5 = (MR_String) "f_less_or_equal";
#line 437 "prog_foreign.m"
                            parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 437 "prog_foreign.m"
                          }
#line 435 "prog_foreign.m"
                        else
#line 435 "prog_foreign.m"
                          if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ">=") == 0))
#line 436 "prog_foreign.m"
                            {
#line 436 "prog_foreign.m"
                              parse_tree__prog_foreign__Name0_5 = (MR_String) "f_greater_or_equal";
#line 436 "prog_foreign.m"
                              parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 436 "prog_foreign.m"
                            }
#line 435 "prog_foreign.m"
                          else
#line 435 "prog_foreign.m"
                            if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "[]") == 0))
#line 450 "prog_foreign.m"
                              {
#line 450 "prog_foreign.m"
                                parse_tree__prog_foreign__Name0_5 = (MR_String) "f_nil";
#line 450 "prog_foreign.m"
                                parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 450 "prog_foreign.m"
                              }
#line 435 "prog_foreign.m"
                            else
#line 435 "prog_foreign.m"
                              if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "\\=") == 0))
#line 435 "prog_foreign.m"
                                {
#line 435 "prog_foreign.m"
                                  parse_tree__prog_foreign__Name0_5 = (MR_String) "f_not_equal";
#line 435 "prog_foreign.m"
                                  parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 435 "prog_foreign.m"
                                }
#line 435 "prog_foreign.m"
                              else
#line 435 "prog_foreign.m"
                                if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "{}") == 0))
#line 448 "prog_foreign.m"
                                  {
#line 448 "prog_foreign.m"
                                    parse_tree__prog_foreign__Name0_5 = (MR_String) "f_tuple";
#line 448 "prog_foreign.m"
                                    parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 448 "prog_foreign.m"
                                  }
#line 435 "prog_foreign.m"
                                else
#line 435 "prog_foreign.m"
                                  if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "[|]") == 0))
#line 449 "prog_foreign.m"
                                    {
#line 449 "prog_foreign.m"
                                      parse_tree__prog_foreign__Name0_5 = (MR_String) "f_cons";
#line 449 "prog_foreign.m"
                                      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 449 "prog_foreign.m"
                                    }
#line 435 "prog_foreign.m"
                                  else
#line 435 "prog_foreign.m"
                                    parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 420 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 419 "prog_foreign.m"
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__Name0_5;
#line 420 "prog_foreign.m"
    else
#line 421 "prog_foreign.m"
      {
#line 421 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_7_7;

#line 421 "prog_foreign.m"
        {
#line 421 "prog_foreign.m"
          parse_tree__prog_foreign__V_7_7 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__String_3);
        }
#line 421 "prog_foreign.m"
        {
#line 421 "prog_foreign.m"
          return parse_tree__prog_foreign__Name_4 = mercury__string__f_43_43_2_f_0((MR_String) "f", parse_tree__prog_foreign__V_7_7);
        }
#line 421 "prog_foreign.m"
      }
#line 420 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_4;
#line 420 "prog_foreign.m"
  }
#line 189 "prog_foreign.m"
}

#line 187 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__qualify_name_2_f_0(
#line 187 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Module0_4,
#line 187 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name0_5)
#line 187 "prog_foreign.m"
{
#line 414 "prog_foreign.m"
  {
#line 414 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 414 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_6;
#line 414 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7;
#line 414 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_8_8;
#line 414 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_10_10;

#line 415 "prog_foreign.m"
    {
#line 415 "prog_foreign.m"
      parse_tree__prog_foreign__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_10_10, 0) = ((MR_Box) (parse_tree__prog_foreign__Name0_5));
#line 415 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "prog_foreign.m"
    }
#line 415 "prog_foreign.m"
    {
#line 415 "prog_foreign.m"
      parse_tree__prog_foreign__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_8_8, 0) = ((MR_Box) ((MR_String) "__"));
#line 415 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_8_8, 1) = ((MR_Box) (parse_tree__prog_foreign__V_10_10));
#line 415 "prog_foreign.m"
    }
#line 415 "prog_foreign.m"
    {
#line 415 "prog_foreign.m"
      parse_tree__prog_foreign__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_7_7, 0) = ((MR_Box) (parse_tree__prog_foreign__Module0_4));
#line 415 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_7_7, 1) = ((MR_Box) (parse_tree__prog_foreign__V_8_8));
#line 415 "prog_foreign.m"
    }
#line 415 "prog_foreign.m"
    {
#line 415 "prog_foreign.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_foreign__V_7_7, &parse_tree__prog_foreign__Name_6);
    }
#line 414 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_6;
#line 414 "prog_foreign.m"
  }
#line 187 "prog_foreign.m"
}

#line 183 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(
#line 183 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name_3)
#line 183 "prog_foreign.m"
{
#line 410 "prog_foreign.m"
  {
#line 410 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 410 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;
#line 390 "prog_foreign.m"
    MR_Char parse_tree__prog_foreign__FirstChar_8;
#line 390 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__V_10_10;

#line 390 "prog_foreign.m"
    {
#line 390 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
#line 390 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 390 "prog_foreign.m"
      {
#line 397 "prog_foreign.m"
        parse_tree__prog_foreign__V_10_10 = (MR_Integer) 0;
#line 397 "prog_foreign.m"
        {
#line 397 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__index_3_p_0(parse_tree__prog_foreign__Name_3, parse_tree__prog_foreign__V_10_10, &parse_tree__prog_foreign__FirstChar_8);
        }
#line 390 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 390 "prog_foreign.m"
          {
#line 398 "prog_foreign.m"
            {
#line 398 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = mercury__char__is_digit_1_p_0(parse_tree__prog_foreign__FirstChar_8);
            }
#line 398 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 390 "prog_foreign.m"
          }
#line 390 "prog_foreign.m"
      }
#line 410 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 407 "prog_foreign.m"
      {
#line 407 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Suffix_9;

#line 405 "prog_foreign.m"
        {
#line 405 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
#line 407 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 406 "prog_foreign.m"
          {
#line 406 "prog_foreign.m"
            {
#line 406 "prog_foreign.m"
              return parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
#line 406 "prog_foreign.m"
          }
#line 407 "prog_foreign.m"
        else
#line 408 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
#line 407 "prog_foreign.m"
      }
#line 410 "prog_foreign.m"
    else
#line 411 "prog_foreign.m"
      {
#line 411 "prog_foreign.m"
        return parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
#line 410 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 410 "prog_foreign.m"
  }
#line 183 "prog_foreign.m"
}

#line 178 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_1_f_0(
#line 178 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name_3)
#line 178 "prog_foreign.m"
{
#line 410 "prog_foreign.m"
  {
#line 410 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 410 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 390 "prog_foreign.m"
    {
#line 390 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
#line 410 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 407 "prog_foreign.m"
      {
#line 407 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Suffix_9;

#line 405 "prog_foreign.m"
        {
#line 405 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
#line 407 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 406 "prog_foreign.m"
          {
#line 406 "prog_foreign.m"
            {
#line 406 "prog_foreign.m"
              return parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
#line 406 "prog_foreign.m"
          }
#line 407 "prog_foreign.m"
        else
#line 408 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
#line 407 "prog_foreign.m"
      }
#line 410 "prog_foreign.m"
    else
#line 411 "prog_foreign.m"
      {
#line 411 "prog_foreign.m"
        return parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
#line 410 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 410 "prog_foreign.m"
  }
#line 178 "prog_foreign.m"
}

#line 173 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__sym_name_mangle_1_f_0(
#line 173 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 173 "prog_foreign.m"
{
#line 371 "prog_foreign.m"
  {
#line 371 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 371 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 371 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 373 "prog_foreign.m"
      {
#line 373 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 373 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__PlainName_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 373 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__MangledModuleName_7;
#line 373 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__MangledPlainName_8;
#line 373 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 373 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_13_13;
#line 373 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_15_15;

#line 374 "prog_foreign.m"
        {
#line 374 "prog_foreign.m"
          parse_tree__prog_foreign__MangledModuleName_7 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_4);
        }
#line 375 "prog_foreign.m"
        {
#line 375 "prog_foreign.m"
          parse_tree__prog_foreign__MangledPlainName_8 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__PlainName_5);
        }
#line 415 "prog_foreign.m"
        {
#line 415 "prog_foreign.m"
          parse_tree__prog_foreign__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_15_15, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledPlainName_8));
#line 415 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "prog_foreign.m"
        }
#line 415 "prog_foreign.m"
        {
#line 415 "prog_foreign.m"
          parse_tree__prog_foreign__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_13_13, 0) = ((MR_Box) ((MR_String) "__"));
#line 415 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_13_13, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 415 "prog_foreign.m"
        }
#line 415 "prog_foreign.m"
        {
#line 415 "prog_foreign.m"
          parse_tree__prog_foreign__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_12_12, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledModuleName_7));
#line 415 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_12_12, 1) = ((MR_Box) (parse_tree__prog_foreign__V_13_13));
#line 415 "prog_foreign.m"
        }
#line 415 "prog_foreign.m"
        {
#line 415 "prog_foreign.m"
          mercury__string__append_list_2_p_0(parse_tree__prog_foreign__V_12_12, &parse_tree__prog_foreign__HeadVar__2_2);
        }
#line 373 "prog_foreign.m"
      }
#line 371 "prog_foreign.m"
    else
#line 371 "prog_foreign.m"
      {
#line 371 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));

#line 371 "prog_foreign.m"
        {
#line 371 "prog_foreign.m"
          return parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__Name_3);
        }
#line 371 "prog_foreign.m"
      }
#line 371 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 371 "prog_foreign.m"
  }
#line 173 "prog_foreign.m"
}

#line 168 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__make_init_name_1_f_0(
#line 168 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_3)
#line 168 "prog_foreign.m"
{
#line 367 "prog_foreign.m"
  {
#line 367 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 367 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__InitName_4;
#line 367 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__MangledModuleName_5;
#line 367 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_7_7;

#line 368 "prog_foreign.m"
    {
#line 368 "prog_foreign.m"
      parse_tree__prog_foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_3);
    }
#line 369 "prog_foreign.m"
    {
#line 369 "prog_foreign.m"
      parse_tree__prog_foreign__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__MangledModuleName_5, (MR_String) "__");
    }
#line 369 "prog_foreign.m"
    {
#line 369 "prog_foreign.m"
      return parse_tree__prog_foreign__InitName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", parse_tree__prog_foreign__V_7_7);
    }
#line 367 "prog_foreign.m"
    return parse_tree__prog_foreign__InitName_4;
#line 367 "prog_foreign.m"
  }
#line 168 "prog_foreign.m"
}

#line 159 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_type_language_1_f_0(
#line 159 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 159 "prog_foreign.m"
{
#line 359 "prog_foreign.m"
  {
#line 359 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 359 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__HeadVar__2_2;

#line 359 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 360 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 0;
#line 359 "prog_foreign.m"
    else
#line 359 "prog_foreign.m"
      if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 359 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 3;
#line 359 "prog_foreign.m"
      else
#line 359 "prog_foreign.m"
        if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 361 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 2;
#line 359 "prog_foreign.m"
        else
#line 359 "prog_foreign.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 362 "prog_foreign.m"
            parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 1;
#line 359 "prog_foreign.m"
          else
#line 363 "prog_foreign.m"
            parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 4;
#line 359 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 359 "prog_foreign.m"
  }
#line 159 "prog_foreign.m"
}

#line 344 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
#line 344 "prog_foreign.m"
  void * parse_tree__prog_foreign__env_ptr_arg)
#line 344 "prog_foreign.m"
{
#line 344 "prog_foreign.m"
  {
#line 344 "prog_foreign.m"
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s * parse_tree__prog_foreign__env_ptr = (struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s *) parse_tree__prog_foreign__env_ptr_arg;

#line 344 "prog_foreign.m"
    *((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1));
#line 344 "prog_foreign.m"
    {
#line 344 "prog_foreign.m"
      ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont)((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr);
#line 344 "prog_foreign.m"
      return;
    }
#line 344 "prog_foreign.m"
  }
#line 344 "prog_foreign.m"
}

#line 344 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
#line 344 "prog_foreign.m"
  MR_Box parse_tree__prog_foreign__closure_arg,
#line 344 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 344 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 344 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr)
#line 344 "prog_foreign.m"
{
#line 344 "prog_foreign.m"
  {
#line 344 "prog_foreign.m"
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s parse_tree__prog_foreign__env;

#line 344 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1 = parse_tree__prog_foreign__wrapper_arg_1;
#line 344 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont = parse_tree__prog_foreign__cont;
#line 344 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr = parse_tree__prog_foreign__cont_env_ptr;
#line 344 "prog_foreign.m"
    {
#line 344 "prog_foreign.m"
      MR_Box parse_tree__prog_foreign__closure = parse_tree__prog_foreign__closure_arg;

#line 344 "prog_foreign.m"
      {
#line 344 "prog_foreign.m"
        parse_tree__prog_foreign__valid_foreign_language_1_p_1(&(parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1, parse_tree__prog_foreign__all_foreign_languages_0_f_0_1, &parse_tree__prog_foreign__env);
      }
#line 344 "prog_foreign.m"
    }
#line 344 "prog_foreign.m"
  }
#line 344 "prog_foreign.m"
}

#line 157 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0(void)
#line 157 "prog_foreign.m"
{
#line 343 "prog_foreign.m"
  {
#line 343 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 343 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Langs_2;

#line 345 "prog_foreign.m"
    {
#line 345 "prog_foreign.m"
      mercury__solutions__solutions_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &parse_tree__prog_foreign_scalar_common_4[0], &parse_tree__prog_foreign__Langs_2);
    }
#line 343 "prog_foreign.m"
    return parse_tree__prog_foreign__Langs_2;
#line 343 "prog_foreign.m"
  }
#line 157 "prog_foreign.m"
}

#line 152 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__prefer_foreign_language_4_f_0(
#line 152 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign___Globals_1,
#line 152 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 152 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3,
#line 152 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__4_4)
#line 152 "prog_foreign.m"
{
#line 295 "prog_foreign.m"
  {
#line 295 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 295 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__HeadVar__5_5;

#line 295 "prog_foreign.m"
    {
#line 295 "prog_foreign.m"
      return parse_tree__prog_foreign__HeadVar__5_5 = parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(parse_tree__prog_foreign__HeadVar__2_2, parse_tree__prog_foreign__HeadVar__3_3, parse_tree__prog_foreign__HeadVar__4_4);
    }
#line 295 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__5_5;
#line 295 "prog_foreign.m"
  }
#line 152 "prog_foreign.m"
}

#line 141 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_1(
#line 141 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 141 "prog_foreign.m"
{
#line 283 "prog_foreign.m"
  {
#line 283 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 283 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 283 "prog_foreign.m"
    if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 0))
#line 283 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
#line 283 "prog_foreign.m"
    else
#line 284 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
#line 283 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 283 "prog_foreign.m"
  }
#line 141 "prog_foreign.m"
}

#line 140 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(
#line 140 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 140 "prog_foreign.m"
  MR_String * parse_tree__prog_foreign__HeadVar__2_2)
#line 140 "prog_foreign.m"
{
#line 283 "prog_foreign.m"
  {
#line 283 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 283 "prog_foreign.m"
    if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 0))
#line 283 "prog_foreign.m"
      {
#line 283 "prog_foreign.m"
        *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
#line 283 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 283 "prog_foreign.m"
      }
#line 283 "prog_foreign.m"
    else
#line 283 "prog_foreign.m"
      if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 1))
#line 284 "prog_foreign.m"
        {
#line 284 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
#line 284 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 284 "prog_foreign.m"
        }
#line 283 "prog_foreign.m"
      else
#line 283 "prog_foreign.m"
        if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 2))
#line 285 "prog_foreign.m"
          {
#line 285 "prog_foreign.m"
            *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".java";
#line 285 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 285 "prog_foreign.m"
          }
#line 283 "prog_foreign.m"
        else
#line 283 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 283 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 283 "prog_foreign.m"
  }
#line 140 "prog_foreign.m"
}

#line 133 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_1(
#line 133 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_4,
#line 133 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_5)
#line 133 "prog_foreign.m"
{
#line 268 "prog_foreign.m"
  {
#line 268 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 268 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__FullyQualifiedModuleName_6;
#line 268 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Ending_8;
#line 268 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_12_12;
#line 268 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_13_13;

#line 272 "prog_foreign.m"
    {
#line 272 "prog_foreign.m"
      parse_tree__prog_foreign__V_13_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
    }
#line 272 "prog_foreign.m"
    {
#line 272 "prog_foreign.m"
      parse_tree__prog_foreign__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_13_13, (MR_String) "_code");
    }
#line 272 "prog_foreign.m"
    {
#line 272 "prog_foreign.m"
      parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_foreign__V_12_12);
    }
#line 276 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 277 "prog_foreign.m"
      {
#line 277 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 277 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_15_15;
#line 277 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

#line 278 "prog_foreign.m"
        {
#line 278 "prog_foreign.m"
          parse_tree__prog_foreign__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
        }
#line 278 "prog_foreign.m"
        {
#line 278 "prog_foreign.m"
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
#line 278 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 278 "prog_foreign.m"
        }
#line 277 "prog_foreign.m"
      }
#line 276 "prog_foreign.m"
    else
#line 274 "prog_foreign.m"
      {
#line 274 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 274 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_16_16;

#line 275 "prog_foreign.m"
        {
#line 275 "prog_foreign.m"
          parse_tree__prog_foreign__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
        }
#line 275 "prog_foreign.m"
        {
#line 275 "prog_foreign.m"
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 275 "prog_foreign.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__V_16_16));
#line 275 "prog_foreign.m"
        }
#line 274 "prog_foreign.m"
      }
#line 268 "prog_foreign.m"
    return parse_tree__prog_foreign__FullyQualifiedModuleName_6;
#line 268 "prog_foreign.m"
  }
#line 133 "prog_foreign.m"
}

#line 132 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_0(
#line 132 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_4,
#line 132 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_5,
#line 132 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__FullyQualifiedModuleName_6)
#line 132 "prog_foreign.m"
{
#line 268 "prog_foreign.m"
  {
#line 268 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 268 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Ending_8;
#line 268 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_11_11;
#line 268 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_12_12;
#line 268 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_13_13;
#line 268 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_14_14;

#line 283 "prog_foreign.m"
    if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 0))
#line 283 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 283 "prog_foreign.m"
    else
#line 283 "prog_foreign.m"
      if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 1))
#line 284 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 283 "prog_foreign.m"
      else
#line 283 "prog_foreign.m"
        if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 2))
#line 285 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 283 "prog_foreign.m"
        else
#line 283 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 268 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 268 "prog_foreign.m"
      {
#line 272 "prog_foreign.m"
        parse_tree__prog_foreign__V_11_11 = (MR_String) "__";
#line 272 "prog_foreign.m"
        {
#line 272 "prog_foreign.m"
          parse_tree__prog_foreign__V_13_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
        }
#line 272 "prog_foreign.m"
        parse_tree__prog_foreign__V_14_14 = (MR_String) "_code";
#line 272 "prog_foreign.m"
        {
#line 272 "prog_foreign.m"
          parse_tree__prog_foreign__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_14_14);
        }
#line 272 "prog_foreign.m"
        {
#line 272 "prog_foreign.m"
          parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_12_12);
        }
#line 276 "prog_foreign.m"
        if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 277 "prog_foreign.m"
          {
#line 277 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 277 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__V_15_15;
#line 277 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

#line 278 "prog_foreign.m"
            {
#line 278 "prog_foreign.m"
              parse_tree__prog_foreign__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
            }
#line 278 "prog_foreign.m"
            {
#line 278 "prog_foreign.m"
              MR_Word base;
#line 278 "prog_foreign.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "prog_foreign.m"
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
#line 278 "prog_foreign.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
#line 278 "prog_foreign.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 278 "prog_foreign.m"
            }
#line 277 "prog_foreign.m"
          }
#line 276 "prog_foreign.m"
        else
#line 274 "prog_foreign.m"
          {
#line 274 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 274 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__V_16_16;

#line 275 "prog_foreign.m"
            {
#line 275 "prog_foreign.m"
              parse_tree__prog_foreign__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
            }
#line 275 "prog_foreign.m"
            {
#line 275 "prog_foreign.m"
              MR_Word base;
#line 275 "prog_foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 275 "prog_foreign.m"
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
#line 275 "prog_foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_foreign__V_16_16));
#line 275 "prog_foreign.m"
            }
#line 274 "prog_foreign.m"
          }
#line 276 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 268 "prog_foreign.m"
      }
#line 268 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 268 "prog_foreign.m"
  }
#line 132 "prog_foreign.m"
}

#line 116 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(
#line 116 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleForeignImported_4,
#line 116 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__CurrentModule_5)
#line 116 "prog_foreign.m"
{
#line 225 "prog_foreign.m"
  {
#line 225 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 225 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
#line 225 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 0)));
#line 225 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ForeignImportModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 1)));
#line 226 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 2)));

#line 4093 "parse_tree.prog_foreign.c"
    if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 0))
#line 231 "prog_foreign.m"
      parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 4097 "parse_tree.prog_foreign.c"
    else
#line 4099 "parse_tree.prog_foreign.c"
      if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 1))
#line 4101 "parse_tree.prog_foreign.c"
        {
#line 4103 "parse_tree.prog_foreign.c"
          MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32;

#line 221 "prog_foreign.m"
          {
#line 221 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_14, parse_tree__prog_foreign__Lang_13);
          }
#line 258 "prog_foreign.m"
          {
#line 258 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32);
          }
#line 258 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 258 "prog_foreign.m"
            {
#line 259 "prog_foreign.m"
              {
#line 259 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
#line 259 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 258 "prog_foreign.m"
            }
#line 262 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 261 "prog_foreign.m"
            {
#line 261 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 261 "prog_foreign.m"
            }
#line 262 "prog_foreign.m"
          else
#line 263 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32;
#line 4141 "parse_tree.prog_foreign.c"
        }
#line 4143 "parse_tree.prog_foreign.c"
      else
#line 4145 "parse_tree.prog_foreign.c"
        if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 4))
#line 262 "prog_foreign.m"
          {
#line 258 "prog_foreign.m"
            {
#line 258 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_14);
            }
#line 258 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 258 "prog_foreign.m"
              {
#line 259 "prog_foreign.m"
                {
#line 259 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
                }
#line 259 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 258 "prog_foreign.m"
              }
#line 262 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 261 "prog_foreign.m"
              {
#line 261 "prog_foreign.m"
                parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 261 "prog_foreign.m"
              }
#line 262 "prog_foreign.m"
            else
#line 263 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 262 "prog_foreign.m"
          }
#line 4181 "parse_tree.prog_foreign.c"
        else
#line 4183 "parse_tree.prog_foreign.c"
          if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 3))
#line 262 "prog_foreign.m"
            {
#line 258 "prog_foreign.m"
              {
#line 258 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_14);
              }
#line 258 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 258 "prog_foreign.m"
                {
#line 259 "prog_foreign.m"
                  {
#line 259 "prog_foreign.m"
                    parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
                  }
#line 259 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 258 "prog_foreign.m"
                }
#line 262 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 261 "prog_foreign.m"
                {
#line 261 "prog_foreign.m"
                  parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 261 "prog_foreign.m"
                }
#line 262 "prog_foreign.m"
              else
#line 263 "prog_foreign.m"
                parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 262 "prog_foreign.m"
            }
#line 4219 "parse_tree.prog_foreign.c"
          else
#line 262 "prog_foreign.m"
            {
#line 258 "prog_foreign.m"
              {
#line 258 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_14);
              }
#line 258 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 258 "prog_foreign.m"
                {
#line 259 "prog_foreign.m"
                  {
#line 259 "prog_foreign.m"
                    parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
                  }
#line 259 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 258 "prog_foreign.m"
                }
#line 262 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 261 "prog_foreign.m"
                {
#line 261 "prog_foreign.m"
                  parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 261 "prog_foreign.m"
                }
#line 262 "prog_foreign.m"
              else
#line 263 "prog_foreign.m"
                parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 262 "prog_foreign.m"
            }
#line 225 "prog_foreign.m"
    return parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
#line 225 "prog_foreign.m"
  }
#line 116 "prog_foreign.m"
}

#line 109 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_1_f_0(
#line 109 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ImportModule_3)
#line 109 "prog_foreign.m"
{
#line 205 "prog_foreign.m"
  {
#line 205 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 205 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ModuleName_4;
#line 205 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Lang_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 0)));
#line 205 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ForeignImportModule_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 1)));
#line 206 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 2)));

#line 210 "prog_foreign.m"
    if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 0))
#line 209 "prog_foreign.m"
      parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 210 "prog_foreign.m"
    else
#line 210 "prog_foreign.m"
      if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 1))
#line 221 "prog_foreign.m"
        {
#line 221 "prog_foreign.m"
          return parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_6, parse_tree__prog_foreign__Lang_5);
        }
#line 210 "prog_foreign.m"
      else
#line 210 "prog_foreign.m"
        if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 4))
#line 218 "prog_foreign.m"
          parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 210 "prog_foreign.m"
        else
#line 210 "prog_foreign.m"
          if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 3))
#line 212 "prog_foreign.m"
            parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 210 "prog_foreign.m"
          else
#line 215 "prog_foreign.m"
            parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 205 "prog_foreign.m"
    return parse_tree__prog_foreign__ModuleName_4;
#line 205 "prog_foreign.m"
  }
#line 109 "prog_foreign.m"
}

void mercury__parse_tree__prog_foreign__init(void)
{
}

void mercury__parse_tree__prog_foreign__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_info_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_info_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defns_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0);
}

void mercury__parse_tree__prog_foreign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_foreign. */
