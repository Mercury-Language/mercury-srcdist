/*
** Automatically generated from `const_struct.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module hlds.const_struct. */
/* :- implementation. */

/*
INIT mercury__hlds__const_struct__init
ENDINIT
*/

#include "hlds.const_struct.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

#line 142 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0[5];

#line 145 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0[5];

#line 148 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0;

#line 151 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0[1];

#line 154 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0[1];

#line 157 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0[1];

#line 160 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0[1];

#line 163 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 166 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0[3];

#line 169 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0;

#line 172 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0[1];

#line 175 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0[1];

#line 178 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0[1];

#line 181 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0[1];

#line 184 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0;

#line 187 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0[4];

#line 190 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0[4];

#line 193 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0;

#line 196 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0[1];

#line 199 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0[1];

#line 202 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0[1];

#line 205 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0[1];

#line 208 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0[1];

#line 211 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0;

#line 214 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1[2];

#line 217 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1;

#line 220 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0[1];

#line 223 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_1[1];

#line 226 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_arg_0[2];

#line 229 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0[2];

#line 232 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0[2];

#line 235 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0;

#line 238 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_0builtin__type_ctor_info_int_0;

#line 241 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0;

#line 244 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0[7];

#line 247 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0[7];

#line 250 "hlds.const_struct.c"
static const MR_DuArgLocn hlds__const_struct__hlds__const_struct__field_locns_const_struct_db_0_0[7];

#line 253 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0;

#line 256 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0[1];

#line 259 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0[1];

#line 262 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0[1];

#line 265 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0[1];

#line 268 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0_10001(
#line 271 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 273 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 276 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0_10001(
#line 279 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 281 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 283 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 286 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0_10001(
#line 289 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 291 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 294 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0_10001(
#line 297 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 299 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 301 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 304 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0_10001(
#line 307 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 309 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 312 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0_10001(
#line 315 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 317 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 319 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 322 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0_10001(
#line 325 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 327 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 330 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0_10001(
#line 333 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 335 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 337 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 340 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0_10001(
#line 343 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 345 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 348 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0_10001(
#line 351 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 353 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 355 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 358 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0_10001(
#line 361 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 363 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 366 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0_10001(
#line 369 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 371 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 373 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 295 "const_struct.m"
static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0(
#line 295 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__1_1,
#line 295 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2,
#line 295 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__3_3);

#line 295 "const_struct.m"
static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0(
#line 295 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__1_1,
#line 295 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2);

#line 339 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_num_map_3_p_0(
#line 339 "const_struct.m"
  MR_Word hlds__const_struct__NumMap_4,
#line 339 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 339 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

#line 337 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(
#line 337 "const_struct.m"
  MR_Word hlds__const_struct__OtherMap_4,
#line 337 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 337 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

#line 335 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(
#line 335 "const_struct.m"
  MR_Word hlds__const_struct__ConsMap_4,
#line 335 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 335 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

#line 333 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_next_num_3_p_0(
#line 333 "const_struct.m"
  MR_Integer hlds__const_struct__Num_4,
#line 333 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 333 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

#line 320 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_num_map_2_p_0(
#line 320 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 320 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__2_2);

#line 318 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(
#line 318 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 318 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__2_2);

#line 315 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_next_num_2_p_0(
#line 315 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 315 "const_struct.m"
  MR_Integer * hlds__const_struct__HeadVar__2_2);


static /* final */ const MR_Box hlds__const_struct_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__const_struct_scalar_common_2[4][3];




static /* final */ const MR_Box hlds__const_struct_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__const_struct_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 515 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0
  }
};

#line 523 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 532 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0[5] = {
  (MR_String) "cps_name",
  (MR_String) "cps_args",
  (MR_String) "cps_cons_id",
  (MR_String) "cps_term_type",
  (MR_String) "cps_term_inst"
};

#line 541 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0 = {
  (MR_String) "cons_proxy_struct",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0,
  hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0,
  NULL,
  NULL
};

#line 556 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0
};

#line 561 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0
  }
};

#line 570 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0
};

#line 575 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0[1] = {
  (MR_Integer) 0
};

#line 580 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____cons_proxy_struct_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____cons_proxy_struct_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "cons_proxy_struct",
  {     hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0 },
  {     hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0
};

#line 597 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 605 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 612 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0 = {
  (MR_String) "ciid",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 627 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0
};

#line 632 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0
  }
};

#line 641 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0
};

#line 646 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0[1] = {
  (MR_Integer) 0
};

#line 651 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_instance_id_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_instance_id_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_instance_id",
  {     hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0 },
  {     hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0
};

#line 668 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 677 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__const_struct____Unify____const_instance_map_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_instance_map_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_instance_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 694 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 702 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0[4] = {
  (MR_String) "cs_cons_id",
  (MR_String) "cs_args",
  (MR_String) "cs_term_type",
  (MR_String) "cs_term_inst"
};

#line 710 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0 = {
  (MR_String) "const_struct",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0,
  hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0,
  NULL,
  NULL
};

#line 725 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0
};

#line 730 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0
  }
};

#line 739 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0
};

#line 744 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0[1] = {
  (MR_Integer) 0
};

#line 749 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct",
  {     hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0 },
  {     hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0
};

#line 766 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 771 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0 = {
  (MR_String) "csa_const_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0,
  NULL,
  NULL,
  NULL
};

#line 786 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 792 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1 = {
  (MR_String) "csa_constant",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1,
  NULL,
  NULL,
  NULL
};

#line 807 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0
};

#line 812 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_1[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1
};

#line 817 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_arg_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_1
  }
};

#line 831 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0[2] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0,
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1
};

#line 837 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 843 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_arg_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_arg_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct_arg",
  {     hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0 },
  {     hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_arg_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0
};

#line 860 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 869 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 878 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

#line 887 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0
};

#line 898 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0[7] = {
  (MR_String) "csdb_poly_enabled",
  (MR_String) "csdb_ground_term_enabled",
  (MR_String) "csdb_next_num",
  (MR_String) "csdb_cons_proxy_map",
  (MR_String) "csdb_other_struct_map",
  (MR_String) "csdb_num_map",
  (MR_String) "csdb_instance_map"
};

#line 909 "hlds.const_struct.c"
static const MR_DuArgLocn hlds__const_struct__hlds__const_struct__field_locns_const_struct_db_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 948 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0 = {
  (MR_String) "const_struct_db",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0,
  hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0,
  hlds__const_struct__hlds__const_struct__field_locns_const_struct_db_0_0,
  NULL
};

#line 963 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0
};

#line 968 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0
  }
};

#line 977 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0
};

#line 982 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0[1] = {
  (MR_Integer) 0
};

#line 987 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_db_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_db_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct_db",
  {     hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0 },
  {     hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0
};

