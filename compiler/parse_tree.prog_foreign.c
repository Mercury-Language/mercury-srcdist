/*
** Automatically generated from `prog_foreign.m'
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



#line 336 "prog_foreign.m"
struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s {
#line 336 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1;
#line 336 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont;
#line 336 "prog_foreign.m"
  void * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr;
#line 336 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1;
#line 336 "prog_foreign.m"
};


#line 145 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3];

#line 148 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3];

#line 151 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0;

#line 154 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1];

#line 157 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1];

#line 160 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1];

#line 163 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1];

#line 166 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 169 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4];

#line 172 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4];

#line 175 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0;

#line 178 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1];

#line 181 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1];

#line 184 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1];

#line 187 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1];

#line 190 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 193 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4];

#line 196 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4];

#line 199 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0;

#line 202 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1];

#line 205 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1];

#line 208 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1];

#line 211 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1];

#line 214 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0;

#line 217 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2];

#line 220 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2];

#line 223 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0;

#line 226 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1];

#line 229 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1];

#line 232 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1];

#line 235 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1];

#line 238 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1builtin__type_ctor_info_string_0;

#line 241 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_user_foreign_code_0_0[3];

#line 244 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_user_foreign_code_0_0;

#line 247 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_user_foreign_code_0_0[1];

#line 250 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_user_foreign_code_0[1];

#line 253 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_user_foreign_code_0[1];

#line 256 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_user_foreign_code_0[1];

#line 259 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
#line 262 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 264 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 267 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
#line 270 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 272 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 274 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 277 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_info_0_0_10001(
#line 280 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 282 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 285 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_info_0_0_10001(
#line 288 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 290 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 292 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 295 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
#line 298 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 300 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 303 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
#line 306 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 308 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 310 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 313 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_info_0_0_10001(
#line 316 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 318 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 321 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_info_0_0_10001(
#line 324 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 326 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 328 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 331 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_0_0_10001(
#line 334 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 336 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 339 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_0_0_10001(
#line 342 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 344 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 346 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 349 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
#line 352 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 354 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 357 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
#line 360 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 362 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 364 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 367 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
#line 370 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 372 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 375 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
#line 378 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 380 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 382 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 385 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
#line 388 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 390 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 393 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
#line 396 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 398 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 400 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 403 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____user_foreign_code_0_0_10001(
#line 406 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 408 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 411 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____user_foreign_code_0_0_10001(
#line 414 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 416 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 418 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 312 "prog_foreign.m"
static MR_Integer MR_CALL 
parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__312__1_2_f_0(
#line 312 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__PreferredList_13,
#line 312 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_24);

#line 452 "prog_foreign.m"
static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
#line 452 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3);

#line 341 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
#line 341 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 341 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 341 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr);

#line 336 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
#line 336 "prog_foreign.m"
  void * parse_tree__prog_foreign__env_ptr_arg);

#line 336 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
#line 336 "prog_foreign.m"
  MR_Box parse_tree__prog_foreign__closure_arg,
#line 336 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 336 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 336 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr);


static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_1[6][2];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_4[1][3];


#line 343 "prog_foreign.m"
/* sealed */ struct parse_tree__prog_foreign__vector_common_type_5_0_s {
#line 343 "prog_foreign.m"
  const MR_Word parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
#line 343 "prog_foreign.m"
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



#line 583 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 590 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3] = {
  (MR_String) "fbody_lang",
  (MR_String) "fbody_code",
  (MR_String) "fbody_context"
};

#line 597 "parse_tree.prog_foreign.c"
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

#line 612 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

#line 617 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0
  }
};

#line 626 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

#line 631 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1] = {
  (MR_Integer) 0
};

#line 636 "parse_tree.prog_foreign.c"
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

#line 657 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 665 "parse_tree.prog_foreign.c"
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

#line 686 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 694 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4] = {
  (MR_String) "fdecl_lang",
  (MR_String) "fdecl_is_local",
  (MR_String) "fdecl_code",
  (MR_String) "fdecl_context"
};

#line 702 "parse_tree.prog_foreign.c"
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

#line 717 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

#line 722 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0
  }
};

#line 731 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

#line 736 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1] = {
  (MR_Integer) 0
};

#line 741 "parse_tree.prog_foreign.c"
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

#line 762 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 770 "parse_tree.prog_foreign.c"
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

#line 791 "parse_tree.prog_foreign.c"
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

#line 812 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 820 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4] = {
  (MR_String) "fexp_decl_lang",
  (MR_String) "fexp_decl_ret_type",
  (MR_String) "fexp_decl_func_name",
  (MR_String) "fexp_decl_arg_decls"
};

#line 828 "parse_tree.prog_foreign.c"
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

#line 843 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

#line 848 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0
  }
};

#line 857 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

#line 862 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1] = {
  (MR_Integer) 0
};

#line 867 "parse_tree.prog_foreign.c"
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

#line 888 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
  }
};

#line 896 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
};

#line 902 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2] = {
  (MR_String) "fexp_decls_info",
  (MR_String) "fexp_decls_list"
};

#line 908 "parse_tree.prog_foreign.c"
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

#line 923 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

#line 928 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0
  }
};

#line 937 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

#line 942 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1] = {
  (MR_Integer) 0
};

#line 947 "parse_tree.prog_foreign.c"
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

#line 968 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 976 "parse_tree.prog_foreign.c"
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

#line 997 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_user_foreign_code_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1004 "parse_tree.prog_foreign.c"
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

#line 1019 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_user_foreign_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_user_foreign_code_0_0
};

#line 1024 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_user_foreign_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_user_foreign_code_0_0
  }
};

#line 1033 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_user_foreign_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_user_foreign_code_0_0
};

#line 1038 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_user_foreign_code_0[1] = {
  (MR_Integer) 0
};

#line 1043 "parse_tree.prog_foreign.c"
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

