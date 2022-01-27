/*
** Automatically generated from `const_struct.m'
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


/* :- module hlds.const_struct. */
/* :- implementation. */

/*
INIT mercury__hlds__const_struct__init
ENDINIT
*/

#include "hlds.const_struct.mih"


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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 130 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

#line 133 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0[5];

#line 136 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0[5];

#line 139 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0;

#line 142 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0[1];

#line 145 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0[1];

#line 148 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0[1];

#line 151 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0[1];

#line 154 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 157 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0[3];

#line 160 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0;

#line 163 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0[1];

#line 166 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0[1];

#line 169 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0[1];

#line 172 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0[1];

#line 175 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0;

#line 178 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0[4];

#line 181 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0[4];

#line 184 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0;

#line 187 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0[1];

#line 190 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0[1];

#line 193 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0[1];

#line 196 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0[1];

#line 199 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0[1];

#line 202 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0;

#line 205 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1[2];

#line 208 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1;

#line 211 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0[1];

#line 214 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_1[1];

#line 217 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_arg_0[2];

#line 220 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0[2];

#line 223 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0[2];

#line 226 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0;

#line 229 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_0builtin__type_ctor_info_int_0;

#line 232 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0;

#line 235 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0[7];

#line 238 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0[7];

#line 241 "hlds.const_struct.c"
static const MR_DuArgLocn hlds__const_struct__hlds__const_struct__field_locns_const_struct_db_0_0[7];

#line 244 "hlds.const_struct.c"
static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0;

#line 247 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0[1];

#line 250 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0[1];

#line 253 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0[1];

#line 256 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0[1];

#line 259 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0_10001(
#line 262 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 264 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 267 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0_10001(
#line 270 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 272 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 274 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 277 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0_10001(
#line 280 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 282 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 285 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0_10001(
#line 288 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 290 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 292 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 295 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0_10001(
#line 298 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 300 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 303 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0_10001(
#line 306 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 308 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 310 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 313 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0_10001(
#line 316 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 318 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 321 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0_10001(
#line 324 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 326 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 328 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 331 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0_10001(
#line 334 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 336 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 339 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0_10001(
#line 342 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 344 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 346 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 349 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0_10001(
#line 352 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 354 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2);

#line 357 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0_10001(
#line 360 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 362 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 364 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3);

#line 283 "const_struct.m"
static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0(
#line 283 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__1_1,
#line 283 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2,
#line 283 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__3_3);

#line 283 "const_struct.m"
static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0(
#line 283 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__1_1,
#line 283 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2);

#line 327 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_num_map_3_p_0(
#line 327 "const_struct.m"
  MR_Word hlds__const_struct__NumMap_4,
#line 327 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 327 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

#line 325 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(
#line 325 "const_struct.m"
  MR_Word hlds__const_struct__OtherMap_4,
#line 325 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 325 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

#line 323 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(
#line 323 "const_struct.m"
  MR_Word hlds__const_struct__ConsMap_4,
#line 323 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 323 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

#line 321 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_next_num_3_p_0(
#line 321 "const_struct.m"
  MR_Integer hlds__const_struct__Num_4,
#line 321 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 321 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

#line 308 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_num_map_2_p_0(
#line 308 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 308 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__2_2);

#line 306 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(
#line 306 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 306 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__2_2);

#line 303 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_next_num_2_p_0(
#line 303 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 303 "const_struct.m"
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



#line 514 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0
  }
};

#line 522 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 531 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0[5] = {
  (MR_String) "cps_name",
  (MR_String) "cps_args",
  (MR_String) "cps_cons_id",
  (MR_String) "cps_term_type",
  (MR_String) "cps_term_inst"
};

#line 540 "hlds.const_struct.c"
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

#line 555 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0
};

#line 560 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0
  }
};

#line 569 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0
};

#line 574 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0[1] = {
  (MR_Integer) 0
};

#line 579 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____cons_proxy_struct_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____cons_proxy_struct_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "cons_proxy_struct",
  {
    hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0
  },
  {
    hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0
};

#line 600 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 608 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 615 "hlds.const_struct.c"
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

#line 630 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0
};

#line 635 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0
  }
};

#line 644 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0
};

#line 649 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0[1] = {
  (MR_Integer) 0
};

#line 654 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_instance_id_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_instance_id_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_instance_id",
  {
    hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0
  },
  {
    hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0
};

#line 675 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 684 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__const_struct____Unify____const_instance_map_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_instance_map_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_instance_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 705 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 713 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0[4] = {
  (MR_String) "cs_cons_id",
  (MR_String) "cs_args",
  (MR_String) "cs_term_type",
  (MR_String) "cs_term_inst"
};

#line 721 "hlds.const_struct.c"
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

#line 736 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0
};

#line 741 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0
  }
};

#line 750 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0
};

#line 755 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0[1] = {
  (MR_Integer) 0
};

#line 760 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct",
  {
    hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0
  },
  {
    hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0
};

#line 781 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 786 "hlds.const_struct.c"
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

#line 801 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 807 "hlds.const_struct.c"
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

#line 822 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0
};

#line 827 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_1[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1
};

#line 832 "hlds.const_struct.c"
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

#line 846 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0[2] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0,
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1
};

#line 852 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 858 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_arg_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_arg_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct_arg",
  {
    hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0
  },
  {
    hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_arg_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0
};

#line 879 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 888 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 897 "hlds.const_struct.c"
static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

#line 906 "hlds.const_struct.c"
static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0
};

#line 917 "hlds.const_struct.c"
static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0[7] = {
  (MR_String) "csdb_poly_enabled",
  (MR_String) "csdb_ground_term_enabled",
  (MR_String) "csdb_next_num",
  (MR_String) "csdb_cons_proxy_map",
  (MR_String) "csdb_other_struct_map",
  (MR_String) "csdb_num_map",
  (MR_String) "csdb_instance_map"
};

#line 928 "hlds.const_struct.c"
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

#line 967 "hlds.const_struct.c"
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

#line 982 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0
};

#line 987 "hlds.const_struct.c"
static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0
  }
};

#line 996 "hlds.const_struct.c"
static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0
};

#line 1001 "hlds.const_struct.c"
static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0[1] = {
  (MR_Integer) 0
};

#line 1006 "hlds.const_struct.c"
const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_db_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_db_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct_db",
  {
    hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0
  },
  {
    hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0
};