#line 1004 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0_10001(
#line 1007 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1009 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1011 "hlds.const_struct.c"
{
#line 1013 "hlds.const_struct.c"
  {
#line 1015 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1018 "hlds.const_struct.c"
    {
#line 1020 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____cons_proxy_struct_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1023 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1025 "hlds.const_struct.c"
  }
#line 1027 "hlds.const_struct.c"
}

#line 1030 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0_10001(
#line 1033 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1035 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1037 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1039 "hlds.const_struct.c"
{
#line 1041 "hlds.const_struct.c"
  {
#line 1043 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1046 "hlds.const_struct.c"
    {
#line 1048 "hlds.const_struct.c"
      hlds__const_struct____Compare____cons_proxy_struct_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1051 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1053 "hlds.const_struct.c"
  }
#line 1055 "hlds.const_struct.c"
}

#line 1058 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0_10001(
#line 1061 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1063 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1065 "hlds.const_struct.c"
{
#line 1067 "hlds.const_struct.c"
  {
#line 1069 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1072 "hlds.const_struct.c"
    {
#line 1074 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_instance_id_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1077 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1079 "hlds.const_struct.c"
  }
#line 1081 "hlds.const_struct.c"
}

#line 1084 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0_10001(
#line 1087 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1089 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1091 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1093 "hlds.const_struct.c"
{
#line 1095 "hlds.const_struct.c"
  {
#line 1097 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1100 "hlds.const_struct.c"
    {
#line 1102 "hlds.const_struct.c"
      hlds__const_struct____Compare____const_instance_id_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1105 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1107 "hlds.const_struct.c"
  }
#line 1109 "hlds.const_struct.c"
}

#line 1112 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0_10001(
#line 1115 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1117 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1119 "hlds.const_struct.c"
{
#line 1121 "hlds.const_struct.c"
  {
#line 1123 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1126 "hlds.const_struct.c"
    {
#line 1128 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_instance_map_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1131 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1133 "hlds.const_struct.c"
  }
#line 1135 "hlds.const_struct.c"
}

#line 1138 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0_10001(
#line 1141 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1143 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1145 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1147 "hlds.const_struct.c"
{
#line 1149 "hlds.const_struct.c"
  {
#line 1151 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1154 "hlds.const_struct.c"
    {
#line 1156 "hlds.const_struct.c"
      hlds__const_struct____Compare____const_instance_map_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1159 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1161 "hlds.const_struct.c"
  }
#line 1163 "hlds.const_struct.c"
}

#line 1166 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0_10001(
#line 1169 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1171 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1173 "hlds.const_struct.c"
{
#line 1175 "hlds.const_struct.c"
  {
#line 1177 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1180 "hlds.const_struct.c"
    {
#line 1182 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_struct_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1185 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1187 "hlds.const_struct.c"
  }
#line 1189 "hlds.const_struct.c"
}

#line 1192 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0_10001(
#line 1195 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1197 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1199 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1201 "hlds.const_struct.c"
{
#line 1203 "hlds.const_struct.c"
  {
#line 1205 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1208 "hlds.const_struct.c"
    {
#line 1210 "hlds.const_struct.c"
      hlds__const_struct____Compare____const_struct_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1213 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1215 "hlds.const_struct.c"
  }
#line 1217 "hlds.const_struct.c"
}

#line 1220 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0_10001(
#line 1223 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1225 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1227 "hlds.const_struct.c"
{
#line 1229 "hlds.const_struct.c"
  {
#line 1231 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1234 "hlds.const_struct.c"
    {
#line 1236 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_struct_arg_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1239 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1241 "hlds.const_struct.c"
  }
#line 1243 "hlds.const_struct.c"
}

#line 1246 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0_10001(
#line 1249 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1251 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1253 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1255 "hlds.const_struct.c"
{
#line 1257 "hlds.const_struct.c"
  {
#line 1259 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1262 "hlds.const_struct.c"
    {
#line 1264 "hlds.const_struct.c"
      hlds__const_struct____Compare____const_struct_arg_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1267 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1269 "hlds.const_struct.c"
  }
#line 1271 "hlds.const_struct.c"
}

#line 1274 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0_10001(
#line 1277 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1279 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1281 "hlds.const_struct.c"
{
#line 1283 "hlds.const_struct.c"
  {
#line 1285 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1288 "hlds.const_struct.c"
    {
#line 1290 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_struct_db_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1293 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1295 "hlds.const_struct.c"
  }
#line 1297 "hlds.const_struct.c"
}

#line 1300 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0_10001(
#line 1303 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1305 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1307 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1309 "hlds.const_struct.c"
{
#line 1311 "hlds.const_struct.c"
  {
#line 1313 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1316 "hlds.const_struct.c"
    {
#line 1318 "hlds.const_struct.c"
      hlds__const_struct____Compare____const_struct_db_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1321 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1323 "hlds.const_struct.c"
  }
#line 1325 "hlds.const_struct.c"
}

#line 304 "const_struct.m"
void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0(
#line 304 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__1_1,
#line 304 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2,
#line 304 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__3_3)
#line 304 "const_struct.m"
{
#line 304 "const_struct.m"
  {
#line 304 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 304 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_24 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
#line 304 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_25 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

#line 304 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_24 == hlds__const_struct__CastY_25);
#line 304 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 1352 "hlds.const_struct.c"
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
#line 304 "const_struct.m"
    else
#line 304 "const_struct.m"
      {
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 304 "const_struct.m"
        MR_Integer hlds__const_struct__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 5)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 304 "const_struct.m"
        MR_Integer hlds__const_struct__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 2)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 3)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 4)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 5)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_18_18;
#line 304 "const_struct.m"
        MR_Integer hlds__const_struct__V_33_33 = (MR_Integer) hlds__const_struct__V_4_4;
#line 304 "const_struct.m"
        MR_Integer hlds__const_struct__V_34_34 = (MR_Integer) hlds__const_struct__V_11_11;

#line 304 "const_struct.m"
        {
#line 304 "const_struct.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__const_struct__V_18_18, hlds__const_struct__V_33_33, hlds__const_struct__V_34_34);
        }
#line 1398 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (hlds__const_struct__V_18_18 == (MR_Integer) 0);
#line 304 "const_struct.m"
        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 304 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_18_18;
#line 304 "const_struct.m"
        else
#line 304 "const_struct.m"
          {
#line 304 "const_struct.m"
            MR_Word hlds__const_struct__V_19_19;
#line 304 "const_struct.m"
            MR_Integer hlds__const_struct__V_35_35 = (MR_Integer) hlds__const_struct__V_5_5;
#line 304 "const_struct.m"
            MR_Integer hlds__const_struct__V_36_36 = (MR_Integer) hlds__const_struct__V_12_12;

#line 304 "const_struct.m"
            {
#line 304 "const_struct.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__const_struct__V_19_19, hlds__const_struct__V_35_35, hlds__const_struct__V_36_36);
            }
#line 1422 "hlds.const_struct.c"
            hlds__const_struct__succeeded = (hlds__const_struct__V_19_19 == (MR_Integer) 0);
#line 304 "const_struct.m"
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 304 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_19_19;
#line 304 "const_struct.m"
            else
#line 304 "const_struct.m"
              {
#line 304 "const_struct.m"
                MR_Word hlds__const_struct__V_20_20;

#line 304 "const_struct.m"
                {
#line 304 "const_struct.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__const_struct__V_20_20, hlds__const_struct__V_6_6, hlds__const_struct__V_13_13);
                }
#line 1442 "hlds.const_struct.c"
                hlds__const_struct__succeeded = (hlds__const_struct__V_20_20 == (MR_Integer) 0);
#line 304 "const_struct.m"
                hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 304 "const_struct.m"
                if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
                  *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_20_20;
#line 304 "const_struct.m"
                else
#line 304 "const_struct.m"
                  {
#line 304 "const_struct.m"
                    MR_Word hlds__const_struct__V_21_21;

#line 304 "const_struct.m"
                    {
#line 304 "const_struct.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[1], &hlds__const_struct__V_21_21, ((MR_Box) (hlds__const_struct__V_7_7)), ((MR_Box) (hlds__const_struct__V_14_14)));
                    }
#line 1462 "hlds.const_struct.c"
                    hlds__const_struct__succeeded = (hlds__const_struct__V_21_21 == (MR_Integer) 0);
#line 304 "const_struct.m"
                    hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 304 "const_struct.m"
                    if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
                      *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_21_21;
#line 304 "const_struct.m"
                    else
#line 304 "const_struct.m"
                      {
#line 304 "const_struct.m"
                        MR_Word hlds__const_struct__V_22_22;

#line 304 "const_struct.m"
                        {
#line 304 "const_struct.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[2], &hlds__const_struct__V_22_22, ((MR_Box) (hlds__const_struct__V_8_8)), ((MR_Box) (hlds__const_struct__V_15_15)));
                        }
#line 1482 "hlds.const_struct.c"
                        hlds__const_struct__succeeded = (hlds__const_struct__V_22_22 == (MR_Integer) 0);
#line 304 "const_struct.m"
                        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 304 "const_struct.m"
                        if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
                          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_22_22;
#line 304 "const_struct.m"
                        else
#line 304 "const_struct.m"
                          {
#line 304 "const_struct.m"
                            MR_Word hlds__const_struct__V_23_23;

#line 304 "const_struct.m"
                            {
#line 304 "const_struct.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[3], &hlds__const_struct__V_23_23, ((MR_Box) (hlds__const_struct__V_9_9)), ((MR_Box) (hlds__const_struct__V_16_16)));
                            }
#line 1502 "hlds.const_struct.c"
                            hlds__const_struct__succeeded = (hlds__const_struct__V_23_23 == (MR_Integer) 0);
#line 304 "const_struct.m"
                            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 304 "const_struct.m"
                            if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
                              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_23_23;
#line 304 "const_struct.m"
                            else
#line 304 "const_struct.m"
                              {
#line 304 "const_struct.m"
                                {
#line 304 "const_struct.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[0], hlds__const_struct__HeadVar__1_1, ((MR_Box) (hlds__const_struct__V_10_10)), ((MR_Box) (hlds__const_struct__V_17_17)));
#line 304 "const_struct.m"
                                  return;
                                }
#line 304 "const_struct.m"
                              }
#line 304 "const_struct.m"
                          }
#line 304 "const_struct.m"
                      }
#line 304 "const_struct.m"
                  }
#line 304 "const_struct.m"
              }
#line 304 "const_struct.m"
          }
#line 304 "const_struct.m"
      }
#line 304 "const_struct.m"
  }
#line 304 "const_struct.m"
}

#line 304 "const_struct.m"
MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0(
#line 304 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__1_1,
#line 304 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2)
#line 304 "const_struct.m"
{
#line 304 "const_struct.m"
  {
#line 304 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 304 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_17 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
#line 304 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_18 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

#line 304 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_17 == hlds__const_struct__CastY_18);
#line 304 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
      hlds__const_struct__succeeded = MR_TRUE;
#line 304 "const_struct.m"
    else
#line 304 "const_struct.m"
      {
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_19_19;
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_20_20;
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_21_21;
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_22_22;
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 304 "const_struct.m"
        MR_Integer hlds__const_struct__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 2)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 3)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 4)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 5)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 304 "const_struct.m"
        MR_Integer hlds__const_struct__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));
#line 304 "const_struct.m"
        MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 5)));

#line 1605 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (hlds__const_struct__V_3_3 == hlds__const_struct__V_10_10);
#line 304 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
          {
#line 1611 "hlds.const_struct.c"
            hlds__const_struct__succeeded = (hlds__const_struct__V_4_4 == hlds__const_struct__V_11_11);
#line 304 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
              {
#line 1617 "hlds.const_struct.c"
                hlds__const_struct__succeeded = (hlds__const_struct__V_5_5 == hlds__const_struct__V_12_12);
#line 304 "const_struct.m"
                if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
                  {
#line 1623 "hlds.const_struct.c"
                    hlds__const_struct__TypeInfo_19_19 = (MR_Word) &hlds__const_struct_scalar_common_2[1];
#line 1625 "hlds.const_struct.c"
                    {
#line 1627 "hlds.const_struct.c"
                      hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_19_19, ((MR_Box) (hlds__const_struct__V_6_6)), ((MR_Box) (hlds__const_struct__V_13_13)));
                    }
#line 304 "const_struct.m"
                    if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
                      {
#line 1634 "hlds.const_struct.c"
                        hlds__const_struct__TypeInfo_20_20 = (MR_Word) &hlds__const_struct_scalar_common_2[2];
#line 1636 "hlds.const_struct.c"
                        {
#line 1638 "hlds.const_struct.c"
                          hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_20_20, ((MR_Box) (hlds__const_struct__V_7_7)), ((MR_Box) (hlds__const_struct__V_14_14)));
                        }
#line 304 "const_struct.m"
                        if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
                          {
#line 1645 "hlds.const_struct.c"
                            hlds__const_struct__TypeInfo_21_21 = (MR_Word) &hlds__const_struct_scalar_common_2[3];
#line 1647 "hlds.const_struct.c"
                            {
#line 1649 "hlds.const_struct.c"
                              hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_21_21, ((MR_Box) (hlds__const_struct__V_8_8)), ((MR_Box) (hlds__const_struct__V_15_15)));
                            }
#line 304 "const_struct.m"
                            if (hlds__const_struct__succeeded)
#line 304 "const_struct.m"
                              {
#line 1656 "hlds.const_struct.c"
                                hlds__const_struct__TypeInfo_22_22 = (MR_Word) &hlds__const_struct_scalar_common_2[0];
#line 1658 "hlds.const_struct.c"
                                {
#line 1660 "hlds.const_struct.c"
                                  return hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_22_22, ((MR_Box) (hlds__const_struct__V_9_9)), ((MR_Box) (hlds__const_struct__V_16_16)));
                                }
#line 304 "const_struct.m"
                              }
#line 304 "const_struct.m"
                          }
#line 304 "const_struct.m"
                      }
#line 304 "const_struct.m"
                  }
#line 304 "const_struct.m"
              }
#line 304 "const_struct.m"
          }
#line 304 "const_struct.m"
      }
#line 304 "const_struct.m"
    return hlds__const_struct__succeeded;
#line 304 "const_struct.m"
  }
#line 304 "const_struct.m"
}