#line 1064 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
#line 1067 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1069 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1071 "parse_tree.prog_foreign.c"
{
#line 1073 "parse_tree.prog_foreign.c"
  {
#line 1075 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1078 "parse_tree.prog_foreign.c"
    {
#line 1080 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1083 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1085 "parse_tree.prog_foreign.c"
  }
#line 1087 "parse_tree.prog_foreign.c"
}

#line 1090 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
#line 1093 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1095 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1097 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1099 "parse_tree.prog_foreign.c"
{
#line 1101 "parse_tree.prog_foreign.c"
  {
#line 1103 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1106 "parse_tree.prog_foreign.c"
    {
#line 1108 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_body_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1111 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1113 "parse_tree.prog_foreign.c"
  }
#line 1115 "parse_tree.prog_foreign.c"
}

#line 1118 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_info_0_0_10001(
#line 1121 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1123 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1125 "parse_tree.prog_foreign.c"
{
#line 1127 "parse_tree.prog_foreign.c"
  {
#line 1129 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1132 "parse_tree.prog_foreign.c"
    {
#line 1134 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_info_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1137 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1139 "parse_tree.prog_foreign.c"
  }
#line 1141 "parse_tree.prog_foreign.c"
}

#line 1144 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_info_0_0_10001(
#line 1147 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1149 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1151 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1153 "parse_tree.prog_foreign.c"
{
#line 1155 "parse_tree.prog_foreign.c"
  {
#line 1157 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1160 "parse_tree.prog_foreign.c"
    {
#line 1162 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_body_info_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1165 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1167 "parse_tree.prog_foreign.c"
  }
#line 1169 "parse_tree.prog_foreign.c"
}

#line 1172 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
#line 1175 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1177 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1179 "parse_tree.prog_foreign.c"
{
#line 1181 "parse_tree.prog_foreign.c"
  {
#line 1183 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1186 "parse_tree.prog_foreign.c"
    {
#line 1188 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1191 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1193 "parse_tree.prog_foreign.c"
  }
#line 1195 "parse_tree.prog_foreign.c"
}

#line 1198 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
#line 1201 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1203 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1205 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1207 "parse_tree.prog_foreign.c"
{
#line 1209 "parse_tree.prog_foreign.c"
  {
#line 1211 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1214 "parse_tree.prog_foreign.c"
    {
#line 1216 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1219 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1221 "parse_tree.prog_foreign.c"
  }
#line 1223 "parse_tree.prog_foreign.c"
}

#line 1226 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_info_0_0_10001(
#line 1229 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1231 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1233 "parse_tree.prog_foreign.c"
{
#line 1235 "parse_tree.prog_foreign.c"
  {
#line 1237 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1240 "parse_tree.prog_foreign.c"
    {
#line 1242 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_info_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1245 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1247 "parse_tree.prog_foreign.c"
  }
#line 1249 "parse_tree.prog_foreign.c"
}

#line 1252 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_info_0_0_10001(
#line 1255 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1257 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1259 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1261 "parse_tree.prog_foreign.c"
{
#line 1263 "parse_tree.prog_foreign.c"
  {
#line 1265 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1268 "parse_tree.prog_foreign.c"
    {
#line 1270 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_decl_info_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1273 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1275 "parse_tree.prog_foreign.c"
  }
#line 1277 "parse_tree.prog_foreign.c"
}

#line 1280 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_0_0_10001(
#line 1283 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1285 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1287 "parse_tree.prog_foreign.c"
{
#line 1289 "parse_tree.prog_foreign.c"
  {
#line 1291 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1294 "parse_tree.prog_foreign.c"
    {
#line 1296 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_0_0(((MR_String) parse_tree__prog_foreign__wrapper_arg_1), ((MR_String) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1299 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1301 "parse_tree.prog_foreign.c"
  }
#line 1303 "parse_tree.prog_foreign.c"
}

#line 1306 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_0_0_10001(
#line 1309 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1311 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1313 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1315 "parse_tree.prog_foreign.c"
{
#line 1317 "parse_tree.prog_foreign.c"
  {
#line 1319 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1322 "parse_tree.prog_foreign.c"
    {
#line 1324 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_String) parse_tree__prog_foreign__wrapper_arg_2), ((MR_String) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1327 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1329 "parse_tree.prog_foreign.c"
  }
#line 1331 "parse_tree.prog_foreign.c"
}

#line 1334 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
#line 1337 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1339 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1341 "parse_tree.prog_foreign.c"
{
#line 1343 "parse_tree.prog_foreign.c"
  {
#line 1345 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1348 "parse_tree.prog_foreign.c"
    {
#line 1350 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1353 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1355 "parse_tree.prog_foreign.c"
  }
#line 1357 "parse_tree.prog_foreign.c"
}

#line 1360 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
#line 1363 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1365 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1367 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1369 "parse_tree.prog_foreign.c"
{
#line 1371 "parse_tree.prog_foreign.c"
  {
#line 1373 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1376 "parse_tree.prog_foreign.c"
    {
#line 1378 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1381 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1383 "parse_tree.prog_foreign.c"
  }
#line 1385 "parse_tree.prog_foreign.c"
}

#line 1388 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
#line 1391 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1393 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1395 "parse_tree.prog_foreign.c"
{
#line 1397 "parse_tree.prog_foreign.c"
  {
#line 1399 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1402 "parse_tree.prog_foreign.c"
    {
#line 1404 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1407 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1409 "parse_tree.prog_foreign.c"
  }
#line 1411 "parse_tree.prog_foreign.c"
}

#line 1414 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
#line 1417 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1419 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1421 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1423 "parse_tree.prog_foreign.c"
{
#line 1425 "parse_tree.prog_foreign.c"
  {
#line 1427 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1430 "parse_tree.prog_foreign.c"
    {
#line 1432 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1435 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1437 "parse_tree.prog_foreign.c"
  }
#line 1439 "parse_tree.prog_foreign.c"
}

#line 1442 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
#line 1445 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1447 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1449 "parse_tree.prog_foreign.c"
{
#line 1451 "parse_tree.prog_foreign.c"
  {
#line 1453 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1456 "parse_tree.prog_foreign.c"
    {
#line 1458 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_defns_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1461 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1463 "parse_tree.prog_foreign.c"
  }
#line 1465 "parse_tree.prog_foreign.c"
}

#line 1468 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
#line 1471 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1473 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1475 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1477 "parse_tree.prog_foreign.c"
{
#line 1479 "parse_tree.prog_foreign.c"
  {
#line 1481 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1484 "parse_tree.prog_foreign.c"
    {
#line 1486 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_defns_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1489 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1491 "parse_tree.prog_foreign.c"
  }
#line 1493 "parse_tree.prog_foreign.c"
}

#line 1496 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____user_foreign_code_0_0_10001(
#line 1499 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1501 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1503 "parse_tree.prog_foreign.c"
{
#line 1505 "parse_tree.prog_foreign.c"
  {
#line 1507 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1510 "parse_tree.prog_foreign.c"
    {
#line 1512 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____user_foreign_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1515 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1517 "parse_tree.prog_foreign.c"
  }
#line 1519 "parse_tree.prog_foreign.c"
}

#line 1522 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____user_foreign_code_0_0_10001(
#line 1525 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1527 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1529 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1531 "parse_tree.prog_foreign.c"
{
#line 1533 "parse_tree.prog_foreign.c"
  {
#line 1535 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1538 "parse_tree.prog_foreign.c"
    {
#line 1540 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____user_foreign_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1543 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1545 "parse_tree.prog_foreign.c"
  }
#line 1547 "parse_tree.prog_foreign.c"
}

#line 153 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(
#line 153 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 153 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3,
#line 153 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__4_4)
#line 153 "prog_foreign.m"
{
#line 296 "prog_foreign.m"
  {
#line 296 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 296 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__HeadVar__5_5;

#line 296 "prog_foreign.m"
    if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 0))
#line 296 "prog_foreign.m"
      {
#line 298 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__HeadVar__4_4 == (MR_Integer) 0);
#line 298 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 298 "prog_foreign.m"
          {
#line 298 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__HeadVar__3_3 == (MR_Integer) 0);
#line 298 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 298 "prog_foreign.m"
          }
#line 296 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 299 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 1;
#line 296 "prog_foreign.m"
        else
#line 301 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 296 "prog_foreign.m"
      }
#line 296 "prog_foreign.m"
    else
#line 296 "prog_foreign.m"
      if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 2))
#line 323 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 296 "prog_foreign.m"
      else
#line 296 "prog_foreign.m"
        if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 4))
#line 329 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 296 "prog_foreign.m"
        else
#line 296 "prog_foreign.m"
          if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 1))
#line 304 "prog_foreign.m"
            {
#line 304 "prog_foreign.m"
              MR_Word parse_tree__prog_foreign__PreferredList_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_foreign_scalar_common_1[5]);
#line 304 "prog_foreign.m"
              MR_Integer parse_tree__prog_foreign__N1_18;
#line 304 "prog_foreign.m"
              MR_Integer parse_tree__prog_foreign__N2_19;

#line 315 "prog_foreign.m"
              {
#line 315 "prog_foreign.m"
                parse_tree__prog_foreign__N1_18 = parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__312__1_2_f_0(parse_tree__prog_foreign__PreferredList_13, parse_tree__prog_foreign__HeadVar__3_3);
              }
#line 316 "prog_foreign.m"
              {
#line 316 "prog_foreign.m"
                parse_tree__prog_foreign__N2_19 = parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__312__1_2_f_0(parse_tree__prog_foreign__PreferredList_13, parse_tree__prog_foreign__HeadVar__4_4);
              }
#line 317 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__N2_19 < parse_tree__prog_foreign__N1_18);
#line 319 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 318 "prog_foreign.m"
                parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 1;
#line 319 "prog_foreign.m"
              else
#line 320 "prog_foreign.m"
                parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 304 "prog_foreign.m"
            }
#line 296 "prog_foreign.m"
          else
#line 325 "prog_foreign.m"
            parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 296 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__5_5;
#line 296 "prog_foreign.m"
  }
#line 153 "prog_foreign.m"
}

#line 312 "prog_foreign.m"
static MR_Integer MR_CALL 
parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__312__1_2_f_0(
#line 312 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__PreferredList_13,
#line 312 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_24)
#line 312 "prog_foreign.m"
{
#line 312 "prog_foreign.m"
  {
#line 312 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 312 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__HeadVar__3_25;
#line 312 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__X0_17;

#line 310 "prog_foreign.m"
    {
#line 310 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__list__nth_member_search_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__prog_foreign__PreferredList_13, ((MR_Box) (parse_tree__prog_foreign__HeadVar__2_24)), &parse_tree__prog_foreign__X0_17);
    }
#line 312 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 311 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__3_25 = parse_tree__prog_foreign__X0_17;
#line 312 "prog_foreign.m"
    else
#line 313 "prog_foreign.m"
      {
#line 313 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_26_26;

#line 313 "prog_foreign.m"
        {
#line 313 "prog_foreign.m"
          parse_tree__prog_foreign__V_26_26 = mercury__list__length_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__prog_foreign__PreferredList_13);
        }
#line 313 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__3_25 = (parse_tree__prog_foreign__V_26_26 + (MR_Integer) 1);
#line 313 "prog_foreign.m"
      }
#line 312 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__3_25;
#line 312 "prog_foreign.m"
  }
#line 312 "prog_foreign.m"
}

#line 87 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____user_foreign_code_0_0(
#line 87 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 87 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 87 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 87 "prog_foreign.m"
{
#line 87 "prog_foreign.m"
  {
#line 87 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 87 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 87 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_13 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 87 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_12 == parse_tree__prog_foreign__CastY_13);
#line 87 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1726 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 87 "prog_foreign.m"
    else
#line 87 "prog_foreign.m"
      {
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10;
#line 87 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_17_17 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 87 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_18_18 = (MR_Integer) parse_tree__prog_foreign__V_7_7;

#line 87 "prog_foreign.m"
        {
#line 87 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_10_10, parse_tree__prog_foreign__V_17_17, parse_tree__prog_foreign__V_18_18);
        }
#line 1756 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_10_10 == (MR_Integer) 0);
#line 87 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 87 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 87 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_10_10;
#line 87 "prog_foreign.m"
        else
#line 87 "prog_foreign.m"
          {
#line 87 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_11_11;

#line 87 "prog_foreign.m"
            {
#line 87 "prog_foreign.m"
              parse_tree__prog_data____Compare____foreign_literal_or_include_0_0(&parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
            }
#line 1776 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_11_11 == (MR_Integer) 0);
#line 87 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 87 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 87 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_11_11;
#line 87 "prog_foreign.m"
            else
#line 87 "prog_foreign.m"
              {
#line 87 "prog_foreign.m"
                mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_9_9);
#line 87 "prog_foreign.m"
                return;
              }
#line 87 "prog_foreign.m"
          }
#line 87 "prog_foreign.m"
      }
#line 87 "prog_foreign.m"
  }
#line 87 "prog_foreign.m"
}

#line 87 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____user_foreign_code_0_0(
#line 87 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 87 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 87 "prog_foreign.m"
{
#line 87 "prog_foreign.m"
  {
#line 87 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 87 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 87 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 87 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
#line 87 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 87 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 87 "prog_foreign.m"
    else
#line 87 "prog_foreign.m"
      {
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 87 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));

#line 1843 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_6_6);
#line 87 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 87 "prog_foreign.m"
          {
#line 1849 "parse_tree.prog_foreign.c"
            {
#line 1851 "parse_tree.prog_foreign.c"
              parse_tree__prog_foreign__succeeded = parse_tree__prog_data____Unify____foreign_literal_or_include_0_0(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_7_7);
            }
#line 87 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 1856 "parse_tree.prog_foreign.c"
              {
#line 1858 "parse_tree.prog_foreign.c"
                return parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
              }
#line 87 "prog_foreign.m"
          }
#line 87 "prog_foreign.m"
      }
#line 87 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 87 "prog_foreign.m"
  }
#line 87 "prog_foreign.m"
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
#line 1958 "parse_tree.prog_foreign.c"
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
#line 1980 "parse_tree.prog_foreign.c"
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

#line 2047 "parse_tree.prog_foreign.c"
        {
#line 2049 "parse_tree.prog_foreign.c"
          parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[1], ((MR_Box) (parse_tree__prog_foreign__V_3_3)), ((MR_Box) (parse_tree__prog_foreign__V_5_5)));
        }
#line 62 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 62 "prog_foreign.m"
          {
#line 2056 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_foreign_scalar_common_1[2];
#line 2058 "parse_tree.prog_foreign.c"
            {
#line 2060 "parse_tree.prog_foreign.c"
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
#line 2098 "parse_tree.prog_foreign.c"
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
#line 2132 "parse_tree.prog_foreign.c"
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
#line 2152 "parse_tree.prog_foreign.c"
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
#line 2172 "parse_tree.prog_foreign.c"
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

#line 2245 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_7_7);
#line 68 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
          {
#line 2251 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_8_8) == 0);
#line 68 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
              {
#line 2257 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9) == 0);
#line 68 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 2261 "parse_tree.prog_foreign.c"
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

#line 97 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_0_0(
#line 97 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 97 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__HeadVar__2_2,
#line 97 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__HeadVar__3_3)
#line 97 "prog_foreign.m"
{
#line 97 "prog_foreign.m"
  {
#line 97 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 97 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 97 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 97 "prog_foreign.m"
    {
#line 97 "prog_foreign.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__Cast_HeadVar1_4, parse_tree__prog_foreign__Cast_HeadVar2_5);
#line 97 "prog_foreign.m"
      return;
    }
#line 97 "prog_foreign.m"
  }
#line 97 "prog_foreign.m"
}

#line 97 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_0_0(
#line 97 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__HeadVar__1_1,
#line 97 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__HeadVar__2_2)
#line 97 "prog_foreign.m"
{
#line 97 "prog_foreign.m"
  {
#line 97 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 97 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 97 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 97 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__Cast_HeadVar1_3, parse_tree__prog_foreign__Cast_HeadVar2_4) == 0);
#line 97 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 97 "prog_foreign.m"
  }
#line 97 "prog_foreign.m"
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
#line 2421 "parse_tree.prog_foreign.c"
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
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
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
#line 2455 "parse_tree.prog_foreign.c"
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
#line 2479 "parse_tree.prog_foreign.c"
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
                  parse_tree__prog_data____Compare____foreign_literal_or_include_0_0(&parse_tree__prog_foreign__V_14_14, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                }
#line 2499 "parse_tree.prog_foreign.c"
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
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 3)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 46 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));

#line 2572 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_7_7);
#line 46 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 46 "prog_foreign.m"
          {
#line 2578 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_4_4 == parse_tree__prog_foreign__V_8_8);
#line 46 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 46 "prog_foreign.m"
              {
#line 2584 "parse_tree.prog_foreign.c"
                {
#line 2586 "parse_tree.prog_foreign.c"
                  parse_tree__prog_foreign__succeeded = parse_tree__prog_data____Unify____foreign_literal_or_include_0_0(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9);
                }
#line 46 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 2591 "parse_tree.prog_foreign.c"
                  {
#line 2593 "parse_tree.prog_foreign.c"
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
#line 2695 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "prog_foreign.m"
    else
#line 54 "prog_foreign.m"
      {
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
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
#line 2725 "parse_tree.prog_foreign.c"
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
              parse_tree__prog_data____Compare____foreign_literal_or_include_0_0(&parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
            }
#line 2745 "parse_tree.prog_foreign.c"
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
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));

#line 2812 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_6_6);
#line 54 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 54 "prog_foreign.m"
          {
#line 2818 "parse_tree.prog_foreign.c"
            {
#line 2820 "parse_tree.prog_foreign.c"
              parse_tree__prog_foreign__succeeded = parse_tree__prog_data____Unify____foreign_literal_or_include_0_0(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_7_7);
            }
#line 54 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 2825 "parse_tree.prog_foreign.c"
              {
#line 2827 "parse_tree.prog_foreign.c"
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

#line 452 "prog_foreign.m"
static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
#line 452 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3)
#line 452 "prog_foreign.m"
{
#line 463 "prog_foreign.m"
  {
#line 463 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 463 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_4;
#line 463 "prog_foreign.m"
    MR_Char parse_tree__prog_foreign__Char_5;
#line 463 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Rest_6;

#line 455 "prog_foreign.m"
    {
#line 455 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__first_char_3_p_3(parse_tree__prog_foreign__String_3, &parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Rest_6);
    }
#line 463 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 458 "prog_foreign.m"
      {
#line 458 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__Code_7;
#line 458 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__CodeString_8;
#line 458 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__ThisCharString_9;
#line 458 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name0_10;

#line 458 "prog_foreign.m"
        {
#line 458 "prog_foreign.m"
          mercury__char__to_int_2_p_0(parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Code_7);
        }
#line 459 "prog_foreign.m"
        {
#line 459 "prog_foreign.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_foreign__Code_7, &parse_tree__prog_foreign__CodeString_8);
        }
#line 460 "prog_foreign.m"
        {
#line 460 "prog_foreign.m"
          mercury__string__append_3_p_2((MR_String) "_", parse_tree__prog_foreign__CodeString_8, &parse_tree__prog_foreign__ThisCharString_9);
        }
#line 461 "prog_foreign.m"
        {
#line 461 "prog_foreign.m"
          parse_tree__prog_foreign__Name0_10 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__Rest_6);
        }
#line 462 "prog_foreign.m"
        {
#line 462 "prog_foreign.m"
          mercury__string__append_3_p_2(parse_tree__prog_foreign__ThisCharString_9, parse_tree__prog_foreign__Name0_10, &parse_tree__prog_foreign__Name_4);
        }
#line 458 "prog_foreign.m"
      }
#line 463 "prog_foreign.m"
    else
#line 465 "prog_foreign.m"
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__String_3;
#line 463 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_4;
#line 463 "prog_foreign.m"
  }
#line 452 "prog_foreign.m"
}

#line 341 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
#line 341 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 341 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 341 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr)
#line 341 "prog_foreign.m"
{
#line 343 "prog_foreign.m"
  {
#line 343 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 343 "prog_foreign.m"
    {
#line 343 "prog_foreign.m"
      MR_Integer parse_tree__prog_foreign__slot_0 = (MR_Integer) 0;

#line 343 "prog_foreign.m"
      do
#line 343 "prog_foreign.m"
        {
#line 343 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = ((&parse_tree__prog_foreign_vector_common_5[0 + parse_tree__prog_foreign__slot_0]))->parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
#line 343 "prog_foreign.m"
          {
#line 343 "prog_foreign.m"
            parse_tree__prog_foreign__cont(parse_tree__prog_foreign__cont_env_ptr);
          }
#line 343 "prog_foreign.m"
          parse_tree__prog_foreign__slot_0 = (parse_tree__prog_foreign__slot_0 + (MR_Integer) 1);
#line 343 "prog_foreign.m"
        }
#line 343 "prog_foreign.m"
      while ((parse_tree__prog_foreign__slot_0 < (MR_Integer) 5));
#line 343 "prog_foreign.m"
    }
#line 343 "prog_foreign.m"
  }
#line 341 "prog_foreign.m"
}

#line 190 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(
#line 190 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3)
#line 190 "prog_foreign.m"
{
#line 412 "prog_foreign.m"
  {
#line 412 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 412 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_4;
#line 412 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name0_5;

#line 427 "prog_foreign.m"
    if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "!") == 0))
#line 439 "prog_foreign.m"
      {
#line 439 "prog_foreign.m"
        parse_tree__prog_foreign__Name0_5 = (MR_String) "f_cut";
#line 439 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 439 "prog_foreign.m"
      }
#line 427 "prog_foreign.m"
    else
#line 427 "prog_foreign.m"
      if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "*") == 0))
#line 435 "prog_foreign.m"
        {
#line 435 "prog_foreign.m"
          parse_tree__prog_foreign__Name0_5 = (MR_String) "f_times";
#line 435 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 435 "prog_foreign.m"
        }
#line 427 "prog_foreign.m"
      else
#line 427 "prog_foreign.m"
        if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "+") == 0))
#line 434 "prog_foreign.m"
          {
#line 434 "prog_foreign.m"
            parse_tree__prog_foreign__Name0_5 = (MR_String) "f_plus";
#line 434 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 434 "prog_foreign.m"
          }
#line 427 "prog_foreign.m"
        else
#line 427 "prog_foreign.m"
          if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ",") == 0))
#line 437 "prog_foreign.m"
            {
#line 437 "prog_foreign.m"
              parse_tree__prog_foreign__Name0_5 = (MR_String) "f_comma";
#line 437 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 437 "prog_foreign.m"
            }
#line 427 "prog_foreign.m"
          else
#line 427 "prog_foreign.m"
            if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "-") == 0))