#line 1027 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0_10001(
#line 1030 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1032 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1034 "hlds.const_struct.c"
{
#line 1036 "hlds.const_struct.c"
  {
#line 1038 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1041 "hlds.const_struct.c"
    {
#line 1043 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____cons_proxy_struct_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1046 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1048 "hlds.const_struct.c"
  }
#line 1050 "hlds.const_struct.c"
}

#line 1053 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0_10001(
#line 1056 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1058 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1060 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1062 "hlds.const_struct.c"
{
#line 1064 "hlds.const_struct.c"
  {
#line 1066 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1069 "hlds.const_struct.c"
    {
#line 1071 "hlds.const_struct.c"
      hlds__const_struct____Compare____cons_proxy_struct_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1074 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1076 "hlds.const_struct.c"
  }
#line 1078 "hlds.const_struct.c"
}

#line 1081 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0_10001(
#line 1084 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1086 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1088 "hlds.const_struct.c"
{
#line 1090 "hlds.const_struct.c"
  {
#line 1092 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1095 "hlds.const_struct.c"
    {
#line 1097 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_instance_id_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1100 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1102 "hlds.const_struct.c"
  }
#line 1104 "hlds.const_struct.c"
}

#line 1107 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0_10001(
#line 1110 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1112 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1114 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1116 "hlds.const_struct.c"
{
#line 1118 "hlds.const_struct.c"
  {
#line 1120 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1123 "hlds.const_struct.c"
    {
#line 1125 "hlds.const_struct.c"
      hlds__const_struct____Compare____const_instance_id_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1128 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1130 "hlds.const_struct.c"
  }
#line 1132 "hlds.const_struct.c"
}

#line 1135 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0_10001(
#line 1138 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1140 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1142 "hlds.const_struct.c"
{
#line 1144 "hlds.const_struct.c"
  {
#line 1146 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1149 "hlds.const_struct.c"
    {
#line 1151 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_instance_map_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1154 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1156 "hlds.const_struct.c"
  }
#line 1158 "hlds.const_struct.c"
}

#line 1161 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0_10001(
#line 1164 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1166 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1168 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1170 "hlds.const_struct.c"
{
#line 1172 "hlds.const_struct.c"
  {
#line 1174 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1177 "hlds.const_struct.c"
    {
#line 1179 "hlds.const_struct.c"
      hlds__const_struct____Compare____const_instance_map_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1182 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1184 "hlds.const_struct.c"
  }
#line 1186 "hlds.const_struct.c"
}

#line 1189 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0_10001(
#line 1192 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1194 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1196 "hlds.const_struct.c"
{
#line 1198 "hlds.const_struct.c"
  {
#line 1200 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1203 "hlds.const_struct.c"
    {
#line 1205 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_struct_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1208 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1210 "hlds.const_struct.c"
  }
#line 1212 "hlds.const_struct.c"
}

#line 1215 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0_10001(
#line 1218 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1220 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1222 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1224 "hlds.const_struct.c"
{
#line 1226 "hlds.const_struct.c"
  {
#line 1228 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1231 "hlds.const_struct.c"
    {
#line 1233 "hlds.const_struct.c"
      hlds__const_struct____Compare____const_struct_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1236 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1238 "hlds.const_struct.c"
  }
#line 1240 "hlds.const_struct.c"
}

#line 1243 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0_10001(
#line 1246 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1248 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1250 "hlds.const_struct.c"
{
#line 1252 "hlds.const_struct.c"
  {
#line 1254 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1257 "hlds.const_struct.c"
    {
#line 1259 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_struct_arg_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1262 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1264 "hlds.const_struct.c"
  }
#line 1266 "hlds.const_struct.c"
}

#line 1269 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0_10001(
#line 1272 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1274 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1276 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1278 "hlds.const_struct.c"
{
#line 1280 "hlds.const_struct.c"
  {
#line 1282 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1285 "hlds.const_struct.c"
    {
#line 1287 "hlds.const_struct.c"
      hlds__const_struct____Compare____const_struct_arg_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1290 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1292 "hlds.const_struct.c"
  }
#line 1294 "hlds.const_struct.c"
}

#line 1297 "hlds.const_struct.c"
static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0_10001(
#line 1300 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_1,
#line 1302 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2)
#line 1304 "hlds.const_struct.c"
{
#line 1306 "hlds.const_struct.c"
  {
#line 1308 "hlds.const_struct.c"
    MR_bool hlds__const_struct__succeeded;

#line 1311 "hlds.const_struct.c"
    {
#line 1313 "hlds.const_struct.c"
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_struct_db_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
#line 1316 "hlds.const_struct.c"
    return hlds__const_struct__succeeded;
#line 1318 "hlds.const_struct.c"
  }
#line 1320 "hlds.const_struct.c"
}

#line 1323 "hlds.const_struct.c"
static void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0_10001(
#line 1326 "hlds.const_struct.c"
  MR_Box * hlds__const_struct__wrapper_arg_1,
#line 1328 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_2,
#line 1330 "hlds.const_struct.c"
  MR_Box hlds__const_struct__wrapper_arg_3)
#line 1332 "hlds.const_struct.c"
{
#line 1334 "hlds.const_struct.c"
  {
#line 1336 "hlds.const_struct.c"
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

#line 1339 "hlds.const_struct.c"
    {
#line 1341 "hlds.const_struct.c"
      hlds__const_struct____Compare____const_struct_db_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
#line 1344 "hlds.const_struct.c"
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
#line 1346 "hlds.const_struct.c"
  }
#line 1348 "hlds.const_struct.c"
}

#line 292 "const_struct.m"
void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0(
#line 292 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__1_1,
#line 292 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2,
#line 292 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__3_3)
#line 292 "const_struct.m"
{
#line 292 "const_struct.m"
  {
#line 292 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 292 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_24 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
#line 292 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_25 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

#line 292 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_24 == hlds__const_struct__CastY_25);
#line 292 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 1375 "hlds.const_struct.c"
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "const_struct.m"
    else
#line 292 "const_struct.m"
      {
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 292 "const_struct.m"
        MR_Integer hlds__const_struct__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 5)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 292 "const_struct.m"
        MR_Integer hlds__const_struct__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 2)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 3)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 4)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 5)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_18_18;
#line 292 "const_struct.m"
        MR_Integer hlds__const_struct__V_33_33 = (MR_Integer) hlds__const_struct__V_4_4;
#line 292 "const_struct.m"
        MR_Integer hlds__const_struct__V_34_34 = (MR_Integer) hlds__const_struct__V_11_11;

#line 292 "const_struct.m"
        {
#line 292 "const_struct.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__const_struct__V_18_18, hlds__const_struct__V_33_33, hlds__const_struct__V_34_34);
        }
#line 1421 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (hlds__const_struct__V_18_18 == (MR_Integer) 0);
#line 292 "const_struct.m"
        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 292 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_18_18;
#line 292 "const_struct.m"
        else
#line 292 "const_struct.m"
          {
#line 292 "const_struct.m"
            MR_Word hlds__const_struct__V_19_19;
#line 292 "const_struct.m"
            MR_Integer hlds__const_struct__V_35_35 = (MR_Integer) hlds__const_struct__V_5_5;
#line 292 "const_struct.m"
            MR_Integer hlds__const_struct__V_36_36 = (MR_Integer) hlds__const_struct__V_12_12;

#line 292 "const_struct.m"
            {
#line 292 "const_struct.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__const_struct__V_19_19, hlds__const_struct__V_35_35, hlds__const_struct__V_36_36);
            }
#line 1445 "hlds.const_struct.c"
            hlds__const_struct__succeeded = (hlds__const_struct__V_19_19 == (MR_Integer) 0);
#line 292 "const_struct.m"
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 292 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_19_19;
#line 292 "const_struct.m"
            else
#line 292 "const_struct.m"
              {
#line 292 "const_struct.m"
                MR_Word hlds__const_struct__V_20_20;

#line 292 "const_struct.m"
                {
#line 292 "const_struct.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__const_struct__V_20_20, hlds__const_struct__V_6_6, hlds__const_struct__V_13_13);
                }
#line 1465 "hlds.const_struct.c"
                hlds__const_struct__succeeded = (hlds__const_struct__V_20_20 == (MR_Integer) 0);
#line 292 "const_struct.m"
                hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 292 "const_struct.m"
                if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
                  *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_20_20;
#line 292 "const_struct.m"
                else
#line 292 "const_struct.m"
                  {
#line 292 "const_struct.m"
                    MR_Word hlds__const_struct__V_21_21;

#line 292 "const_struct.m"
                    {
#line 292 "const_struct.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[1], &hlds__const_struct__V_21_21, ((MR_Box) (hlds__const_struct__V_7_7)), ((MR_Box) (hlds__const_struct__V_14_14)));
                    }
#line 1485 "hlds.const_struct.c"
                    hlds__const_struct__succeeded = (hlds__const_struct__V_21_21 == (MR_Integer) 0);
#line 292 "const_struct.m"
                    hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 292 "const_struct.m"
                    if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
                      *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_21_21;
#line 292 "const_struct.m"
                    else
#line 292 "const_struct.m"
                      {
#line 292 "const_struct.m"
                        MR_Word hlds__const_struct__V_22_22;

#line 292 "const_struct.m"
                        {
#line 292 "const_struct.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[2], &hlds__const_struct__V_22_22, ((MR_Box) (hlds__const_struct__V_8_8)), ((MR_Box) (hlds__const_struct__V_15_15)));
                        }
#line 1505 "hlds.const_struct.c"
                        hlds__const_struct__succeeded = (hlds__const_struct__V_22_22 == (MR_Integer) 0);
#line 292 "const_struct.m"
                        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 292 "const_struct.m"
                        if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
                          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_22_22;
#line 292 "const_struct.m"
                        else
#line 292 "const_struct.m"
                          {
#line 292 "const_struct.m"
                            MR_Word hlds__const_struct__V_23_23;

#line 292 "const_struct.m"
                            {
#line 292 "const_struct.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[3], &hlds__const_struct__V_23_23, ((MR_Box) (hlds__const_struct__V_9_9)), ((MR_Box) (hlds__const_struct__V_16_16)));
                            }
#line 1525 "hlds.const_struct.c"
                            hlds__const_struct__succeeded = (hlds__const_struct__V_23_23 == (MR_Integer) 0);
#line 292 "const_struct.m"
                            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 292 "const_struct.m"
                            if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
                              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_23_23;
#line 292 "const_struct.m"
                            else
#line 292 "const_struct.m"
                              {
#line 292 "const_struct.m"
                                {
#line 292 "const_struct.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[0], hlds__const_struct__HeadVar__1_1, ((MR_Box) (hlds__const_struct__V_10_10)), ((MR_Box) (hlds__const_struct__V_17_17)));
#line 292 "const_struct.m"
                                  return;
                                }
#line 292 "const_struct.m"
                              }
#line 292 "const_struct.m"
                          }
#line 292 "const_struct.m"
                      }
#line 292 "const_struct.m"
                  }
#line 292 "const_struct.m"
              }
#line 292 "const_struct.m"
          }
#line 292 "const_struct.m"
      }
#line 292 "const_struct.m"
  }
#line 292 "const_struct.m"
}

#line 292 "const_struct.m"
MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0(
#line 292 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__1_1,
#line 292 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2)
#line 292 "const_struct.m"
{
#line 292 "const_struct.m"
  {
#line 292 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 292 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_17 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
#line 292 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_18 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

#line 292 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_17 == hlds__const_struct__CastY_18);
#line 292 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
      hlds__const_struct__succeeded = MR_TRUE;
#line 292 "const_struct.m"
    else
#line 292 "const_struct.m"
      {
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_19_19;
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_20_20;
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_21_21;
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_22_22;
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 292 "const_struct.m"
        MR_Integer hlds__const_struct__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 2)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 3)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 4)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 5)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 292 "const_struct.m"
        MR_Integer hlds__const_struct__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));
#line 292 "const_struct.m"
        MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 5)));

#line 1628 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (hlds__const_struct__V_3_3 == hlds__const_struct__V_10_10);
#line 292 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
          {
#line 1634 "hlds.const_struct.c"
            hlds__const_struct__succeeded = (hlds__const_struct__V_4_4 == hlds__const_struct__V_11_11);
#line 292 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
              {
#line 1640 "hlds.const_struct.c"
                hlds__const_struct__succeeded = (hlds__const_struct__V_5_5 == hlds__const_struct__V_12_12);
#line 292 "const_struct.m"
                if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
                  {
#line 1646 "hlds.const_struct.c"
                    hlds__const_struct__TypeInfo_19_19 = (MR_Word) &hlds__const_struct_scalar_common_2[1];
#line 1648 "hlds.const_struct.c"
                    {
#line 1650 "hlds.const_struct.c"
                      hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_19_19, ((MR_Box) (hlds__const_struct__V_6_6)), ((MR_Box) (hlds__const_struct__V_13_13)));
                    }
#line 292 "const_struct.m"
                    if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
                      {
#line 1657 "hlds.const_struct.c"
                        hlds__const_struct__TypeInfo_20_20 = (MR_Word) &hlds__const_struct_scalar_common_2[2];
#line 1659 "hlds.const_struct.c"
                        {
#line 1661 "hlds.const_struct.c"
                          hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_20_20, ((MR_Box) (hlds__const_struct__V_7_7)), ((MR_Box) (hlds__const_struct__V_14_14)));
                        }
#line 292 "const_struct.m"
                        if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
                          {
#line 1668 "hlds.const_struct.c"
                            hlds__const_struct__TypeInfo_21_21 = (MR_Word) &hlds__const_struct_scalar_common_2[3];
#line 1670 "hlds.const_struct.c"
                            {
#line 1672 "hlds.const_struct.c"
                              hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_21_21, ((MR_Box) (hlds__const_struct__V_8_8)), ((MR_Box) (hlds__const_struct__V_15_15)));
                            }
#line 292 "const_struct.m"
                            if (hlds__const_struct__succeeded)
#line 292 "const_struct.m"
                              {
#line 1679 "hlds.const_struct.c"
                                hlds__const_struct__TypeInfo_22_22 = (MR_Word) &hlds__const_struct_scalar_common_2[0];
#line 1681 "hlds.const_struct.c"
                                {
#line 1683 "hlds.const_struct.c"
                                  return hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_22_22, ((MR_Box) (hlds__const_struct__V_9_9)), ((MR_Box) (hlds__const_struct__V_16_16)));
                                }
#line 292 "const_struct.m"
                              }
#line 292 "const_struct.m"
                          }
#line 292 "const_struct.m"
                      }
#line 292 "const_struct.m"
                  }
#line 292 "const_struct.m"
              }
#line 292 "const_struct.m"
          }