#line 40 "const_struct.m"
void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0(
#line 40 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__1_1,
#line 40 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2,
#line 40 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__3_3)
#line 40 "const_struct.m"
{
#line 40 "const_struct.m"
  {
#line 40 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 40 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_17 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
#line 40 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_18 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

#line 40 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_17 == hlds__const_struct__CastY_18);
#line 40 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 1708 "hlds.const_struct.c"
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "const_struct.m"
    else
#line 40 "const_struct.m"
    if (((MR_tag((MR_Word) hlds__const_struct__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 40 "const_struct.m"
      {
#line 40 "const_struct.m"
        MR_Integer hlds__const_struct__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "const_struct.m"
        if (((MR_tag((MR_Word) hlds__const_struct__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 40 "const_struct.m"
          {
#line 40 "const_struct.m"
            MR_Integer hlds__const_struct__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)));

#line 40 "const_struct.m"
            {
#line 40 "const_struct.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__const_struct__HeadVar__1_1, hlds__const_struct__V_22_22, hlds__const_struct__V_5_5);
#line 40 "const_struct.m"
              return;
            }
#line 40 "const_struct.m"
          }
#line 40 "const_struct.m"
        else
#line 1737 "hlds.const_struct.c"
          *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "const_struct.m"
      }
#line 40 "const_struct.m"
    else
#line 40 "const_struct.m"
      {
#line 40 "const_struct.m"
        MR_Word hlds__const_struct__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "const_struct.m"
        MR_Word hlds__const_struct__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "const_struct.m"
        if (((MR_tag((MR_Word) hlds__const_struct__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1752 "hlds.const_struct.c"
          *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "const_struct.m"
        else
#line 40 "const_struct.m"
          {
#line 40 "const_struct.m"
            MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "const_struct.m"
            MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "const_struct.m"
            MR_Word hlds__const_struct__V_16_16;

#line 40 "const_struct.m"
            {
#line 40 "const_struct.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&hlds__const_struct__V_16_16, hlds__const_struct__V_24_24, hlds__const_struct__V_14_14);
            }
#line 1770 "hlds.const_struct.c"
            hlds__const_struct__succeeded = (hlds__const_struct__V_16_16 == (MR_Integer) 0);
#line 40 "const_struct.m"
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 40 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 40 "const_struct.m"
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_16_16;
#line 40 "const_struct.m"
            else
#line 40 "const_struct.m"
              {
#line 40 "const_struct.m"
                parse_tree__prog_data____Compare____mer_type_0_0(hlds__const_struct__HeadVar__1_1, hlds__const_struct__V_23_23, hlds__const_struct__V_15_15);
#line 40 "const_struct.m"
                return;
              }
#line 40 "const_struct.m"
          }
#line 40 "const_struct.m"
      }
#line 40 "const_struct.m"
  }
#line 40 "const_struct.m"
}

#line 40 "const_struct.m"
MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0(
#line 40 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__1_1,
#line 40 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2)
#line 40 "const_struct.m"
{
#line 40 "const_struct.m"
  {
#line 40 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 40 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_9 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
#line 40 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_10 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

#line 40 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_9 == hlds__const_struct__CastY_10);
#line 40 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 40 "const_struct.m"
      hlds__const_struct__succeeded = MR_TRUE;
#line 40 "const_struct.m"
    else
#line 40 "const_struct.m"
    if (((MR_tag((MR_Word) hlds__const_struct__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 40 "const_struct.m"
      {
#line 40 "const_struct.m"
        MR_Integer hlds__const_struct__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "const_struct.m"
        MR_Integer hlds__const_struct__V_4_4;

#line 40 "const_struct.m"
        hlds__const_struct__succeeded = ((MR_tag((MR_Word) hlds__const_struct__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 40 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 40 "const_struct.m"
          {
#line 40 "const_struct.m"
            hlds__const_struct__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
#line 1839 "hlds.const_struct.c"
            hlds__const_struct__succeeded = (hlds__const_struct__V_3_3 == hlds__const_struct__V_4_4);
#line 40 "const_struct.m"
          }
#line 40 "const_struct.m"
      }
#line 40 "const_struct.m"
    else
#line 40 "const_struct.m"
      {
#line 40 "const_struct.m"
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "const_struct.m"
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7;
#line 40 "const_struct.m"
        MR_Word hlds__const_struct__V_8_8;

#line 40 "const_struct.m"
        hlds__const_struct__succeeded = ((MR_tag((MR_Word) hlds__const_struct__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 40 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 40 "const_struct.m"
          {
#line 40 "const_struct.m"
            hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "const_struct.m"
            hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 1868 "hlds.const_struct.c"
            {
#line 1870 "hlds.const_struct.c"
              hlds__const_struct__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__const_struct__V_5_5, hlds__const_struct__V_7_7);
            }
#line 40 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 1875 "hlds.const_struct.c"
              {
#line 1877 "hlds.const_struct.c"
                return hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__const_struct__V_6_6, hlds__const_struct__V_8_8);
              }
#line 40 "const_struct.m"
          }
#line 40 "const_struct.m"
      }
#line 40 "const_struct.m"
    return hlds__const_struct__succeeded;
#line 40 "const_struct.m"
  }
#line 40 "const_struct.m"
}

#line 28 "const_struct.m"
void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0(
#line 28 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__1_1,
#line 28 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2,
#line 28 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__3_3)
#line 28 "const_struct.m"
{
#line 28 "const_struct.m"
  {
#line 28 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 28 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_15 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
#line 28 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_16 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

#line 28 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_15 == hlds__const_struct__CastY_16);
#line 28 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 1915 "hlds.const_struct.c"
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
#line 28 "const_struct.m"
    else
#line 28 "const_struct.m"
      {
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 2)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 3)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_12_12;

#line 28 "const_struct.m"
        {
#line 28 "const_struct.m"
          parse_tree__prog_data____Compare____cons_id_0_0(&hlds__const_struct__V_12_12, hlds__const_struct__V_4_4, hlds__const_struct__V_8_8);
        }
#line 1945 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (hlds__const_struct__V_12_12 == (MR_Integer) 0);
#line 28 "const_struct.m"
        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 28 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 28 "const_struct.m"
          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_12_12;
#line 28 "const_struct.m"
        else
#line 28 "const_struct.m"
          {
#line 28 "const_struct.m"
            MR_Word hlds__const_struct__V_13_13;

#line 28 "const_struct.m"
            {
#line 28 "const_struct.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_1[0], &hlds__const_struct__V_13_13, ((MR_Box) (hlds__const_struct__V_5_5)), ((MR_Box) (hlds__const_struct__V_9_9)));
            }
#line 1965 "hlds.const_struct.c"
            hlds__const_struct__succeeded = (hlds__const_struct__V_13_13 == (MR_Integer) 0);
#line 28 "const_struct.m"
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 28 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 28 "const_struct.m"
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_13_13;
#line 28 "const_struct.m"
            else
#line 28 "const_struct.m"
              {
#line 28 "const_struct.m"
                MR_Word hlds__const_struct__V_14_14;

#line 28 "const_struct.m"
                {
#line 28 "const_struct.m"
                  parse_tree__prog_data____Compare____mer_type_0_0(&hlds__const_struct__V_14_14, hlds__const_struct__V_6_6, hlds__const_struct__V_10_10);
                }
#line 1985 "hlds.const_struct.c"
                hlds__const_struct__succeeded = (hlds__const_struct__V_14_14 == (MR_Integer) 0);
#line 28 "const_struct.m"
                hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 28 "const_struct.m"
                if (hlds__const_struct__succeeded)
#line 28 "const_struct.m"
                  *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_14_14;
#line 28 "const_struct.m"
                else
#line 28 "const_struct.m"
                  {
#line 28 "const_struct.m"
                    parse_tree__prog_data____Compare____mer_inst_0_0(hlds__const_struct__HeadVar__1_1, hlds__const_struct__V_7_7, hlds__const_struct__V_11_11);
#line 28 "const_struct.m"
                    return;
                  }
#line 28 "const_struct.m"
              }
#line 28 "const_struct.m"
          }
#line 28 "const_struct.m"
      }
#line 28 "const_struct.m"
  }
#line 28 "const_struct.m"
}

#line 28 "const_struct.m"
MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0(
#line 28 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__1_1,
#line 28 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2)
#line 28 "const_struct.m"
{
#line 28 "const_struct.m"
  {
#line 28 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 28 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_11 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
#line 28 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_12 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

#line 28 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_11 == hlds__const_struct__CastY_12);
#line 28 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 28 "const_struct.m"
      hlds__const_struct__succeeded = MR_TRUE;
#line 28 "const_struct.m"
    else
#line 28 "const_struct.m"
      {
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_14_14;
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 2)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 3)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
#line 28 "const_struct.m"
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));

#line 2060 "hlds.const_struct.c"
        {
#line 2062 "hlds.const_struct.c"
          hlds__const_struct__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__const_struct__V_3_3, hlds__const_struct__V_7_7);
        }
#line 28 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 28 "const_struct.m"
          {
#line 2069 "hlds.const_struct.c"
            hlds__const_struct__TypeInfo_14_14 = (MR_Word) &hlds__const_struct_scalar_common_1[0];
#line 2071 "hlds.const_struct.c"
            {
#line 2073 "hlds.const_struct.c"
              hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_14_14, ((MR_Box) (hlds__const_struct__V_4_4)), ((MR_Box) (hlds__const_struct__V_8_8)));
            }
#line 28 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 28 "const_struct.m"
              {
#line 2080 "hlds.const_struct.c"
                {
#line 2082 "hlds.const_struct.c"
                  hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__const_struct__V_5_5, hlds__const_struct__V_9_9);
                }
#line 28 "const_struct.m"
                if (hlds__const_struct__succeeded)
#line 2087 "hlds.const_struct.c"
                  {
#line 2089 "hlds.const_struct.c"
                    return hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__const_struct__V_6_6, hlds__const_struct__V_10_10);
                  }
#line 28 "const_struct.m"
              }
#line 28 "const_struct.m"
          }
#line 28 "const_struct.m"
      }
#line 28 "const_struct.m"
    return hlds__const_struct__succeeded;
#line 28 "const_struct.m"
  }
#line 28 "const_struct.m"
}

#line 64 "const_struct.m"
void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0(
#line 64 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__1_1,
#line 64 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2,
#line 64 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__3_3)
#line 64 "const_struct.m"
{
#line 64 "const_struct.m"
  {
#line 64 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 64 "const_struct.m"
    MR_Word hlds__const_struct__Cast_HeadVar1_4 = hlds__const_struct__HeadVar__2_2;
#line 64 "const_struct.m"
    MR_Word hlds__const_struct__Cast_HeadVar2_5 = hlds__const_struct__HeadVar__3_3;

#line 64 "const_struct.m"
    {
#line 64 "const_struct.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[0], hlds__const_struct__HeadVar__1_1, ((MR_Box) (hlds__const_struct__Cast_HeadVar1_4)), ((MR_Box) (hlds__const_struct__Cast_HeadVar2_5)));
#line 64 "const_struct.m"
      return;
    }
#line 64 "const_struct.m"
  }
#line 64 "const_struct.m"
}

#line 64 "const_struct.m"
MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0(
#line 64 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__1_1,
#line 64 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2)
#line 64 "const_struct.m"
{
#line 64 "const_struct.m"
  {
#line 64 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 64 "const_struct.m"
    MR_Word hlds__const_struct__Cast_HeadVar1_3 = hlds__const_struct__HeadVar__1_1;
#line 64 "const_struct.m"
    MR_Word hlds__const_struct__Cast_HeadVar2_4 = hlds__const_struct__HeadVar__2_2;

#line 64 "const_struct.m"
    {
#line 64 "const_struct.m"
      return hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__const_struct_scalar_common_2[0], ((MR_Box) (hlds__const_struct__Cast_HeadVar1_3)), ((MR_Box) (hlds__const_struct__Cast_HeadVar2_4)));
    }
#line 64 "const_struct.m"
    return hlds__const_struct__succeeded;
#line 64 "const_struct.m"
  }
#line 64 "const_struct.m"
}

#line 51 "const_struct.m"
void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0(
#line 51 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__1_1,
#line 51 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2,
#line 51 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__3_3)
#line 51 "const_struct.m"
{
#line 51 "const_struct.m"
  {
#line 51 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 51 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_12 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
#line 51 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_13 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

#line 51 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_12 == hlds__const_struct__CastY_13);
#line 51 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 2191 "hlds.const_struct.c"
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "const_struct.m"
    else
#line 51 "const_struct.m"
      {
#line 51 "const_struct.m"
        MR_Integer hlds__const_struct__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "const_struct.m"
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "const_struct.m"
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "const_struct.m"
        MR_Integer hlds__const_struct__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "const_struct.m"
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "const_struct.m"
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 2)));
#line 51 "const_struct.m"
        MR_Word hlds__const_struct__V_10_10;

#line 51 "const_struct.m"
        {
#line 51 "const_struct.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__const_struct__V_10_10, hlds__const_struct__V_4_4, hlds__const_struct__V_7_7);
        }
#line 2217 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (hlds__const_struct__V_10_10 == (MR_Integer) 0);
#line 51 "const_struct.m"
        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 51 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 51 "const_struct.m"
          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_10_10;
#line 51 "const_struct.m"
        else
#line 51 "const_struct.m"
          {
#line 51 "const_struct.m"
            MR_Word hlds__const_struct__V_11_11;

#line 51 "const_struct.m"
            {
#line 51 "const_struct.m"
              parse_tree__prog_data____Compare____prog_constraint_0_0(&hlds__const_struct__V_11_11, hlds__const_struct__V_5_5, hlds__const_struct__V_8_8);
            }
#line 2237 "hlds.const_struct.c"
            hlds__const_struct__succeeded = (hlds__const_struct__V_11_11 == (MR_Integer) 0);
#line 51 "const_struct.m"
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 51 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 51 "const_struct.m"
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_11_11;
#line 51 "const_struct.m"
            else
#line 51 "const_struct.m"
              {
#line 51 "const_struct.m"
                {
#line 51 "const_struct.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_1[1], hlds__const_struct__HeadVar__1_1, ((MR_Box) (hlds__const_struct__V_6_6)), ((MR_Box) (hlds__const_struct__V_9_9)));
#line 51 "const_struct.m"
                  return;
                }
#line 51 "const_struct.m"
              }
#line 51 "const_struct.m"
          }
#line 51 "const_struct.m"
      }
#line 51 "const_struct.m"
  }
#line 51 "const_struct.m"
}

#line 51 "const_struct.m"
MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0(
#line 51 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__1_1,
#line 51 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2)
#line 51 "const_struct.m"
{
#line 51 "const_struct.m"
  {
#line 51 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 51 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_9 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
#line 51 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_10 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

#line 51 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_9 == hlds__const_struct__CastY_10);
#line 51 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 51 "const_struct.m"
      hlds__const_struct__succeeded = MR_TRUE;
#line 51 "const_struct.m"
    else
#line 51 "const_struct.m"
      {
#line 51 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_12_12;
#line 51 "const_struct.m"
        MR_Integer hlds__const_struct__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "const_struct.m"
        MR_Word hlds__const_struct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "const_struct.m"
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 2)));
#line 51 "const_struct.m"
        MR_Integer hlds__const_struct__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "const_struct.m"
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));

#line 2310 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (hlds__const_struct__V_3_3 == hlds__const_struct__V_6_6);
#line 51 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 51 "const_struct.m"
          {
#line 2316 "hlds.const_struct.c"
            {
#line 2318 "hlds.const_struct.c"
              hlds__const_struct__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__const_struct__V_4_4, hlds__const_struct__V_7_7);
            }
#line 51 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 51 "const_struct.m"
              {
#line 2325 "hlds.const_struct.c"
                hlds__const_struct__TypeInfo_12_12 = (MR_Word) &hlds__const_struct_scalar_common_1[1];
#line 2327 "hlds.const_struct.c"
                {
#line 2329 "hlds.const_struct.c"
                  return hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_12_12, ((MR_Box) (hlds__const_struct__V_5_5)), ((MR_Box) (hlds__const_struct__V_8_8)));
                }
#line 51 "const_struct.m"
              }
#line 51 "const_struct.m"
          }
#line 51 "const_struct.m"
      }
#line 51 "const_struct.m"
    return hlds__const_struct__succeeded;
#line 51 "const_struct.m"
  }
#line 51 "const_struct.m"
}

#line 295 "const_struct.m"
static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0(
#line 295 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__1_1,
#line 295 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2,
#line 295 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__3_3)
#line 295 "const_struct.m"
{
#line 295 "const_struct.m"
  {
#line 295 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 295 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_18 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
#line 295 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_19 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

#line 295 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_18 == hlds__const_struct__CastY_19);
#line 295 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 2369 "hlds.const_struct.c"
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
#line 295 "const_struct.m"
    else
#line 295 "const_struct.m"
      {
#line 295 "const_struct.m"
        MR_String hlds__const_struct__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));
#line 295 "const_struct.m"
        MR_String hlds__const_struct__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 2)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 3)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 4)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_14_14;

#line 295 "const_struct.m"
        {
#line 295 "const_struct.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__const_struct__V_14_14, hlds__const_struct__V_4_4, hlds__const_struct__V_9_9);
        }
#line 2403 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (hlds__const_struct__V_14_14 == (MR_Integer) 0);
#line 295 "const_struct.m"
        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 295 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 295 "const_struct.m"
          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_14_14;
#line 295 "const_struct.m"
        else
#line 295 "const_struct.m"
          {
#line 295 "const_struct.m"
            MR_Word hlds__const_struct__V_15_15;

#line 295 "const_struct.m"
            {
#line 295 "const_struct.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_1[0], &hlds__const_struct__V_15_15, ((MR_Box) (hlds__const_struct__V_5_5)), ((MR_Box) (hlds__const_struct__V_10_10)));
            }
#line 2423 "hlds.const_struct.c"
            hlds__const_struct__succeeded = (hlds__const_struct__V_15_15 == (MR_Integer) 0);
#line 295 "const_struct.m"
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 295 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 295 "const_struct.m"
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_15_15;
#line 295 "const_struct.m"
            else
#line 295 "const_struct.m"
              {
#line 295 "const_struct.m"
                MR_Word hlds__const_struct__V_16_16;

#line 295 "const_struct.m"
                {
#line 295 "const_struct.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&hlds__const_struct__V_16_16, hlds__const_struct__V_6_6, hlds__const_struct__V_11_11);
                }
#line 2443 "hlds.const_struct.c"
                hlds__const_struct__succeeded = (hlds__const_struct__V_16_16 == (MR_Integer) 0);
#line 295 "const_struct.m"
                hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 295 "const_struct.m"
                if (hlds__const_struct__succeeded)
#line 295 "const_struct.m"
                  *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_16_16;
#line 295 "const_struct.m"
                else
#line 295 "const_struct.m"
                  {
#line 295 "const_struct.m"
                    MR_Word hlds__const_struct__V_17_17;

#line 295 "const_struct.m"
                    {
#line 295 "const_struct.m"
                      parse_tree__prog_data____Compare____mer_type_0_0(&hlds__const_struct__V_17_17, hlds__const_struct__V_7_7, hlds__const_struct__V_12_12);
                    }
#line 2463 "hlds.const_struct.c"
                    hlds__const_struct__succeeded = (hlds__const_struct__V_17_17 == (MR_Integer) 0);
#line 295 "const_struct.m"
                    hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 295 "const_struct.m"
                    if (hlds__const_struct__succeeded)
#line 295 "const_struct.m"
                      *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_17_17;
#line 295 "const_struct.m"
                    else
#line 295 "const_struct.m"
                      {
#line 295 "const_struct.m"
                        parse_tree__prog_data____Compare____mer_inst_0_0(hlds__const_struct__HeadVar__1_1, hlds__const_struct__V_8_8, hlds__const_struct__V_13_13);
#line 295 "const_struct.m"
                        return;
                      }
#line 295 "const_struct.m"
                  }
#line 295 "const_struct.m"
              }
#line 295 "const_struct.m"
          }
#line 295 "const_struct.m"
      }
#line 295 "const_struct.m"
  }
#line 295 "const_struct.m"
}