#line 433 "prog_foreign.m"
              {
#line 433 "prog_foreign.m"
                parse_tree__prog_foreign__Name0_5 = (MR_String) "f_minus";
#line 433 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 433 "prog_foreign.m"
              }
#line 427 "prog_foreign.m"
            else
#line 427 "prog_foreign.m"
              if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "/") == 0))
#line 436 "prog_foreign.m"
                {
#line 436 "prog_foreign.m"
                  parse_tree__prog_foreign__Name0_5 = (MR_String) "f_slash";
#line 436 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 436 "prog_foreign.m"
                }
#line 427 "prog_foreign.m"
              else
#line 427 "prog_foreign.m"
                if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ";") == 0))
#line 438 "prog_foreign.m"
                  {
#line 438 "prog_foreign.m"
                    parse_tree__prog_foreign__Name0_5 = (MR_String) "f_semicolon";
#line 438 "prog_foreign.m"
                    parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 438 "prog_foreign.m"
                  }
#line 427 "prog_foreign.m"
                else
#line 427 "prog_foreign.m"
                  if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "<") == 0))
#line 431 "prog_foreign.m"
                    {
#line 431 "prog_foreign.m"
                      parse_tree__prog_foreign__Name0_5 = (MR_String) "f_less_than";
#line 431 "prog_foreign.m"
                      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 431 "prog_foreign.m"
                    }
