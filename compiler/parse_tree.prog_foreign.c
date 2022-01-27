/*
** Automatically generated from `prog_foreign.m'
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
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "mdbcomp.sym_name.mih"
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



#line 337 "prog_foreign.m"
struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s {
#line 337 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1;
#line 337 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont;
#line 337 "prog_foreign.m"
  void * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr;
#line 337 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1;
#line 337 "prog_foreign.m"
};


#line 148 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3];

#line 151 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3];

#line 154 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0;

#line 157 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1];

#line 160 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1];

#line 163 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1];

#line 166 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1];

#line 169 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 172 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4];

#line 175 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4];

#line 178 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0;

#line 181 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1];

#line 184 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1];

#line 187 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1];

#line 190 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1];

#line 193 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 196 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4];

#line 199 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4];

#line 202 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0;

#line 205 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1];

#line 208 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1];

#line 211 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1];

#line 214 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1];

#line 217 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 220 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0;

#line 223 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2];

#line 226 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2];

#line 229 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0;

#line 232 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1];

#line 235 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1];

#line 238 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1];

#line 241 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1];

#line 244 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0[1];

#line 247 "parse_tree.prog_foreign.c"
static const MR_NotagFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0;

#line 250 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0;

#line 253 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
#line 256 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 258 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 261 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
#line 264 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 266 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 268 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 271 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0_10001(
#line 274 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 276 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 279 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0_10001(
#line 282 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 284 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 286 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 289 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
#line 292 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 294 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 297 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
#line 300 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 302 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 304 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 307 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0_10001(
#line 310 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 312 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 315 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0_10001(
#line 318 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 320 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 322 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 325 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
#line 328 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 330 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 333 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
#line 336 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 338 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 340 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 343 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
#line 346 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 348 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 351 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
#line 354 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 356 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 358 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 361 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001(
#line 364 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 366 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 369 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001(
#line 372 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 374 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 376 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 379 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
#line 382 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 384 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 387 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
#line 390 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 392 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 394 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 313 "prog_foreign.m"
static MR_Integer MR_CALL 
parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__313__1_2_f_0(
#line 313 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__PreferredList_13,
#line 313 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_24);

#line 453 "prog_foreign.m"
static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
#line 453 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3);

#line 342 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
#line 342 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 342 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 342 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr);

#line 337 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
#line 337 "prog_foreign.m"
  void * parse_tree__prog_foreign__env_ptr_arg);

#line 337 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
#line 337 "prog_foreign.m"
  MR_Box parse_tree__prog_foreign__closure_arg,
#line 337 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 337 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 337 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr);


static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_4[1][3];


#line 344 "prog_foreign.m"
/* sealed */ struct parse_tree__prog_foreign__vector_common_type_5_0_s {
#line 344 "prog_foreign.m"
  const MR_Word parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
#line 344 "prog_foreign.m"
};

static /* final */ const struct parse_tree__prog_foreign__vector_common_type_5_0_s parse_tree__prog_foreign_vector_common_5[5];



static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_foreign_scalar_common_1[5])))
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



#line 564 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 571 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3] = {
  (MR_String) "fbody_lang",
  (MR_String) "fbody_code",
  (MR_String) "fbody_context"
};

#line 578 "parse_tree.prog_foreign.c"
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

#line 593 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

#line 598 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0
  }
};

#line 607 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

#line 612 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1] = {
  (MR_Integer) 0
};

#line 617 "parse_tree.prog_foreign.c"
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

#line 638 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 646 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_codes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_body_codes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_body_codes_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_body_codes",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 667 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 675 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4] = {
  (MR_String) "fdecl_lang",
  (MR_String) "fdecl_is_local",
  (MR_String) "fdecl_code",
  (MR_String) "fdecl_context"
};

#line 683 "parse_tree.prog_foreign.c"
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

#line 698 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

#line 703 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0
  }
};

#line 712 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

#line 717 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1] = {
  (MR_Integer) 0
};

#line 722 "parse_tree.prog_foreign.c"
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

#line 743 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 751 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_codes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_decl_codes",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 772 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 780 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4] = {
  (MR_String) "fexp_decl_lang",
  (MR_String) "fexp_decl_ret_type",
  (MR_String) "fexp_decl_func_name",
  (MR_String) "fexp_decl_arg_decls"
};

#line 788 "parse_tree.prog_foreign.c"
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

#line 803 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

#line 808 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0
  }
};

#line 817 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

#line 822 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1] = {
  (MR_Integer) 0
};

#line 827 "parse_tree.prog_foreign.c"
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

#line 848 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 856 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
  }
};

#line 864 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
};

#line 870 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2] = {
  (MR_String) "fexp_decls_codes",
  (MR_String) "fexp_decls_list"
};

#line 876 "parse_tree.prog_foreign.c"
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

#line 891 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

#line 896 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0
  }
};

#line 905 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

#line 910 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1] = {
  (MR_Integer) 0
};

#line 915 "parse_tree.prog_foreign.c"
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

#line 936 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0[1] = {
  (MR_Integer) 0
};

#line 941 "parse_tree.prog_foreign.c"
static const MR_NotagFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0 = {
  (MR_String) "foreign_export_defn",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 948 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export_defn",
  {
    &parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0
  },
  {
    &parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0
};

#line 969 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0
  }
};