#line 295 "const_struct.m"
static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0(
#line 295 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__1_1,
#line 295 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2)
#line 295 "const_struct.m"
{
#line 295 "const_struct.m"
  {
#line 295 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 295 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_13 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
#line 295 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_14 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

#line 295 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_13 == hlds__const_struct__CastY_14);
#line 295 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 295 "const_struct.m"
      hlds__const_struct__succeeded = MR_TRUE;
#line 295 "const_struct.m"
    else
#line 295 "const_struct.m"
      {
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_15_15;
#line 295 "const_struct.m"
        MR_String hlds__const_struct__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 2)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 3)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 4)));
#line 295 "const_struct.m"
        MR_String hlds__const_struct__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
#line 295 "const_struct.m"
        MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));

#line 2544 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (strcmp(hlds__const_struct__V_3_3, hlds__const_struct__V_8_8) == 0);
#line 295 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 295 "const_struct.m"
          {
#line 2550 "hlds.const_struct.c"
            hlds__const_struct__TypeInfo_15_15 = (MR_Word) &hlds__const_struct_scalar_common_1[0];
#line 2552 "hlds.const_struct.c"
            {
#line 2554 "hlds.const_struct.c"
              hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_15_15, ((MR_Box) (hlds__const_struct__V_4_4)), ((MR_Box) (hlds__const_struct__V_9_9)));
            }
#line 295 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 295 "const_struct.m"
              {
#line 2561 "hlds.const_struct.c"
                {
#line 2563 "hlds.const_struct.c"
                  hlds__const_struct__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__const_struct__V_5_5, hlds__const_struct__V_10_10);
                }
#line 295 "const_struct.m"
                if (hlds__const_struct__succeeded)
#line 295 "const_struct.m"
                  {
#line 2570 "hlds.const_struct.c"
                    {
#line 2572 "hlds.const_struct.c"
                      hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__const_struct__V_6_6, hlds__const_struct__V_11_11);
                    }
#line 295 "const_struct.m"
                    if (hlds__const_struct__succeeded)
#line 2577 "hlds.const_struct.c"
                      {
#line 2579 "hlds.const_struct.c"
                        return hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__const_struct__V_7_7, hlds__const_struct__V_12_12);
                      }
#line 295 "const_struct.m"
                  }
#line 295 "const_struct.m"
              }
#line 295 "const_struct.m"
          }
#line 295 "const_struct.m"
      }
#line 295 "const_struct.m"
    return hlds__const_struct__succeeded;
#line 295 "const_struct.m"
  }
#line 295 "const_struct.m"
}

#line 339 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_num_map_3_p_0(
#line 339 "const_struct.m"
  MR_Word hlds__const_struct__NumMap_4,
#line 339 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 339 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
#line 339 "const_struct.m"
{
#line 351 "const_struct.m"
  {
#line 351 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 351 "const_struct.m"
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));

#line 351 "const_struct.m"
    {
#line 351 "const_struct.m"
      MR_Word base;
#line 351 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 351 "const_struct.m"
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_11_11));
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_12_12));
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_13_13));
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__NumMap_4));
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
#line 351 "const_struct.m"
    }
#line 351 "const_struct.m"
  }
#line 339 "const_struct.m"
}

#line 337 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(
#line 337 "const_struct.m"
  MR_Word hlds__const_struct__OtherMap_4,
#line 337 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 337 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
#line 337 "const_struct.m"
{
#line 349 "const_struct.m"
  {
#line 349 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 349 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 349 "const_struct.m"
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 349 "const_struct.m"
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
#line 349 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
#line 349 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
#line 349 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
#line 349 "const_struct.m"
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));

#line 349 "const_struct.m"
    {
#line 349 "const_struct.m"
      MR_Word base;
#line 349 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 349 "const_struct.m"
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
#line 349 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
#line 349 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_11_11));
#line 349 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_12_12));
#line 349 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__OtherMap_4));
#line 349 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_14_14));
#line 349 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
#line 349 "const_struct.m"
    }
#line 349 "const_struct.m"
  }
#line 337 "const_struct.m"
}

#line 335 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(
#line 335 "const_struct.m"
  MR_Word hlds__const_struct__ConsMap_4,
#line 335 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 335 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
#line 335 "const_struct.m"
{
#line 347 "const_struct.m"
  {
#line 347 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 347 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 347 "const_struct.m"
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 347 "const_struct.m"
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
#line 347 "const_struct.m"
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
#line 347 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
#line 347 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
#line 347 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));

#line 347 "const_struct.m"
    {
#line 347 "const_struct.m"
      MR_Word base;
#line 347 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 347 "const_struct.m"
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
#line 347 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
#line 347 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_11_11));
#line 347 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__ConsMap_4));
#line 347 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_13_13));
#line 347 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_14_14));
#line 347 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
#line 347 "const_struct.m"
    }
#line 347 "const_struct.m"
  }
#line 335 "const_struct.m"
}

#line 333 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_next_num_3_p_0(
#line 333 "const_struct.m"
  MR_Integer hlds__const_struct__Num_4,
#line 333 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 333 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
#line 333 "const_struct.m"
{
#line 345 "const_struct.m"
  {
#line 345 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 345 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 345 "const_struct.m"
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 345 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
#line 345 "const_struct.m"
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
#line 345 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
#line 345 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
#line 345 "const_struct.m"
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));

#line 345 "const_struct.m"
    {
#line 345 "const_struct.m"
      MR_Word base;
#line 345 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 345 "const_struct.m"
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
#line 345 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
#line 345 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__Num_4));
#line 345 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_12_12));
#line 345 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_13_13));
#line 345 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_14_14));
#line 345 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
#line 345 "const_struct.m"
    }
#line 345 "const_struct.m"
  }
#line 333 "const_struct.m"
}

#line 320 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_num_map_2_p_0(
#line 320 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 320 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__2_2)
#line 320 "const_struct.m"
{
#line 330 "const_struct.m"
  {
#line 330 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 330 "const_struct.m"
    MR_Integer hlds__const_struct__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9;

#line 330 "const_struct.m"
    *hlds__const_struct__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 330 "const_struct.m"
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
#line 330 "const_struct.m"
  }
#line 320 "const_struct.m"
}