#line 427 "prog_foreign.m"
                  else
#line 427 "prog_foreign.m"
                    if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "=") == 0))
#line 430 "prog_foreign.m"
                      {
#line 430 "prog_foreign.m"
                        parse_tree__prog_foreign__Name0_5 = (MR_String) "f_equal";
#line 430 "prog_foreign.m"
                        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 430 "prog_foreign.m"
                      }
#line 427 "prog_foreign.m"
                    else
#line 427 "prog_foreign.m"
                      if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ">") == 0))
#line 432 "prog_foreign.m"
                        {
#line 432 "prog_foreign.m"
                          parse_tree__prog_foreign__Name0_5 = (MR_String) "f_greater_than";
#line 432 "prog_foreign.m"
                          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 432 "prog_foreign.m"
                        }
#line 427 "prog_foreign.m"
                      else
#line 427 "prog_foreign.m"
                        if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "=<") == 0))
#line 429 "prog_foreign.m"
                          {
#line 429 "prog_foreign.m"
                            parse_tree__prog_foreign__Name0_5 = (MR_String) "f_less_or_equal";
#line 429 "prog_foreign.m"
                            parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 429 "prog_foreign.m"
                          }
#line 427 "prog_foreign.m"
                        else
#line 427 "prog_foreign.m"
                          if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ">=") == 0))