#line 977 "parse_tree.prog_foreign.c"
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
    (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 998 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
#line 1001 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1003 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1005 "parse_tree.prog_foreign.c"
{
#line 1007 "parse_tree.prog_foreign.c"
  {
#line 1009 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1012 "parse_tree.prog_foreign.c"
    {
#line 1014 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1017 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1019 "parse_tree.prog_foreign.c"
  }
#line 1021 "parse_tree.prog_foreign.c"
}

#line 1024 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
#line 1027 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1029 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1031 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1033 "parse_tree.prog_foreign.c"
{
#line 1035 "parse_tree.prog_foreign.c"
  {
#line 1037 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1040 "parse_tree.prog_foreign.c"
    {
#line 1042 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_body_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1045 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1047 "parse_tree.prog_foreign.c"
  }
#line 1049 "parse_tree.prog_foreign.c"
}

#line 1052 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0_10001(
#line 1055 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1057 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1059 "parse_tree.prog_foreign.c"
{
#line 1061 "parse_tree.prog_foreign.c"
  {
#line 1063 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1066 "parse_tree.prog_foreign.c"
    {
#line 1068 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_codes_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1071 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1073 "parse_tree.prog_foreign.c"
  }
#line 1075 "parse_tree.prog_foreign.c"
}

#line 1078 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0_10001(
#line 1081 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1083 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1085 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1087 "parse_tree.prog_foreign.c"
{
#line 1089 "parse_tree.prog_foreign.c"
  {
#line 1091 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1094 "parse_tree.prog_foreign.c"
    {
#line 1096 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_body_codes_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1099 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1101 "parse_tree.prog_foreign.c"
  }
#line 1103 "parse_tree.prog_foreign.c"
}

#line 1106 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
#line 1109 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1111 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1113 "parse_tree.prog_foreign.c"
{
#line 1115 "parse_tree.prog_foreign.c"
  {
#line 1117 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1120 "parse_tree.prog_foreign.c"
    {
#line 1122 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1125 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1127 "parse_tree.prog_foreign.c"
  }
#line 1129 "parse_tree.prog_foreign.c"
}

#line 1132 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
#line 1135 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1137 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1139 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1141 "parse_tree.prog_foreign.c"
{
#line 1143 "parse_tree.prog_foreign.c"
  {
#line 1145 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1148 "parse_tree.prog_foreign.c"
    {
#line 1150 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1153 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1155 "parse_tree.prog_foreign.c"
  }
#line 1157 "parse_tree.prog_foreign.c"
}

#line 1160 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0_10001(
#line 1163 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1165 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1167 "parse_tree.prog_foreign.c"
{
#line 1169 "parse_tree.prog_foreign.c"
  {
#line 1171 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1174 "parse_tree.prog_foreign.c"
    {
#line 1176 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1179 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1181 "parse_tree.prog_foreign.c"
  }
#line 1183 "parse_tree.prog_foreign.c"
}

#line 1186 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0_10001(
#line 1189 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1191 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1193 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1195 "parse_tree.prog_foreign.c"
{
#line 1197 "parse_tree.prog_foreign.c"
  {
#line 1199 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1202 "parse_tree.prog_foreign.c"
    {
#line 1204 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1207 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1209 "parse_tree.prog_foreign.c"
  }
#line 1211 "parse_tree.prog_foreign.c"
}

#line 1214 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
#line 1217 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1219 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1221 "parse_tree.prog_foreign.c"
{
#line 1223 "parse_tree.prog_foreign.c"
  {
#line 1225 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1228 "parse_tree.prog_foreign.c"
    {
#line 1230 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1233 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1235 "parse_tree.prog_foreign.c"
  }
#line 1237 "parse_tree.prog_foreign.c"
}

#line 1240 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
#line 1243 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1245 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1247 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1249 "parse_tree.prog_foreign.c"
{
#line 1251 "parse_tree.prog_foreign.c"
  {
#line 1253 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1256 "parse_tree.prog_foreign.c"
    {
#line 1258 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1261 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1263 "parse_tree.prog_foreign.c"
  }
#line 1265 "parse_tree.prog_foreign.c"
}

#line 1268 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
#line 1271 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1273 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1275 "parse_tree.prog_foreign.c"
{
#line 1277 "parse_tree.prog_foreign.c"
  {
#line 1279 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1282 "parse_tree.prog_foreign.c"
    {
#line 1284 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1287 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1289 "parse_tree.prog_foreign.c"
  }
#line 1291 "parse_tree.prog_foreign.c"
}

#line 1294 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
#line 1297 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1299 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1301 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1303 "parse_tree.prog_foreign.c"
{
#line 1305 "parse_tree.prog_foreign.c"
  {
#line 1307 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1310 "parse_tree.prog_foreign.c"
    {
#line 1312 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1315 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1317 "parse_tree.prog_foreign.c"
  }
#line 1319 "parse_tree.prog_foreign.c"
}

#line 1322 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001(
#line 1325 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1327 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1329 "parse_tree.prog_foreign.c"
{
#line 1331 "parse_tree.prog_foreign.c"
  {
#line 1333 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1336 "parse_tree.prog_foreign.c"
    {
#line 1338 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_defn_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1341 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1343 "parse_tree.prog_foreign.c"
  }
#line 1345 "parse_tree.prog_foreign.c"
}

#line 1348 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001(
#line 1351 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1353 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1355 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1357 "parse_tree.prog_foreign.c"
{
#line 1359 "parse_tree.prog_foreign.c"
  {
#line 1361 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1364 "parse_tree.prog_foreign.c"
    {
#line 1366 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_defn_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1369 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1371 "parse_tree.prog_foreign.c"
  }
#line 1373 "parse_tree.prog_foreign.c"
}

#line 1376 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
#line 1379 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1381 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1383 "parse_tree.prog_foreign.c"
{
#line 1385 "parse_tree.prog_foreign.c"
  {
#line 1387 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1390 "parse_tree.prog_foreign.c"
    {
#line 1392 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_defns_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1395 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1397 "parse_tree.prog_foreign.c"
  }
#line 1399 "parse_tree.prog_foreign.c"
}

#line 1402 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
#line 1405 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1407 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1409 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1411 "parse_tree.prog_foreign.c"
{
#line 1413 "parse_tree.prog_foreign.c"
  {
#line 1415 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1418 "parse_tree.prog_foreign.c"
    {
#line 1420 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_defns_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1423 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1425 "parse_tree.prog_foreign.c"
  }
#line 1427 "parse_tree.prog_foreign.c"
}

#line 148 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(
#line 148 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 148 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3,
#line 148 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__4_4)
#line 148 "prog_foreign.m"
{
#line 297 "prog_foreign.m"
  {
#line 297 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 297 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__HeadVar__5_5;

#line 297 "prog_foreign.m"
    if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 0))
#line 297 "prog_foreign.m"
      {
#line 299 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__HeadVar__4_4 == (MR_Integer) 0);
#line 299 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 299 "prog_foreign.m"
          {
#line 299 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__HeadVar__3_3 == (MR_Integer) 0);
#line 299 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 299 "prog_foreign.m"
          }
#line 297 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 300 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 1;
#line 297 "prog_foreign.m"
        else
#line 302 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 297 "prog_foreign.m"
      }
#line 297 "prog_foreign.m"
    else
#line 297 "prog_foreign.m"
      if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 2))
#line 324 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 297 "prog_foreign.m"
      else
#line 297 "prog_foreign.m"
        if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 4))
#line 330 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 297 "prog_foreign.m"
        else
#line 297 "prog_foreign.m"
          if ((parse_tree__prog_foreign__HeadVar__2_2 == (MR_Integer) 1))
#line 305 "prog_foreign.m"
            {
#line 305 "prog_foreign.m"
              MR_Word parse_tree__prog_foreign__PreferredList_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_foreign_scalar_common_1[6]);
#line 305 "prog_foreign.m"
              MR_Integer parse_tree__prog_foreign__N1_18;
#line 305 "prog_foreign.m"
              MR_Integer parse_tree__prog_foreign__N2_19;

#line 316 "prog_foreign.m"
              {
#line 316 "prog_foreign.m"
                parse_tree__prog_foreign__N1_18 = parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__313__1_2_f_0(parse_tree__prog_foreign__PreferredList_13, parse_tree__prog_foreign__HeadVar__3_3);
              }
#line 317 "prog_foreign.m"
              {
#line 317 "prog_foreign.m"
                parse_tree__prog_foreign__N2_19 = parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__313__1_2_f_0(parse_tree__prog_foreign__PreferredList_13, parse_tree__prog_foreign__HeadVar__4_4);
              }
#line 318 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__N2_19 < parse_tree__prog_foreign__N1_18);
#line 320 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 319 "prog_foreign.m"
                parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 1;
#line 320 "prog_foreign.m"
              else
#line 321 "prog_foreign.m"
                parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 305 "prog_foreign.m"
            }
#line 297 "prog_foreign.m"
          else
#line 326 "prog_foreign.m"
            parse_tree__prog_foreign__HeadVar__5_5 = (MR_Integer) 0;
#line 297 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__5_5;
#line 297 "prog_foreign.m"
  }
#line 148 "prog_foreign.m"
}

#line 313 "prog_foreign.m"
static MR_Integer MR_CALL 
parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__313__1_2_f_0(
#line 313 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__PreferredList_13,
#line 313 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_24)
#line 313 "prog_foreign.m"
{
#line 313 "prog_foreign.m"
  {
#line 313 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 313 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__HeadVar__3_25;
#line 313 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__X0_17;

#line 311 "prog_foreign.m"
    {
#line 311 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__list__nth_member_search_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__prog_foreign__PreferredList_13, ((MR_Box) (parse_tree__prog_foreign__HeadVar__2_24)), &parse_tree__prog_foreign__X0_17);
    }
#line 313 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 312 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__3_25 = parse_tree__prog_foreign__X0_17;
#line 313 "prog_foreign.m"
    else
#line 314 "prog_foreign.m"
      {
#line 314 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_26_26;

#line 314 "prog_foreign.m"
        {
#line 314 "prog_foreign.m"
          parse_tree__prog_foreign__V_26_26 = mercury__list__length_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__prog_foreign__PreferredList_13);
        }
#line 314 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__3_25 = (parse_tree__prog_foreign__V_26_26 + (MR_Integer) 1);
#line 314 "prog_foreign.m"
      }
#line 313 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__3_25;
#line 313 "prog_foreign.m"
  }
#line 313 "prog_foreign.m"
}

#line 59 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0(
#line 59 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 59 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 59 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 59 "prog_foreign.m"
{
#line 59 "prog_foreign.m"
  {
#line 59 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 59 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 59 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 59 "prog_foreign.m"
    {
#line 59 "prog_foreign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[4], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
#line 59 "prog_foreign.m"
      return;
    }
#line 59 "prog_foreign.m"
  }
#line 59 "prog_foreign.m"
}

#line 59 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0(
#line 59 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 59 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 59 "prog_foreign.m"
{
#line 59 "prog_foreign.m"
  {
#line 59 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 59 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 59 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 59 "prog_foreign.m"
    {
#line 59 "prog_foreign.m"
      return parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[4], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
#line 59 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 59 "prog_foreign.m"
  }
#line 59 "prog_foreign.m"
}

#line 61 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0(
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
    MR_Integer parse_tree__prog_foreign__CastX_6 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 61 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_7 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 61 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_6 == parse_tree__prog_foreign__CastY_7);
#line 61 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1668 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "prog_foreign.m"
    else
#line 61 "prog_foreign.m"
      {
#line 61 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = (MR_String) parse_tree__prog_foreign__HeadVar__2_2;
#line 61 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = (MR_String) parse_tree__prog_foreign__HeadVar__3_3;

#line 61 "prog_foreign.m"
        {
#line 61 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_5_5);
#line 61 "prog_foreign.m"
          return;
        }
#line 61 "prog_foreign.m"
      }
#line 61 "prog_foreign.m"
  }
#line 61 "prog_foreign.m"
}

#line 61 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0(
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
    MR_Integer parse_tree__prog_foreign__CastX_5 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 61 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_6 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 61 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_5 == parse_tree__prog_foreign__CastY_6);
#line 61 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 61 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 61 "prog_foreign.m"
    else
#line 61 "prog_foreign.m"
      {
#line 61 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_3_3 = (MR_String) parse_tree__prog_foreign__HeadVar__1_1;
#line 61 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = (MR_String) parse_tree__prog_foreign__HeadVar__2_2;

#line 1726 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_3_3, parse_tree__prog_foreign__V_4_4) == 0);
#line 61 "prog_foreign.m"
      }
#line 61 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 61 "prog_foreign.m"
  }
#line 61 "prog_foreign.m"
}

#line 68 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(
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
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 68 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 68 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
#line 68 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1761 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "prog_foreign.m"
    else
#line 68 "prog_foreign.m"
      {
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8;

#line 68 "prog_foreign.m"
        {
#line 68 "prog_foreign.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[2], &parse_tree__prog_foreign__V_8_8, ((MR_Box) (parse_tree__prog_foreign__V_4_4)), ((MR_Box) (parse_tree__prog_foreign__V_6_6)));
        }
#line 1783 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_8_8 == (MR_Integer) 0);
#line 68 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 68 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_8_8;
#line 68 "prog_foreign.m"
        else
#line 68 "prog_foreign.m"
          {
#line 68 "prog_foreign.m"
            {
#line 68 "prog_foreign.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[3], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__V_5_5)), ((MR_Box) (parse_tree__prog_foreign__V_7_7)));
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
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(
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
    MR_Integer parse_tree__prog_foreign__CastX_7 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 68 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_8 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 68 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_7 == parse_tree__prog_foreign__CastY_8);
#line 68 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 68 "prog_foreign.m"
    else
#line 68 "prog_foreign.m"
      {
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__TypeInfo_10_10;
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));

#line 1850 "parse_tree.prog_foreign.c"
        {
#line 1852 "parse_tree.prog_foreign.c"
          parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[2], ((MR_Box) (parse_tree__prog_foreign__V_3_3)), ((MR_Box) (parse_tree__prog_foreign__V_5_5)));
        }
#line 68 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
          {
#line 1859 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_foreign_scalar_common_1[3];
#line 1861 "parse_tree.prog_foreign.c"
            {
#line 1863 "parse_tree.prog_foreign.c"
              return parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_foreign__TypeInfo_10_10, ((MR_Box) (parse_tree__prog_foreign__V_4_4)), ((MR_Box) (parse_tree__prog_foreign__V_6_6)));
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

#line 74 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(
#line 74 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 74 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 74 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 74 "prog_foreign.m"
{
#line 74 "prog_foreign.m"
  {
#line 74 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 74 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_15 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 74 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_16 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 74 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_15 == parse_tree__prog_foreign__CastY_16);
#line 74 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1901 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "prog_foreign.m"
    else
#line 74 "prog_foreign.m"
      {
#line 74 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));
#line 74 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 3)));
#line 74 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 74 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_21_21 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 74 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_22_22 = (MR_Integer) parse_tree__prog_foreign__V_8_8;

#line 74 "prog_foreign.m"
        {
#line 74 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_12_12, parse_tree__prog_foreign__V_21_21, parse_tree__prog_foreign__V_22_22);
        }
#line 1935 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_12_12 == (MR_Integer) 0);
#line 74 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 74 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_12_12;
#line 74 "prog_foreign.m"
        else
#line 74 "prog_foreign.m"
          {
#line 74 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_13_13;

#line 74 "prog_foreign.m"
            {
#line 74 "prog_foreign.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9);
            }
#line 1955 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_13_13 == (MR_Integer) 0);
#line 74 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 74 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_13_13;
#line 74 "prog_foreign.m"
            else
#line 74 "prog_foreign.m"
              {
#line 74 "prog_foreign.m"
                MR_Word parse_tree__prog_foreign__V_14_14;

#line 74 "prog_foreign.m"
                {
#line 74 "prog_foreign.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__V_14_14, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                }
#line 1975 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_14_14 == (MR_Integer) 0);
#line 74 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 74 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
                  *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_14_14;
#line 74 "prog_foreign.m"
                else
#line 74 "prog_foreign.m"
                  {
#line 74 "prog_foreign.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_7_7, parse_tree__prog_foreign__V_11_11);
#line 74 "prog_foreign.m"
                    return;
                  }
#line 74 "prog_foreign.m"
              }
#line 74 "prog_foreign.m"
          }
#line 74 "prog_foreign.m"
      }
#line 74 "prog_foreign.m"
  }
#line 74 "prog_foreign.m"
}

#line 74 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(
#line 74 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 74 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 74 "prog_foreign.m"
{
#line 74 "prog_foreign.m"
  {
#line 74 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 74 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_11 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 74 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 74 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_11 == parse_tree__prog_foreign__CastY_12);
#line 74 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 74 "prog_foreign.m"
    else
#line 74 "prog_foreign.m"
      {
#line 74 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 3)));
#line 74 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));

#line 2048 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_7_7);
#line 74 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
          {
#line 2054 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_8_8) == 0);
#line 74 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
              {
#line 2060 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9) == 0);
#line 74 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 2064 "parse_tree.prog_foreign.c"
                  parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10) == 0);
#line 74 "prog_foreign.m"
              }
#line 74 "prog_foreign.m"
          }
#line 74 "prog_foreign.m"
      }
#line 74 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 74 "prog_foreign.m"
  }
#line 74 "prog_foreign.m"
}

#line 41 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0(
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
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0(
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

#line 44 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(
#line 44 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 44 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 44 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 44 "prog_foreign.m"
{
#line 44 "prog_foreign.m"
  {
#line 44 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 44 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_15 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 44 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_16 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 44 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_15 == parse_tree__prog_foreign__CastY_16);
#line 44 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 2165 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 44 "prog_foreign.m"
    else
#line 44 "prog_foreign.m"
      {
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 44 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_21_21 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 44 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_22_22 = (MR_Integer) parse_tree__prog_foreign__V_8_8;

#line 44 "prog_foreign.m"
        {
#line 44 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_12_12, parse_tree__prog_foreign__V_21_21, parse_tree__prog_foreign__V_22_22);
        }
#line 2199 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_12_12 == (MR_Integer) 0);
#line 44 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 44 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_12_12;
#line 44 "prog_foreign.m"
        else
#line 44 "prog_foreign.m"
          {
#line 44 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_13_13;
#line 44 "prog_foreign.m"
            MR_Integer parse_tree__prog_foreign__V_23_23 = (MR_Integer) parse_tree__prog_foreign__V_5_5;
#line 44 "prog_foreign.m"
            MR_Integer parse_tree__prog_foreign__V_24_24 = (MR_Integer) parse_tree__prog_foreign__V_9_9;

#line 44 "prog_foreign.m"
            {
#line 44 "prog_foreign.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_23_23, parse_tree__prog_foreign__V_24_24);
            }
#line 2223 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_13_13 == (MR_Integer) 0);
#line 44 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 44 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_13_13;
#line 44 "prog_foreign.m"
            else
#line 44 "prog_foreign.m"
              {
#line 44 "prog_foreign.m"
                MR_Word parse_tree__prog_foreign__V_14_14;

#line 44 "prog_foreign.m"
                {
#line 44 "prog_foreign.m"
                  parse_tree__prog_data____Compare____foreign_literal_or_include_0_0(&parse_tree__prog_foreign__V_14_14, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                }
#line 2243 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_14_14 == (MR_Integer) 0);
#line 44 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 44 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
                  *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_14_14;
#line 44 "prog_foreign.m"
                else
#line 44 "prog_foreign.m"
                  {
#line 44 "prog_foreign.m"
                    mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_7_7, parse_tree__prog_foreign__V_11_11);
#line 44 "prog_foreign.m"
                    return;
                  }
#line 44 "prog_foreign.m"
              }
#line 44 "prog_foreign.m"
          }
#line 44 "prog_foreign.m"
      }
#line 44 "prog_foreign.m"
  }
#line 44 "prog_foreign.m"
}

#line 44 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(
#line 44 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 44 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 44 "prog_foreign.m"
{
#line 44 "prog_foreign.m"
  {
#line 44 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 44 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_11 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 44 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 44 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_11 == parse_tree__prog_foreign__CastY_12);
#line 44 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 44 "prog_foreign.m"
    else
#line 44 "prog_foreign.m"
      {
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));

#line 2316 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_7_7);
#line 44 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
          {
#line 2322 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_4_4 == parse_tree__prog_foreign__V_8_8);
#line 44 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
              {
#line 2328 "parse_tree.prog_foreign.c"
                {
#line 2330 "parse_tree.prog_foreign.c"
                  parse_tree__prog_foreign__succeeded = parse_tree__prog_data____Unify____foreign_literal_or_include_0_0(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9);
                }
#line 44 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 2335 "parse_tree.prog_foreign.c"
                  {
#line 2337 "parse_tree.prog_foreign.c"
                    return parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                  }
#line 44 "prog_foreign.m"
              }
#line 44 "prog_foreign.m"
          }
#line 44 "prog_foreign.m"
      }
#line 44 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 44 "prog_foreign.m"
  }
#line 44 "prog_foreign.m"
}

#line 42 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0(
#line 42 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 42 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 42 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 42 "prog_foreign.m"
{
#line 42 "prog_foreign.m"
  {
#line 42 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 42 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 42 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 42 "prog_foreign.m"
    {
#line 42 "prog_foreign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[0], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
#line 42 "prog_foreign.m"
      return;
    }
#line 42 "prog_foreign.m"
  }
#line 42 "prog_foreign.m"
}

#line 42 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0(
#line 42 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 42 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 42 "prog_foreign.m"
{
#line 42 "prog_foreign.m"
  {
#line 42 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 42 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 42 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 42 "prog_foreign.m"
    {
#line 42 "prog_foreign.m"
      return parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[0], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
#line 42 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 42 "prog_foreign.m"
  }
#line 42 "prog_foreign.m"
}

#line 52 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0(
#line 52 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 52 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 52 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 52 "prog_foreign.m"
{
#line 52 "prog_foreign.m"
  {
#line 52 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 52 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 52 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_13 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 52 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_12 == parse_tree__prog_foreign__CastY_13);
#line 52 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 2439 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 52 "prog_foreign.m"
    else
#line 52 "prog_foreign.m"
      {
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10;
#line 52 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_17_17 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 52 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_18_18 = (MR_Integer) parse_tree__prog_foreign__V_7_7;

#line 52 "prog_foreign.m"
        {
#line 52 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_10_10, parse_tree__prog_foreign__V_17_17, parse_tree__prog_foreign__V_18_18);
        }
#line 2469 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_10_10 == (MR_Integer) 0);
#line 52 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 52 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 52 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_10_10;
#line 52 "prog_foreign.m"
        else
#line 52 "prog_foreign.m"
          {
#line 52 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_11_11;

#line 52 "prog_foreign.m"
            {
#line 52 "prog_foreign.m"
              parse_tree__prog_data____Compare____foreign_literal_or_include_0_0(&parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
            }
#line 2489 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_11_11 == (MR_Integer) 0);
#line 52 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 52 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 52 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_11_11;
#line 52 "prog_foreign.m"
            else
#line 52 "prog_foreign.m"
              {
#line 52 "prog_foreign.m"
                mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_9_9);
#line 52 "prog_foreign.m"
                return;
              }
#line 52 "prog_foreign.m"
          }
#line 52 "prog_foreign.m"
      }
#line 52 "prog_foreign.m"
  }
#line 52 "prog_foreign.m"
}

#line 52 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0(
#line 52 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 52 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 52 "prog_foreign.m"
{
#line 52 "prog_foreign.m"
  {
#line 52 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 52 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 52 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 52 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
#line 52 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 52 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 52 "prog_foreign.m"
    else
#line 52 "prog_foreign.m"
      {
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));

#line 2556 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_6_6);
#line 52 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 52 "prog_foreign.m"
          {
#line 2562 "parse_tree.prog_foreign.c"
            {
#line 2564 "parse_tree.prog_foreign.c"
              parse_tree__prog_foreign__succeeded = parse_tree__prog_data____Unify____foreign_literal_or_include_0_0(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_7_7);
            }
#line 52 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 2569 "parse_tree.prog_foreign.c"
              {
#line 2571 "parse_tree.prog_foreign.c"
                return parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
              }
#line 52 "prog_foreign.m"
          }
#line 52 "prog_foreign.m"
      }
#line 52 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 52 "prog_foreign.m"
  }
#line 52 "prog_foreign.m"
}

#line 453 "prog_foreign.m"
static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
#line 453 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3)
#line 453 "prog_foreign.m"
{
#line 464 "prog_foreign.m"
  {
#line 464 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 464 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_4;
#line 464 "prog_foreign.m"
    MR_Char parse_tree__prog_foreign__Char_5;
#line 464 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Rest_6;

#line 456 "prog_foreign.m"
    {
#line 456 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__first_char_3_p_3(parse_tree__prog_foreign__String_3, &parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Rest_6);
    }
#line 464 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 459 "prog_foreign.m"
      {
#line 459 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__Code_7;
#line 459 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__CodeString_8;
#line 459 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__ThisCharString_9;
#line 459 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name0_10;

#line 459 "prog_foreign.m"
        {
#line 459 "prog_foreign.m"
          mercury__char__to_int_2_p_0(parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Code_7);
        }
#line 460 "prog_foreign.m"
        {
#line 460 "prog_foreign.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_foreign__Code_7, &parse_tree__prog_foreign__CodeString_8);
        }
#line 461 "prog_foreign.m"
        {
#line 461 "prog_foreign.m"
          mercury__string__append_3_p_2((MR_String) "_", parse_tree__prog_foreign__CodeString_8, &parse_tree__prog_foreign__ThisCharString_9);
        }
#line 462 "prog_foreign.m"
        {
#line 462 "prog_foreign.m"
          parse_tree__prog_foreign__Name0_10 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__Rest_6);
        }
#line 463 "prog_foreign.m"
        {
#line 463 "prog_foreign.m"
          mercury__string__append_3_p_2(parse_tree__prog_foreign__ThisCharString_9, parse_tree__prog_foreign__Name0_10, &parse_tree__prog_foreign__Name_4);
        }
#line 459 "prog_foreign.m"
      }
#line 464 "prog_foreign.m"
    else
#line 466 "prog_foreign.m"
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__String_3;
#line 464 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_4;
#line 464 "prog_foreign.m"
  }
#line 453 "prog_foreign.m"
}

#line 342 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
#line 342 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 342 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 342 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr)
#line 342 "prog_foreign.m"
{
#line 344 "prog_foreign.m"
  {
#line 344 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 344 "prog_foreign.m"
    {
#line 344 "prog_foreign.m"
      MR_Integer parse_tree__prog_foreign__slot_0 = (MR_Integer) 0;

#line 344 "prog_foreign.m"
      do
#line 344 "prog_foreign.m"
        {
#line 344 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = ((&parse_tree__prog_foreign_vector_common_5[0 + parse_tree__prog_foreign__slot_0]))->parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
#line 344 "prog_foreign.m"
          {
#line 344 "prog_foreign.m"
            parse_tree__prog_foreign__cont(parse_tree__prog_foreign__cont_env_ptr);
          }
#line 344 "prog_foreign.m"
          parse_tree__prog_foreign__slot_0 = (parse_tree__prog_foreign__slot_0 + (MR_Integer) 1);
#line 344 "prog_foreign.m"
        }
#line 344 "prog_foreign.m"
      while ((parse_tree__prog_foreign__slot_0 < (MR_Integer) 5));
#line 344 "prog_foreign.m"
    }
#line 344 "prog_foreign.m"
  }
#line 342 "prog_foreign.m"
}

#line 185 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(
#line 185 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3)
#line 185 "prog_foreign.m"
{
#line 413 "prog_foreign.m"
  {
#line 413 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 413 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_4;
#line 413 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name0_5;

#line 428 "prog_foreign.m"
    if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "!") == 0))
#line 440 "prog_foreign.m"
      {
#line 440 "prog_foreign.m"
        parse_tree__prog_foreign__Name0_5 = (MR_String) "f_cut";
#line 440 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 440 "prog_foreign.m"
      }
#line 428 "prog_foreign.m"
    else
#line 428 "prog_foreign.m"
      if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "*") == 0))