#line 292 "const_struct.m"
      }
#line 292 "const_struct.m"
    return hlds__const_struct__succeeded;
#line 292 "const_struct.m"
  }
#line 292 "const_struct.m"
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
#line 1731 "hlds.const_struct.c"
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
#line 1760 "hlds.const_struct.c"
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
#line 1775 "hlds.const_struct.c"
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
#line 1793 "hlds.const_struct.c"
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
#line 1862 "hlds.const_struct.c"
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
#line 1891 "hlds.const_struct.c"
              {
#line 1893 "hlds.const_struct.c"
                hlds__const_struct__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__const_struct__V_5_5, hlds__const_struct__V_7_7);
              }
#line 40 "const_struct.m"
              if (hlds__const_struct__succeeded)
#line 1898 "hlds.const_struct.c"
                {
#line 1900 "hlds.const_struct.c"
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
#line 1938 "hlds.const_struct.c"
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
#line 1968 "hlds.const_struct.c"
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
#line 1988 "hlds.const_struct.c"
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
#line 2008 "hlds.const_struct.c"
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

#line 2083 "hlds.const_struct.c"
        {
#line 2085 "hlds.const_struct.c"
          hlds__const_struct__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__const_struct__V_3_3, hlds__const_struct__V_7_7);
        }
#line 28 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 28 "const_struct.m"
          {
#line 2092 "hlds.const_struct.c"
            hlds__const_struct__TypeInfo_14_14 = (MR_Word) &hlds__const_struct_scalar_common_1[0];
#line 2094 "hlds.const_struct.c"
            {
#line 2096 "hlds.const_struct.c"
              hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_14_14, ((MR_Box) (hlds__const_struct__V_4_4)), ((MR_Box) (hlds__const_struct__V_8_8)));
            }
#line 28 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 28 "const_struct.m"
              {
#line 2103 "hlds.const_struct.c"
                {
#line 2105 "hlds.const_struct.c"
                  hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__const_struct__V_5_5, hlds__const_struct__V_9_9);
                }
#line 28 "const_struct.m"
                if (hlds__const_struct__succeeded)
#line 2110 "hlds.const_struct.c"
                  {
#line 2112 "hlds.const_struct.c"
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
#line 2214 "hlds.const_struct.c"
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
#line 2240 "hlds.const_struct.c"
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
#line 2260 "hlds.const_struct.c"
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

#line 2333 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (hlds__const_struct__V_3_3 == hlds__const_struct__V_6_6);
#line 51 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 51 "const_struct.m"
          {
#line 2339 "hlds.const_struct.c"
            {
#line 2341 "hlds.const_struct.c"
              hlds__const_struct__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__const_struct__V_4_4, hlds__const_struct__V_7_7);
            }
#line 51 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 51 "const_struct.m"
              {
#line 2348 "hlds.const_struct.c"
                hlds__const_struct__TypeInfo_12_12 = (MR_Word) &hlds__const_struct_scalar_common_1[1];
#line 2350 "hlds.const_struct.c"
                {
#line 2352 "hlds.const_struct.c"
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

#line 283 "const_struct.m"
static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0(
#line 283 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__1_1,
#line 283 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2,
#line 283 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__3_3)
#line 283 "const_struct.m"
{
#line 283 "const_struct.m"
  {
#line 283 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 283 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_18 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
#line 283 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_19 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

#line 283 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_18 == hlds__const_struct__CastY_19);
#line 283 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 2392 "hlds.const_struct.c"
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
#line 283 "const_struct.m"
    else
#line 283 "const_struct.m"
      {
#line 283 "const_struct.m"
        MR_String hlds__const_struct__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));
#line 283 "const_struct.m"
        MR_String hlds__const_struct__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 2)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 3)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 4)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_14_14;

#line 283 "const_struct.m"
        {
#line 283 "const_struct.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__const_struct__V_14_14, hlds__const_struct__V_4_4, hlds__const_struct__V_9_9);
        }
#line 2426 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (hlds__const_struct__V_14_14 == (MR_Integer) 0);
#line 283 "const_struct.m"
        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 283 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 283 "const_struct.m"
          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_14_14;
#line 283 "const_struct.m"
        else
#line 283 "const_struct.m"
          {
#line 283 "const_struct.m"
            MR_Word hlds__const_struct__V_15_15;

#line 283 "const_struct.m"
            {
#line 283 "const_struct.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_1[0], &hlds__const_struct__V_15_15, ((MR_Box) (hlds__const_struct__V_5_5)), ((MR_Box) (hlds__const_struct__V_10_10)));
            }
#line 2446 "hlds.const_struct.c"
            hlds__const_struct__succeeded = (hlds__const_struct__V_15_15 == (MR_Integer) 0);
#line 283 "const_struct.m"
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 283 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 283 "const_struct.m"
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_15_15;
#line 283 "const_struct.m"
            else
#line 283 "const_struct.m"
              {
#line 283 "const_struct.m"
                MR_Word hlds__const_struct__V_16_16;

#line 283 "const_struct.m"
                {
#line 283 "const_struct.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&hlds__const_struct__V_16_16, hlds__const_struct__V_6_6, hlds__const_struct__V_11_11);
                }
#line 2466 "hlds.const_struct.c"
                hlds__const_struct__succeeded = (hlds__const_struct__V_16_16 == (MR_Integer) 0);
#line 283 "const_struct.m"
                hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 283 "const_struct.m"
                if (hlds__const_struct__succeeded)
#line 283 "const_struct.m"
                  *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_16_16;
#line 283 "const_struct.m"
                else
#line 283 "const_struct.m"
                  {
#line 283 "const_struct.m"
                    MR_Word hlds__const_struct__V_17_17;

#line 283 "const_struct.m"
                    {
#line 283 "const_struct.m"
                      parse_tree__prog_data____Compare____mer_type_0_0(&hlds__const_struct__V_17_17, hlds__const_struct__V_7_7, hlds__const_struct__V_12_12);
                    }
#line 2486 "hlds.const_struct.c"
                    hlds__const_struct__succeeded = (hlds__const_struct__V_17_17 == (MR_Integer) 0);
#line 283 "const_struct.m"
                    hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
#line 283 "const_struct.m"
                    if (hlds__const_struct__succeeded)
#line 283 "const_struct.m"
                      *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_17_17;
#line 283 "const_struct.m"
                    else
#line 283 "const_struct.m"
                      {
#line 283 "const_struct.m"
                        parse_tree__prog_data____Compare____mer_inst_0_0(hlds__const_struct__HeadVar__1_1, hlds__const_struct__V_8_8, hlds__const_struct__V_13_13);
#line 283 "const_struct.m"
                        return;
                      }
#line 283 "const_struct.m"
                  }
#line 283 "const_struct.m"
              }
#line 283 "const_struct.m"
          }
#line 283 "const_struct.m"
      }
#line 283 "const_struct.m"
  }
#line 283 "const_struct.m"
}

#line 283 "const_struct.m"
static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0(
#line 283 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__1_1,
#line 283 "const_struct.m"
  MR_Word hlds__const_struct__HeadVar__2_2)
#line 283 "const_struct.m"
{
#line 283 "const_struct.m"
  {
#line 283 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 283 "const_struct.m"
    MR_Integer hlds__const_struct__CastX_13 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
#line 283 "const_struct.m"
    MR_Integer hlds__const_struct__CastY_14 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

#line 283 "const_struct.m"
    hlds__const_struct__succeeded = (hlds__const_struct__CastX_13 == hlds__const_struct__CastY_14);
#line 283 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 283 "const_struct.m"
      hlds__const_struct__succeeded = MR_TRUE;
#line 283 "const_struct.m"
    else
#line 283 "const_struct.m"
      {
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__TypeInfo_15_15;
#line 283 "const_struct.m"
        MR_String hlds__const_struct__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 2)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 3)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 4)));