#line 428 "prog_foreign.m"
                            {
#line 428 "prog_foreign.m"
                              parse_tree__prog_foreign__Name0_5 = (MR_String) "f_greater_or_equal";
#line 428 "prog_foreign.m"
                              parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 428 "prog_foreign.m"
                            }
#line 427 "prog_foreign.m"
                          else
#line 427 "prog_foreign.m"
                            if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "[]") == 0))
#line 442 "prog_foreign.m"
                              {
#line 442 "prog_foreign.m"
                                parse_tree__prog_foreign__Name0_5 = (MR_String) "f_nil";
#line 442 "prog_foreign.m"
                                parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 442 "prog_foreign.m"
                              }
#line 427 "prog_foreign.m"
                            else
#line 427 "prog_foreign.m"
                              if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "\\=") == 0))
#line 427 "prog_foreign.m"
                                {
#line 427 "prog_foreign.m"
                                  parse_tree__prog_foreign__Name0_5 = (MR_String) "f_not_equal";
#line 427 "prog_foreign.m"
                                  parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 427 "prog_foreign.m"
                                }
#line 427 "prog_foreign.m"
                              else
#line 427 "prog_foreign.m"
                                if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "{}") == 0))
#line 440 "prog_foreign.m"
                                  {
#line 440 "prog_foreign.m"
                                    parse_tree__prog_foreign__Name0_5 = (MR_String) "f_tuple";
#line 440 "prog_foreign.m"
                                    parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 440 "prog_foreign.m"
                                  }
#line 427 "prog_foreign.m"
                                else
#line 427 "prog_foreign.m"
                                  if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "[|]") == 0))
#line 441 "prog_foreign.m"
                                    {
#line 441 "prog_foreign.m"
                                      parse_tree__prog_foreign__Name0_5 = (MR_String) "f_cons";
#line 441 "prog_foreign.m"
                                      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 441 "prog_foreign.m"
                                    }
#line 427 "prog_foreign.m"
                                  else
#line 427 "prog_foreign.m"
                                    parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 412 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 411 "prog_foreign.m"
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__Name0_5;
#line 412 "prog_foreign.m"
    else
#line 413 "prog_foreign.m"
      {
#line 413 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_7_7;

#line 413 "prog_foreign.m"
        {
#line 413 "prog_foreign.m"
          parse_tree__prog_foreign__V_7_7 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__String_3);
        }
#line 413 "prog_foreign.m"
        {
#line 413 "prog_foreign.m"
          return parse_tree__prog_foreign__Name_4 = mercury__string__f_43_43_2_f_0((MR_String) "f", parse_tree__prog_foreign__V_7_7);
        }
#line 413 "prog_foreign.m"
      }
#line 412 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_4;
#line 412 "prog_foreign.m"
  }
#line 190 "prog_foreign.m"
}

#line 188 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__qualify_name_2_f_0(
#line 188 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Module0_4,
#line 188 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name0_5)
#line 188 "prog_foreign.m"
{
#line 406 "prog_foreign.m"
  {
#line 406 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 406 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_6;
#line 406 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7;
#line 406 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_8_8;
#line 406 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_10_10;

#line 407 "prog_foreign.m"
    {
#line 407 "prog_foreign.m"
      parse_tree__prog_foreign__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_10_10, 0) = ((MR_Box) (parse_tree__prog_foreign__Name0_5));
#line 407 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "prog_foreign.m"
    }
#line 407 "prog_foreign.m"
    {
#line 407 "prog_foreign.m"
      parse_tree__prog_foreign__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_8_8, 0) = ((MR_Box) ((MR_String) "__"));
#line 407 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_8_8, 1) = ((MR_Box) (parse_tree__prog_foreign__V_10_10));
#line 407 "prog_foreign.m"
    }
#line 407 "prog_foreign.m"
    {
#line 407 "prog_foreign.m"
      parse_tree__prog_foreign__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_7_7, 0) = ((MR_Box) (parse_tree__prog_foreign__Module0_4));
#line 407 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_7_7, 1) = ((MR_Box) (parse_tree__prog_foreign__V_8_8));
#line 407 "prog_foreign.m"
    }
#line 407 "prog_foreign.m"
    {
#line 407 "prog_foreign.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_foreign__V_7_7, &parse_tree__prog_foreign__Name_6);
    }