#line 436 "prog_foreign.m"
        {
#line 436 "prog_foreign.m"
          parse_tree__prog_foreign__Name0_5 = (MR_String) "f_times";
#line 436 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 436 "prog_foreign.m"
        }
#line 428 "prog_foreign.m"
      else
#line 428 "prog_foreign.m"
        if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "+") == 0))
#line 435 "prog_foreign.m"
          {
#line 435 "prog_foreign.m"
            parse_tree__prog_foreign__Name0_5 = (MR_String) "f_plus";
#line 435 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 435 "prog_foreign.m"
          }
#line 428 "prog_foreign.m"
        else
#line 428 "prog_foreign.m"
          if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ",") == 0))
#line 438 "prog_foreign.m"
            {
#line 438 "prog_foreign.m"
              parse_tree__prog_foreign__Name0_5 = (MR_String) "f_comma";
#line 438 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 438 "prog_foreign.m"
            }
#line 428 "prog_foreign.m"
          else
#line 428 "prog_foreign.m"
            if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "-") == 0))
#line 434 "prog_foreign.m"
              {
#line 434 "prog_foreign.m"
                parse_tree__prog_foreign__Name0_5 = (MR_String) "f_minus";
#line 434 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 434 "prog_foreign.m"
              }
#line 428 "prog_foreign.m"
            else