#line 318 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(
#line 318 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 318 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__2_2)
#line 318 "const_struct.m"
{
#line 329 "const_struct.m"
  {
#line 329 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 329 "const_struct.m"
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 329 "const_struct.m"
    MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 329 "const_struct.m"
    MR_Integer hlds__const_struct__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 329 "const_struct.m"
    MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 329 "const_struct.m"
    MR_Word hlds__const_struct__V_8_8;
#line 329 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9;

#line 329 "const_struct.m"
    *hlds__const_struct__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 329 "const_struct.m"
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 329 "const_struct.m"
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
#line 329 "const_struct.m"
  }
#line 318 "const_struct.m"
}

#line 315 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_next_num_2_p_0(
#line 315 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 315 "const_struct.m"
  MR_Integer * hlds__const_struct__HeadVar__2_2)
#line 315 "const_struct.m"
{
#line 327 "const_struct.m"
  {
#line 327 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 327 "const_struct.m"
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 327 "const_struct.m"
    MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 327 "const_struct.m"
    MR_Word hlds__const_struct__V_6_6;
#line 327 "const_struct.m"
    MR_Word hlds__const_struct__V_7_7;
#line 327 "const_struct.m"
    MR_Word hlds__const_struct__V_8_8;
#line 327 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9;

#line 327 "const_struct.m"
    *hlds__const_struct__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 327 "const_struct.m"
    hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 327 "const_struct.m"
    hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 327 "const_struct.m"
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 327 "const_struct.m"
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
#line 327 "const_struct.m"
  }
#line 315 "const_struct.m"
}

#line 113 "const_struct.m"
void MR_CALL 
hlds__const_struct__const_struct_db_get_structs_2_p_0(
#line 113 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 113 "const_struct.m"
  MR_Word * hlds__const_struct__Structs_4)
#line 113 "const_struct.m"
{
#line 282 "const_struct.m"
  {
#line 282 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 282 "const_struct.m"
    MR_Word hlds__const_struct__NumMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 330 "const_struct.m"
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));

#line 284 "const_struct.m"
    {
#line 284 "const_struct.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, hlds__const_struct__NumMap_5, hlds__const_struct__Structs_4);
#line 284 "const_struct.m"
      return;
    }
#line 282 "const_struct.m"
  }
#line 113 "const_struct.m"
}

#line 106 "const_struct.m"
void MR_CALL 
hlds__const_struct__delete_const_struct_3_p_0(
#line 106 "const_struct.m"
  MR_Integer hlds__const_struct__ConstNum_4,
#line 106 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_23,
#line 106 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_24)
#line 106 "const_struct.m"
{
#line 264 "const_struct.m"
  {
#line 264 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 264 "const_struct.m"
    MR_Word hlds__const_struct__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 264 "const_struct.m"
    MR_Word hlds__const_struct__TypeCtorInfo_31_31 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
#line 264 "const_struct.m"
    MR_Word hlds__const_struct__NumMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 4)));
#line 264 "const_struct.m"
    MR_Word hlds__const_struct__ConstStruct_7;
#line 264 "const_struct.m"
    MR_Word hlds__const_struct__NumMap_8;
#line 264 "const_struct.m"
    MR_Word hlds__const_struct__ConsId_9;
#line 264 "const_struct.m"
    MR_Word hlds__const_struct__Args_10;
#line 264 "const_struct.m"
    MR_Word hlds__const_struct__Type_11;
#line 264 "const_struct.m"
    MR_Word hlds__const_struct__Inst_12;
#line 264 "const_struct.m"
    MR_Word hlds__const_struct__STATE_VARIABLE_Db_25_25;
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 330 "const_struct.m"
    MR_Integer hlds__const_struct__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 1)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 2)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 3)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 5)));
#line 266 "const_struct.m"
    MR_Box hlds__const_struct__conv0_ConstStruct_7;
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_45_45;
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_46_46;
#line 351 "const_struct.m"
    MR_Integer hlds__const_struct__V_47_47;
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_48_48;
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_49_49;
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_51_51;
#line 351 "const_struct.m"
    MR_Word hlds__const_struct__V_50_50;
#line 276 "const_struct.m"
    MR_Word hlds__const_struct__SymName_13;
#line 270 "const_struct.m"
    MR_Integer hlds__const_struct__V_14_14;
#line 270 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15;

#line 266 "const_struct.m"
    {
#line 266 "const_struct.m"
      mercury__map__det_remove_4_p_0(hlds__const_struct__TypeCtorInfo_30_30, hlds__const_struct__TypeCtorInfo_31_31, ((MR_Box) (hlds__const_struct__ConstNum_4)), &hlds__const_struct__conv0_ConstStruct_7, hlds__const_struct__NumMap0_6, &hlds__const_struct__NumMap_8);
    }
#line 266 "const_struct.m"
    hlds__const_struct__ConstStruct_7 = ((MR_Word) hlds__const_struct__conv0_ConstStruct_7);
#line 351 "const_struct.m"
    hlds__const_struct__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 351 "const_struct.m"
    hlds__const_struct__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 351 "const_struct.m"
    hlds__const_struct__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 1)));
#line 351 "const_struct.m"
    hlds__const_struct__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 2)));
#line 351 "const_struct.m"
    hlds__const_struct__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 3)));
#line 351 "const_struct.m"
    hlds__const_struct__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 4)));
#line 351 "const_struct.m"
    hlds__const_struct__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 5)));
#line 351 "const_struct.m"
    {
#line 351 "const_struct.m"
      hlds__const_struct__STATE_VARIABLE_Db_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 0) = ((MR_Box) ((hlds__const_struct__V_45_45 | ((hlds__const_struct__V_46_46 << (MR_Integer) 1)))));
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 1) = ((MR_Box) (hlds__const_struct__V_47_47));
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 2) = ((MR_Box) (hlds__const_struct__V_48_48));
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 3) = ((MR_Box) (hlds__const_struct__V_49_49));
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 4) = ((MR_Box) (hlds__const_struct__NumMap_8));
#line 351 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 5) = ((MR_Box) (hlds__const_struct__V_51_51));
#line 351 "const_struct.m"
    }
#line 269 "const_struct.m"
    hlds__const_struct__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 0)));
#line 269 "const_struct.m"
    hlds__const_struct__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 1)));
#line 269 "const_struct.m"
    hlds__const_struct__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 2)));
#line 269 "const_struct.m"
    hlds__const_struct__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 3)));
#line 270 "const_struct.m"
    hlds__const_struct__succeeded = ((((MR_tag((MR_Word) hlds__const_struct__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 270 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 270 "const_struct.m"
      {
#line 270 "const_struct.m"
        hlds__const_struct__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 1)));
#line 270 "const_struct.m"
        hlds__const_struct__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 2)));
#line 270 "const_struct.m"
        hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 3)));
#line 271 "const_struct.m"
        {
#line 271 "const_struct.m"
          MR_String hlds__const_struct__Name_16;
#line 271 "const_struct.m"
          MR_Word hlds__const_struct__ConsProxyStruct_17;
#line 271 "const_struct.m"
          MR_Word hlds__const_struct__ConsMap0_18;
#line 271 "const_struct.m"
          MR_Word hlds__const_struct__ConsMap_20;
#line 328 "const_struct.m"
          MR_Word hlds__const_struct__V_53_53;
#line 328 "const_struct.m"
          MR_Word hlds__const_struct__V_54_54;
#line 328 "const_struct.m"
          MR_Integer hlds__const_struct__V_55_55;
#line 328 "const_struct.m"
          MR_Word hlds__const_struct__V_56_56;
#line 328 "const_struct.m"
          MR_Word hlds__const_struct__V_57_57;
#line 328 "const_struct.m"
          MR_Word hlds__const_struct__V_58_58;
#line 274 "const_struct.m"
          MR_Integer hlds__const_struct___ConstNum_19;
#line 274 "const_struct.m"
          MR_Box hlds__const_struct__conv1__ConstNum_19;
#line 347 "const_struct.m"
          MR_Word hlds__const_struct__V_64_64;
#line 347 "const_struct.m"
          MR_Word hlds__const_struct__V_65_65;
#line 347 "const_struct.m"
          MR_Integer hlds__const_struct__V_66_66;
#line 347 "const_struct.m"
          MR_Word hlds__const_struct__V_68_68;
#line 347 "const_struct.m"
          MR_Word hlds__const_struct__V_69_69;
#line 347 "const_struct.m"
          MR_Word hlds__const_struct__V_70_70;
#line 347 "const_struct.m"
          MR_Word hlds__const_struct__V_67_67;

#line 271 "const_struct.m"
          {
#line 271 "const_struct.m"
            hlds__const_struct__Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__const_struct__SymName_13);
          }
#line 272 "const_struct.m"
          {
#line 272 "const_struct.m"
            hlds__const_struct__ConsProxyStruct_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 272 "const_struct.m"
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 0) = ((MR_Box) (hlds__const_struct__Name_16));
#line 272 "const_struct.m"
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 1) = ((MR_Box) (hlds__const_struct__Args_10));
#line 272 "const_struct.m"
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 2) = ((MR_Box) (hlds__const_struct__ConsId_9));
#line 272 "const_struct.m"
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 3) = ((MR_Box) (hlds__const_struct__Type_11));
#line 272 "const_struct.m"
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 4) = ((MR_Box) (hlds__const_struct__Inst_12));
#line 272 "const_struct.m"
          }
#line 328 "const_struct.m"
          hlds__const_struct__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 328 "const_struct.m"
          hlds__const_struct__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 328 "const_struct.m"
          hlds__const_struct__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
#line 328 "const_struct.m"
          hlds__const_struct__ConsMap0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
#line 328 "const_struct.m"
          hlds__const_struct__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
#line 328 "const_struct.m"
          hlds__const_struct__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
#line 328 "const_struct.m"
          hlds__const_struct__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
#line 274 "const_struct.m"
          {
#line 274 "const_struct.m"
            mercury__map__det_remove_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, hlds__const_struct__TypeCtorInfo_30_30, ((MR_Box) (hlds__const_struct__ConsProxyStruct_17)), &hlds__const_struct__conv1__ConstNum_19, hlds__const_struct__ConsMap0_18, &hlds__const_struct__ConsMap_20);
          }
#line 274 "const_struct.m"
          hlds__const_struct___ConstNum_19 = ((MR_Integer) hlds__const_struct__conv1__ConstNum_19);
#line 347 "const_struct.m"
          hlds__const_struct__V_64_64 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 347 "const_struct.m"
          hlds__const_struct__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 347 "const_struct.m"
          hlds__const_struct__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
#line 347 "const_struct.m"
          hlds__const_struct__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
#line 347 "const_struct.m"
          hlds__const_struct__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
#line 347 "const_struct.m"
          hlds__const_struct__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
#line 347 "const_struct.m"
          hlds__const_struct__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
#line 347 "const_struct.m"
          {
#line 347 "const_struct.m"
            MR_Word base;
#line 347 "const_struct.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 347 "const_struct.m"
            *hlds__const_struct__STATE_VARIABLE_Db_24 = base;
#line 347 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_64_64 | ((hlds__const_struct__V_65_65 << (MR_Integer) 1)))));
#line 347 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_66_66));
#line 347 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__ConsMap_20));
#line 347 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_68_68));
#line 347 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_69_69));
#line 347 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_70_70));
#line 347 "const_struct.m"
          }
#line 271 "const_struct.m"
        }
#line 270 "const_struct.m"
      }
#line 270 "const_struct.m"
    else