#line 406 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_6;
#line 406 "prog_foreign.m"
  }
#line 188 "prog_foreign.m"
}

#line 184 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(
#line 184 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name_3)
#line 184 "prog_foreign.m"
{
#line 402 "prog_foreign.m"
  {
#line 402 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 402 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;
#line 382 "prog_foreign.m"
    MR_Char parse_tree__prog_foreign__FirstChar_8;
#line 382 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__V_10_10;

#line 382 "prog_foreign.m"
    {
#line 382 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
#line 382 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 382 "prog_foreign.m"
      {
#line 389 "prog_foreign.m"
        parse_tree__prog_foreign__V_10_10 = (MR_Integer) 0;
#line 389 "prog_foreign.m"
        {
#line 389 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__index_3_p_0(parse_tree__prog_foreign__Name_3, parse_tree__prog_foreign__V_10_10, &parse_tree__prog_foreign__FirstChar_8);
        }
#line 382 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 382 "prog_foreign.m"
          {
#line 390 "prog_foreign.m"
            {
#line 390 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = mercury__char__is_digit_1_p_0(parse_tree__prog_foreign__FirstChar_8);
            }
#line 390 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 382 "prog_foreign.m"
          }
#line 382 "prog_foreign.m"
      }
#line 402 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 399 "prog_foreign.m"
      {
#line 399 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Suffix_9;

#line 397 "prog_foreign.m"
        {
#line 397 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
#line 399 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 398 "prog_foreign.m"
          {
#line 398 "prog_foreign.m"
            {
#line 398 "prog_foreign.m"
              return parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
#line 398 "prog_foreign.m"
          }
#line 399 "prog_foreign.m"
        else
#line 400 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
#line 399 "prog_foreign.m"
      }
#line 402 "prog_foreign.m"
    else
#line 403 "prog_foreign.m"
      {
#line 403 "prog_foreign.m"
        return parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
#line 402 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 402 "prog_foreign.m"
  }
#line 184 "prog_foreign.m"
}

#line 179 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_1_f_0(
#line 179 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name_3)
#line 179 "prog_foreign.m"
{
#line 402 "prog_foreign.m"
  {
#line 402 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 402 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 382 "prog_foreign.m"
    {
#line 382 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
#line 402 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 399 "prog_foreign.m"
      {
#line 399 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Suffix_9;

#line 397 "prog_foreign.m"
        {
#line 397 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
#line 399 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 398 "prog_foreign.m"
          {
#line 398 "prog_foreign.m"
            {
#line 398 "prog_foreign.m"
              return parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
#line 398 "prog_foreign.m"
          }
#line 399 "prog_foreign.m"
        else
#line 400 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
#line 399 "prog_foreign.m"
      }
#line 402 "prog_foreign.m"
    else
#line 403 "prog_foreign.m"
      {
#line 403 "prog_foreign.m"
        return parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
#line 402 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 402 "prog_foreign.m"
  }
#line 179 "prog_foreign.m"
}

#line 174 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__sym_name_mangle_1_f_0(
#line 174 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 174 "prog_foreign.m"
{
#line 363 "prog_foreign.m"
  {
#line 363 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 363 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 363 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 365 "prog_foreign.m"
      {
#line 365 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 365 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__PlainName_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 365 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__MangledModuleName_7;
#line 365 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__MangledPlainName_8;
#line 365 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 365 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_13_13;
#line 365 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_15_15;

#line 366 "prog_foreign.m"
        {
#line 366 "prog_foreign.m"
          parse_tree__prog_foreign__MangledModuleName_7 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_4);
        }
#line 367 "prog_foreign.m"
        {
#line 367 "prog_foreign.m"
          parse_tree__prog_foreign__MangledPlainName_8 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__PlainName_5);
        }
#line 407 "prog_foreign.m"
        {
#line 407 "prog_foreign.m"
          parse_tree__prog_foreign__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_15_15, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledPlainName_8));
#line 407 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "prog_foreign.m"
        }
#line 407 "prog_foreign.m"
        {
#line 407 "prog_foreign.m"
          parse_tree__prog_foreign__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_13_13, 0) = ((MR_Box) ((MR_String) "__"));
#line 407 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_13_13, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 407 "prog_foreign.m"
        }
#line 407 "prog_foreign.m"
        {
#line 407 "prog_foreign.m"
          parse_tree__prog_foreign__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_12_12, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledModuleName_7));
#line 407 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_12_12, 1) = ((MR_Box) (parse_tree__prog_foreign__V_13_13));
#line 407 "prog_foreign.m"
        }
#line 407 "prog_foreign.m"
        {
#line 407 "prog_foreign.m"
          mercury__string__append_list_2_p_0(parse_tree__prog_foreign__V_12_12, &parse_tree__prog_foreign__HeadVar__2_2);
        }
#line 365 "prog_foreign.m"
      }
#line 363 "prog_foreign.m"
    else
#line 363 "prog_foreign.m"
      {
#line 363 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));

#line 364 "prog_foreign.m"
        {
#line 364 "prog_foreign.m"
          return parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__Name_3);
        }
#line 363 "prog_foreign.m"
      }
#line 363 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 363 "prog_foreign.m"
  }
#line 174 "prog_foreign.m"
}

#line 169 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__make_init_name_1_f_0(
#line 169 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_3)
#line 169 "prog_foreign.m"
{
#line 359 "prog_foreign.m"
  {
#line 359 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 359 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__InitName_4;
#line 359 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__MangledModuleName_5;
#line 359 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_7_7;

#line 360 "prog_foreign.m"
    {
#line 360 "prog_foreign.m"
      parse_tree__prog_foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_3);
    }
#line 361 "prog_foreign.m"
    {
#line 361 "prog_foreign.m"
      parse_tree__prog_foreign__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__MangledModuleName_5, (MR_String) "__");
    }
#line 361 "prog_foreign.m"
    {
#line 361 "prog_foreign.m"
      return parse_tree__prog_foreign__InitName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", parse_tree__prog_foreign__V_7_7);
    }
#line 359 "prog_foreign.m"
    return parse_tree__prog_foreign__InitName_4;
#line 359 "prog_foreign.m"
  }
#line 169 "prog_foreign.m"
}

#line 160 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_type_language_1_f_0(
#line 160 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 160 "prog_foreign.m"
{
#line 351 "prog_foreign.m"
  {
#line 351 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 351 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__HeadVar__2_2;

#line 351 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 352 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 0;
#line 351 "prog_foreign.m"
    else
#line 351 "prog_foreign.m"
      if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 351 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 3;
#line 351 "prog_foreign.m"
      else
#line 351 "prog_foreign.m"
        if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 353 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 2;
#line 351 "prog_foreign.m"
        else
#line 351 "prog_foreign.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 354 "prog_foreign.m"
            parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 1;
#line 351 "prog_foreign.m"
          else
#line 355 "prog_foreign.m"
            parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 4;
#line 351 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 351 "prog_foreign.m"
  }
#line 160 "prog_foreign.m"
}

#line 336 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
#line 336 "prog_foreign.m"
  void * parse_tree__prog_foreign__env_ptr_arg)