#line 428 "prog_foreign.m"
              if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "/") == 0))
#line 437 "prog_foreign.m"
                {
#line 437 "prog_foreign.m"
                  parse_tree__prog_foreign__Name0_5 = (MR_String) "f_slash";
#line 437 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 437 "prog_foreign.m"
                }
#line 428 "prog_foreign.m"
              else
#line 428 "prog_foreign.m"
                if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ";") == 0))
#line 439 "prog_foreign.m"
                  {
#line 439 "prog_foreign.m"
                    parse_tree__prog_foreign__Name0_5 = (MR_String) "f_semicolon";
#line 439 "prog_foreign.m"
                    parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 439 "prog_foreign.m"
                  }
#line 428 "prog_foreign.m"
                else
#line 428 "prog_foreign.m"
                  if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "<") == 0))
#line 432 "prog_foreign.m"
                    {
#line 432 "prog_foreign.m"
                      parse_tree__prog_foreign__Name0_5 = (MR_String) "f_less_than";
#line 432 "prog_foreign.m"
                      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 432 "prog_foreign.m"
                    }
#line 428 "prog_foreign.m"
                  else
#line 428 "prog_foreign.m"
                    if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "=") == 0))
#line 431 "prog_foreign.m"
                      {
#line 431 "prog_foreign.m"
                        parse_tree__prog_foreign__Name0_5 = (MR_String) "f_equal";
#line 431 "prog_foreign.m"
                        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 431 "prog_foreign.m"
                      }