#line 277 "const_struct.m"
      {
#line 277 "const_struct.m"
        MR_Word hlds__const_struct__OtherMap0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
#line 277 "const_struct.m"
        MR_Word hlds__const_struct__OtherMap_22;
#line 329 "const_struct.m"
        MR_Word hlds__const_struct__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 329 "const_struct.m"
        MR_Word hlds__const_struct__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 329 "const_struct.m"
        MR_Integer hlds__const_struct__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
#line 329 "const_struct.m"
        MR_Word hlds__const_struct__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
#line 329 "const_struct.m"
        MR_Word hlds__const_struct__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
#line 329 "const_struct.m"
        MR_Word hlds__const_struct__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
#line 278 "const_struct.m"
        MR_Integer hlds__const_struct___ConstNum_28;
#line 278 "const_struct.m"
        MR_Box hlds__const_struct__conv2__ConstNum_28;
#line 349 "const_struct.m"
        MR_Word hlds__const_struct__V_83_83;
#line 349 "const_struct.m"
        MR_Word hlds__const_struct__V_84_84;
#line 349 "const_struct.m"
        MR_Integer hlds__const_struct__V_85_85;
#line 349 "const_struct.m"
        MR_Word hlds__const_struct__V_86_86;
#line 349 "const_struct.m"
        MR_Word hlds__const_struct__V_88_88;
#line 349 "const_struct.m"
        MR_Word hlds__const_struct__V_89_89;
#line 349 "const_struct.m"
        MR_Word hlds__const_struct__V_87_87;

#line 278 "const_struct.m"
        {
#line 278 "const_struct.m"
          mercury__map__det_remove_4_p_0(hlds__const_struct__TypeCtorInfo_31_31, hlds__const_struct__TypeCtorInfo_30_30, ((MR_Box) (hlds__const_struct__ConstStruct_7)), &hlds__const_struct__conv2__ConstNum_28, hlds__const_struct__OtherMap0_21, &hlds__const_struct__OtherMap_22);
        }
#line 278 "const_struct.m"
        hlds__const_struct___ConstNum_28 = ((MR_Integer) hlds__const_struct__conv2__ConstNum_28);
#line 349 "const_struct.m"
        hlds__const_struct__V_83_83 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 349 "const_struct.m"
        hlds__const_struct__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 349 "const_struct.m"
        hlds__const_struct__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
#line 349 "const_struct.m"
        hlds__const_struct__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
#line 349 "const_struct.m"
        hlds__const_struct__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
#line 349 "const_struct.m"
        hlds__const_struct__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
#line 349 "const_struct.m"
        hlds__const_struct__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
#line 349 "const_struct.m"
        {
#line 349 "const_struct.m"
          MR_Word base;
#line 349 "const_struct.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 349 "const_struct.m"
          *hlds__const_struct__STATE_VARIABLE_Db_24 = base;
#line 349 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_83_83 | ((hlds__const_struct__V_84_84 << (MR_Integer) 1)))));
#line 349 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_85_85));
#line 349 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_86_86));
#line 349 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__OtherMap_22));
#line 349 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_88_88));
#line 349 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_89_89));
#line 349 "const_struct.m"
        }
#line 277 "const_struct.m"
      }
#line 264 "const_struct.m"
  }
#line 106 "const_struct.m"
}

#line 101 "const_struct.m"
void MR_CALL 
hlds__const_struct__insert_constant_instance_4_p_0(
#line 101 "const_struct.m"
  MR_Word hlds__const_struct__InstanceId_5,
#line 101 "const_struct.m"
  MR_Integer hlds__const_struct__ConstNum_6,
#line 101 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_10,
#line 101 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_11)
#line 101 "const_struct.m"
{
#line 259 "const_struct.m"
  {
#line 259 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 259 "const_struct.m"
    MR_Word hlds__const_struct__InstanceMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 5)));
#line 259 "const_struct.m"
    MR_Word hlds__const_struct__InstanceMap_9;
#line 331 "const_struct.m"
    MR_Word hlds__const_struct__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 331 "const_struct.m"
    MR_Word hlds__const_struct__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 331 "const_struct.m"
    MR_Integer hlds__const_struct__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 1)));
#line 331 "const_struct.m"
    MR_Word hlds__const_struct__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 2)));
#line 331 "const_struct.m"
    MR_Word hlds__const_struct__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 3)));
#line 331 "const_struct.m"
    MR_Word hlds__const_struct__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 4)));
#line 353 "const_struct.m"
    MR_Word hlds__const_struct__V_27_27;
#line 353 "const_struct.m"
    MR_Word hlds__const_struct__V_28_28;
#line 353 "const_struct.m"
    MR_Integer hlds__const_struct__V_29_29;
#line 353 "const_struct.m"
    MR_Word hlds__const_struct__V_30_30;
#line 353 "const_struct.m"
    MR_Word hlds__const_struct__V_31_31;
#line 353 "const_struct.m"
    MR_Word hlds__const_struct__V_32_32;
#line 353 "const_struct.m"
    MR_Word hlds__const_struct__V_33_33;

#line 261 "const_struct.m"
    {
#line 261 "const_struct.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__const_struct__InstanceId_5)), ((MR_Box) (hlds__const_struct__ConstNum_6)), hlds__const_struct__InstanceMap0_8, &hlds__const_struct__InstanceMap_9);
    }
#line 353 "const_struct.m"
    hlds__const_struct__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 353 "const_struct.m"
    hlds__const_struct__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 353 "const_struct.m"
    hlds__const_struct__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 1)));
#line 353 "const_struct.m"
    hlds__const_struct__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 2)));
#line 353 "const_struct.m"
    hlds__const_struct__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 3)));
#line 353 "const_struct.m"
    hlds__const_struct__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 4)));
#line 353 "const_struct.m"
    hlds__const_struct__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 5)));
#line 353 "const_struct.m"
    {
#line 353 "const_struct.m"
      MR_Word base;
#line 353 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 353 "const_struct.m"
      *hlds__const_struct__STATE_VARIABLE_Db_11 = base;
#line 353 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_27_27 | ((hlds__const_struct__V_28_28 << (MR_Integer) 1)))));
#line 353 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_29_29));
#line 353 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_30_30));
#line 353 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_31_31));
#line 353 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_32_32));
#line 353 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__InstanceMap_9));
#line 353 "const_struct.m"
    }
#line 259 "const_struct.m"
  }
#line 101 "const_struct.m"
}

#line 95 "const_struct.m"
MR_bool MR_CALL 
hlds__const_struct__search_for_constant_instance_3_p_0(
#line 95 "const_struct.m"
  MR_Word hlds__const_struct__Db_4,
#line 95 "const_struct.m"
  MR_Word hlds__const_struct__InstanceId_5,
#line 95 "const_struct.m"
  MR_Integer * hlds__const_struct__ConstNum_6)
#line 95 "const_struct.m"
{
#line 255 "const_struct.m"
  {
#line 255 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 255 "const_struct.m"
    MR_Word hlds__const_struct__InstanceMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 5)));
#line 331 "const_struct.m"
    MR_Word hlds__const_struct__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 331 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 331 "const_struct.m"
    MR_Integer hlds__const_struct__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 1)));
#line 331 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 2)));
#line 331 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 3)));
#line 331 "const_struct.m"
    MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 4)));
#line 257 "const_struct.m"
    MR_Box hlds__const_struct__conv0_ConstNum_6;

#line 257 "const_struct.m"
    {
#line 257 "const_struct.m"
      hlds__const_struct__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__const_struct__InstanceMap_7, ((MR_Box) (hlds__const_struct__InstanceId_5)), &hlds__const_struct__conv0_ConstNum_6);
    }
#line 257 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 257 "const_struct.m"
      {
#line 257 "const_struct.m"
        *hlds__const_struct__ConstNum_6 = ((MR_Integer) hlds__const_struct__conv0_ConstNum_6);
#line 257 "const_struct.m"
        hlds__const_struct__succeeded = MR_TRUE;
#line 257 "const_struct.m"
      }
#line 255 "const_struct.m"
    return hlds__const_struct__succeeded;
#line 255 "const_struct.m"
  }
#line 95 "const_struct.m"
}

#line 89 "const_struct.m"
void MR_CALL 
hlds__const_struct__lookup_const_struct_num_3_p_0(
#line 89 "const_struct.m"
  MR_Word hlds__const_struct__Db_4,
#line 89 "const_struct.m"
  MR_Integer hlds__const_struct__ConstNum_5,
#line 89 "const_struct.m"
  MR_Word * hlds__const_struct__ConstStruct_6)
#line 89 "const_struct.m"
{
#line 251 "const_struct.m"
  {
#line 251 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 251 "const_struct.m"
    MR_Word hlds__const_struct__NumMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 4)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 330 "const_struct.m"
    MR_Integer hlds__const_struct__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 1)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 2)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 3)));
#line 330 "const_struct.m"
    MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 5)));
#line 253 "const_struct.m"
    MR_Box hlds__const_struct__conv0_ConstStruct_6;

#line 253 "const_struct.m"
    {
#line 253 "const_struct.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, hlds__const_struct__NumMap_7, hlds__const_struct__ConstNum_5, &hlds__const_struct__conv0_ConstStruct_6);
    }
#line 253 "const_struct.m"
    *hlds__const_struct__ConstStruct_6 = ((MR_Word) hlds__const_struct__conv0_ConstStruct_6);
#line 251 "const_struct.m"
  }
#line 89 "const_struct.m"
}

#line 83 "const_struct.m"
void MR_CALL 
hlds__const_struct__lookup_insert_const_struct_4_p_0(
#line 83 "const_struct.m"
  MR_Word hlds__const_struct__ConstStruct_5,
#line 83 "const_struct.m"
  MR_Integer * hlds__const_struct__ConstNum_6,
#line 83 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_26,
#line 83 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_27)
#line 83 "const_struct.m"
{
#line 201 "const_struct.m"
  {
#line 201 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 201 "const_struct.m"
    MR_Word hlds__const_struct__Enabled_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 325 "const_struct.m"
    MR_Word hlds__const_struct__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 325 "const_struct.m"
    MR_Integer hlds__const_struct__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
#line 325 "const_struct.m"
    MR_Word hlds__const_struct__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
#line 325 "const_struct.m"
    MR_Word hlds__const_struct__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
#line 325 "const_struct.m"
    MR_Word hlds__const_struct__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
#line 325 "const_struct.m"
    MR_Word hlds__const_struct__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));

#line 206 "const_struct.m"
#line 206 "const_struct.m"
    switch (hlds__const_struct__Enabled_8) {
#line 206 "const_struct.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 206 "const_struct.m"
      case (MR_Integer) 0:
#line 204 "const_struct.m"
        {
#line 205 "const_struct.m"
          {
#line 205 "const_struct.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.const_struct", (MR_String) "predicate \140hlds.const_struct.lookup_insert_const_struct\'/4", (MR_String) "not enabled");
#line 205 "const_struct.m"
            return;
          }
#line 204 "const_struct.m"
        }
#line 206 "const_struct.m"
        break;
#line 206 "const_struct.m"
      case (MR_Integer) 1:
#line 207 "const_struct.m"
        {
#line 207 "const_struct.m"
          MR_Word hlds__const_struct__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 0)));
#line 207 "const_struct.m"
          MR_Word hlds__const_struct__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 1)));
#line 207 "const_struct.m"
          MR_Word hlds__const_struct__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 2)));
#line 207 "const_struct.m"
          MR_Word hlds__const_struct__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 3)));
#line 230 "const_struct.m"
          MR_Word hlds__const_struct__SymName_13;
#line 209 "const_struct.m"
          MR_Integer hlds__const_struct__V_14_14;
#line 209 "const_struct.m"
          MR_Word hlds__const_struct__V_15_15;

#line 209 "const_struct.m"
          hlds__const_struct__succeeded = ((((MR_tag((MR_Word) hlds__const_struct__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 209 "const_struct.m"
          if (hlds__const_struct__succeeded)
#line 209 "const_struct.m"
            {
#line 209 "const_struct.m"
              hlds__const_struct__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 1)));
#line 209 "const_struct.m"
              hlds__const_struct__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 2)));
#line 209 "const_struct.m"
              hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 3)));