#line 283 "const_struct.m"
        MR_String hlds__const_struct__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
#line 283 "const_struct.m"
        MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));

#line 2567 "hlds.const_struct.c"
        hlds__const_struct__succeeded = (strcmp(hlds__const_struct__V_3_3, hlds__const_struct__V_8_8) == 0);
#line 283 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 283 "const_struct.m"
          {
#line 2573 "hlds.const_struct.c"
            hlds__const_struct__TypeInfo_15_15 = (MR_Word) &hlds__const_struct_scalar_common_1[0];
#line 2575 "hlds.const_struct.c"
            {
#line 2577 "hlds.const_struct.c"
              hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_15_15, ((MR_Box) (hlds__const_struct__V_4_4)), ((MR_Box) (hlds__const_struct__V_9_9)));
            }
#line 283 "const_struct.m"
            if (hlds__const_struct__succeeded)
#line 283 "const_struct.m"
              {
#line 2584 "hlds.const_struct.c"
                {
#line 2586 "hlds.const_struct.c"
                  hlds__const_struct__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__const_struct__V_5_5, hlds__const_struct__V_10_10);
                }
#line 283 "const_struct.m"
                if (hlds__const_struct__succeeded)
#line 283 "const_struct.m"
                  {
#line 2593 "hlds.const_struct.c"
                    {
#line 2595 "hlds.const_struct.c"
                      hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__const_struct__V_6_6, hlds__const_struct__V_11_11);
                    }
#line 283 "const_struct.m"
                    if (hlds__const_struct__succeeded)
#line 2600 "hlds.const_struct.c"
                      {
#line 2602 "hlds.const_struct.c"
                        return hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__const_struct__V_7_7, hlds__const_struct__V_12_12);
                      }
#line 283 "const_struct.m"
                  }
#line 283 "const_struct.m"
              }
#line 283 "const_struct.m"
          }
#line 283 "const_struct.m"
      }
#line 283 "const_struct.m"
    return hlds__const_struct__succeeded;
#line 283 "const_struct.m"
  }
#line 283 "const_struct.m"
}

#line 327 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_num_map_3_p_0(
#line 327 "const_struct.m"
  MR_Word hlds__const_struct__NumMap_4,
#line 327 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 327 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
#line 327 "const_struct.m"
{
#line 339 "const_struct.m"
  {
#line 339 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 339 "const_struct.m"
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));

#line 339 "const_struct.m"
    {
#line 339 "const_struct.m"
      MR_Word base;
#line 339 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 339 "const_struct.m"
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_11_11));
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_12_12));
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_13_13));
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__NumMap_4));
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
#line 339 "const_struct.m"
    }
#line 339 "const_struct.m"
  }
#line 327 "const_struct.m"
}

#line 325 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(
#line 325 "const_struct.m"
  MR_Word hlds__const_struct__OtherMap_4,
#line 325 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 325 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
#line 325 "const_struct.m"
{
#line 337 "const_struct.m"
  {
#line 337 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 337 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 337 "const_struct.m"
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 337 "const_struct.m"
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
#line 337 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
#line 337 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
#line 337 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
#line 337 "const_struct.m"
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));

#line 337 "const_struct.m"
    {
#line 337 "const_struct.m"
      MR_Word base;
#line 337 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 337 "const_struct.m"
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
#line 337 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
#line 337 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_11_11));
#line 337 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_12_12));
#line 337 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__OtherMap_4));
#line 337 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_14_14));
#line 337 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
#line 337 "const_struct.m"
    }
#line 337 "const_struct.m"
  }
#line 325 "const_struct.m"
}

#line 323 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(
#line 323 "const_struct.m"
  MR_Word hlds__const_struct__ConsMap_4,
#line 323 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 323 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
#line 323 "const_struct.m"
{
#line 335 "const_struct.m"
  {
#line 335 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 335 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 335 "const_struct.m"
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 335 "const_struct.m"
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
#line 335 "const_struct.m"
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
#line 335 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
#line 335 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
#line 335 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));

#line 335 "const_struct.m"
    {
#line 335 "const_struct.m"
      MR_Word base;
#line 335 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 335 "const_struct.m"
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
#line 335 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
#line 335 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_11_11));
#line 335 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__ConsMap_4));
#line 335 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_13_13));
#line 335 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_14_14));
#line 335 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
#line 335 "const_struct.m"
    }
#line 335 "const_struct.m"
  }
#line 323 "const_struct.m"
}

#line 321 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_set_next_num_3_p_0(
#line 321 "const_struct.m"
  MR_Integer hlds__const_struct__Num_4,
#line 321 "const_struct.m"
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
#line 321 "const_struct.m"
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
#line 321 "const_struct.m"
{
#line 333 "const_struct.m"
  {
#line 333 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 333 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 333 "const_struct.m"
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 333 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
#line 333 "const_struct.m"
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
#line 333 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
#line 333 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
#line 333 "const_struct.m"
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));

#line 333 "const_struct.m"
    {
#line 333 "const_struct.m"
      MR_Word base;
#line 333 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 333 "const_struct.m"
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
#line 333 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
#line 333 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__Num_4));
#line 333 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_12_12));
#line 333 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_13_13));
#line 333 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_14_14));
#line 333 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
#line 333 "const_struct.m"
    }
#line 333 "const_struct.m"
  }
#line 321 "const_struct.m"
}

#line 308 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_num_map_2_p_0(
#line 308 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 308 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__2_2)
#line 308 "const_struct.m"
{
#line 318 "const_struct.m"
  {
#line 318 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 318 "const_struct.m"
    MR_Integer hlds__const_struct__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9;

#line 318 "const_struct.m"
    *hlds__const_struct__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 318 "const_struct.m"
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
#line 318 "const_struct.m"
  }
#line 308 "const_struct.m"
}

#line 306 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(
#line 306 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 306 "const_struct.m"
  MR_Word * hlds__const_struct__HeadVar__2_2)
#line 306 "const_struct.m"
{
#line 317 "const_struct.m"
  {
#line 317 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 317 "const_struct.m"
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 317 "const_struct.m"
    MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 317 "const_struct.m"
    MR_Integer hlds__const_struct__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 317 "const_struct.m"
    MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 317 "const_struct.m"
    MR_Word hlds__const_struct__V_8_8;
#line 317 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9;

#line 317 "const_struct.m"
    *hlds__const_struct__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 317 "const_struct.m"
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 317 "const_struct.m"
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
#line 317 "const_struct.m"
  }
#line 306 "const_struct.m"
}

#line 303 "const_struct.m"
static void MR_CALL 
hlds__const_struct__const_struct_db_get_next_num_2_p_0(
#line 303 "const_struct.m"
  MR_Word hlds__const_struct__Db_3,
#line 303 "const_struct.m"
  MR_Integer * hlds__const_struct__HeadVar__2_2)
#line 303 "const_struct.m"
{
#line 315 "const_struct.m"
  {
#line 315 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 315 "const_struct.m"
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 315 "const_struct.m"
    MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 315 "const_struct.m"
    MR_Word hlds__const_struct__V_6_6;
#line 315 "const_struct.m"
    MR_Word hlds__const_struct__V_7_7;
#line 315 "const_struct.m"
    MR_Word hlds__const_struct__V_8_8;
#line 315 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9;

#line 315 "const_struct.m"
    *hlds__const_struct__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 315 "const_struct.m"
    hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 315 "const_struct.m"
    hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 315 "const_struct.m"
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 315 "const_struct.m"
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
#line 315 "const_struct.m"
  }
#line 303 "const_struct.m"
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
#line 270 "const_struct.m"
  {
#line 270 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 270 "const_struct.m"
    MR_Word hlds__const_struct__NumMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 318 "const_struct.m"
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));

#line 272 "const_struct.m"
    {
#line 272 "const_struct.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, hlds__const_struct__NumMap_5, hlds__const_struct__Structs_4);
#line 272 "const_struct.m"
      return;
    }
#line 270 "const_struct.m"
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
#line 252 "const_struct.m"
  {
#line 252 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 252 "const_struct.m"
    MR_Word hlds__const_struct__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 252 "const_struct.m"
    MR_Word hlds__const_struct__TypeCtorInfo_31_31 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
#line 252 "const_struct.m"
    MR_Word hlds__const_struct__NumMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 4)));
#line 252 "const_struct.m"
    MR_Word hlds__const_struct__ConstStruct_7;
#line 252 "const_struct.m"
    MR_Word hlds__const_struct__NumMap_8;
#line 252 "const_struct.m"
    MR_Word hlds__const_struct__ConsId_9;
#line 252 "const_struct.m"
    MR_Word hlds__const_struct__Args_10;
#line 252 "const_struct.m"
    MR_Word hlds__const_struct__Type_11;
#line 252 "const_struct.m"
    MR_Word hlds__const_struct__Inst_12;
#line 252 "const_struct.m"
    MR_Word hlds__const_struct__STATE_VARIABLE_Db_25_25;
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 318 "const_struct.m"
    MR_Integer hlds__const_struct__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 1)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 2)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 3)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 5)));
#line 254 "const_struct.m"
    MR_Box hlds__const_struct__conv0_ConstStruct_7;
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_45_45;
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_46_46;
#line 339 "const_struct.m"
    MR_Integer hlds__const_struct__V_47_47;
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_48_48;
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_49_49;
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_51_51;
#line 339 "const_struct.m"
    MR_Word hlds__const_struct__V_50_50;
#line 264 "const_struct.m"
    MR_Word hlds__const_struct__SymName_13;