#line 428 "prog_foreign.m"
                    else
#line 428 "prog_foreign.m"
                      if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ">") == 0))
#line 433 "prog_foreign.m"
                        {
#line 433 "prog_foreign.m"
                          parse_tree__prog_foreign__Name0_5 = (MR_String) "f_greater_than";
#line 433 "prog_foreign.m"
                          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 433 "prog_foreign.m"
                        }
#line 428 "prog_foreign.m"
                      else
#line 428 "prog_foreign.m"
                        if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "=<") == 0))
#line 430 "prog_foreign.m"
                          {
#line 430 "prog_foreign.m"
                            parse_tree__prog_foreign__Name0_5 = (MR_String) "f_less_or_equal";
#line 430 "prog_foreign.m"
                            parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 430 "prog_foreign.m"
                          }
#line 428 "prog_foreign.m"
                        else
#line 428 "prog_foreign.m"
                          if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) ">=") == 0))
#line 429 "prog_foreign.m"
                            {
#line 429 "prog_foreign.m"
                              parse_tree__prog_foreign__Name0_5 = (MR_String) "f_greater_or_equal";
#line 429 "prog_foreign.m"
                              parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 429 "prog_foreign.m"
                            }
#line 428 "prog_foreign.m"
                          else
#line 428 "prog_foreign.m"
                            if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "[]") == 0))
#line 443 "prog_foreign.m"
                              {
#line 443 "prog_foreign.m"
                                parse_tree__prog_foreign__Name0_5 = (MR_String) "f_nil";
#line 443 "prog_foreign.m"
                                parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 443 "prog_foreign.m"
                              }
#line 428 "prog_foreign.m"
                            else
#line 428 "prog_foreign.m"
                              if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "\\=") == 0))
#line 428 "prog_foreign.m"
                                {
#line 428 "prog_foreign.m"
                                  parse_tree__prog_foreign__Name0_5 = (MR_String) "f_not_equal";
#line 428 "prog_foreign.m"
                                  parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 428 "prog_foreign.m"
                                }
#line 428 "prog_foreign.m"
                              else
#line 428 "prog_foreign.m"
                                if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "{}") == 0))
#line 441 "prog_foreign.m"
                                  {
#line 441 "prog_foreign.m"
                                    parse_tree__prog_foreign__Name0_5 = (MR_String) "f_tuple";
#line 441 "prog_foreign.m"
                                    parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 441 "prog_foreign.m"
                                  }
#line 428 "prog_foreign.m"
                                else
#line 428 "prog_foreign.m"
                                  if ((strcmp(parse_tree__prog_foreign__String_3, (MR_String) "[|]") == 0))
#line 442 "prog_foreign.m"
                                    {
#line 442 "prog_foreign.m"
                                      parse_tree__prog_foreign__Name0_5 = (MR_String) "f_cons";
#line 442 "prog_foreign.m"
                                      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 442 "prog_foreign.m"
                                    }
#line 428 "prog_foreign.m"
                                  else
#line 428 "prog_foreign.m"
                                    parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 413 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 412 "prog_foreign.m"
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__Name0_5;
#line 413 "prog_foreign.m"
    else
#line 414 "prog_foreign.m"
      {
#line 414 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_7_7;

#line 414 "prog_foreign.m"
        {
#line 414 "prog_foreign.m"
          parse_tree__prog_foreign__V_7_7 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__String_3);
        }
#line 414 "prog_foreign.m"
        {
#line 414 "prog_foreign.m"
          return parse_tree__prog_foreign__Name_4 = mercury__string__f_43_43_2_f_0((MR_String) "f", parse_tree__prog_foreign__V_7_7);
        }
#line 414 "prog_foreign.m"
      }
#line 413 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_4;
#line 413 "prog_foreign.m"
  }
#line 185 "prog_foreign.m"
}