#line 336 "prog_foreign.m"
{
#line 336 "prog_foreign.m"
  {
#line 336 "prog_foreign.m"
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s * parse_tree__prog_foreign__env_ptr = (struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s *) parse_tree__prog_foreign__env_ptr_arg;

#line 336 "prog_foreign.m"
    *((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1));
#line 336 "prog_foreign.m"
    {
#line 336 "prog_foreign.m"
      ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont)((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr);
#line 336 "prog_foreign.m"
      return;
    }
#line 336 "prog_foreign.m"
  }
#line 336 "prog_foreign.m"
}

#line 336 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
#line 336 "prog_foreign.m"
  MR_Box parse_tree__prog_foreign__closure_arg,
#line 336 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 336 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 336 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr)
#line 336 "prog_foreign.m"
{
#line 336 "prog_foreign.m"
  {
#line 336 "prog_foreign.m"
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s parse_tree__prog_foreign__env;

#line 336 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1 = parse_tree__prog_foreign__wrapper_arg_1;
#line 336 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont = parse_tree__prog_foreign__cont;
#line 336 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr = parse_tree__prog_foreign__cont_env_ptr;
#line 336 "prog_foreign.m"
    {
#line 336 "prog_foreign.m"
      MR_Box parse_tree__prog_foreign__closure = parse_tree__prog_foreign__closure_arg;

#line 336 "prog_foreign.m"
      {
#line 336 "prog_foreign.m"
        parse_tree__prog_foreign__valid_foreign_language_1_p_1(&(parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1, parse_tree__prog_foreign__all_foreign_languages_0_f_0_1, &parse_tree__prog_foreign__env);
      }
#line 336 "prog_foreign.m"
    }
#line 336 "prog_foreign.m"
  }
#line 336 "prog_foreign.m"
}

#line 158 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0(void)
#line 158 "prog_foreign.m"
{
#line 335 "prog_foreign.m"
  {
#line 335 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 335 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Langs_2;

#line 337 "prog_foreign.m"
    {
#line 337 "prog_foreign.m"
      mercury__solutions__solutions_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &parse_tree__prog_foreign_scalar_common_4[0], &parse_tree__prog_foreign__Langs_2);
    }
#line 335 "prog_foreign.m"
    return parse_tree__prog_foreign__Langs_2;
#line 335 "prog_foreign.m"
  }
#line 158 "prog_foreign.m"
}

#line 153 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__prefer_foreign_language_4_f_0(
#line 153 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign___Globals_1,
#line 153 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 153 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3,
#line 153 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__4_4)
#line 153 "prog_foreign.m"
{
#line 296 "prog_foreign.m"
  {
#line 296 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 296 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__HeadVar__5_5;

#line 296 "prog_foreign.m"
    {
#line 296 "prog_foreign.m"
      return parse_tree__prog_foreign__HeadVar__5_5 = parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(parse_tree__prog_foreign__HeadVar__2_2, parse_tree__prog_foreign__HeadVar__3_3, parse_tree__prog_foreign__HeadVar__4_4);
    }
#line 296 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__5_5;
#line 296 "prog_foreign.m"
  }
#line 153 "prog_foreign.m"
}

#line 142 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_1(
#line 142 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 142 "prog_foreign.m"
{
#line 284 "prog_foreign.m"
  {
#line 284 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 284 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 284 "prog_foreign.m"
    if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 0))
#line 284 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
#line 284 "prog_foreign.m"
    else
#line 285 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
#line 284 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 284 "prog_foreign.m"
  }
#line 142 "prog_foreign.m"
}

#line 141 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(
#line 141 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 141 "prog_foreign.m"
  MR_String * parse_tree__prog_foreign__HeadVar__2_2)
#line 141 "prog_foreign.m"
{
#line 284 "prog_foreign.m"
  {
#line 284 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 284 "prog_foreign.m"
    if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 0))
#line 284 "prog_foreign.m"
      {
#line 284 "prog_foreign.m"
        *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
#line 284 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 284 "prog_foreign.m"
      }
#line 284 "prog_foreign.m"
    else
#line 284 "prog_foreign.m"
      if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 1))
#line 285 "prog_foreign.m"
        {
#line 285 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
#line 285 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 285 "prog_foreign.m"
        }
#line 284 "prog_foreign.m"
      else
#line 284 "prog_foreign.m"
        if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 2))
#line 286 "prog_foreign.m"
          {
#line 286 "prog_foreign.m"
            *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".java";
#line 286 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 286 "prog_foreign.m"
          }
#line 284 "prog_foreign.m"
        else
#line 284 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 284 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 284 "prog_foreign.m"
  }
#line 141 "prog_foreign.m"
}

#line 134 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_1(
#line 134 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_4,
#line 134 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_5)
#line 134 "prog_foreign.m"
{
#line 269 "prog_foreign.m"
  {
#line 269 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 269 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__FullyQualifiedModuleName_6;
#line 269 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Ending_8;
#line 269 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_12_12;
#line 269 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_13_13;

#line 273 "prog_foreign.m"
    {
#line 273 "prog_foreign.m"
      parse_tree__prog_foreign__V_13_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
    }
#line 273 "prog_foreign.m"
    {
#line 273 "prog_foreign.m"
      parse_tree__prog_foreign__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_13_13, (MR_String) "_code");
    }
#line 273 "prog_foreign.m"
    {
#line 273 "prog_foreign.m"
      parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_foreign__V_12_12);
    }
#line 277 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 278 "prog_foreign.m"
      {
#line 278 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 278 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_15_15;
#line 278 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

#line 279 "prog_foreign.m"
        {
#line 279 "prog_foreign.m"
          parse_tree__prog_foreign__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
        }
#line 279 "prog_foreign.m"
        {
#line 279 "prog_foreign.m"
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
#line 279 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 279 "prog_foreign.m"
        }
#line 278 "prog_foreign.m"
      }
#line 277 "prog_foreign.m"
    else
#line 275 "prog_foreign.m"
      {
#line 275 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 275 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_16_16;

#line 276 "prog_foreign.m"
        {
#line 276 "prog_foreign.m"
          parse_tree__prog_foreign__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
        }
#line 276 "prog_foreign.m"
        {
#line 276 "prog_foreign.m"
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 276 "prog_foreign.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__V_16_16));
#line 276 "prog_foreign.m"
        }
#line 275 "prog_foreign.m"
      }
#line 269 "prog_foreign.m"
    return parse_tree__prog_foreign__FullyQualifiedModuleName_6;
#line 269 "prog_foreign.m"
  }
#line 134 "prog_foreign.m"
}

#line 133 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_0(
#line 133 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_4,
#line 133 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_5,
#line 133 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__FullyQualifiedModuleName_6)
#line 133 "prog_foreign.m"
{
#line 269 "prog_foreign.m"
  {
#line 269 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 269 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Ending_8;
#line 269 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_11_11;
#line 269 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_12_12;
#line 269 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_13_13;
#line 269 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_14_14;

#line 284 "prog_foreign.m"
    if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 0))
#line 284 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 284 "prog_foreign.m"
    else
#line 284 "prog_foreign.m"
      if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 1))
#line 285 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 284 "prog_foreign.m"
      else