#line 258 "const_struct.m"
    MR_Integer hlds__const_struct__V_14_14;
#line 258 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15;

#line 254 "const_struct.m"
    {
#line 254 "const_struct.m"
      mercury__map__det_remove_4_p_0(hlds__const_struct__TypeCtorInfo_30_30, hlds__const_struct__TypeCtorInfo_31_31, ((MR_Box) (hlds__const_struct__ConstNum_4)), &hlds__const_struct__conv0_ConstStruct_7, hlds__const_struct__NumMap0_6, &hlds__const_struct__NumMap_8);
    }
#line 254 "const_struct.m"
    hlds__const_struct__ConstStruct_7 = ((MR_Word) hlds__const_struct__conv0_ConstStruct_7);
#line 339 "const_struct.m"
    hlds__const_struct__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 339 "const_struct.m"
    hlds__const_struct__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 339 "const_struct.m"
    hlds__const_struct__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 1)));
#line 339 "const_struct.m"
    hlds__const_struct__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 2)));
#line 339 "const_struct.m"
    hlds__const_struct__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 3)));
#line 339 "const_struct.m"
    hlds__const_struct__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 4)));
#line 339 "const_struct.m"
    hlds__const_struct__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 5)));
#line 339 "const_struct.m"
    {
#line 339 "const_struct.m"
      hlds__const_struct__STATE_VARIABLE_Db_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 0) = ((MR_Box) ((hlds__const_struct__V_45_45 | ((hlds__const_struct__V_46_46 << (MR_Integer) 1)))));
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 1) = ((MR_Box) (hlds__const_struct__V_47_47));
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 2) = ((MR_Box) (hlds__const_struct__V_48_48));
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 3) = ((MR_Box) (hlds__const_struct__V_49_49));
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 4) = ((MR_Box) (hlds__const_struct__NumMap_8));
#line 339 "const_struct.m"
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 5) = ((MR_Box) (hlds__const_struct__V_51_51));
#line 339 "const_struct.m"
    }
#line 257 "const_struct.m"
    hlds__const_struct__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 0)));
#line 257 "const_struct.m"
    hlds__const_struct__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 1)));
#line 257 "const_struct.m"
    hlds__const_struct__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 2)));
#line 257 "const_struct.m"
    hlds__const_struct__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 3)));
#line 258 "const_struct.m"
    hlds__const_struct__succeeded = ((((MR_tag((MR_Word) hlds__const_struct__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 258 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 258 "const_struct.m"
      {
#line 258 "const_struct.m"
        hlds__const_struct__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 1)));
#line 258 "const_struct.m"
        hlds__const_struct__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 2)));
#line 258 "const_struct.m"
        hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 3)));
#line 259 "const_struct.m"
        {
#line 259 "const_struct.m"
          MR_String hlds__const_struct__Name_16;
#line 259 "const_struct.m"
          MR_Word hlds__const_struct__ConsProxyStruct_17;
#line 259 "const_struct.m"
          MR_Word hlds__const_struct__ConsMap0_18;
#line 259 "const_struct.m"
          MR_Word hlds__const_struct__ConsMap_20;
#line 316 "const_struct.m"
          MR_Word hlds__const_struct__V_53_53;
#line 316 "const_struct.m"
          MR_Word hlds__const_struct__V_54_54;
#line 316 "const_struct.m"
          MR_Integer hlds__const_struct__V_55_55;
#line 316 "const_struct.m"
          MR_Word hlds__const_struct__V_56_56;
#line 316 "const_struct.m"
          MR_Word hlds__const_struct__V_57_57;
#line 316 "const_struct.m"
          MR_Word hlds__const_struct__V_58_58;
#line 262 "const_struct.m"
          MR_Integer hlds__const_struct___ConstNum_19;
#line 262 "const_struct.m"
          MR_Box hlds__const_struct__conv1__ConstNum_19;
#line 335 "const_struct.m"
          MR_Word hlds__const_struct__V_64_64;
#line 335 "const_struct.m"
          MR_Word hlds__const_struct__V_65_65;
#line 335 "const_struct.m"
          MR_Integer hlds__const_struct__V_66_66;
#line 335 "const_struct.m"
          MR_Word hlds__const_struct__V_68_68;
#line 335 "const_struct.m"
          MR_Word hlds__const_struct__V_69_69;
#line 335 "const_struct.m"
          MR_Word hlds__const_struct__V_70_70;
#line 335 "const_struct.m"
          MR_Word hlds__const_struct__V_67_67;

#line 259 "const_struct.m"
          {
#line 259 "const_struct.m"
            hlds__const_struct__Name_16 = mdbcomp__prim_data__unqualify_name_1_f_0(hlds__const_struct__SymName_13);
          }
#line 260 "const_struct.m"
          {
#line 260 "const_struct.m"
            hlds__const_struct__ConsProxyStruct_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 260 "const_struct.m"
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 0) = ((MR_Box) (hlds__const_struct__Name_16));
#line 260 "const_struct.m"
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 1) = ((MR_Box) (hlds__const_struct__Args_10));
#line 260 "const_struct.m"
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 2) = ((MR_Box) (hlds__const_struct__ConsId_9));
#line 260 "const_struct.m"
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 3) = ((MR_Box) (hlds__const_struct__Type_11));
#line 260 "const_struct.m"
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 4) = ((MR_Box) (hlds__const_struct__Inst_12));
#line 260 "const_struct.m"
          }
#line 316 "const_struct.m"
          hlds__const_struct__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 316 "const_struct.m"
          hlds__const_struct__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 316 "const_struct.m"
          hlds__const_struct__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
#line 316 "const_struct.m"
          hlds__const_struct__ConsMap0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
#line 316 "const_struct.m"
          hlds__const_struct__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
#line 316 "const_struct.m"
          hlds__const_struct__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
#line 316 "const_struct.m"
          hlds__const_struct__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
#line 262 "const_struct.m"
          {
#line 262 "const_struct.m"
            mercury__map__det_remove_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, hlds__const_struct__TypeCtorInfo_30_30, ((MR_Box) (hlds__const_struct__ConsProxyStruct_17)), &hlds__const_struct__conv1__ConstNum_19, hlds__const_struct__ConsMap0_18, &hlds__const_struct__ConsMap_20);
          }
#line 262 "const_struct.m"
          hlds__const_struct___ConstNum_19 = ((MR_Integer) hlds__const_struct__conv1__ConstNum_19);
#line 335 "const_struct.m"
          hlds__const_struct__V_64_64 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 335 "const_struct.m"
          hlds__const_struct__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 335 "const_struct.m"
          hlds__const_struct__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
#line 335 "const_struct.m"
          hlds__const_struct__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
#line 335 "const_struct.m"
          hlds__const_struct__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
#line 335 "const_struct.m"
          hlds__const_struct__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
#line 335 "const_struct.m"
          hlds__const_struct__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
#line 335 "const_struct.m"
          {
#line 335 "const_struct.m"
            MR_Word base;
#line 335 "const_struct.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 335 "const_struct.m"
            *hlds__const_struct__STATE_VARIABLE_Db_24 = base;
#line 335 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_64_64 | ((hlds__const_struct__V_65_65 << (MR_Integer) 1)))));
#line 335 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_66_66));
#line 335 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__ConsMap_20));
#line 335 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_68_68));
#line 335 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_69_69));
#line 335 "const_struct.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_70_70));
#line 335 "const_struct.m"
          }
#line 259 "const_struct.m"
        }
#line 258 "const_struct.m"
      }
#line 258 "const_struct.m"
    else
#line 265 "const_struct.m"
      {
#line 265 "const_struct.m"
        MR_Word hlds__const_struct__OtherMap0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
#line 265 "const_struct.m"
        MR_Word hlds__const_struct__OtherMap_22;
#line 317 "const_struct.m"
        MR_Word hlds__const_struct__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 317 "const_struct.m"
        MR_Word hlds__const_struct__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 317 "const_struct.m"
        MR_Integer hlds__const_struct__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
#line 317 "const_struct.m"
        MR_Word hlds__const_struct__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
#line 317 "const_struct.m"
        MR_Word hlds__const_struct__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
#line 317 "const_struct.m"
        MR_Word hlds__const_struct__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
#line 266 "const_struct.m"
        MR_Integer hlds__const_struct___ConstNum_28;
#line 266 "const_struct.m"
        MR_Box hlds__const_struct__conv2__ConstNum_28;
#line 337 "const_struct.m"
        MR_Word hlds__const_struct__V_83_83;
#line 337 "const_struct.m"
        MR_Word hlds__const_struct__V_84_84;
#line 337 "const_struct.m"
        MR_Integer hlds__const_struct__V_85_85;
#line 337 "const_struct.m"
        MR_Word hlds__const_struct__V_86_86;
#line 337 "const_struct.m"
        MR_Word hlds__const_struct__V_88_88;
#line 337 "const_struct.m"
        MR_Word hlds__const_struct__V_89_89;
#line 337 "const_struct.m"
        MR_Word hlds__const_struct__V_87_87;

#line 266 "const_struct.m"
        {
#line 266 "const_struct.m"
          mercury__map__det_remove_4_p_0(hlds__const_struct__TypeCtorInfo_31_31, hlds__const_struct__TypeCtorInfo_30_30, ((MR_Box) (hlds__const_struct__ConstStruct_7)), &hlds__const_struct__conv2__ConstNum_28, hlds__const_struct__OtherMap0_21, &hlds__const_struct__OtherMap_22);
        }
#line 266 "const_struct.m"
        hlds__const_struct___ConstNum_28 = ((MR_Integer) hlds__const_struct__conv2__ConstNum_28);
#line 337 "const_struct.m"
        hlds__const_struct__V_83_83 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 337 "const_struct.m"
        hlds__const_struct__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 337 "const_struct.m"
        hlds__const_struct__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
#line 337 "const_struct.m"
        hlds__const_struct__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
#line 337 "const_struct.m"
        hlds__const_struct__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
#line 337 "const_struct.m"
        hlds__const_struct__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
#line 337 "const_struct.m"
        hlds__const_struct__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
#line 337 "const_struct.m"
        {
#line 337 "const_struct.m"
          MR_Word base;
#line 337 "const_struct.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 337 "const_struct.m"
          *hlds__const_struct__STATE_VARIABLE_Db_24 = base;
#line 337 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_83_83 | ((hlds__const_struct__V_84_84 << (MR_Integer) 1)))));
#line 337 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_85_85));
#line 337 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_86_86));
#line 337 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__OtherMap_22));
#line 337 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_88_88));
#line 337 "const_struct.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_89_89));
#line 337 "const_struct.m"
        }
#line 265 "const_struct.m"
      }