#line 210 "const_struct.m"
              {
#line 210 "const_struct.m"
                MR_String hlds__const_struct__Name_16;
#line 210 "const_struct.m"
                MR_Word hlds__const_struct__ConsProxyStruct_17;
#line 210 "const_struct.m"
                MR_Integer hlds__const_struct__NextConstNum_18;
#line 210 "const_struct.m"
                MR_Word hlds__const_struct__ConsMap0_19;
#line 210 "const_struct.m"
                MR_Word hlds__const_struct__MaybeOldConstNum_20;
#line 210 "const_struct.m"
                MR_Word hlds__const_struct__ConsMap_21;
#line 327 "const_struct.m"
                MR_Word hlds__const_struct__V_62_62;
#line 327 "const_struct.m"
                MR_Word hlds__const_struct__V_63_63;
#line 327 "const_struct.m"
                MR_Word hlds__const_struct__V_65_65;
#line 327 "const_struct.m"
                MR_Word hlds__const_struct__V_66_66;
#line 327 "const_struct.m"
                MR_Word hlds__const_struct__V_67_67;

#line 210 "const_struct.m"
                {
#line 210 "const_struct.m"
                  hlds__const_struct__Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__const_struct__SymName_13);
                }
#line 211 "const_struct.m"
                {
#line 211 "const_struct.m"
                  hlds__const_struct__ConsProxyStruct_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 211 "const_struct.m"
                  MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 0) = ((MR_Box) (hlds__const_struct__Name_16));
#line 211 "const_struct.m"
                  MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 1) = ((MR_Box) (hlds__const_struct__Args_10));
#line 211 "const_struct.m"
                  MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 2) = ((MR_Box) (hlds__const_struct__ConsId_9));
#line 211 "const_struct.m"
                  MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 3) = ((MR_Box) (hlds__const_struct__Type_11));
#line 211 "const_struct.m"
                  MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 4) = ((MR_Box) (hlds__const_struct__Inst_12));
#line 211 "const_struct.m"
                }
#line 327 "const_struct.m"
                hlds__const_struct__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 327 "const_struct.m"
                hlds__const_struct__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 327 "const_struct.m"
                hlds__const_struct__NextConstNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
#line 327 "const_struct.m"
                hlds__const_struct__ConsMap0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
#line 327 "const_struct.m"
                hlds__const_struct__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
#line 327 "const_struct.m"
                hlds__const_struct__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
#line 327 "const_struct.m"
                hlds__const_struct__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
#line 215 "const_struct.m"
                {
#line 215 "const_struct.m"
                  mercury__map__search_insert_5_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__const_struct__ConsProxyStruct_17)), ((MR_Box) (hlds__const_struct__NextConstNum_18)), &hlds__const_struct__MaybeOldConstNum_20, hlds__const_struct__ConsMap0_19, &hlds__const_struct__ConsMap_21);
                }
#line 220 "const_struct.m"
                if ((hlds__const_struct__MaybeOldConstNum_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "const_struct.m"
                  {
#line 221 "const_struct.m"
                    MR_Word hlds__const_struct__NumMap0_22;
#line 221 "const_struct.m"
                    MR_Word hlds__const_struct__NumMap_23;
#line 221 "const_struct.m"
                    MR_Integer hlds__const_struct__V_28_28;
#line 221 "const_struct.m"
                    MR_Word hlds__const_struct__STATE_VARIABLE_Db_29_29;
#line 221 "const_struct.m"
                    MR_Word hlds__const_struct__STATE_VARIABLE_Db_31_31;
#line 330 "const_struct.m"
                    MR_Word hlds__const_struct__V_76_76;
#line 330 "const_struct.m"
                    MR_Word hlds__const_struct__V_77_77;
#line 330 "const_struct.m"
                    MR_Integer hlds__const_struct__V_78_78;
#line 330 "const_struct.m"
                    MR_Word hlds__const_struct__V_79_79;
#line 330 "const_struct.m"
                    MR_Word hlds__const_struct__V_80_80;
#line 330 "const_struct.m"
                    MR_Word hlds__const_struct__V_81_81;
#line 345 "const_struct.m"
                    MR_Word hlds__const_struct__V_87_87;
#line 345 "const_struct.m"
                    MR_Word hlds__const_struct__V_88_88;
#line 345 "const_struct.m"
                    MR_Word hlds__const_struct__V_90_90;
#line 345 "const_struct.m"
                    MR_Word hlds__const_struct__V_91_91;
#line 345 "const_struct.m"
                    MR_Word hlds__const_struct__V_92_92;
#line 345 "const_struct.m"
                    MR_Word hlds__const_struct__V_93_93;
#line 345 "const_struct.m"
                    MR_Integer hlds__const_struct__V_89_89;

#line 222 "const_struct.m"
                    *hlds__const_struct__ConstNum_6 = hlds__const_struct__NextConstNum_18;
#line 330 "const_struct.m"
                    hlds__const_struct__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 330 "const_struct.m"
                    hlds__const_struct__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 330 "const_struct.m"
                    hlds__const_struct__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
#line 330 "const_struct.m"
                    hlds__const_struct__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
#line 330 "const_struct.m"
                    hlds__const_struct__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
#line 330 "const_struct.m"
                    hlds__const_struct__NumMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
#line 330 "const_struct.m"
                    hlds__const_struct__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
#line 224 "const_struct.m"
                    {
#line 224 "const_struct.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, *hlds__const_struct__ConstNum_6, ((MR_Box) (hlds__const_struct__ConstStruct_5)), hlds__const_struct__NumMap0_22, &hlds__const_struct__NumMap_23);
                    }
#line 226 "const_struct.m"
                    hlds__const_struct__V_28_28 = (hlds__const_struct__NextConstNum_18 + (MR_Integer) 1);
#line 345 "const_struct.m"
                    hlds__const_struct__V_87_87 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 345 "const_struct.m"
                    hlds__const_struct__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 345 "const_struct.m"
                    hlds__const_struct__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
#line 345 "const_struct.m"
                    hlds__const_struct__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
#line 345 "const_struct.m"
                    hlds__const_struct__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
#line 345 "const_struct.m"
                    hlds__const_struct__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
#line 345 "const_struct.m"
                    hlds__const_struct__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
#line 345 "const_struct.m"
                    {
#line 345 "const_struct.m"
                      hlds__const_struct__STATE_VARIABLE_Db_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 345 "const_struct.m"
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 0) = ((MR_Box) ((hlds__const_struct__V_87_87 | ((hlds__const_struct__V_88_88 << (MR_Integer) 1)))));
#line 345 "const_struct.m"
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 1) = ((MR_Box) (hlds__const_struct__V_28_28));
#line 345 "const_struct.m"
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 2) = ((MR_Box) (hlds__const_struct__V_90_90));
#line 345 "const_struct.m"
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 3) = ((MR_Box) (hlds__const_struct__V_91_91));
#line 345 "const_struct.m"
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 4) = ((MR_Box) (hlds__const_struct__V_92_92));
#line 345 "const_struct.m"
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 5) = ((MR_Box) (hlds__const_struct__V_93_93));
#line 345 "const_struct.m"
                    }
#line 227 "const_struct.m"
                    {
#line 227 "const_struct.m"
                      hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(hlds__const_struct__ConsMap_21, hlds__const_struct__STATE_VARIABLE_Db_29_29, &hlds__const_struct__STATE_VARIABLE_Db_31_31);
                    }
#line 228 "const_struct.m"
                    {
#line 228 "const_struct.m"
                      hlds__const_struct__const_struct_db_set_num_map_3_p_0(hlds__const_struct__NumMap_23, hlds__const_struct__STATE_VARIABLE_Db_31_31, hlds__const_struct__STATE_VARIABLE_Db_27);
#line 228 "const_struct.m"
                      return;
                    }
#line 221 "const_struct.m"
                  }
#line 220 "const_struct.m"
                else
#line 218 "const_struct.m"
                  {
#line 218 "const_struct.m"
                    *hlds__const_struct__ConstNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__const_struct__MaybeOldConstNum_20, (MR_Integer) 0)));
#line 218 "const_struct.m"
                    *hlds__const_struct__STATE_VARIABLE_Db_27 = hlds__const_struct__STATE_VARIABLE_Db_0_26;
#line 218 "const_struct.m"
                  }
#line 210 "const_struct.m"
              }
#line 209 "const_struct.m"
            }
#line 209 "const_struct.m"
          else
#line 231 "const_struct.m"
            {
#line 231 "const_struct.m"
              MR_Word hlds__const_struct__TypeCtorInfo_52_52;
#line 231 "const_struct.m"
              MR_Word hlds__const_struct__OtherMap0_24;
#line 231 "const_struct.m"
              MR_Word hlds__const_struct__OtherMap_25;
#line 231 "const_struct.m"
              MR_Integer hlds__const_struct__NextConstNum_45;
#line 231 "const_struct.m"
              MR_Word hlds__const_struct__MaybeOldConstNum_46;

#line 231 "const_struct.m"
              {
#line 231 "const_struct.m"
                hlds__const_struct__const_struct_db_get_next_num_2_p_0(hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__NextConstNum_45);
              }
#line 232 "const_struct.m"
              {
#line 232 "const_struct.m"
                hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__OtherMap0_24);
              }
#line 3808 "hlds.const_struct.c"
              hlds__const_struct__TypeCtorInfo_52_52 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
#line 233 "const_struct.m"
              {
#line 233 "const_struct.m"
                mercury__map__search_insert_5_p_0(hlds__const_struct__TypeCtorInfo_52_52, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__const_struct__ConstStruct_5)), ((MR_Box) (hlds__const_struct__NextConstNum_45)), &hlds__const_struct__MaybeOldConstNum_46, hlds__const_struct__OtherMap0_24, &hlds__const_struct__OtherMap_25);
              }
#line 238 "const_struct.m"
              if ((hlds__const_struct__MaybeOldConstNum_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "const_struct.m"
                {
#line 239 "const_struct.m"
                  MR_Integer hlds__const_struct__V_33_33;
#line 239 "const_struct.m"
                  MR_Word hlds__const_struct__STATE_VARIABLE_Db_34_34;
#line 239 "const_struct.m"
                  MR_Word hlds__const_struct__STATE_VARIABLE_Db_36_36;
#line 239 "const_struct.m"
                  MR_Word hlds__const_struct__NumMap0_41;
#line 239 "const_struct.m"
                  MR_Word hlds__const_struct__NumMap_42;

#line 240 "const_struct.m"
                  *hlds__const_struct__ConstNum_6 = hlds__const_struct__NextConstNum_45;
#line 241 "const_struct.m"
                  {
#line 241 "const_struct.m"
                    hlds__const_struct__const_struct_db_get_num_map_2_p_0(hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__NumMap0_41);
                  }
#line 242 "const_struct.m"
                  {
#line 242 "const_struct.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__const_struct__TypeCtorInfo_52_52, *hlds__const_struct__ConstNum_6, ((MR_Box) (hlds__const_struct__ConstStruct_5)), hlds__const_struct__NumMap0_41, &hlds__const_struct__NumMap_42);
                  }
#line 244 "const_struct.m"
                  hlds__const_struct__V_33_33 = (hlds__const_struct__NextConstNum_45 + (MR_Integer) 1);
#line 244 "const_struct.m"
                  {
#line 244 "const_struct.m"
                    hlds__const_struct__const_struct_db_set_next_num_3_p_0(hlds__const_struct__V_33_33, hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__STATE_VARIABLE_Db_34_34);
                  }
#line 245 "const_struct.m"
                  {
#line 245 "const_struct.m"
                    hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(hlds__const_struct__OtherMap_25, hlds__const_struct__STATE_VARIABLE_Db_34_34, &hlds__const_struct__STATE_VARIABLE_Db_36_36);
                  }
#line 246 "const_struct.m"
                  {
#line 246 "const_struct.m"
                    hlds__const_struct__const_struct_db_set_num_map_3_p_0(hlds__const_struct__NumMap_42, hlds__const_struct__STATE_VARIABLE_Db_36_36, hlds__const_struct__STATE_VARIABLE_Db_27);
#line 246 "const_struct.m"
                    return;
                  }
#line 239 "const_struct.m"
                }
#line 238 "const_struct.m"
              else
#line 236 "const_struct.m"
                {
#line 236 "const_struct.m"
                  *hlds__const_struct__ConstNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__const_struct__MaybeOldConstNum_46, (MR_Integer) 0)));