#line 284 "prog_foreign.m"
        if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 2))
#line 286 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 284 "prog_foreign.m"
        else
#line 284 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 269 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 269 "prog_foreign.m"
      {
#line 273 "prog_foreign.m"
        parse_tree__prog_foreign__V_11_11 = (MR_String) "__";
#line 273 "prog_foreign.m"
        {
#line 273 "prog_foreign.m"
          parse_tree__prog_foreign__V_13_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
        }
#line 273 "prog_foreign.m"
        parse_tree__prog_foreign__V_14_14 = (MR_String) "_code";
#line 273 "prog_foreign.m"
        {
#line 273 "prog_foreign.m"
          parse_tree__prog_foreign__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_14_14);
        }
#line 273 "prog_foreign.m"
        {
#line 273 "prog_foreign.m"
          parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_12_12);
        }
#line 277 "prog_foreign.m"
        if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 278 "prog_foreign.m"
          {
#line 278 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 278 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__V_15_15;
#line 278 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

#line 279 "prog_foreign.m"
            {
#line 279 "prog_foreign.m"
              parse_tree__prog_foreign__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
            }
#line 279 "prog_foreign.m"
            {
#line 279 "prog_foreign.m"
              MR_Word base;
#line 279 "prog_foreign.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "prog_foreign.m"
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
#line 279 "prog_foreign.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
#line 279 "prog_foreign.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 279 "prog_foreign.m"
            }
#line 278 "prog_foreign.m"
          }
#line 277 "prog_foreign.m"
        else
#line 275 "prog_foreign.m"
          {
#line 275 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 275 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__V_16_16;

#line 276 "prog_foreign.m"
            {
#line 276 "prog_foreign.m"
              parse_tree__prog_foreign__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
            }
#line 276 "prog_foreign.m"
            {
#line 276 "prog_foreign.m"
              MR_Word base;
#line 276 "prog_foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 276 "prog_foreign.m"
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
#line 276 "prog_foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_foreign__V_16_16));
#line 276 "prog_foreign.m"
            }
#line 275 "prog_foreign.m"
          }
#line 277 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 269 "prog_foreign.m"
      }
#line 269 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 269 "prog_foreign.m"
  }
#line 133 "prog_foreign.m"
}

#line 117 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(
#line 117 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleForeignImported_4,
#line 117 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__CurrentModule_5)
#line 117 "prog_foreign.m"
{
#line 226 "prog_foreign.m"
  {
#line 226 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 226 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
#line 226 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 0)));
#line 226 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ForeignImportModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 1)));
#line 227 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 2)));

#line 4075 "parse_tree.prog_foreign.c"
    if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 0))
#line 232 "prog_foreign.m"
      parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 4079 "parse_tree.prog_foreign.c"
    else
#line 4081 "parse_tree.prog_foreign.c"
      if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 1))
#line 4083 "parse_tree.prog_foreign.c"
        {
#line 4085 "parse_tree.prog_foreign.c"
          MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32;

#line 222 "prog_foreign.m"
          {
#line 222 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_14, parse_tree__prog_foreign__Lang_13);
          }
#line 259 "prog_foreign.m"
          {
#line 259 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32);
          }
#line 259 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 259 "prog_foreign.m"
            {
#line 260 "prog_foreign.m"
              {
#line 260 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
#line 260 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 259 "prog_foreign.m"
            }
#line 263 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 262 "prog_foreign.m"
            {
#line 262 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 262 "prog_foreign.m"
            }
#line 263 "prog_foreign.m"
          else
#line 264 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32;
#line 4123 "parse_tree.prog_foreign.c"
        }
#line 4125 "parse_tree.prog_foreign.c"
      else
#line 4127 "parse_tree.prog_foreign.c"
        if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 4))
#line 263 "prog_foreign.m"
          {
#line 259 "prog_foreign.m"
            {
#line 259 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_14);
            }
#line 259 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 259 "prog_foreign.m"
              {
#line 260 "prog_foreign.m"
                {
#line 260 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
                }
#line 260 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 259 "prog_foreign.m"
              }
#line 263 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 262 "prog_foreign.m"
              {
#line 262 "prog_foreign.m"
                parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 262 "prog_foreign.m"
              }
#line 263 "prog_foreign.m"
            else
#line 264 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 263 "prog_foreign.m"
          }
#line 4163 "parse_tree.prog_foreign.c"
        else
#line 4165 "parse_tree.prog_foreign.c"
          if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 3))
#line 263 "prog_foreign.m"
            {
#line 259 "prog_foreign.m"
              {
#line 259 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_14);
              }
#line 259 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 259 "prog_foreign.m"
                {
#line 260 "prog_foreign.m"
                  {
#line 260 "prog_foreign.m"
                    parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
                  }
#line 260 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 259 "prog_foreign.m"
                }
#line 263 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 262 "prog_foreign.m"
                {
#line 262 "prog_foreign.m"
                  parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 262 "prog_foreign.m"
                }
#line 263 "prog_foreign.m"
              else
#line 264 "prog_foreign.m"
                parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 263 "prog_foreign.m"
            }
#line 4201 "parse_tree.prog_foreign.c"
          else
#line 263 "prog_foreign.m"
            {
#line 259 "prog_foreign.m"
              {
#line 259 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_14);
              }
#line 259 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 259 "prog_foreign.m"
                {
#line 260 "prog_foreign.m"
                  {
#line 260 "prog_foreign.m"
                    parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
                  }
#line 260 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 259 "prog_foreign.m"
                }
#line 263 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 262 "prog_foreign.m"
                {
#line 262 "prog_foreign.m"
                  parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 262 "prog_foreign.m"
                }
#line 263 "prog_foreign.m"
              else
#line 264 "prog_foreign.m"
                parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 263 "prog_foreign.m"
            }
#line 226 "prog_foreign.m"
    return parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
#line 226 "prog_foreign.m"
  }
#line 117 "prog_foreign.m"
}

#line 110 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_1_f_0(
#line 110 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ImportModule_3)
#line 110 "prog_foreign.m"
{
#line 206 "prog_foreign.m"
  {
#line 206 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 206 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ModuleName_4;
#line 206 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Lang_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 0)));
#line 206 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ForeignImportModule_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 1)));
#line 207 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 2)));

#line 211 "prog_foreign.m"
    if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 0))
#line 210 "prog_foreign.m"
      parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 211 "prog_foreign.m"
    else
#line 211 "prog_foreign.m"
      if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 1))
#line 222 "prog_foreign.m"
        {
#line 222 "prog_foreign.m"
          return parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_6, parse_tree__prog_foreign__Lang_5);
        }
#line 211 "prog_foreign.m"
      else
#line 211 "prog_foreign.m"
        if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 4))
#line 219 "prog_foreign.m"
          parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 211 "prog_foreign.m"
        else
#line 211 "prog_foreign.m"
          if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 3))
#line 213 "prog_foreign.m"
            parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 211 "prog_foreign.m"
          else
#line 216 "prog_foreign.m"
            parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 206 "prog_foreign.m"
    return parse_tree__prog_foreign__ModuleName_4;
#line 206 "prog_foreign.m"
  }
#line 110 "prog_foreign.m"
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