#line 252 "const_struct.m"
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
#line 247 "const_struct.m"
  {
#line 247 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 247 "const_struct.m"
    MR_Word hlds__const_struct__InstanceMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 5)));
#line 247 "const_struct.m"
    MR_Word hlds__const_struct__InstanceMap_9;
#line 319 "const_struct.m"
    MR_Word hlds__const_struct__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 319 "const_struct.m"
    MR_Word hlds__const_struct__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 319 "const_struct.m"
    MR_Integer hlds__const_struct__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 1)));
#line 319 "const_struct.m"
    MR_Word hlds__const_struct__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 2)));
#line 319 "const_struct.m"
    MR_Word hlds__const_struct__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 3)));
#line 319 "const_struct.m"
    MR_Word hlds__const_struct__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 4)));
#line 341 "const_struct.m"
    MR_Word hlds__const_struct__V_27_27;
#line 341 "const_struct.m"
    MR_Word hlds__const_struct__V_28_28;
#line 341 "const_struct.m"
    MR_Integer hlds__const_struct__V_29_29;
#line 341 "const_struct.m"
    MR_Word hlds__const_struct__V_30_30;
#line 341 "const_struct.m"
    MR_Word hlds__const_struct__V_31_31;
#line 341 "const_struct.m"
    MR_Word hlds__const_struct__V_32_32;
#line 341 "const_struct.m"
    MR_Word hlds__const_struct__V_33_33;

#line 249 "const_struct.m"
    {
#line 249 "const_struct.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__const_struct__InstanceId_5)), ((MR_Box) (hlds__const_struct__ConstNum_6)), hlds__const_struct__InstanceMap0_8, &hlds__const_struct__InstanceMap_9);
    }
#line 341 "const_struct.m"
    hlds__const_struct__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 341 "const_struct.m"
    hlds__const_struct__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 341 "const_struct.m"
    hlds__const_struct__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 1)));
#line 341 "const_struct.m"
    hlds__const_struct__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 2)));
#line 341 "const_struct.m"
    hlds__const_struct__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 3)));
#line 341 "const_struct.m"
    hlds__const_struct__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 4)));
#line 341 "const_struct.m"
    hlds__const_struct__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 5)));
#line 341 "const_struct.m"
    {
#line 341 "const_struct.m"
      MR_Word base;
#line 341 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 341 "const_struct.m"
      *hlds__const_struct__STATE_VARIABLE_Db_11 = base;
#line 341 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_27_27 | ((hlds__const_struct__V_28_28 << (MR_Integer) 1)))));
#line 341 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_29_29));
#line 341 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_30_30));
#line 341 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_31_31));
#line 341 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_32_32));
#line 341 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__InstanceMap_9));
#line 341 "const_struct.m"
    }
#line 247 "const_struct.m"
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
#line 243 "const_struct.m"
  {
#line 243 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 243 "const_struct.m"
    MR_Word hlds__const_struct__InstanceMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 5)));
#line 319 "const_struct.m"
    MR_Word hlds__const_struct__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 319 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 319 "const_struct.m"
    MR_Integer hlds__const_struct__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 1)));
#line 319 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 2)));
#line 319 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 3)));
#line 319 "const_struct.m"
    MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 4)));
#line 245 "const_struct.m"
    MR_Box hlds__const_struct__conv0_ConstNum_6;

#line 245 "const_struct.m"
    {
#line 245 "const_struct.m"
      hlds__const_struct__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__const_struct__InstanceMap_7, ((MR_Box) (hlds__const_struct__InstanceId_5)), &hlds__const_struct__conv0_ConstNum_6);
    }
#line 245 "const_struct.m"
    if (hlds__const_struct__succeeded)
#line 245 "const_struct.m"
      {
#line 245 "const_struct.m"
        *hlds__const_struct__ConstNum_6 = ((MR_Integer) hlds__const_struct__conv0_ConstNum_6);
#line 245 "const_struct.m"
        hlds__const_struct__succeeded = MR_TRUE;
#line 245 "const_struct.m"
      }
#line 243 "const_struct.m"
    return hlds__const_struct__succeeded;
#line 243 "const_struct.m"
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
#line 239 "const_struct.m"
  {
#line 239 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 239 "const_struct.m"
    MR_Word hlds__const_struct__NumMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 4)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 318 "const_struct.m"
    MR_Integer hlds__const_struct__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 1)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 2)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 3)));
#line 318 "const_struct.m"
    MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 5)));
#line 241 "const_struct.m"
    MR_Box hlds__const_struct__conv0_ConstStruct_6;

#line 241 "const_struct.m"
    {
#line 241 "const_struct.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, hlds__const_struct__NumMap_7, hlds__const_struct__ConstNum_5, &hlds__const_struct__conv0_ConstStruct_6);
    }
#line 241 "const_struct.m"
    *hlds__const_struct__ConstStruct_6 = ((MR_Word) hlds__const_struct__conv0_ConstStruct_6);
#line 239 "const_struct.m"
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
#line 189 "const_struct.m"
  {
#line 189 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 189 "const_struct.m"
    MR_Word hlds__const_struct__Enabled_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 313 "const_struct.m"
    MR_Word hlds__const_struct__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 313 "const_struct.m"
    MR_Integer hlds__const_struct__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
#line 313 "const_struct.m"
    MR_Word hlds__const_struct__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
#line 313 "const_struct.m"
    MR_Word hlds__const_struct__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
#line 313 "const_struct.m"
    MR_Word hlds__const_struct__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
#line 313 "const_struct.m"
    MR_Word hlds__const_struct__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));

#line 194 "const_struct.m"
    if ((hlds__const_struct__Enabled_8 == (MR_Integer) 0))
#line 192 "const_struct.m"
      {
#line 193 "const_struct.m"
        {
#line 193 "const_struct.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.const_struct", (MR_String) "predicate \140hlds.const_struct.lookup_insert_const_struct\'/4", (MR_String) "not enabled");
#line 193 "const_struct.m"
          return;
        }
#line 192 "const_struct.m"
      }
#line 194 "const_struct.m"
    else
#line 195 "const_struct.m"
      {
#line 195 "const_struct.m"
        MR_Word hlds__const_struct__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 0)));
#line 195 "const_struct.m"
        MR_Word hlds__const_struct__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 1)));
#line 195 "const_struct.m"
        MR_Word hlds__const_struct__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 2)));
#line 195 "const_struct.m"
        MR_Word hlds__const_struct__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 3)));
#line 218 "const_struct.m"
        MR_Word hlds__const_struct__SymName_13;
#line 197 "const_struct.m"
        MR_Integer hlds__const_struct__V_14_14;
#line 197 "const_struct.m"
        MR_Word hlds__const_struct__V_15_15;

#line 197 "const_struct.m"
        hlds__const_struct__succeeded = ((((MR_tag((MR_Word) hlds__const_struct__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 197 "const_struct.m"
        if (hlds__const_struct__succeeded)
#line 197 "const_struct.m"
          {
#line 197 "const_struct.m"
            hlds__const_struct__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 1)));
#line 197 "const_struct.m"
            hlds__const_struct__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 2)));
#line 197 "const_struct.m"
            hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 3)));
#line 198 "const_struct.m"
            {
#line 198 "const_struct.m"
              MR_String hlds__const_struct__Name_16;
#line 198 "const_struct.m"
              MR_Word hlds__const_struct__ConsProxyStruct_17;
#line 198 "const_struct.m"
              MR_Integer hlds__const_struct__NextConstNum_18;
#line 198 "const_struct.m"
              MR_Word hlds__const_struct__ConsMap0_19;
#line 198 "const_struct.m"
              MR_Word hlds__const_struct__MaybeOldConstNum_20;
#line 198 "const_struct.m"
              MR_Word hlds__const_struct__ConsMap_21;
#line 315 "const_struct.m"
              MR_Word hlds__const_struct__V_62_62;
#line 315 "const_struct.m"
              MR_Word hlds__const_struct__V_63_63;
#line 315 "const_struct.m"
              MR_Word hlds__const_struct__V_65_65;
#line 315 "const_struct.m"
              MR_Word hlds__const_struct__V_66_66;
#line 315 "const_struct.m"
              MR_Word hlds__const_struct__V_67_67;

#line 198 "const_struct.m"
              {
#line 198 "const_struct.m"
                hlds__const_struct__Name_16 = mdbcomp__prim_data__unqualify_name_1_f_0(hlds__const_struct__SymName_13);
              }
#line 199 "const_struct.m"
              {
#line 199 "const_struct.m"
                hlds__const_struct__ConsProxyStruct_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 199 "const_struct.m"
                MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 0) = ((MR_Box) (hlds__const_struct__Name_16));
#line 199 "const_struct.m"
                MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 1) = ((MR_Box) (hlds__const_struct__Args_10));