#line 183 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__qualify_name_2_f_0(
#line 183 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Module0_4,
#line 183 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name0_5)
#line 183 "prog_foreign.m"
{
#line 407 "prog_foreign.m"
  {
#line 407 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 407 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_6;
#line 407 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7;
#line 407 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_8_8;
#line 407 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_10_10;

#line 408 "prog_foreign.m"
    {
#line 408 "prog_foreign.m"
      parse_tree__prog_foreign__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_10_10, 0) = ((MR_Box) (parse_tree__prog_foreign__Name0_5));
#line 408 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "prog_foreign.m"
    }
#line 408 "prog_foreign.m"
    {
#line 408 "prog_foreign.m"
      parse_tree__prog_foreign__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_8_8, 0) = ((MR_Box) ((MR_String) "__"));
#line 408 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_8_8, 1) = ((MR_Box) (parse_tree__prog_foreign__V_10_10));
#line 408 "prog_foreign.m"
    }
#line 408 "prog_foreign.m"
    {
#line 408 "prog_foreign.m"
      parse_tree__prog_foreign__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_7_7, 0) = ((MR_Box) (parse_tree__prog_foreign__Module0_4));
#line 408 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_7_7, 1) = ((MR_Box) (parse_tree__prog_foreign__V_8_8));
#line 408 "prog_foreign.m"
    }
#line 408 "prog_foreign.m"
    {
#line 408 "prog_foreign.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_foreign__V_7_7, &parse_tree__prog_foreign__Name_6);
    }
#line 407 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_6;
#line 407 "prog_foreign.m"
  }
#line 183 "prog_foreign.m"
}

#line 179 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(
#line 179 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name_3)
#line 179 "prog_foreign.m"
{
#line 403 "prog_foreign.m"
  {
#line 403 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 403 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;
#line 383 "prog_foreign.m"
    MR_Char parse_tree__prog_foreign__FirstChar_8;
#line 383 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__V_10_10;

#line 383 "prog_foreign.m"
    {
#line 383 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
#line 383 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 383 "prog_foreign.m"
      {
#line 390 "prog_foreign.m"
        parse_tree__prog_foreign__V_10_10 = (MR_Integer) 0;
#line 390 "prog_foreign.m"
        {
#line 390 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__index_3_p_0(parse_tree__prog_foreign__Name_3, parse_tree__prog_foreign__V_10_10, &parse_tree__prog_foreign__FirstChar_8);
        }
#line 383 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 383 "prog_foreign.m"
          {
#line 391 "prog_foreign.m"
            {
#line 391 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = mercury__char__is_digit_1_p_0(parse_tree__prog_foreign__FirstChar_8);
            }
#line 391 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 383 "prog_foreign.m"
          }
#line 383 "prog_foreign.m"
      }
#line 403 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 400 "prog_foreign.m"
      {
#line 400 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Suffix_9;

#line 398 "prog_foreign.m"
        {
#line 398 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
#line 400 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 399 "prog_foreign.m"
          {
#line 399 "prog_foreign.m"
            {
#line 399 "prog_foreign.m"
              return parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
#line 399 "prog_foreign.m"
          }
#line 400 "prog_foreign.m"
        else
#line 401 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
#line 400 "prog_foreign.m"
      }
#line 403 "prog_foreign.m"
    else
#line 404 "prog_foreign.m"
      {
#line 404 "prog_foreign.m"
        return parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
#line 403 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 403 "prog_foreign.m"
  }
#line 179 "prog_foreign.m"
}

#line 174 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_1_f_0(
#line 174 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name_3)
#line 174 "prog_foreign.m"
{
#line 403 "prog_foreign.m"
  {
#line 403 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 403 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 383 "prog_foreign.m"
    {
#line 383 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
#line 403 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 400 "prog_foreign.m"
      {
#line 400 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Suffix_9;

#line 398 "prog_foreign.m"
        {
#line 398 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
#line 400 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 399 "prog_foreign.m"
          {
#line 399 "prog_foreign.m"
            {
#line 399 "prog_foreign.m"
              return parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
#line 399 "prog_foreign.m"
          }
#line 400 "prog_foreign.m"
        else
#line 401 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
#line 400 "prog_foreign.m"
      }
#line 403 "prog_foreign.m"
    else
#line 404 "prog_foreign.m"
      {
#line 404 "prog_foreign.m"
        return parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
#line 403 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 403 "prog_foreign.m"
  }
#line 174 "prog_foreign.m"
}

#line 169 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__sym_name_mangle_1_f_0(
#line 169 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 169 "prog_foreign.m"
{
#line 364 "prog_foreign.m"
  {
#line 364 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 364 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 364 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 366 "prog_foreign.m"
      {
#line 366 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 366 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__PlainName_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 366 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__MangledModuleName_7;
#line 366 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__MangledPlainName_8;
#line 366 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 366 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_13_13;
#line 366 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_15_15;

#line 367 "prog_foreign.m"
        {
#line 367 "prog_foreign.m"
          parse_tree__prog_foreign__MangledModuleName_7 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_4);
        }
#line 368 "prog_foreign.m"
        {
#line 368 "prog_foreign.m"
          parse_tree__prog_foreign__MangledPlainName_8 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__PlainName_5);
        }
#line 408 "prog_foreign.m"
        {
#line 408 "prog_foreign.m"
          parse_tree__prog_foreign__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_15_15, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledPlainName_8));
#line 408 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "prog_foreign.m"
        }
#line 408 "prog_foreign.m"
        {
#line 408 "prog_foreign.m"
          parse_tree__prog_foreign__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_13_13, 0) = ((MR_Box) ((MR_String) "__"));
#line 408 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_13_13, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 408 "prog_foreign.m"
        }
#line 408 "prog_foreign.m"
        {
#line 408 "prog_foreign.m"
          parse_tree__prog_foreign__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_12_12, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledModuleName_7));
#line 408 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_12_12, 1) = ((MR_Box) (parse_tree__prog_foreign__V_13_13));
#line 408 "prog_foreign.m"
        }
#line 408 "prog_foreign.m"
        {
#line 408 "prog_foreign.m"
          mercury__string__append_list_2_p_0(parse_tree__prog_foreign__V_12_12, &parse_tree__prog_foreign__HeadVar__2_2);
        }
#line 366 "prog_foreign.m"
      }
#line 364 "prog_foreign.m"
    else
#line 364 "prog_foreign.m"
      {
#line 364 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));

#line 365 "prog_foreign.m"
        {
#line 365 "prog_foreign.m"
          return parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__Name_3);
        }
#line 364 "prog_foreign.m"
      }
#line 364 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 364 "prog_foreign.m"
  }
#line 169 "prog_foreign.m"
}

#line 164 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__make_init_name_1_f_0(
#line 164 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_3)
#line 164 "prog_foreign.m"
{
#line 360 "prog_foreign.m"
  {
#line 360 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 360 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__InitName_4;
#line 360 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__MangledModuleName_5;
#line 360 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_7_7;

#line 361 "prog_foreign.m"
    {
#line 361 "prog_foreign.m"
      parse_tree__prog_foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_3);
    }
#line 362 "prog_foreign.m"
    {
#line 362 "prog_foreign.m"
      parse_tree__prog_foreign__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__MangledModuleName_5, (MR_String) "__");
    }
#line 362 "prog_foreign.m"
    {
#line 362 "prog_foreign.m"
      return parse_tree__prog_foreign__InitName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", parse_tree__prog_foreign__V_7_7);
    }
#line 360 "prog_foreign.m"
    return parse_tree__prog_foreign__InitName_4;
#line 360 "prog_foreign.m"
  }
#line 164 "prog_foreign.m"
}

#line 155 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_type_language_1_f_0(
#line 155 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 155 "prog_foreign.m"
{
#line 352 "prog_foreign.m"
  {
#line 352 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 352 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__HeadVar__2_2;

#line 352 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 353 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 0;
#line 352 "prog_foreign.m"
    else
#line 352 "prog_foreign.m"
      if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 352 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 3;
#line 352 "prog_foreign.m"
      else
#line 352 "prog_foreign.m"
        if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 354 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 2;
#line 352 "prog_foreign.m"
        else
#line 352 "prog_foreign.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 355 "prog_foreign.m"
            parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 1;
#line 352 "prog_foreign.m"
          else
#line 356 "prog_foreign.m"
            parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 4;
#line 352 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 352 "prog_foreign.m"
  }
#line 155 "prog_foreign.m"
}

