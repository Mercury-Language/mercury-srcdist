/*
** Automatically generated from `llds_out_util.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module ll_backend.llds_out.llds_out_util. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_out__llds_out_util__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_util.mih"


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
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
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
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0[1];

#line 149 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0;

#line 152 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1[1];

#line 155 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1;

#line 158 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2[1];

#line 161 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2;

#line 164 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3[1];

#line 167 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3;

#line 170 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4[1];

#line 173 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4;

#line 176 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5[2];

#line 179 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5;

#line 182 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6[1];

#line 185 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6;

#line 188 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7[1];

#line 191 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7;

#line 194 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8[1];

#line 197 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8;

#line 200 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9[1];

#line 203 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9;

#line 206 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0[1];

#line 209 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1[1];

#line 212 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2[1];

#line 215 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3[7];

#line 218 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0[4];

#line 221 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0[10];

#line 224 "ll_backend.llds_out.llds_out_util.c"
static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0[10];

#line 227 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

#line 230 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 233 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0;

#line 236 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 239 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 242 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0[22];

#line 245 "ll_backend.llds_out.llds_out_util.c"
static const MR_ConstString ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0[22];

#line 248 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuArgLocn ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0[22];

#line 251 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0;

#line 254 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0[1];

#line 257 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0[1];

#line 260 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0[1];

#line 263 "ll_backend.llds_out.llds_out_util.c"
static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0[1];

#line 266 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001(
#line 269 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 271 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

#line 274 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001(
#line 277 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 279 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 281 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3);

#line 284 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001(
#line 287 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 289 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

#line 292 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001(
#line 295 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 297 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 299 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3);

#line 302 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001(
#line 305 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 307 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

#line 310 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001(
#line 313 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 315 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 317 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_util_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_util_scalar_common_2[4][3];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_util_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_util_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 374 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 379 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0 = {
  (MR_String) "decl_float_label",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 394 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
};

#line 399 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1 = {
  (MR_String) "decl_common_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1,
  NULL,
  NULL,
  NULL
};

#line 414 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0
};

#line 419 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2 = {
  (MR_String) "decl_code_addr",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2,
  NULL,
  NULL,
  NULL
};

#line 434 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
};

#line 439 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3 = {
  (MR_String) "decl_rtti_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3,
  NULL,
  NULL,
  NULL
};

#line 454 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
};

#line 459 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4 = {
  (MR_String) "decl_layout_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4,
  NULL,
  NULL,
  NULL
};

#line 474 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0
};

#line 480 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5 = {
  (MR_String) "decl_tabling_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5,
  NULL,
  NULL,
  NULL
};

#line 495 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 500 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6 = {
  (MR_String) "decl_foreign_proc_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6,
  NULL,
  NULL,
  NULL
};

#line 515 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_global_var_ref_0
};

#line 520 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7 = {
  (MR_String) "decl_c_global_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7,
  NULL,
  NULL,
  NULL
};

#line 535 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 540 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8 = {
  (MR_String) "decl_type_info_like_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8,
  NULL,
  NULL,
  NULL
};

#line 555 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 560 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9 = {
  (MR_String) "decl_typeclass_constraint_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9,
  NULL,
  NULL,
  NULL
};

#line 575 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0
};

#line 580 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1
};

#line 585 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2
};

#line 590 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3[7] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9
};

#line 601 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2
  },
  {
    (MR_Integer) 7,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3
  }
};

#line 625 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0[10] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9
};

#line 639 "ll_backend.llds_out.llds_out_util.c"
static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0[10] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 9
};

#line 653 "ll_backend.llds_out.llds_out_util.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "decl_id",
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0 },
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0 },
  (MR_Integer) 10,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0
};

#line 670 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

#line 678 "ll_backend.llds_out.llds_out_util.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "decl_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 695 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 704 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 713 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 722 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 731 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0[22] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0
};

#line 757 "ll_backend.llds_out.llds_out_util.c"
static const MR_ConstString ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0[22] = {
  (MR_String) "lout_module_name",
  (MR_String) "lout_mangled_module_name",
  (MR_String) "lout_source_file_name",
  (MR_String) "lout_internal_label_to_layout",
  (MR_String) "lout_entry_label_to_layout",
  (MR_String) "lout_table_io_entry_map",
  (MR_String) "lout_alloc_site_map",
  (MR_String) "lout_auto_comments",
  (MR_String) "lout_line_numbers",
  (MR_String) "lout_emit_c_loops",
  (MR_String) "lout_generate_bytecode",
  (MR_String) "lout_local_thread_engine_base",
  (MR_String) "lout_profile_calls",
  (MR_String) "lout_profile_time",
  (MR_String) "lout_profile_memory",
  (MR_String) "lout_profile_deep",
  (MR_String) "lout_unboxed_float",
  (MR_String) "lout_det_stack_dword_alignment",
  (MR_String) "lout_static_ground_floats",
  (MR_String) "lout_use_macro_for_redo_fail",
  (MR_String) "lout_trace_level",
  (MR_String) "lout_globals"
};

#line 783 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuArgLocn ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0[22] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
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
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 13,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 897 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0 = {
  (MR_String) "llds_out_info",
  (MR_Integer) 22,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0,
  NULL
};

#line 912 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0
};

#line 917 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0
  }
};

#line 926 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0
};

#line 931 "ll_backend.llds_out.llds_out_util.c"
static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0[1] = {
  (MR_Integer) 0
};

#line 936 "ll_backend.llds_out.llds_out_util.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "llds_out_info",
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0 },
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0
};

#line 953 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001(
#line 956 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 958 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
#line 960 "ll_backend.llds_out.llds_out_util.c"
{
#line 962 "ll_backend.llds_out.llds_out_util.c"
  {
#line 964 "ll_backend.llds_out.llds_out_util.c"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 967 "ll_backend.llds_out.llds_out_util.c"
    {
#line 969 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
#line 972 "ll_backend.llds_out.llds_out_util.c"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 974 "ll_backend.llds_out.llds_out_util.c"
  }
#line 976 "ll_backend.llds_out.llds_out_util.c"
}

#line 979 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001(
#line 982 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 984 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 986 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
#line 988 "ll_backend.llds_out.llds_out_util.c"
{
#line 990 "ll_backend.llds_out.llds_out_util.c"
  {
#line 992 "ll_backend.llds_out.llds_out_util.c"
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

#line 995 "ll_backend.llds_out.llds_out_util.c"
    {
#line 997 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
#line 1000 "ll_backend.llds_out.llds_out_util.c"
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
#line 1002 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1004 "ll_backend.llds_out.llds_out_util.c"
}

#line 1007 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001(
#line 1010 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1012 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
#line 1014 "ll_backend.llds_out.llds_out_util.c"
{
#line 1016 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1018 "ll_backend.llds_out.llds_out_util.c"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 1021 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1023 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
#line 1026 "ll_backend.llds_out.llds_out_util.c"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 1028 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1030 "ll_backend.llds_out.llds_out_util.c"
}

#line 1033 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001(
#line 1036 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1038 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 1040 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
#line 1042 "ll_backend.llds_out.llds_out_util.c"
{
#line 1044 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1046 "ll_backend.llds_out.llds_out_util.c"
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

#line 1049 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1051 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
#line 1054 "ll_backend.llds_out.llds_out_util.c"
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
#line 1056 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1058 "ll_backend.llds_out.llds_out_util.c"
}

#line 1061 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001(
#line 1064 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1066 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
#line 1068 "ll_backend.llds_out.llds_out_util.c"
{
#line 1070 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1072 "ll_backend.llds_out.llds_out_util.c"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 1075 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1077 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
#line 1080 "ll_backend.llds_out.llds_out_util.c"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 1082 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1084 "ll_backend.llds_out.llds_out_util.c"
}

#line 1087 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001(
#line 1090 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1092 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 1094 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
#line 1096 "ll_backend.llds_out.llds_out_util.c"
{
#line 1098 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1100 "ll_backend.llds_out.llds_out_util.c"
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

#line 1103 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1105 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
#line 1108 "ll_backend.llds_out.llds_out_util.c"
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
#line 1110 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1112 "ll_backend.llds_out.llds_out_util.c"
}

#line 34 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0(
#line 34 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 34 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
#line 34 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
#line 34 "llds_out_util.m"
{
#line 34 "llds_out_util.m"
  {
#line 34 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 34 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_69 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;
#line 34 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_70 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__3_3;

#line 34 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_69 == ll_backend__llds_out__llds_out_util__CastY_70);
#line 34 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 1139 "ll_backend.llds_out.llds_out_util.c"
      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 0;
#line 34 "llds_out_util.m"
    else
#line 34 "llds_out_util.m"
      {
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 4)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 5)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 8)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 2)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 3)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 4)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 5)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 8)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_48_48;

#line 34 "llds_out_util.m"
        {
#line 34 "llds_out_util.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__llds_out__llds_out_util__V_48_48, ll_backend__llds_out__llds_out_util__V_4_4, ll_backend__llds_out__llds_out_util__V_26_26);
        }
#line 1241 "ll_backend.llds_out.llds_out_util.c"
        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_48_48 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_48_48;
#line 34 "llds_out_util.m"
        else
#line 34 "llds_out_util.m"
          {
#line 34 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_49_49;

#line 34 "llds_out_util.m"
            {
#line 34 "llds_out_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__llds_out__llds_out_util__V_49_49, ll_backend__llds_out__llds_out_util__V_5_5, ll_backend__llds_out__llds_out_util__V_27_27);
            }
#line 1261 "ll_backend.llds_out.llds_out_util.c"
            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_49_49 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_49_49;
#line 34 "llds_out_util.m"
            else
#line 34 "llds_out_util.m"
              {
#line 34 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_50_50;

#line 34 "llds_out_util.m"
                {
#line 34 "llds_out_util.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__llds_out__llds_out_util__V_50_50, ll_backend__llds_out__llds_out_util__V_6_6, ll_backend__llds_out__llds_out_util__V_28_28);
                }
#line 1281 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_50_50 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_50_50;
#line 34 "llds_out_util.m"
                else
#line 34 "llds_out_util.m"
                  {
#line 34 "llds_out_util.m"
                    MR_Word ll_backend__llds_out__llds_out_util__V_51_51;

#line 34 "llds_out_util.m"
                    {
#line 34 "llds_out_util.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[0], &ll_backend__llds_out__llds_out_util__V_51_51, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_7_7)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_29_29)));
                    }
#line 1301 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_51_51 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_51_51;
#line 34 "llds_out_util.m"
                    else
#line 34 "llds_out_util.m"
                      {
#line 34 "llds_out_util.m"
                        MR_Word ll_backend__llds_out__llds_out_util__V_52_52;

#line 34 "llds_out_util.m"
                        {
#line 34 "llds_out_util.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[1], &ll_backend__llds_out__llds_out_util__V_52_52, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_8_8)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_30_30)));
                        }
#line 1321 "ll_backend.llds_out.llds_out_util.c"
                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_52_52 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_52_52;
#line 34 "llds_out_util.m"
                        else
#line 34 "llds_out_util.m"
                          {
#line 34 "llds_out_util.m"
                            MR_Word ll_backend__llds_out__llds_out_util__V_53_53;

#line 34 "llds_out_util.m"
                            {
#line 34 "llds_out_util.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[2], &ll_backend__llds_out__llds_out_util__V_53_53, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_9_9)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_31_31)));
                            }
#line 1341 "ll_backend.llds_out.llds_out_util.c"
                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_53_53 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_53_53;
#line 34 "llds_out_util.m"
                            else
#line 34 "llds_out_util.m"
                              {
#line 34 "llds_out_util.m"
                                MR_Word ll_backend__llds_out__llds_out_util__V_54_54;

#line 34 "llds_out_util.m"
                                {
#line 34 "llds_out_util.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[3], &ll_backend__llds_out__llds_out_util__V_54_54, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_10_10)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_32_32)));
                                }
#line 1361 "ll_backend.llds_out.llds_out_util.c"
                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_54_54 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_54_54;
#line 34 "llds_out_util.m"
                                else
#line 34 "llds_out_util.m"
                                  {
#line 34 "llds_out_util.m"
                                    MR_Word ll_backend__llds_out__llds_out_util__V_55_55;
#line 34 "llds_out_util.m"
                                    MR_Integer ll_backend__llds_out__llds_out_util__V_93_93 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_11_11;
#line 34 "llds_out_util.m"
                                    MR_Integer ll_backend__llds_out__llds_out_util__V_94_94 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_33_33;

#line 34 "llds_out_util.m"
                                    {
#line 34 "llds_out_util.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_55_55, ll_backend__llds_out__llds_out_util__V_93_93, ll_backend__llds_out__llds_out_util__V_94_94);
                                    }
#line 1385 "ll_backend.llds_out.llds_out_util.c"
                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_55_55 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_55_55;
#line 34 "llds_out_util.m"
                                    else
#line 34 "llds_out_util.m"
                                      {
#line 34 "llds_out_util.m"
                                        MR_Word ll_backend__llds_out__llds_out_util__V_56_56;
#line 34 "llds_out_util.m"
                                        MR_Integer ll_backend__llds_out__llds_out_util__V_95_95 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_12_12;
#line 34 "llds_out_util.m"
                                        MR_Integer ll_backend__llds_out__llds_out_util__V_96_96 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_34_34;

#line 34 "llds_out_util.m"
                                        {
#line 34 "llds_out_util.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_56_56, ll_backend__llds_out__llds_out_util__V_95_95, ll_backend__llds_out__llds_out_util__V_96_96);
                                        }
#line 1409 "ll_backend.llds_out.llds_out_util.c"
                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_56_56 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_56_56;
#line 34 "llds_out_util.m"
                                        else
#line 34 "llds_out_util.m"
                                          {
#line 34 "llds_out_util.m"
                                            MR_Word ll_backend__llds_out__llds_out_util__V_57_57;
#line 34 "llds_out_util.m"
                                            MR_Integer ll_backend__llds_out__llds_out_util__V_97_97 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_13_13;
#line 34 "llds_out_util.m"
                                            MR_Integer ll_backend__llds_out__llds_out_util__V_98_98 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_35_35;

#line 34 "llds_out_util.m"
                                            {
#line 34 "llds_out_util.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_57_57, ll_backend__llds_out__llds_out_util__V_97_97, ll_backend__llds_out__llds_out_util__V_98_98);
                                            }
#line 1433 "ll_backend.llds_out.llds_out_util.c"
                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_57_57 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_57_57;
#line 34 "llds_out_util.m"
                                            else
#line 34 "llds_out_util.m"
                                              {
#line 34 "llds_out_util.m"
                                                MR_Word ll_backend__llds_out__llds_out_util__V_58_58;
#line 34 "llds_out_util.m"
                                                MR_Integer ll_backend__llds_out__llds_out_util__V_99_99 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_14_14;
#line 34 "llds_out_util.m"
                                                MR_Integer ll_backend__llds_out__llds_out_util__V_100_100 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_36_36;

#line 34 "llds_out_util.m"
                                                {
#line 34 "llds_out_util.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_58_58, ll_backend__llds_out__llds_out_util__V_99_99, ll_backend__llds_out__llds_out_util__V_100_100);
                                                }
#line 1457 "ll_backend.llds_out.llds_out_util.c"
                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_58_58 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_58_58;
#line 34 "llds_out_util.m"
                                                else
#line 34 "llds_out_util.m"
                                                  {
#line 34 "llds_out_util.m"
                                                    MR_Word ll_backend__llds_out__llds_out_util__V_59_59;
#line 34 "llds_out_util.m"
                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_101_101 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_15_15;
#line 34 "llds_out_util.m"
                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_102_102 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_37_37;

#line 34 "llds_out_util.m"
                                                    {
#line 34 "llds_out_util.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_59_59, ll_backend__llds_out__llds_out_util__V_101_101, ll_backend__llds_out__llds_out_util__V_102_102);
                                                    }
#line 1481 "ll_backend.llds_out.llds_out_util.c"
                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_59_59 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_59_59;
#line 34 "llds_out_util.m"
                                                    else
#line 34 "llds_out_util.m"
                                                      {
#line 34 "llds_out_util.m"
                                                        MR_Word ll_backend__llds_out__llds_out_util__V_60_60;
#line 34 "llds_out_util.m"
                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_103_103 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_16_16;
#line 34 "llds_out_util.m"
                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_104_104 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_38_38;

#line 34 "llds_out_util.m"
                                                        {
#line 34 "llds_out_util.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_60_60, ll_backend__llds_out__llds_out_util__V_103_103, ll_backend__llds_out__llds_out_util__V_104_104);
                                                        }
#line 1505 "ll_backend.llds_out.llds_out_util.c"
                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_60_60 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_60_60;
#line 34 "llds_out_util.m"
                                                        else
#line 34 "llds_out_util.m"
                                                          {
#line 34 "llds_out_util.m"
                                                            MR_Word ll_backend__llds_out__llds_out_util__V_61_61;
#line 34 "llds_out_util.m"
                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_105_105 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_17_17;
#line 34 "llds_out_util.m"
                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_106_106 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_39_39;

#line 34 "llds_out_util.m"
                                                            {
#line 34 "llds_out_util.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_61_61, ll_backend__llds_out__llds_out_util__V_105_105, ll_backend__llds_out__llds_out_util__V_106_106);
                                                            }
#line 1529 "ll_backend.llds_out.llds_out_util.c"
                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_61_61 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_61_61;
#line 34 "llds_out_util.m"
                                                            else
#line 34 "llds_out_util.m"
                                                              {
#line 34 "llds_out_util.m"
                                                                MR_Word ll_backend__llds_out__llds_out_util__V_62_62;
#line 34 "llds_out_util.m"
                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_107_107 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_18_18;
#line 34 "llds_out_util.m"
                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_108_108 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_40_40;

#line 34 "llds_out_util.m"
                                                                {
#line 34 "llds_out_util.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_62_62, ll_backend__llds_out__llds_out_util__V_107_107, ll_backend__llds_out__llds_out_util__V_108_108);
                                                                }
#line 1553 "ll_backend.llds_out.llds_out_util.c"
                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_62_62 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_62_62;
#line 34 "llds_out_util.m"
                                                                else
#line 34 "llds_out_util.m"
                                                                  {
#line 34 "llds_out_util.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_util__V_63_63;
#line 34 "llds_out_util.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_109_109 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_19_19;
#line 34 "llds_out_util.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_110_110 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_41_41;

#line 34 "llds_out_util.m"
                                                                    {
#line 34 "llds_out_util.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_63_63, ll_backend__llds_out__llds_out_util__V_109_109, ll_backend__llds_out__llds_out_util__V_110_110);
                                                                    }
#line 1577 "ll_backend.llds_out.llds_out_util.c"
                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_63_63 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_63_63;
#line 34 "llds_out_util.m"
                                                                    else
#line 34 "llds_out_util.m"
                                                                      {
#line 34 "llds_out_util.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_util__V_64_64;
#line 34 "llds_out_util.m"
                                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_111_111 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_20_20;
#line 34 "llds_out_util.m"
                                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_112_112 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_42_42;

#line 34 "llds_out_util.m"
                                                                        {
#line 34 "llds_out_util.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_64_64, ll_backend__llds_out__llds_out_util__V_111_111, ll_backend__llds_out__llds_out_util__V_112_112);
                                                                        }
#line 1601 "ll_backend.llds_out.llds_out_util.c"
                                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_64_64 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_64_64;
#line 34 "llds_out_util.m"
                                                                        else
#line 34 "llds_out_util.m"
                                                                          {
#line 34 "llds_out_util.m"
                                                                            MR_Word ll_backend__llds_out__llds_out_util__V_65_65;
#line 34 "llds_out_util.m"
                                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_113_113 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_21_21;
#line 34 "llds_out_util.m"
                                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_114_114 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_43_43;

#line 34 "llds_out_util.m"
                                                                            {
#line 34 "llds_out_util.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_65_65, ll_backend__llds_out__llds_out_util__V_113_113, ll_backend__llds_out__llds_out_util__V_114_114);
                                                                            }
#line 1625 "ll_backend.llds_out.llds_out_util.c"
                                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_65_65 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_65_65;
#line 34 "llds_out_util.m"
                                                                            else
#line 34 "llds_out_util.m"
                                                                              {
#line 34 "llds_out_util.m"
                                                                                MR_Word ll_backend__llds_out__llds_out_util__V_66_66;
#line 34 "llds_out_util.m"
                                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_115_115 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_22_22;
#line 34 "llds_out_util.m"
                                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_116_116 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_44_44;

#line 34 "llds_out_util.m"
                                                                                {
#line 34 "llds_out_util.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_66_66, ll_backend__llds_out__llds_out_util__V_115_115, ll_backend__llds_out__llds_out_util__V_116_116);
                                                                                }
#line 1649 "ll_backend.llds_out.llds_out_util.c"
                                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_66_66 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_66_66;
#line 34 "llds_out_util.m"
                                                                                else
#line 34 "llds_out_util.m"
                                                                                  {
#line 34 "llds_out_util.m"
                                                                                    MR_Word ll_backend__llds_out__llds_out_util__V_67_67;
#line 34 "llds_out_util.m"
                                                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_117_117 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_23_23;
#line 34 "llds_out_util.m"
                                                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_118_118 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_45_45;

#line 34 "llds_out_util.m"
                                                                                    {
#line 34 "llds_out_util.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_67_67, ll_backend__llds_out__llds_out_util__V_117_117, ll_backend__llds_out__llds_out_util__V_118_118);
                                                                                    }
#line 1673 "ll_backend.llds_out.llds_out_util.c"
                                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_67_67 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_67_67;
#line 34 "llds_out_util.m"
                                                                                    else
#line 34 "llds_out_util.m"
                                                                                      {
#line 34 "llds_out_util.m"
                                                                                        MR_Word ll_backend__llds_out__llds_out_util__V_68_68;

#line 34 "llds_out_util.m"
                                                                                        {
#line 34 "llds_out_util.m"
                                                                                          libs__trace_params____Compare____trace_level_0_0(&ll_backend__llds_out__llds_out_util__V_68_68, ll_backend__llds_out__llds_out_util__V_24_24, ll_backend__llds_out__llds_out_util__V_46_46);
                                                                                        }
#line 1693 "ll_backend.llds_out.llds_out_util.c"
                                                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_68_68 == (MR_Integer) 0);
#line 34 "llds_out_util.m"
                                                                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 34 "llds_out_util.m"
                                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_68_68;
#line 34 "llds_out_util.m"
                                                                                        else
#line 34 "llds_out_util.m"
                                                                                          {
#line 34 "llds_out_util.m"
                                                                                            libs__globals____Compare____globals_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_25_25, ll_backend__llds_out__llds_out_util__V_47_47);
#line 34 "llds_out_util.m"
                                                                                            return;
                                                                                          }
#line 34 "llds_out_util.m"
                                                                                      }
#line 34 "llds_out_util.m"
                                                                                  }
#line 34 "llds_out_util.m"
                                                                              }
#line 34 "llds_out_util.m"
                                                                          }
#line 34 "llds_out_util.m"
                                                                      }
#line 34 "llds_out_util.m"
                                                                  }
#line 34 "llds_out_util.m"
                                                              }
#line 34 "llds_out_util.m"
                                                          }
#line 34 "llds_out_util.m"
                                                      }
#line 34 "llds_out_util.m"
                                                  }
#line 34 "llds_out_util.m"
                                              }
#line 34 "llds_out_util.m"
                                          }
#line 34 "llds_out_util.m"
                                      }
#line 34 "llds_out_util.m"
                                  }
#line 34 "llds_out_util.m"
                              }
#line 34 "llds_out_util.m"
                          }
#line 34 "llds_out_util.m"
                      }
#line 34 "llds_out_util.m"
                  }
#line 34 "llds_out_util.m"
              }
#line 34 "llds_out_util.m"
          }
#line 34 "llds_out_util.m"
      }
#line 34 "llds_out_util.m"
  }
#line 34 "llds_out_util.m"
}

#line 34 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0(
#line 34 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 34 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
#line 34 "llds_out_util.m"
{
#line 34 "llds_out_util.m"
  {
#line 34 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 34 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_47 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__1_1;
#line 34 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_48 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;

#line 34 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_47 == ll_backend__llds_out__llds_out_util__CastY_48);
#line 34 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__succeeded = MR_TRUE;
#line 34 "llds_out_util.m"
    else
#line 34 "llds_out_util.m"
      {
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_50_50;
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_51_51;
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_52_52;
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_53_53;
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 2)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 3)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 4)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 5)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 8)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 4)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 5)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)));
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 34 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 8)));

#line 1882 "ll_backend.llds_out.llds_out_util.c"
        {
#line 1884 "ll_backend.llds_out.llds_out_util.c"
          ll_backend__llds_out__llds_out_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__llds_out__llds_out_util__V_3_3, ll_backend__llds_out__llds_out_util__V_25_25);
        }
#line 34 "llds_out_util.m"
        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
          {
#line 1891 "ll_backend.llds_out.llds_out_util.c"
            ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_4_4, ll_backend__llds_out__llds_out_util__V_26_26) == 0);
#line 34 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
              {
#line 1897 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_5_5, ll_backend__llds_out__llds_out_util__V_27_27) == 0);
#line 34 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                  {
#line 1903 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__TypeInfo_50_50 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[0];
#line 1905 "ll_backend.llds_out.llds_out_util.c"
                    {
#line 1907 "ll_backend.llds_out.llds_out_util.c"
                      ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_50_50, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_28_28)));
                    }
#line 34 "llds_out_util.m"
                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                      {
#line 1914 "ll_backend.llds_out.llds_out_util.c"
                        ll_backend__llds_out__llds_out_util__TypeInfo_51_51 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[1];
#line 1916 "ll_backend.llds_out.llds_out_util.c"
                        {
#line 1918 "ll_backend.llds_out.llds_out_util.c"
                          ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_51_51, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_7_7)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_29_29)));
                        }
#line 34 "llds_out_util.m"
                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                          {
#line 1925 "ll_backend.llds_out.llds_out_util.c"
                            ll_backend__llds_out__llds_out_util__TypeInfo_52_52 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[2];
#line 1927 "ll_backend.llds_out.llds_out_util.c"
                            {
#line 1929 "ll_backend.llds_out.llds_out_util.c"
                              ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_52_52, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_8_8)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_30_30)));
                            }
#line 34 "llds_out_util.m"
                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                              {
#line 1936 "ll_backend.llds_out.llds_out_util.c"
                                ll_backend__llds_out__llds_out_util__TypeInfo_53_53 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[3];
#line 1938 "ll_backend.llds_out.llds_out_util.c"
                                {
#line 1940 "ll_backend.llds_out.llds_out_util.c"
                                  ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_53_53, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_9_9)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_31_31)));
                                }
#line 34 "llds_out_util.m"
                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                  {
#line 1947 "ll_backend.llds_out.llds_out_util.c"
                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_10_10 == ll_backend__llds_out__llds_out_util__V_32_32);
#line 34 "llds_out_util.m"
                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                      {
#line 1953 "ll_backend.llds_out.llds_out_util.c"
                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_11_11 == ll_backend__llds_out__llds_out_util__V_33_33);
#line 34 "llds_out_util.m"
                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                          {
#line 1959 "ll_backend.llds_out.llds_out_util.c"
                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_12_12 == ll_backend__llds_out__llds_out_util__V_34_34);
#line 34 "llds_out_util.m"
                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                              {
#line 1965 "ll_backend.llds_out.llds_out_util.c"
                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_13_13 == ll_backend__llds_out__llds_out_util__V_35_35);
#line 34 "llds_out_util.m"
                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                  {
#line 1971 "ll_backend.llds_out.llds_out_util.c"
                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_14_14 == ll_backend__llds_out__llds_out_util__V_36_36);
#line 34 "llds_out_util.m"
                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                      {
#line 1977 "ll_backend.llds_out.llds_out_util.c"
                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_15_15 == ll_backend__llds_out__llds_out_util__V_37_37);
#line 34 "llds_out_util.m"
                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                          {
#line 1983 "ll_backend.llds_out.llds_out_util.c"
                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_16_16 == ll_backend__llds_out__llds_out_util__V_38_38);
#line 34 "llds_out_util.m"
                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                              {
#line 1989 "ll_backend.llds_out.llds_out_util.c"
                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_17_17 == ll_backend__llds_out__llds_out_util__V_39_39);
#line 34 "llds_out_util.m"
                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                  {
#line 1995 "ll_backend.llds_out.llds_out_util.c"
                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_18_18 == ll_backend__llds_out__llds_out_util__V_40_40);
#line 34 "llds_out_util.m"
                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                      {
#line 2001 "ll_backend.llds_out.llds_out_util.c"
                                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_19_19 == ll_backend__llds_out__llds_out_util__V_41_41);
#line 34 "llds_out_util.m"
                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                          {
#line 2007 "ll_backend.llds_out.llds_out_util.c"
                                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_20_20 == ll_backend__llds_out__llds_out_util__V_42_42);
#line 34 "llds_out_util.m"
                                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                              {
#line 2013 "ll_backend.llds_out.llds_out_util.c"
                                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_21_21 == ll_backend__llds_out__llds_out_util__V_43_43);
#line 34 "llds_out_util.m"
                                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                                  {
#line 2019 "ll_backend.llds_out.llds_out_util.c"
                                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_22_22 == ll_backend__llds_out__llds_out_util__V_44_44);
#line 34 "llds_out_util.m"
                                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 34 "llds_out_util.m"
                                                                                      {
#line 2025 "ll_backend.llds_out.llds_out_util.c"
                                                                                        {
#line 2027 "ll_backend.llds_out.llds_out_util.c"
                                                                                          ll_backend__llds_out__llds_out_util__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__llds_out__llds_out_util__V_23_23, ll_backend__llds_out__llds_out_util__V_45_45);
                                                                                        }
#line 34 "llds_out_util.m"
                                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 2032 "ll_backend.llds_out.llds_out_util.c"
                                                                                          {
#line 2034 "ll_backend.llds_out.llds_out_util.c"
                                                                                            return ll_backend__llds_out__llds_out_util__succeeded = libs__globals____Unify____globals_0_0(ll_backend__llds_out__llds_out_util__V_24_24, ll_backend__llds_out__llds_out_util__V_46_46);
                                                                                          }
#line 34 "llds_out_util.m"
                                                                                      }
#line 34 "llds_out_util.m"
                                                                                  }
#line 34 "llds_out_util.m"
                                                                              }
#line 34 "llds_out_util.m"
                                                                          }
#line 34 "llds_out_util.m"
                                                                      }
#line 34 "llds_out_util.m"
                                                                  }
#line 34 "llds_out_util.m"
                                                              }
#line 34 "llds_out_util.m"
                                                          }
#line 34 "llds_out_util.m"
                                                      }
#line 34 "llds_out_util.m"
                                                  }
#line 34 "llds_out_util.m"
                                              }
#line 34 "llds_out_util.m"
                                          }
#line 34 "llds_out_util.m"
                                      }
#line 34 "llds_out_util.m"
                                  }
#line 34 "llds_out_util.m"
                              }
#line 34 "llds_out_util.m"
                          }
#line 34 "llds_out_util.m"
                      }
#line 34 "llds_out_util.m"
                  }
#line 34 "llds_out_util.m"
              }
#line 34 "llds_out_util.m"
          }
#line 34 "llds_out_util.m"
      }
#line 34 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 34 "llds_out_util.m"
  }
#line 34 "llds_out_util.m"
}

#line 170 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0(
#line 170 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 170 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
#line 170 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
#line 170 "llds_out_util.m"
{
#line 170 "llds_out_util.m"
  {
#line 170 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 170 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar1_4 = ll_backend__llds_out__llds_out_util__HeadVar__2_2;
#line 170 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar2_5 = ll_backend__llds_out__llds_out_util__HeadVar__3_3;

#line 170 "llds_out_util.m"
    {
#line 170 "llds_out_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_1[0], ll_backend__llds_out__llds_out_util__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar2_5)));
#line 170 "llds_out_util.m"
      return;
    }
#line 170 "llds_out_util.m"
  }
#line 170 "llds_out_util.m"
}

#line 170 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0(
#line 170 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 170 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
#line 170 "llds_out_util.m"
{
#line 170 "llds_out_util.m"
  {
#line 170 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 170 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar1_3 = ll_backend__llds_out__llds_out_util__HeadVar__1_1;
#line 170 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar2_4 = ll_backend__llds_out__llds_out_util__HeadVar__2_2;

#line 170 "llds_out_util.m"
    {
#line 170 "llds_out_util.m"
      return ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_1[0], ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar2_4)));
    }
#line 170 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 170 "llds_out_util.m"
  }
#line 170 "llds_out_util.m"
}

#line 75 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0(
#line 75 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 75 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
#line 75 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
#line 75 "llds_out_util.m"
{
#line 75 "llds_out_util.m"
  {
#line 75 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 75 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_225 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;
#line 75 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_226 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__3_3;

#line 75 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_225 == ll_backend__llds_out__llds_out_util__CastY_226);
#line 75 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 2172 "ll_backend.llds_out.llds_out_util.c"
      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "llds_out_util.m"
    else
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
      switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) {
#line 75 "llds_out_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
        case (MR_Integer) 0:
#line 75 "llds_out_util.m"
          {
#line 75 "llds_out_util.m"
            MR_String ll_backend__llds_out__llds_out_util__V_241_241 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 75 "llds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
              case (MR_Integer) 0:
#line 75 "llds_out_util.m"
                {
#line 75 "llds_out_util.m"
                  MR_String ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));

#line 75 "llds_out_util.m"
                  {
#line 75 "llds_out_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_241_241, ll_backend__llds_out__llds_out_util__V_5_5);
#line 75 "llds_out_util.m"
                    return;
                  }
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
              case (MR_Integer) 1:
#line 2213 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
              case (MR_Integer) 2:
#line 2219 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
              case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2232 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2238 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2244 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 2250 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 4:
#line 2256 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 5:
#line 2262 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 6:
#line 2268 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
            }
#line 75 "llds_out_util.m"
          }
#line 75 "llds_out_util.m"
          break;
#line 75 "llds_out_util.m"
        case (MR_Integer) 1:
#line 75 "llds_out_util.m"
          {
#line 75 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 75 "llds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
              case (MR_Integer) 0:
#line 2296 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
              case (MR_Integer) 1:
#line 75 "llds_out_util.m"
                {
#line 75 "llds_out_util.m"
                  MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "llds_out_util.m"
                  MR_Integer ll_backend__llds_out__llds_out_util__V_251_251 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_240_240;
#line 75 "llds_out_util.m"
                  MR_Integer ll_backend__llds_out__llds_out_util__V_252_252 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_28_28;

#line 75 "llds_out_util.m"
                  {
#line 75 "llds_out_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_251_251, ll_backend__llds_out__llds_out_util__V_252_252);
#line 75 "llds_out_util.m"
                    return;
                  }
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
              case (MR_Integer) 2:
#line 2324 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
              case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2337 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2343 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2349 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 2355 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 4:
#line 2361 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 5:
#line 2367 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 6:
#line 2373 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
            }
#line 75 "llds_out_util.m"
          }
#line 75 "llds_out_util.m"
          break;
#line 75 "llds_out_util.m"
        case (MR_Integer) 2:
#line 75 "llds_out_util.m"
          {
#line 75 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 75 "llds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
              case (MR_Integer) 0:
#line 2401 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
              case (MR_Integer) 1:
#line 2407 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
              case (MR_Integer) 2:
#line 75 "llds_out_util.m"
                {
#line 75 "llds_out_util.m"
                  MR_Word ll_backend__llds_out__llds_out_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));

#line 75 "llds_out_util.m"
                  {
#line 75 "llds_out_util.m"
                    ll_backend__llds____Compare____code_addr_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_239_239, ll_backend__llds_out__llds_out_util__V_51_51);
#line 75 "llds_out_util.m"
                    return;
                  }
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
              case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2438 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2444 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2450 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 2456 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 4:
#line 2462 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 5:
#line 2468 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 6:
#line 2474 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
                break;
#line 75 "llds_out_util.m"
            }
#line 75 "llds_out_util.m"
          }
#line 75 "llds_out_util.m"
          break;
#line 75 "llds_out_util.m"
        case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
            case (MR_Integer) 0:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 75 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2509 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2515 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2521 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 75 "llds_out_util.m"
                        {
#line 75 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
                          {
#line 75 "llds_out_util.m"
                            backend_libs__rtti____Compare____rtti_id_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_244_244, ll_backend__llds_out__llds_out_util__V_74_74);
#line 75 "llds_out_util.m"
                            return;
                          }
#line 75 "llds_out_util.m"
                        }
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 2552 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 2558 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 2564 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 2570 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 2576 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 2582 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                    }
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 1:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 75 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2610 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2616 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2622 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 2635 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 75 "llds_out_util.m"
                        {
#line 75 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
                          {
#line 75 "llds_out_util.m"
                            ll_backend__layout____Compare____layout_name_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_243_243, ll_backend__llds_out__llds_out_util__V_97_97);
#line 75 "llds_out_util.m"
                            return;
                          }
#line 75 "llds_out_util.m"
                        }
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 2659 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 2665 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 2671 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 2677 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 2683 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                    }
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 2:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 75 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2713 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2719 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2725 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 2738 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 2744 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 75 "llds_out_util.m"
                        {
#line 75 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 2)));
#line 75 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_128_128;

#line 75 "llds_out_util.m"
                          {
#line 75 "llds_out_util.m"
                            mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__llds_out__llds_out_util__V_128_128, ll_backend__llds_out__llds_out_util__V_246_246, ll_backend__llds_out__llds_out_util__V_126_126);
                          }
#line 2764 "ll_backend.llds_out.llds_out_util.c"
                          ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_128_128 == (MR_Integer) 0);
#line 75 "llds_out_util.m"
                          ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 75 "llds_out_util.m"
                          if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_128_128;
#line 75 "llds_out_util.m"
                          else
#line 75 "llds_out_util.m"
                            {
#line 75 "llds_out_util.m"
                              backend_libs__rtti____Compare____proc_tabling_struct_id_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_245_245, ll_backend__llds_out__llds_out_util__V_127_127);
#line 75 "llds_out_util.m"
                              return;
                            }
#line 75 "llds_out_util.m"
                        }
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 2787 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 2793 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 2799 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 2805 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                    }
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 3:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_242_242 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 75 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2833 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2839 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2845 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 2858 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 2864 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 2870 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 75 "llds_out_util.m"
                        {
#line 75 "llds_out_util.m"
                          MR_String ll_backend__llds_out__llds_out_util__V_155_155 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
                          {
#line 75 "llds_out_util.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_242_242, ll_backend__llds_out__llds_out_util__V_155_155);
#line 75 "llds_out_util.m"
                            return;
                          }
#line 75 "llds_out_util.m"
                        }
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 2894 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 2900 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 2906 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                    }
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 4:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 75 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2934 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2940 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2946 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 2959 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 2965 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 2971 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 2977 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 75 "llds_out_util.m"
                        {
#line 75 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "llds_out_util.m"
                          MR_String ll_backend__llds_out__llds_out_util__V_249_249 = (MR_String) ll_backend__llds_out__llds_out_util__V_238_238;
#line 75 "llds_out_util.m"
                          MR_String ll_backend__llds_out__llds_out_util__V_250_250 = (MR_String) ll_backend__llds_out__llds_out_util__V_178_178;

#line 75 "llds_out_util.m"
                          {
#line 75 "llds_out_util.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_249_249, ll_backend__llds_out__llds_out_util__V_250_250);
#line 75 "llds_out_util.m"
                            return;
                          }
#line 75 "llds_out_util.m"
                        }
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 3005 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 3011 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                    }
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 5:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_247_247 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 75 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 3039 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 3045 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 3051 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 3064 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 3070 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 3076 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 3082 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 3088 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 75 "llds_out_util.m"
                        {
#line 75 "llds_out_util.m"
                          MR_Integer ll_backend__llds_out__llds_out_util__V_201_201 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
                          {
#line 75 "llds_out_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_247_247, ll_backend__llds_out__llds_out_util__V_201_201);
#line 75 "llds_out_util.m"
                            return;
                          }
#line 75 "llds_out_util.m"
                        }
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 3112 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                    }
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 6:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_248_248 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 75 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 3140 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 3146 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 3152 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 3165 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 3171 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 3177 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 3183 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 3189 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 3195 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 75 "llds_out_util.m"
                        {
#line 75 "llds_out_util.m"
                          MR_Integer ll_backend__llds_out__llds_out_util__V_224_224 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 75 "llds_out_util.m"
                          {
#line 75 "llds_out_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_248_248, ll_backend__llds_out__llds_out_util__V_224_224);
#line 75 "llds_out_util.m"
                            return;
                          }
#line 75 "llds_out_util.m"
                        }
#line 75 "llds_out_util.m"
                        break;
#line 75 "llds_out_util.m"
                    }
#line 75 "llds_out_util.m"
                    break;
#line 75 "llds_out_util.m"
                }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
          }
#line 75 "llds_out_util.m"
          break;
#line 75 "llds_out_util.m"
      }
#line 75 "llds_out_util.m"
  }
#line 75 "llds_out_util.m"
}

#line 75 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0(
#line 75 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 75 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
#line 75 "llds_out_util.m"
{
#line 75 "llds_out_util.m"
  {
#line 75 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 75 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_25 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__1_1;
#line 75 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_26 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;

#line 75 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_25 == ll_backend__llds_out__llds_out_util__CastY_26);
#line 75 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__succeeded = MR_TRUE;
#line 75 "llds_out_util.m"
    else
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
      switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) {
#line 75 "llds_out_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
        case (MR_Integer) 0:
#line 75 "llds_out_util.m"
          {
#line 75 "llds_out_util.m"
            MR_String ll_backend__llds_out__llds_out_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "llds_out_util.m"
            MR_String ll_backend__llds_out__llds_out_util__V_4_4;

#line 75 "llds_out_util.m"
            ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 75 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3286 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_3_3, ll_backend__llds_out__llds_out_util__V_4_4) == 0);
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
          }
#line 75 "llds_out_util.m"
          break;
#line 75 "llds_out_util.m"
        case (MR_Integer) 1:
#line 75 "llds_out_util.m"
          {
#line 75 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_6_6;
#line 75 "llds_out_util.m"
            MR_Integer ll_backend__llds_out__llds_out_util__V_36_36;
#line 75 "llds_out_util.m"
            MR_Integer ll_backend__llds_out__llds_out_util__V_37_37;

#line 75 "llds_out_util.m"
            ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 75 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3315 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__V_36_36 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_5_5;
#line 3317 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__V_37_37 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_6_6;
#line 3319 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_36_36 == ll_backend__llds_out__llds_out_util__V_37_37);
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
          }
#line 75 "llds_out_util.m"
          break;
#line 75 "llds_out_util.m"
        case (MR_Integer) 2:
#line 75 "llds_out_util.m"
          {
#line 75 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_8_8;

#line 75 "llds_out_util.m"
            ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 75 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3344 "ll_backend.llds_out.llds_out_util.c"
                {
#line 3346 "ll_backend.llds_out.llds_out_util.c"
                  return ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__llds_out__llds_out_util__V_7_7, ll_backend__llds_out__llds_out_util__V_8_8);
                }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
          }
#line 75 "llds_out_util.m"
          break;
#line 75 "llds_out_util.m"
        case (MR_Integer) 3:
#line 75 "llds_out_util.m"
#line 75 "llds_out_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 75 "llds_out_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 75 "llds_out_util.m"
            case (MR_Integer) 0:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_10_10;

#line 75 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 75 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
                  {
#line 75 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3379 "ll_backend.llds_out.llds_out_util.c"
                    {
#line 3381 "ll_backend.llds_out.llds_out_util.c"
                      return ll_backend__llds_out__llds_out_util__succeeded = backend_libs__rtti____Unify____rtti_id_0_0(ll_backend__llds_out__llds_out_util__V_9_9, ll_backend__llds_out__llds_out_util__V_10_10);
                    }
#line 75 "llds_out_util.m"
                  }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 1:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_12_12;

#line 75 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 75 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
                  {
#line 75 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3407 "ll_backend.llds_out.llds_out_util.c"
                    {
#line 3409 "ll_backend.llds_out.llds_out_util.c"
                      return ll_backend__llds_out__llds_out_util__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__llds_out__llds_out_util__V_11_11, ll_backend__llds_out__llds_out_util__V_12_12);
                    }
#line 75 "llds_out_util.m"
                  }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 2:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 2)));
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_15_15;
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_16_16;

#line 75 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 75 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
                  {
#line 75 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 3441 "ll_backend.llds_out.llds_out_util.c"
                    {
#line 3443 "ll_backend.llds_out.llds_out_util.c"
                      ll_backend__llds_out__llds_out_util__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__llds_out__llds_out_util__V_13_13, ll_backend__llds_out__llds_out_util__V_15_15);
                    }
#line 75 "llds_out_util.m"
                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 3448 "ll_backend.llds_out.llds_out_util.c"
                      {
#line 3450 "ll_backend.llds_out.llds_out_util.c"
                        return ll_backend__llds_out__llds_out_util__succeeded = backend_libs__rtti____Unify____proc_tabling_struct_id_0_0(ll_backend__llds_out__llds_out_util__V_14_14, ll_backend__llds_out__llds_out_util__V_16_16);
                      }
#line 75 "llds_out_util.m"
                  }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 3:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_18_18;

#line 75 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 75 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
                  {
#line 75 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3476 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_17_17, ll_backend__llds_out__llds_out_util__V_18_18) == 0);
#line 75 "llds_out_util.m"
                  }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 4:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_20_20;
#line 75 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_34_34;
#line 75 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_35_35;

#line 75 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 75 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
                  {
#line 75 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3505 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__V_34_34 = (MR_String) ll_backend__llds_out__llds_out_util__V_19_19;
#line 3507 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__V_35_35 = (MR_String) ll_backend__llds_out__llds_out_util__V_20_20;
#line 3509 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_34_34, ll_backend__llds_out__llds_out_util__V_35_35) == 0);
#line 75 "llds_out_util.m"
                  }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 5:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_22_22;

#line 75 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 75 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
                  {
#line 75 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3534 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_21_21 == ll_backend__llds_out__llds_out_util__V_22_22);
#line 75 "llds_out_util.m"
                  }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
            case (MR_Integer) 6:
#line 75 "llds_out_util.m"
              {
#line 75 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_24_24;

#line 75 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 75 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 75 "llds_out_util.m"
                  {
#line 75 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3559 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_23_23 == ll_backend__llds_out__llds_out_util__V_24_24);
#line 75 "llds_out_util.m"
                  }
#line 75 "llds_out_util.m"
              }
#line 75 "llds_out_util.m"
              break;
#line 75 "llds_out_util.m"
          }
#line 75 "llds_out_util.m"
          break;
#line 75 "llds_out_util.m"
      }
#line 75 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 75 "llds_out_util.m"
  }
#line 75 "llds_out_util.m"
}

#line 101 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__output_indent_5_p_0(
#line 101 "llds_out_util.m"
  MR_String ll_backend__llds_out__llds_out_util__FirstIndent_6,
#line 101 "llds_out_util.m"
  MR_String ll_backend__llds_out__llds_out_util__LaterIndent_7,
#line 101 "llds_out_util.m"
  MR_Integer ll_backend__llds_out__llds_out_util__N0_8)
#line 101 "llds_out_util.m"
{
#line 186 "llds_out_util.m"
  {
#line 186 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__N0_8 > (MR_Integer) 0);

#line 186 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 185 "llds_out_util.m"
      {
#line 185 "llds_out_util.m"
        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_util__LaterIndent_7);
#line 185 "llds_out_util.m"
        return;
      }
#line 186 "llds_out_util.m"
    else
#line 187 "llds_out_util.m"
      {
#line 187 "llds_out_util.m"
        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_util__FirstIndent_6);
#line 187 "llds_out_util.m"
        return;
      }
#line 186 "llds_out_util.m"
  }
#line 101 "llds_out_util.m"
}

#line 97 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(
#line 97 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclId_3,
#line 97 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclSet_4)
#line 97 "llds_out_util.m"
{
#line 179 "llds_out_util.m"
  {
#line 179 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 179 "llds_out_util.m"
    {
#line 179 "llds_out_util.m"
      return ll_backend__llds_out__llds_out_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0, ll_backend__llds_out__llds_out_util__DeclSet_4, ((MR_Box) (ll_backend__llds_out__llds_out_util__DeclId_3)));
    }
#line 179 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 179 "llds_out_util.m"
  }
#line 97 "llds_out_util.m"
}

#line 95 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(
#line 95 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclId_4,
#line 95 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclSet0_5,
#line 95 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__DeclSet_6)
#line 95 "llds_out_util.m"
{
#line 176 "llds_out_util.m"
  {
#line 176 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 176 "llds_out_util.m"
    {
#line 176 "llds_out_util.m"
      mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0, ((MR_Box) (ll_backend__llds_out__llds_out_util__DeclId_4)), ll_backend__llds_out__llds_out_util__DeclSet0_5, ll_backend__llds_out__llds_out_util__DeclSet_6);
#line 176 "llds_out_util.m"
      return;
    }
#line 176 "llds_out_util.m"
  }
#line 95 "llds_out_util.m"
}

#line 93 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(
#line 93 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__DeclSet_2)
#line 93 "llds_out_util.m"
{
#line 173 "llds_out_util.m"
  {
#line 173 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 173 "llds_out_util.m"
    {
#line 173 "llds_out_util.m"
      *ll_backend__llds_out__llds_out_util__DeclSet_2 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0);
    }
#line 173 "llds_out_util.m"
  }
#line 93 "llds_out_util.m"
}

#line 71 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(
#line 71 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Info_4)
#line 71 "llds_out_util.m"
{
#line 159 "llds_out_util.m"
  {
#line 159 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 159 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LineNumbers_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 0)));
#line 160 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 1)));
#line 160 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 2)));
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 3)));
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 4)));
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 5)));
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)));
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 160 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 8)));

#line 164 "llds_out_util.m"
#line 164 "llds_out_util.m"
    switch (ll_backend__llds_out__llds_out_util__LineNumbers_6) {
#line 164 "llds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 164 "llds_out_util.m"
      case (MR_Integer) 0:
#line 165 "llds_out_util.m"
        {
#line 165 "llds_out_util.m"
        }
#line 164 "llds_out_util.m"
        break;
#line 164 "llds_out_util.m"
      case (MR_Integer) 1:
#line 163 "llds_out_util.m"
        {
#line 163 "llds_out_util.m"
          backend_libs__c_util__always_reset_line_num_2_p_0();
#line 163 "llds_out_util.m"
          return;
        }
#line 164 "llds_out_util.m"
        break;
#line 164 "llds_out_util.m"
    }
#line 159 "llds_out_util.m"
  }
#line 71 "llds_out_util.m"
}

#line 68 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(
#line 68 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Info_5,
#line 68 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Context_6)
#line 68 "llds_out_util.m"
{
#line 148 "llds_out_util.m"
  {
#line 148 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 148 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LineNumbers_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 0)));
#line 149 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 1)));
#line 149 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 2)));
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 3)));
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 4)));
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 5)));
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)));
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 149 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 8)));

#line 155 "llds_out_util.m"
#line 155 "llds_out_util.m"
    switch (ll_backend__llds_out__llds_out_util__LineNumbers_8) {
#line 155 "llds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 155 "llds_out_util.m"
      case (MR_Integer) 0:
#line 156 "llds_out_util.m"
        {
#line 156 "llds_out_util.m"
        }
#line 155 "llds_out_util.m"
        break;
#line 155 "llds_out_util.m"
      case (MR_Integer) 1:
#line 151 "llds_out_util.m"
        {
#line 151 "llds_out_util.m"
          MR_String ll_backend__llds_out__llds_out_util__File_9;
#line 151 "llds_out_util.m"
          MR_Integer ll_backend__llds_out__llds_out_util__Line_10;

#line 152 "llds_out_util.m"
          {
#line 152 "llds_out_util.m"
            mercury__term__context_file_2_p_0(ll_backend__llds_out__llds_out_util__Context_6, &ll_backend__llds_out__llds_out_util__File_9);
          }
#line 153 "llds_out_util.m"
          {
#line 153 "llds_out_util.m"
            mercury__term__context_line_2_p_0(ll_backend__llds_out__llds_out_util__Context_6, &ll_backend__llds_out__llds_out_util__Line_10);
          }
#line 154 "llds_out_util.m"
          {
#line 154 "llds_out_util.m"
            backend_libs__c_util__always_set_line_num_4_p_0(ll_backend__llds_out__llds_out_util__File_9, ll_backend__llds_out__llds_out_util__Line_10);
#line 154 "llds_out_util.m"
            return;
          }
#line 151 "llds_out_util.m"
        }
#line 155 "llds_out_util.m"
        break;
#line 155 "llds_out_util.m"
    }
#line 148 "llds_out_util.m"
  }
#line 68 "llds_out_util.m"
}

#line 63 "llds_out_util.m"
MR_Word MR_CALL 
ll_backend__llds_out__llds_out_util__init_llds_out_info_7_f_0(
#line 63 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__ModuleName_9,
#line 63 "llds_out_util.m"
  MR_String ll_backend__llds_out__llds_out_util__SourceFileName_10,
#line 63 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Globals_11,
#line 63 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__InternalLabelToLayoutMap_12,
#line 63 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__EntryLabelToLayoutMap_13,
#line 63 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__TableIoEntryMap_14,
#line 63 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__AllocSiteMap_15)
#line 63 "llds_out_util.m"
{
#line 120 "llds_out_util.m"
  {
#line 120 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Info_16;
#line 120 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__MangledModuleName_17;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__AutoComments_18;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LineNumbers_19;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__EmitCLoops_20;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__GenerateBytecode_21;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_22;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileCalls_23;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileTime_24;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileMemory_25;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileDeep_26;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__UnboxedFloat_27;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__DetStackDwordAligment_28;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__StaticGroundFloats_29;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_30;
#line 120 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__TraceLevel_31;

#line 121 "llds_out_util.m"
    {
#line 121 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__MangledModuleName_17 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__llds_out__llds_out_util__ModuleName_9);
    }
#line 122 "llds_out_util.m"
    {
#line 122 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 140, &ll_backend__llds_out__llds_out_util__AutoComments_18);
    }
#line 123 "llds_out_util.m"
    {
#line 123 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 138, &ll_backend__llds_out__llds_out_util__LineNumbers_19);
    }
#line 124 "llds_out_util.m"
    {
#line 124 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 483, &ll_backend__llds_out__llds_out_util__EmitCLoops_20);
    }
#line 125 "llds_out_util.m"
    {
#line 125 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 137, &ll_backend__llds_out__llds_out_util__GenerateBytecode_21);
    }
#line 126 "llds_out_util.m"
    {
#line 126 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 486, &ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_22);
    }
#line 128 "llds_out_util.m"
    {
#line 128 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 193, &ll_backend__llds_out__llds_out_util__ProfileCalls_23);
    }
#line 129 "llds_out_util.m"
    {
#line 129 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 194, &ll_backend__llds_out__llds_out_util__ProfileTime_24);
    }
#line 130 "llds_out_util.m"
    {
#line 130 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 195, &ll_backend__llds_out__llds_out_util__ProfileMemory_25);
    }
#line 131 "llds_out_util.m"
    {
#line 131 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 196, &ll_backend__llds_out__llds_out_util__ProfileDeep_26);
    }
#line 132 "llds_out_util.m"
    {
#line 132 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 244, &ll_backend__llds_out__llds_out_util__UnboxedFloat_27);
    }
#line 133 "llds_out_util.m"
    {
#line 133 "llds_out_util.m"
      libs__globals__double_width_floats_on_det_stack_2_p_0(ll_backend__llds_out__llds_out_util__Globals_11, &ll_backend__llds_out__llds_out_util__DetStackDwordAligment_28);
    }
#line 134 "llds_out_util.m"
    {
#line 134 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 452, &ll_backend__llds_out__llds_out_util__StaticGroundFloats_29);
    }
#line 136 "llds_out_util.m"
    {
#line 136 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 482, &ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_30);
    }
#line 138 "llds_out_util.m"
    {
#line 138 "llds_out_util.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__llds_out__llds_out_util__Globals_11, &ll_backend__llds_out__llds_out_util__TraceLevel_31);
    }
#line 139 "llds_out_util.m"
    {
#line 139 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__Info_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 139 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_util__ModuleName_9));
#line 139 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_util__MangledModuleName_17));
#line 139 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_util__SourceFileName_10));
#line 139 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_util__InternalLabelToLayoutMap_12));
#line 139 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 4) = ((MR_Box) (ll_backend__llds_out__llds_out_util__EntryLabelToLayoutMap_13));
#line 139 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_util__TableIoEntryMap_14));
#line 139 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 6) = ((MR_Box) (ll_backend__llds_out__llds_out_util__AllocSiteMap_15));
#line 139 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 7) = ((MR_Box) ((ll_backend__llds_out__llds_out_util__AutoComments_18 | ((((ll_backend__llds_out__llds_out_util__LineNumbers_19 << (MR_Integer) 1)) | ((((ll_backend__llds_out__llds_out_util__EmitCLoops_20 << (MR_Integer) 2)) | ((((ll_backend__llds_out__llds_out_util__GenerateBytecode_21 << (MR_Integer) 3)) | ((((ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_22 << (MR_Integer) 4)) | ((((ll_backend__llds_out__llds_out_util__ProfileCalls_23 << (MR_Integer) 5)) | ((((ll_backend__llds_out__llds_out_util__ProfileTime_24 << (MR_Integer) 6)) | ((((ll_backend__llds_out__llds_out_util__ProfileMemory_25 << (MR_Integer) 7)) | ((((ll_backend__llds_out__llds_out_util__ProfileDeep_26 << (MR_Integer) 8)) | ((((ll_backend__llds_out__llds_out_util__UnboxedFloat_27 << (MR_Integer) 9)) | ((((ll_backend__llds_out__llds_out_util__DetStackDwordAligment_28 << (MR_Integer) 10)) | ((((ll_backend__llds_out__llds_out_util__StaticGroundFloats_29 << (MR_Integer) 11)) | ((((ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_30 << (MR_Integer) 12)) | ((ll_backend__llds_out__llds_out_util__TraceLevel_31 << (MR_Integer) 13)))))))))))))))))))))))))))));
#line 139 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 8) = ((MR_Box) (ll_backend__llds_out__llds_out_util__Globals_11));
#line 139 "llds_out_util.m"
    }
#line 120 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__Info_16;
#line 120 "llds_out_util.m"
  }
#line 63 "llds_out_util.m"
}

void mercury__ll_backend__llds_out__llds_out_util__init(void)
{
}

void mercury__ll_backend__llds_out__llds_out_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0);
	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0);
	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0);
}

void mercury__ll_backend__llds_out__llds_out_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.llds_out.llds_out_util. */