#line 199 "const_struct.m"
                MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 2) = ((MR_Box) (hlds__const_struct__ConsId_9));
#line 199 "const_struct.m"
                MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 3) = ((MR_Box) (hlds__const_struct__Type_11));
#line 199 "const_struct.m"
                MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 4) = ((MR_Box) (hlds__const_struct__Inst_12));
#line 199 "const_struct.m"
              }
#line 315 "const_struct.m"
              hlds__const_struct__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 315 "const_struct.m"
              hlds__const_struct__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 315 "const_struct.m"
              hlds__const_struct__NextConstNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
#line 315 "const_struct.m"
              hlds__const_struct__ConsMap0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
#line 315 "const_struct.m"
              hlds__const_struct__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
#line 315 "const_struct.m"
              hlds__const_struct__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
#line 315 "const_struct.m"
              hlds__const_struct__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
#line 203 "const_struct.m"
              {
#line 203 "const_struct.m"
                mercury__map__search_insert_5_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__const_struct__ConsProxyStruct_17)), ((MR_Box) (hlds__const_struct__NextConstNum_18)), &hlds__const_struct__MaybeOldConstNum_20, hlds__const_struct__ConsMap0_19, &hlds__const_struct__ConsMap_21);
              }
#line 208 "const_struct.m"
              if ((hlds__const_struct__MaybeOldConstNum_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "const_struct.m"
                {
#line 209 "const_struct.m"
                  MR_Word hlds__const_struct__NumMap0_22;
#line 209 "const_struct.m"
                  MR_Word hlds__const_struct__NumMap_23;
#line 209 "const_struct.m"
                  MR_Integer hlds__const_struct__V_28_28;
#line 209 "const_struct.m"
                  MR_Word hlds__const_struct__STATE_VARIABLE_Db_29_29;
#line 209 "const_struct.m"
                  MR_Word hlds__const_struct__STATE_VARIABLE_Db_31_31;
#line 318 "const_struct.m"
                  MR_Word hlds__const_struct__V_76_76;
#line 318 "const_struct.m"
                  MR_Word hlds__const_struct__V_77_77;
#line 318 "const_struct.m"
                  MR_Integer hlds__const_struct__V_78_78;
#line 318 "const_struct.m"
                  MR_Word hlds__const_struct__V_79_79;
#line 318 "const_struct.m"
                  MR_Word hlds__const_struct__V_80_80;
#line 318 "const_struct.m"
                  MR_Word hlds__const_struct__V_81_81;
#line 333 "const_struct.m"
                  MR_Word hlds__const_struct__V_87_87;
#line 333 "const_struct.m"
                  MR_Word hlds__const_struct__V_88_88;
#line 333 "const_struct.m"
                  MR_Word hlds__const_struct__V_90_90;
#line 333 "const_struct.m"
                  MR_Word hlds__const_struct__V_91_91;
#line 333 "const_struct.m"
                  MR_Word hlds__const_struct__V_92_92;
#line 333 "const_struct.m"
                  MR_Word hlds__const_struct__V_93_93;
#line 333 "const_struct.m"
                  MR_Integer hlds__const_struct__V_89_89;

#line 210 "const_struct.m"
                  *hlds__const_struct__ConstNum_6 = hlds__const_struct__NextConstNum_18;
#line 318 "const_struct.m"
                  hlds__const_struct__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 318 "const_struct.m"
                  hlds__const_struct__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 318 "const_struct.m"
                  hlds__const_struct__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
#line 318 "const_struct.m"
                  hlds__const_struct__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
#line 318 "const_struct.m"
                  hlds__const_struct__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
#line 318 "const_struct.m"
                  hlds__const_struct__NumMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
#line 318 "const_struct.m"
                  hlds__const_struct__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
#line 212 "const_struct.m"
                  {
#line 212 "const_struct.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, *hlds__const_struct__ConstNum_6, ((MR_Box) (hlds__const_struct__ConstStruct_5)), hlds__const_struct__NumMap0_22, &hlds__const_struct__NumMap_23);
                  }
#line 214 "const_struct.m"
                  hlds__const_struct__V_28_28 = (hlds__const_struct__NextConstNum_18 + (MR_Integer) 1);
#line 333 "const_struct.m"
                  hlds__const_struct__V_87_87 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 333 "const_struct.m"
                  hlds__const_struct__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 333 "const_struct.m"
                  hlds__const_struct__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
#line 333 "const_struct.m"
                  hlds__const_struct__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
#line 333 "const_struct.m"
                  hlds__const_struct__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
#line 333 "const_struct.m"
                  hlds__const_struct__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
#line 333 "const_struct.m"
                  hlds__const_struct__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
#line 333 "const_struct.m"
                  {
#line 333 "const_struct.m"
                    hlds__const_struct__STATE_VARIABLE_Db_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 333 "const_struct.m"
                    MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 0) = ((MR_Box) ((hlds__const_struct__V_87_87 | ((hlds__const_struct__V_88_88 << (MR_Integer) 1)))));
#line 333 "const_struct.m"
                    MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 1) = ((MR_Box) (hlds__const_struct__V_28_28));
#line 333 "const_struct.m"
                    MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 2) = ((MR_Box) (hlds__const_struct__V_90_90));
#line 333 "const_struct.m"
                    MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 3) = ((MR_Box) (hlds__const_struct__V_91_91));
#line 333 "const_struct.m"
                    MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 4) = ((MR_Box) (hlds__const_struct__V_92_92));
#line 333 "const_struct.m"
                    MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 5) = ((MR_Box) (hlds__const_struct__V_93_93));
#line 333 "const_struct.m"
                  }
#line 215 "const_struct.m"
                  {
#line 215 "const_struct.m"
                    hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(hlds__const_struct__ConsMap_21, hlds__const_struct__STATE_VARIABLE_Db_29_29, &hlds__const_struct__STATE_VARIABLE_Db_31_31);
                  }
#line 216 "const_struct.m"
                  {
#line 216 "const_struct.m"
                    hlds__const_struct__const_struct_db_set_num_map_3_p_0(hlds__const_struct__NumMap_23, hlds__const_struct__STATE_VARIABLE_Db_31_31, hlds__const_struct__STATE_VARIABLE_Db_27);
#line 216 "const_struct.m"
                    return;
                  }
#line 209 "const_struct.m"
                }
#line 208 "const_struct.m"
              else
#line 206 "const_struct.m"
                {
#line 206 "const_struct.m"
                  *hlds__const_struct__ConstNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__const_struct__MaybeOldConstNum_20, (MR_Integer) 0)));
#line 206 "const_struct.m"
                  *hlds__const_struct__STATE_VARIABLE_Db_27 = hlds__const_struct__STATE_VARIABLE_Db_0_26;
#line 206 "const_struct.m"
                }
#line 198 "const_struct.m"
            }
#line 197 "const_struct.m"
          }
#line 197 "const_struct.m"
        else
#line 219 "const_struct.m"
          {
#line 219 "const_struct.m"
            MR_Word hlds__const_struct__TypeCtorInfo_52_52;
#line 219 "const_struct.m"
            MR_Word hlds__const_struct__OtherMap0_24;
#line 219 "const_struct.m"
            MR_Word hlds__const_struct__OtherMap_25;
#line 219 "const_struct.m"
            MR_Integer hlds__const_struct__NextConstNum_45;
#line 219 "const_struct.m"
            MR_Word hlds__const_struct__MaybeOldConstNum_46;

#line 219 "const_struct.m"
            {
#line 219 "const_struct.m"
              hlds__const_struct__const_struct_db_get_next_num_2_p_0(hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__NextConstNum_45);
            }
#line 220 "const_struct.m"
            {
#line 220 "const_struct.m"
              hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__OtherMap0_24);
            }
#line 3824 "hlds.const_struct.c"
            hlds__const_struct__TypeCtorInfo_52_52 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
#line 221 "const_struct.m"
            {
#line 221 "const_struct.m"
              mercury__map__search_insert_5_p_0(hlds__const_struct__TypeCtorInfo_52_52, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__const_struct__ConstStruct_5)), ((MR_Box) (hlds__const_struct__NextConstNum_45)), &hlds__const_struct__MaybeOldConstNum_46, hlds__const_struct__OtherMap0_24, &hlds__const_struct__OtherMap_25);
            }