#line 337 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
#line 337 "prog_foreign.m"
  void * parse_tree__prog_foreign__env_ptr_arg)
#line 337 "prog_foreign.m"
{
#line 337 "prog_foreign.m"
  {
#line 337 "prog_foreign.m"
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s * parse_tree__prog_foreign__env_ptr = (struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s *) parse_tree__prog_foreign__env_ptr_arg;

#line 337 "prog_foreign.m"
    *((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1));
#line 337 "prog_foreign.m"
    {
#line 337 "prog_foreign.m"
      ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont)((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr);
#line 337 "prog_foreign.m"
      return;
    }
#line 337 "prog_foreign.m"
  }
#line 337 "prog_foreign.m"
}

#line 337 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
#line 337 "prog_foreign.m"
  MR_Box parse_tree__prog_foreign__closure_arg,
#line 337 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 337 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 337 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr)
#line 337 "prog_foreign.m"
{
#line 337 "prog_foreign.m"
  {
#line 337 "prog_foreign.m"
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s parse_tree__prog_foreign__env;

#line 337 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1 = parse_tree__prog_foreign__wrapper_arg_1;
#line 337 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont = parse_tree__prog_foreign__cont;
#line 337 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr = parse_tree__prog_foreign__cont_env_ptr;
#line 337 "prog_foreign.m"
    {
#line 337 "prog_foreign.m"
      MR_Box parse_tree__prog_foreign__closure = parse_tree__prog_foreign__closure_arg;

#line 337 "prog_foreign.m"
      {
#line 337 "prog_foreign.m"
        parse_tree__prog_foreign__valid_foreign_language_1_p_1(&(parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1, parse_tree__prog_foreign__all_foreign_languages_0_f_0_1, &parse_tree__prog_foreign__env);
      }
#line 337 "prog_foreign.m"
    }
#line 337 "prog_foreign.m"
  }
#line 337 "prog_foreign.m"
}

#line 153 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0(void)
#line 153 "prog_foreign.m"
{
#line 336 "prog_foreign.m"
  {
#line 336 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 336 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Langs_2;

#line 338 "prog_foreign.m"
    {
#line 338 "prog_foreign.m"
      mercury__solutions__solutions_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &parse_tree__prog_foreign_scalar_common_4[0], &parse_tree__prog_foreign__Langs_2);
    }
#line 336 "prog_foreign.m"
    return parse_tree__prog_foreign__Langs_2;
#line 336 "prog_foreign.m"
  }
#line 153 "prog_foreign.m"
}

#line 148 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__prefer_foreign_language_4_f_0(
#line 148 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign___Globals_1,
#line 148 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 148 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3,
#line 148 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__4_4)
#line 148 "prog_foreign.m"
{
#line 297 "prog_foreign.m"
  {
#line 297 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 297 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__HeadVar__5_5;

#line 297 "prog_foreign.m"
    {
#line 297 "prog_foreign.m"
      return parse_tree__prog_foreign__HeadVar__5_5 = parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(parse_tree__prog_foreign__HeadVar__2_2, parse_tree__prog_foreign__HeadVar__3_3, parse_tree__prog_foreign__HeadVar__4_4);
    }
#line 297 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__5_5;
#line 297 "prog_foreign.m"
  }
#line 148 "prog_foreign.m"
}

#line 137 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_1(
#line 137 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 137 "prog_foreign.m"
{
#line 285 "prog_foreign.m"
  {
#line 285 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 285 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 285 "prog_foreign.m"
    if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 0))
#line 285 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
#line 285 "prog_foreign.m"
    else
#line 286 "prog_foreign.m"
      parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
#line 285 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 285 "prog_foreign.m"
  }
#line 137 "prog_foreign.m"
}

#line 136 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(
#line 136 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 136 "prog_foreign.m"
  MR_String * parse_tree__prog_foreign__HeadVar__2_2)
#line 136 "prog_foreign.m"
{
#line 285 "prog_foreign.m"
  {
#line 285 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 285 "prog_foreign.m"
    if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 0))
#line 285 "prog_foreign.m"
      {
#line 285 "prog_foreign.m"
        *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
#line 285 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 285 "prog_foreign.m"
      }
#line 285 "prog_foreign.m"
    else
#line 285 "prog_foreign.m"
      if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 1))
#line 286 "prog_foreign.m"
        {
#line 286 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
#line 286 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 286 "prog_foreign.m"
        }
#line 285 "prog_foreign.m"
      else
#line 285 "prog_foreign.m"
        if ((parse_tree__prog_foreign__HeadVar__1_1 == (MR_Integer) 2))
#line 287 "prog_foreign.m"
          {
#line 287 "prog_foreign.m"
            *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".java";
#line 287 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 287 "prog_foreign.m"
          }
#line 285 "prog_foreign.m"
        else
#line 285 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 285 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 285 "prog_foreign.m"
  }
#line 136 "prog_foreign.m"
}

#line 129 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_1(
#line 129 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_4,
#line 129 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_5)
#line 129 "prog_foreign.m"
{
#line 270 "prog_foreign.m"
  {
#line 270 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 270 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__FullyQualifiedModuleName_6;
#line 270 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Ending_8;
#line 270 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_12_12;
#line 270 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_13_13;

#line 274 "prog_foreign.m"
    {
#line 274 "prog_foreign.m"
      parse_tree__prog_foreign__V_13_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
    }
#line 274 "prog_foreign.m"
    {
#line 274 "prog_foreign.m"
      parse_tree__prog_foreign__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_13_13, (MR_String) "_code");
    }
#line 274 "prog_foreign.m"
    {
#line 274 "prog_foreign.m"
      parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_foreign__V_12_12);
    }
#line 278 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 279 "prog_foreign.m"
      {
#line 279 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 279 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_15_15;
#line 279 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

#line 280 "prog_foreign.m"
        {
#line 280 "prog_foreign.m"
          parse_tree__prog_foreign__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
        }
#line 280 "prog_foreign.m"
        {
#line 280 "prog_foreign.m"
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
#line 280 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 280 "prog_foreign.m"
        }
#line 279 "prog_foreign.m"
      }
#line 278 "prog_foreign.m"
    else
#line 276 "prog_foreign.m"
      {
#line 276 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 276 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_16_16;

#line 277 "prog_foreign.m"
        {
#line 277 "prog_foreign.m"
          parse_tree__prog_foreign__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
        }
#line 277 "prog_foreign.m"
        {
#line 277 "prog_foreign.m"
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 277 "prog_foreign.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__V_16_16));
#line 277 "prog_foreign.m"
        }
#line 276 "prog_foreign.m"
      }
#line 270 "prog_foreign.m"
    return parse_tree__prog_foreign__FullyQualifiedModuleName_6;
#line 270 "prog_foreign.m"
  }
#line 129 "prog_foreign.m"
}

#line 128 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_0(
#line 128 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_4,
#line 128 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_5,
#line 128 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__FullyQualifiedModuleName_6)
#line 128 "prog_foreign.m"
{
#line 270 "prog_foreign.m"
  {
#line 270 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 270 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Ending_8;
#line 270 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_11_11;
#line 270 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_12_12;
#line 270 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_13_13;
#line 270 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_14_14;

#line 285 "prog_foreign.m"
    if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 0))
#line 285 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 285 "prog_foreign.m"
    else
#line 285 "prog_foreign.m"
      if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 1))
#line 286 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 285 "prog_foreign.m"
      else
#line 285 "prog_foreign.m"
        if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 2))
#line 287 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 285 "prog_foreign.m"
        else
#line 285 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 270 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 270 "prog_foreign.m"
      {
#line 274 "prog_foreign.m"
        parse_tree__prog_foreign__V_11_11 = (MR_String) "__";
#line 274 "prog_foreign.m"
        {
#line 274 "prog_foreign.m"
          parse_tree__prog_foreign__V_13_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
        }
#line 274 "prog_foreign.m"
        parse_tree__prog_foreign__V_14_14 = (MR_String) "_code";
#line 274 "prog_foreign.m"
        {
#line 274 "prog_foreign.m"
          parse_tree__prog_foreign__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_14_14);
        }