#line 236 "const_struct.m"
                  *hlds__const_struct__STATE_VARIABLE_Db_27 = hlds__const_struct__STATE_VARIABLE_Db_0_26;
#line 236 "const_struct.m"
                }
#line 231 "const_struct.m"
            }
#line 207 "const_struct.m"
        }
#line 206 "const_struct.m"
        break;
#line 206 "const_struct.m"
    }
#line 201 "const_struct.m"
  }
#line 83 "const_struct.m"
}

#line 78 "const_struct.m"
void MR_CALL 
hlds__const_struct__const_struct_db_get_ground_term_enabled_2_p_0(
#line 78 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 78 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__2_2)
#line 78 "const_struct.m"
{
#line 326 "const_struct.m"
  {
#line 326 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 326 "const_struct.m"
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 326 "const_struct.m"
    MR_Integer hlds__const_struct__V_5_5;
#line 326 "const_struct.m"
    MR_Word hlds__const_struct__V_6_6;
#line 326 "const_struct.m"
    MR_Word hlds__const_struct__V_7_7;
#line 326 "const_struct.m"
    MR_Word hlds__const_struct__V_8_8;
#line 326 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9;

#line 326 "const_struct.m"
    *hlds__const_struct__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 326 "const_struct.m"
    hlds__const_struct__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 326 "const_struct.m"
    hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 326 "const_struct.m"
    hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 326 "const_struct.m"
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 326 "const_struct.m"
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
#line 326 "const_struct.m"
  }
#line 78 "const_struct.m"
}

#line 76 "const_struct.m"
void MR_CALL 
hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(
#line 76 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 76 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__2_2)
#line 76 "const_struct.m"
{
#line 325 "const_struct.m"
  {
#line 325 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 325 "const_struct.m"
    MR_Word hlds__const_struct__V_4_4;
#line 325 "const_struct.m"
    MR_Integer hlds__const_struct__V_5_5;
#line 325 "const_struct.m"
    MR_Word hlds__const_struct__V_6_6;
#line 325 "const_struct.m"
    MR_Word hlds__const_struct__V_7_7;
#line 325 "const_struct.m"
    MR_Word hlds__const_struct__V_8_8;
#line 325 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9;

#line 325 "const_struct.m"
    *hlds__const_struct__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 325 "const_struct.m"
    hlds__const_struct__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 325 "const_struct.m"
    hlds__const_struct__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 325 "const_struct.m"
    hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 325 "const_struct.m"
    hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 325 "const_struct.m"
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 325 "const_struct.m"
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
#line 325 "const_struct.m"
  }
#line 76 "const_struct.m"
}

#line 68 "const_struct.m"
void MR_CALL 
hlds__const_struct__const_struct_db_init_2_p_0(
#line 68 "const_struct.m"
  MR_Word hlds__const_struct__Globals_3,
#line 68 "const_struct.m"
  MR_Word * hlds__const_struct__Db_4)
#line 68 "const_struct.m"
{
#line 130 "const_struct.m"
  {
#line 130 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__TypeCtorInfo_18_18;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__TypeCtorInfo_19_19;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__Target_5;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__PolyEnabled_8;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__GroundTermEnabled_9;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__V_13_13;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__V_16_16;

#line 131 "const_struct.m"
    {
#line 131 "const_struct.m"
      libs__globals__get_target_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__Target_5);
    }
#line 154 "const_struct.m"
#line 154 "const_struct.m"
    switch (hlds__const_struct__Target_5) {
#line 154 "const_struct.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 154 "const_struct.m"
      case (MR_Integer) 0:
#line 133 "const_struct.m"
        {
#line 133 "const_struct.m"
          MR_Word hlds__const_struct__HighLevelData_6;

#line 134 "const_struct.m"
          {
#line 134 "const_struct.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__const_struct__Globals_3, (MR_Integer) 252, &hlds__const_struct__HighLevelData_6);
          }
#line 149 "const_struct.m"
#line 149 "const_struct.m"
          switch (hlds__const_struct__HighLevelData_6) {
#line 149 "const_struct.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 149 "const_struct.m"
            case (MR_Integer) 0:
#line 136 "const_struct.m"
              {
#line 136 "const_struct.m"
                MR_Word hlds__const_struct__Tags_7;

#line 137 "const_struct.m"
                {
#line 137 "const_struct.m"
                  libs__globals__get_tags_method_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__Tags_7);
                }
#line 142 "const_struct.m"
#line 142 "const_struct.m"
                switch (hlds__const_struct__Tags_7) {
#line 142 "const_struct.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 142 "const_struct.m"
                  case (MR_Integer) 2:
#line 142 "const_struct.m"
                  case (MR_Integer) 0:
#line 145 "const_struct.m"
                    {
#line 146 "const_struct.m"
                      hlds__const_struct__PolyEnabled_8 = (MR_Integer) 0;
#line 147 "const_struct.m"
                      hlds__const_struct__GroundTermEnabled_9 = (MR_Integer) 0;
#line 145 "const_struct.m"
                    }
#line 142 "const_struct.m"
                    break;
#line 142 "const_struct.m"
                  case (MR_Integer) 1:
#line 176 "const_struct.m"
                    {
#line 176 "const_struct.m"
                      MR_Word hlds__const_struct__TraceLevel_25;
#line 176 "const_struct.m"
                      MR_Word hlds__const_struct__TraceSuppress_26;
#line 176 "const_struct.m"
                      MR_Word hlds__const_struct__Bodies_27;

#line 177 "const_struct.m"
                      {
#line 177 "const_struct.m"
                        libs__globals__lookup_bool_option_3_p_0(hlds__const_struct__Globals_3, (MR_Integer) 339, &hlds__const_struct__PolyEnabled_8);
                      }
#line 181 "const_struct.m"
                      {
#line 181 "const_struct.m"
                        libs__globals__get_trace_level_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__TraceLevel_25);
                      }
#line 182 "const_struct.m"
                      {
#line 182 "const_struct.m"
                        libs__globals__get_trace_suppress_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__TraceSuppress_26);
                      }
#line 183 "const_struct.m"
                      {
#line 183 "const_struct.m"
                        hlds__const_struct__Bodies_27 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(hlds__const_struct__TraceLevel_25, hlds__const_struct__TraceSuppress_26);
                      }
#line 187 "const_struct.m"
#line 187 "const_struct.m"
                      switch (hlds__const_struct__Bodies_27) {
#line 187 "const_struct.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 187 "const_struct.m"
                        case (MR_Integer) 0:
#line 186 "const_struct.m"
                          hlds__const_struct__GroundTermEnabled_9 = hlds__const_struct__PolyEnabled_8;
#line 187 "const_struct.m"
                          break;
#line 187 "const_struct.m"
                        case (MR_Integer) 1:
#line 198 "const_struct.m"
                          hlds__const_struct__GroundTermEnabled_9 = (MR_Integer) 0;
#line 187 "const_struct.m"
                          break;
#line 187 "const_struct.m"
                      }
#line 176 "const_struct.m"
                    }
#line 142 "const_struct.m"
                    break;
#line 142 "const_struct.m"
                }
#line 136 "const_struct.m"
              }
#line 149 "const_struct.m"
              break;
#line 149 "const_struct.m"
            case (MR_Integer) 1:
#line 150 "const_struct.m"
              {
#line 151 "const_struct.m"
                hlds__const_struct__PolyEnabled_8 = (MR_Integer) 0;
#line 152 "const_struct.m"
                hlds__const_struct__GroundTermEnabled_9 = (MR_Integer) 0;
#line 150 "const_struct.m"
              }
#line 149 "const_struct.m"
              break;
#line 149 "const_struct.m"
          }
#line 133 "const_struct.m"
        }
#line 154 "const_struct.m"
        break;
#line 154 "const_struct.m"
      case (MR_Integer) 1:
#line 154 "const_struct.m"
      case (MR_Integer) 3:
#line 161 "const_struct.m"
        {
#line 162 "const_struct.m"
          hlds__const_struct__PolyEnabled_8 = (MR_Integer) 0;
#line 163 "const_struct.m"
          hlds__const_struct__GroundTermEnabled_9 = (MR_Integer) 0;
#line 161 "const_struct.m"
        }
#line 154 "const_struct.m"
        break;
#line 154 "const_struct.m"
      case (MR_Integer) 2:
#line 155 "const_struct.m"
        {
#line 155 "const_struct.m"
          MR_Word hlds__const_struct__TraceLevel_33;
#line 155 "const_struct.m"
          MR_Word hlds__const_struct__TraceSuppress_34;
#line 183 "const_struct.m"
          MR_Word hlds__const_struct__Bodies_35;

#line 177 "const_struct.m"
          {
#line 177 "const_struct.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__const_struct__Globals_3, (MR_Integer) 339, &hlds__const_struct__PolyEnabled_8);
          }
#line 181 "const_struct.m"
          {
#line 181 "const_struct.m"
            libs__globals__get_trace_level_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__TraceLevel_33);
          }
#line 182 "const_struct.m"
          {
#line 182 "const_struct.m"
            libs__globals__get_trace_suppress_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__TraceSuppress_34);
          }
#line 183 "const_struct.m"
          {
#line 183 "const_struct.m"
            hlds__const_struct__Bodies_35 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(hlds__const_struct__TraceLevel_33, hlds__const_struct__TraceSuppress_34);
          }
#line 157 "const_struct.m"
          hlds__const_struct__GroundTermEnabled_9 = (MR_Integer) 0;
#line 155 "const_struct.m"
        }
#line 154 "const_struct.m"
        break;
#line 154 "const_struct.m"
    }
#line 4195 "hlds.const_struct.c"
    hlds__const_struct__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 166 "const_struct.m"
    {
#line 166 "const_struct.m"
      hlds__const_struct__V_13_13 = mercury__map__init_0_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, hlds__const_struct__TypeCtorInfo_18_18);
    }
#line 4202 "hlds.const_struct.c"
    hlds__const_struct__TypeCtorInfo_19_19 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
#line 166 "const_struct.m"
    {
#line 166 "const_struct.m"
      hlds__const_struct__V_14_14 = mercury__map__init_0_f_0(hlds__const_struct__TypeCtorInfo_19_19, hlds__const_struct__TypeCtorInfo_18_18);
    }
#line 166 "const_struct.m"
    {
#line 166 "const_struct.m"
      hlds__const_struct__V_15_15 = mercury__map__init_0_f_0(hlds__const_struct__TypeCtorInfo_18_18, hlds__const_struct__TypeCtorInfo_19_19);
    }
#line 166 "const_struct.m"
    {
#line 166 "const_struct.m"
      hlds__const_struct__V_16_16 = mercury__map__init_0_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, hlds__const_struct__TypeCtorInfo_18_18);
    }
#line 165 "const_struct.m"
    {
#line 165 "const_struct.m"
      MR_Word base;
#line 165 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 165 "const_struct.m"
      *hlds__const_struct__Db_4 = base;
#line 165 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__PolyEnabled_8 | ((hlds__const_struct__GroundTermEnabled_9 << (MR_Integer) 1)))));
#line 165 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 165 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_13_13));
#line 165 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_14_14));
#line 165 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_15_15));
#line 165 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_16_16));
#line 165 "const_struct.m"
    }
#line 130 "const_struct.m"
  }
#line 68 "const_struct.m"
}

void mercury__hlds__const_struct__init(void)
{
}

void mercury__hlds__const_struct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_map_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0);
}

void mercury__hlds__const_struct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.const_struct. */