#line 226 "const_struct.m"
            if ((hlds__const_struct__MaybeOldConstNum_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "const_struct.m"
              {
#line 227 "const_struct.m"
                MR_Integer hlds__const_struct__V_33_33;
#line 227 "const_struct.m"
                MR_Word hlds__const_struct__STATE_VARIABLE_Db_34_34;
#line 227 "const_struct.m"
                MR_Word hlds__const_struct__STATE_VARIABLE_Db_36_36;
#line 227 "const_struct.m"
                MR_Word hlds__const_struct__NumMap0_41;
#line 227 "const_struct.m"
                MR_Word hlds__const_struct__NumMap_42;

#line 228 "const_struct.m"
                *hlds__const_struct__ConstNum_6 = hlds__const_struct__NextConstNum_45;
#line 229 "const_struct.m"
                {
#line 229 "const_struct.m"
                  hlds__const_struct__const_struct_db_get_num_map_2_p_0(hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__NumMap0_41);
                }
#line 230 "const_struct.m"
                {
#line 230 "const_struct.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__const_struct__TypeCtorInfo_52_52, *hlds__const_struct__ConstNum_6, ((MR_Box) (hlds__const_struct__ConstStruct_5)), hlds__const_struct__NumMap0_41, &hlds__const_struct__NumMap_42);
                }
#line 232 "const_struct.m"
                hlds__const_struct__V_33_33 = (hlds__const_struct__NextConstNum_45 + (MR_Integer) 1);
#line 232 "const_struct.m"
                {
#line 232 "const_struct.m"
                  hlds__const_struct__const_struct_db_set_next_num_3_p_0(hlds__const_struct__V_33_33, hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__STATE_VARIABLE_Db_34_34);
                }
#line 233 "const_struct.m"
                {
#line 233 "const_struct.m"
                  hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(hlds__const_struct__OtherMap_25, hlds__const_struct__STATE_VARIABLE_Db_34_34, &hlds__const_struct__STATE_VARIABLE_Db_36_36);
                }
#line 234 "const_struct.m"
                {
#line 234 "const_struct.m"
                  hlds__const_struct__const_struct_db_set_num_map_3_p_0(hlds__const_struct__NumMap_42, hlds__const_struct__STATE_VARIABLE_Db_36_36, hlds__const_struct__STATE_VARIABLE_Db_27);
#line 234 "const_struct.m"
                  return;
                }
#line 227 "const_struct.m"
              }
#line 226 "const_struct.m"
            else
#line 224 "const_struct.m"
              {
#line 224 "const_struct.m"
                *hlds__const_struct__ConstNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__const_struct__MaybeOldConstNum_46, (MR_Integer) 0)));
#line 224 "const_struct.m"
                *hlds__const_struct__STATE_VARIABLE_Db_27 = hlds__const_struct__STATE_VARIABLE_Db_0_26;
#line 224 "const_struct.m"
              }
#line 219 "const_struct.m"
          }
#line 195 "const_struct.m"
      }
#line 189 "const_struct.m"
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
#line 314 "const_struct.m"
  {
#line 314 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 314 "const_struct.m"
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 314 "const_struct.m"
    MR_Integer hlds__const_struct__V_5_5;
#line 314 "const_struct.m"
    MR_Word hlds__const_struct__V_6_6;
#line 314 "const_struct.m"
    MR_Word hlds__const_struct__V_7_7;
#line 314 "const_struct.m"
    MR_Word hlds__const_struct__V_8_8;
#line 314 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9;

#line 314 "const_struct.m"
    *hlds__const_struct__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 314 "const_struct.m"
    hlds__const_struct__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 314 "const_struct.m"
    hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 314 "const_struct.m"
    hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 314 "const_struct.m"
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 314 "const_struct.m"
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
#line 314 "const_struct.m"
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
#line 313 "const_struct.m"
  {
#line 313 "const_struct.m"
    MR_bool hlds__const_struct__succeeded;
#line 313 "const_struct.m"
    MR_Word hlds__const_struct__V_4_4;
#line 313 "const_struct.m"
    MR_Integer hlds__const_struct__V_5_5;
#line 313 "const_struct.m"
    MR_Word hlds__const_struct__V_6_6;
#line 313 "const_struct.m"
    MR_Word hlds__const_struct__V_7_7;
#line 313 "const_struct.m"
    MR_Word hlds__const_struct__V_8_8;
#line 313 "const_struct.m"
    MR_Word hlds__const_struct__V_9_9;

#line 313 "const_struct.m"
    *hlds__const_struct__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 313 "const_struct.m"
    hlds__const_struct__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 313 "const_struct.m"
    hlds__const_struct__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
#line 313 "const_struct.m"
    hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
#line 313 "const_struct.m"
    hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
#line 313 "const_struct.m"
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
#line 313 "const_struct.m"
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
#line 313 "const_struct.m"
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
    MR_Word hlds__const_struct__TypeCtorInfo_22_22;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__TypeCtorInfo_23_23;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__Target_5;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__PolyEnabled_9;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__GroundTermEnabled_13;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__V_17_17;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__V_18_18;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__V_19_19;
#line 130 "const_struct.m"
    MR_Word hlds__const_struct__V_20_20;

#line 131 "const_struct.m"
    {
#line 131 "const_struct.m"
      libs__globals__get_target_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__Target_5);
    }
#line 176 "const_struct.m"
    if ((hlds__const_struct__Target_5 == (MR_Integer) 0))
#line 133 "const_struct.m"
      {
#line 133 "const_struct.m"
        MR_Word hlds__const_struct__HighLevelData_6;

#line 134 "const_struct.m"
        {
#line 134 "const_struct.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__const_struct__Globals_3, (MR_Integer) 251, &hlds__const_struct__HighLevelData_6);
        }
#line 171 "const_struct.m"
        if ((hlds__const_struct__HighLevelData_6 == (MR_Integer) 0))
#line 136 "const_struct.m"
          {
#line 136 "const_struct.m"
            MR_Word hlds__const_struct__Tags_7;

#line 137 "const_struct.m"
            {
#line 137 "const_struct.m"
              libs__globals__get_tags_method_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__Tags_7);
            }
#line 164 "const_struct.m"
            if ((hlds__const_struct__Tags_7 == (MR_Integer) 1))
#line 139 "const_struct.m"
              {
#line 139 "const_struct.m"
                MR_Word hlds__const_struct__TraceLevel_10;
#line 139 "const_struct.m"
                MR_Word hlds__const_struct__TraceSuppress_11;
#line 139 "const_struct.m"
                MR_Word hlds__const_struct__Bodies_12;

#line 140 "const_struct.m"
                {
#line 140 "const_struct.m"
                  libs__globals__lookup_bool_option_3_p_0(hlds__const_struct__Globals_3, (MR_Integer) 344, &hlds__const_struct__PolyEnabled_9);
                }
#line 144 "const_struct.m"
                {
#line 144 "const_struct.m"
                  libs__globals__get_trace_level_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__TraceLevel_10);
                }
#line 145 "const_struct.m"
                {
#line 145 "const_struct.m"
                  libs__globals__get_trace_suppress_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__TraceSuppress_11);
                }
#line 146 "const_struct.m"
                {
#line 146 "const_struct.m"
                  hlds__const_struct__Bodies_12 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(hlds__const_struct__TraceLevel_10, hlds__const_struct__TraceSuppress_11);
                }
#line 150 "const_struct.m"
                if ((hlds__const_struct__Bodies_12 == (MR_Integer) 0))
#line 149 "const_struct.m"
                  hlds__const_struct__GroundTermEnabled_13 = hlds__const_struct__PolyEnabled_9;
#line 150 "const_struct.m"
                else
#line 162 "const_struct.m"
                  hlds__const_struct__GroundTermEnabled_13 = (MR_Integer) 0;
#line 139 "const_struct.m"
              }
#line 164 "const_struct.m"
            else
#line 167 "const_struct.m"
              {
#line 168 "const_struct.m"
                hlds__const_struct__PolyEnabled_9 = (MR_Integer) 0;
#line 169 "const_struct.m"
                hlds__const_struct__GroundTermEnabled_13 = (MR_Integer) 0;
#line 167 "const_struct.m"
              }
#line 136 "const_struct.m"
          }
#line 171 "const_struct.m"
        else
#line 172 "const_struct.m"
          {
#line 173 "const_struct.m"
            hlds__const_struct__PolyEnabled_9 = (MR_Integer) 0;
#line 174 "const_struct.m"
            hlds__const_struct__GroundTermEnabled_13 = (MR_Integer) 0;
#line 172 "const_struct.m"
          }
#line 133 "const_struct.m"
      }
#line 176 "const_struct.m"
    else
#line 182 "const_struct.m"
      {
#line 183 "const_struct.m"
        hlds__const_struct__PolyEnabled_9 = (MR_Integer) 0;
#line 184 "const_struct.m"
        hlds__const_struct__GroundTermEnabled_13 = (MR_Integer) 0;
#line 182 "const_struct.m"
      }
#line 4122 "hlds.const_struct.c"
    hlds__const_struct__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 186 "const_struct.m"
    {
#line 186 "const_struct.m"
      hlds__const_struct__V_17_17 = mercury__map__init_0_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, hlds__const_struct__TypeCtorInfo_22_22);
    }
#line 4129 "hlds.const_struct.c"
    hlds__const_struct__TypeCtorInfo_23_23 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
#line 186 "const_struct.m"
    {
#line 186 "const_struct.m"
      hlds__const_struct__V_18_18 = mercury__map__init_0_f_0(hlds__const_struct__TypeCtorInfo_23_23, hlds__const_struct__TypeCtorInfo_22_22);
    }
#line 186 "const_struct.m"
    {
#line 186 "const_struct.m"
      hlds__const_struct__V_19_19 = mercury__map__init_0_f_0(hlds__const_struct__TypeCtorInfo_22_22, hlds__const_struct__TypeCtorInfo_23_23);
    }
#line 186 "const_struct.m"
    {
#line 186 "const_struct.m"
      hlds__const_struct__V_20_20 = mercury__map__init_0_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, hlds__const_struct__TypeCtorInfo_22_22);
    }
#line 186 "const_struct.m"
    {
#line 186 "const_struct.m"
      MR_Word base;
#line 186 "const_struct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 186 "const_struct.m"
      *hlds__const_struct__Db_4 = base;
#line 186 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__PolyEnabled_9 | ((hlds__const_struct__GroundTermEnabled_13 << (MR_Integer) 1)))));
#line 186 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 186 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_17_17));
#line 186 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_18_18));
#line 186 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_19_19));
#line 186 "const_struct.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_20_20));
#line 186 "const_struct.m"
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