#line 274 "prog_foreign.m"
        {
#line 274 "prog_foreign.m"
          parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_12_12);
        }
#line 278 "prog_foreign.m"
        if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 279 "prog_foreign.m"
          {
#line 279 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 279 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__V_15_15;
#line 279 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

#line 280 "prog_foreign.m"
            {
#line 280 "prog_foreign.m"
              parse_tree__prog_foreign__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
            }
#line 280 "prog_foreign.m"
            {
#line 280 "prog_foreign.m"
              MR_Word base;
#line 280 "prog_foreign.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "prog_foreign.m"
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
#line 280 "prog_foreign.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
#line 280 "prog_foreign.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 280 "prog_foreign.m"
            }
#line 279 "prog_foreign.m"
          }
#line 278 "prog_foreign.m"
        else
#line 276 "prog_foreign.m"
          {
#line 276 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 276 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__V_16_16;

#line 277 "prog_foreign.m"
            {
#line 277 "prog_foreign.m"
              parse_tree__prog_foreign__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
            }
#line 277 "prog_foreign.m"
            {
#line 277 "prog_foreign.m"
              MR_Word base;
#line 277 "prog_foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 277 "prog_foreign.m"
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
#line 277 "prog_foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_foreign__V_16_16));
#line 277 "prog_foreign.m"
            }
#line 276 "prog_foreign.m"
          }
#line 278 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 270 "prog_foreign.m"
      }
#line 270 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 270 "prog_foreign.m"
  }
#line 128 "prog_foreign.m"
}

#line 112 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(
#line 112 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleForeignImported_4,
#line 112 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__CurrentModule_5)
#line 112 "prog_foreign.m"
{
#line 227 "prog_foreign.m"
  {
#line 227 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 227 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
#line 227 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 0)));
#line 227 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ForeignImportModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 1)));
#line 228 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 2)));

#line 3819 "parse_tree.prog_foreign.c"
    if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 0))
#line 233 "prog_foreign.m"
      parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 3823 "parse_tree.prog_foreign.c"
    else
#line 3825 "parse_tree.prog_foreign.c"
      if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 1))
#line 3827 "parse_tree.prog_foreign.c"
        {
#line 3829 "parse_tree.prog_foreign.c"
          MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32;

#line 223 "prog_foreign.m"
          {
#line 223 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_14, parse_tree__prog_foreign__Lang_13);
          }
#line 260 "prog_foreign.m"
          {
#line 260 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32);
          }
#line 260 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 260 "prog_foreign.m"
            {
#line 261 "prog_foreign.m"
              {
#line 261 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
#line 261 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 260 "prog_foreign.m"
            }
#line 264 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 263 "prog_foreign.m"
            {
#line 263 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 263 "prog_foreign.m"
            }
#line 264 "prog_foreign.m"
          else
#line 265 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ImportedForeignCodeModuleName1_32;
#line 3867 "parse_tree.prog_foreign.c"
        }
#line 3869 "parse_tree.prog_foreign.c"
      else
#line 3871 "parse_tree.prog_foreign.c"
        if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 4))
#line 264 "prog_foreign.m"
          {
#line 260 "prog_foreign.m"
            {
#line 260 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_14);
            }
#line 260 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 260 "prog_foreign.m"
              {
#line 261 "prog_foreign.m"
                {
#line 261 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
                }
#line 261 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 260 "prog_foreign.m"
              }
#line 264 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 263 "prog_foreign.m"
              {
#line 263 "prog_foreign.m"
                parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 263 "prog_foreign.m"
              }
#line 264 "prog_foreign.m"
            else
#line 265 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 264 "prog_foreign.m"
          }
#line 3907 "parse_tree.prog_foreign.c"
        else
#line 3909 "parse_tree.prog_foreign.c"
          if ((parse_tree__prog_foreign__Lang_13 == (MR_Integer) 3))
#line 264 "prog_foreign.m"
            {
#line 260 "prog_foreign.m"
              {
#line 260 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_14);
              }
#line 260 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 260 "prog_foreign.m"
                {
#line 261 "prog_foreign.m"
                  {
#line 261 "prog_foreign.m"
                    parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
                  }
#line 261 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 260 "prog_foreign.m"
                }
#line 264 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 263 "prog_foreign.m"
                {
#line 263 "prog_foreign.m"
                  parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 263 "prog_foreign.m"
                }
#line 264 "prog_foreign.m"
              else
#line 265 "prog_foreign.m"
                parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 264 "prog_foreign.m"
            }
#line 3945 "parse_tree.prog_foreign.c"
          else
#line 264 "prog_foreign.m"
            {
#line 260 "prog_foreign.m"
              {
#line 260 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_14);
              }
#line 260 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 260 "prog_foreign.m"
                {
#line 261 "prog_foreign.m"
                  {
#line 261 "prog_foreign.m"
                    parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
                  }
#line 261 "prog_foreign.m"
                  parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 260 "prog_foreign.m"
                }
#line 264 "prog_foreign.m"
              if (parse_tree__prog_foreign__succeeded)
#line 263 "prog_foreign.m"
                {
#line 263 "prog_foreign.m"
                  parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 263 "prog_foreign.m"
                }
#line 264 "prog_foreign.m"
              else
#line 265 "prog_foreign.m"
                parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_14;
#line 264 "prog_foreign.m"
            }
#line 227 "prog_foreign.m"
    return parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
#line 227 "prog_foreign.m"
  }
#line 112 "prog_foreign.m"
}

#line 105 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_1_f_0(
#line 105 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ImportModule_3)
#line 105 "prog_foreign.m"
{
#line 207 "prog_foreign.m"
  {
#line 207 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 207 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ModuleName_4;
#line 207 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Lang_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 0)));
#line 207 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ForeignImportModule_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 1)));
#line 208 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 2)));

#line 212 "prog_foreign.m"
    if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 0))
#line 211 "prog_foreign.m"
      parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 212 "prog_foreign.m"
    else
#line 212 "prog_foreign.m"
      if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 1))
#line 223 "prog_foreign.m"
        {
#line 223 "prog_foreign.m"
          return parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_6, parse_tree__prog_foreign__Lang_5);
        }
#line 212 "prog_foreign.m"
      else
#line 212 "prog_foreign.m"
        if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 4))
#line 220 "prog_foreign.m"
          parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 212 "prog_foreign.m"
        else
#line 212 "prog_foreign.m"
          if ((parse_tree__prog_foreign__Lang_5 == (MR_Integer) 3))
#line 214 "prog_foreign.m"
            parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 212 "prog_foreign.m"
          else
#line 217 "prog_foreign.m"
            parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 207 "prog_foreign.m"
    return parse_tree__prog_foreign__ModuleName_4;
#line 207 "prog_foreign.m"
  }
#line 105 "prog_foreign.m"
}

#line 93 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_body_code_is_for_lang_2_p_0(
#line 93 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_3,
#line 93 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__BodyCode_4)
#line 93 "prog_foreign.m"
{
#line 205 "prog_foreign.m"
  {
#line 205 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 205 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 0)));
#line 205 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 1)));
#line 205 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 2)));

#line 205 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang_3 == parse_tree__prog_foreign__V_7_7);
#line 205 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 205 "prog_foreign.m"
  }
#line 93 "prog_foreign.m"
}

#line 91 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_decl_code_is_for_lang_2_p_0(
#line 91 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_3,
#line 91 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__DeclCode_4)
#line 91 "prog_foreign.m"
{
#line 202 "prog_foreign.m"
  {
#line 202 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 202 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 0)));
#line 202 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 1)));
#line 202 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 2)));
#line 202 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 3)));

#line 202 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang_3 == parse_tree__prog_foreign__V_8_8);
#line 202 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 202 "prog_foreign.m"
  }
#line 91 "prog_foreign.m"
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
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_codes_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_codes_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defns_0);
}

void mercury__parse_tree__prog_foreign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_foreign. */
