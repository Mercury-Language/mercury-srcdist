/*
** Automatically generated from `llds_out_util.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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
#include "tree_bitset.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
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




#line 143 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0[1];

#line 146 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0;

#line 149 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1[1];

#line 152 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1;

#line 155 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2[1];

#line 158 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2;

#line 161 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3[1];

#line 164 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3;

#line 167 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4[1];

#line 170 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4;

#line 173 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5[2];

#line 176 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5;

#line 179 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6[1];

#line 182 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6;

#line 185 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7[1];

#line 188 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7;

#line 191 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8[1];

#line 194 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8;

#line 197 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9[1];

#line 200 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9;

#line 203 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0[1];

#line 206 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1[1];

#line 209 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2[1];

#line 212 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3[7];

#line 215 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0[4];

#line 218 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0[10];

#line 221 "ll_backend.llds_out.llds_out_util.c"
static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0[10];

#line 224 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

#line 227 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 230 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0;

#line 233 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 236 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 239 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0[21];

#line 242 "ll_backend.llds_out.llds_out_util.c"
static const MR_ConstString ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0[21];

#line 245 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuArgLocn ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0[21];

#line 248 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0;

#line 251 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0[1];

#line 254 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0[1];

#line 257 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0[1];

#line 260 "ll_backend.llds_out.llds_out_util.c"
static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0[1];

#line 263 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001(
#line 266 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 268 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

#line 271 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001(
#line 274 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 276 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 278 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3);

#line 281 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001(
#line 284 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 286 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

#line 289 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001(
#line 292 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 294 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 296 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3);

#line 299 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001(
#line 302 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 304 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

#line 307 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001(
#line 310 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 312 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 314 "ll_backend.llds_out.llds_out_util.c"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 377 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 382 "ll_backend.llds_out.llds_out_util.c"
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

#line 397 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
};

#line 402 "ll_backend.llds_out.llds_out_util.c"
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

#line 417 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0
};

#line 422 "ll_backend.llds_out.llds_out_util.c"
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

#line 437 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
};

#line 442 "ll_backend.llds_out.llds_out_util.c"
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

#line 457 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
};

#line 462 "ll_backend.llds_out.llds_out_util.c"
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

#line 477 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0
};

#line 483 "ll_backend.llds_out.llds_out_util.c"
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

#line 498 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 503 "ll_backend.llds_out.llds_out_util.c"
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

#line 518 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_global_var_ref_0
};

#line 523 "ll_backend.llds_out.llds_out_util.c"
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

#line 538 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 543 "ll_backend.llds_out.llds_out_util.c"
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

#line 558 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 563 "ll_backend.llds_out.llds_out_util.c"
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

#line 578 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0
};

#line 583 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1
};

#line 588 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2
};

#line 593 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3[7] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9
};

#line 604 "ll_backend.llds_out.llds_out_util.c"
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

#line 628 "ll_backend.llds_out.llds_out_util.c"
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

#line 642 "ll_backend.llds_out.llds_out_util.c"
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

#line 656 "ll_backend.llds_out.llds_out_util.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "decl_id",
  {
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0
  },
  {
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0
  },
  (MR_Integer) 10,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0
};

#line 677 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

#line 685 "ll_backend.llds_out.llds_out_util.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "decl_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 706 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 715 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 724 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 733 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 742 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0[21] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
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

#line 767 "ll_backend.llds_out.llds_out_util.c"
static const MR_ConstString ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0[21] = {
  (MR_String) "lout_module_name",
  (MR_String) "lout_mangled_module_name",
  (MR_String) "lout_internal_label_to_layout",
  (MR_String) "lout_entry_label_to_layout",
  (MR_String) "lout_table_io_decl_map",
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

#line 792 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuArgLocn ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0[21] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 13,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 901 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0 = {
  (MR_String) "llds_out_info",
  (MR_Integer) 21,
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

#line 916 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0
};

#line 921 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0
  }
};

#line 930 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0
};

#line 935 "ll_backend.llds_out.llds_out_util.c"
static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0[1] = {
  (MR_Integer) 0
};

#line 940 "ll_backend.llds_out.llds_out_util.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "llds_out_info",
  {
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0
  },
  {
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0
};

#line 961 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001(
#line 964 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 966 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
#line 968 "ll_backend.llds_out.llds_out_util.c"
{
#line 970 "ll_backend.llds_out.llds_out_util.c"
  {
#line 972 "ll_backend.llds_out.llds_out_util.c"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 975 "ll_backend.llds_out.llds_out_util.c"
    {
#line 977 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
#line 980 "ll_backend.llds_out.llds_out_util.c"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 982 "ll_backend.llds_out.llds_out_util.c"
  }
#line 984 "ll_backend.llds_out.llds_out_util.c"
}

#line 987 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001(
#line 990 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 992 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 994 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
#line 996 "ll_backend.llds_out.llds_out_util.c"
{
#line 998 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1000 "ll_backend.llds_out.llds_out_util.c"
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

#line 1003 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1005 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
#line 1008 "ll_backend.llds_out.llds_out_util.c"
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
#line 1010 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1012 "ll_backend.llds_out.llds_out_util.c"
}

#line 1015 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001(
#line 1018 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1020 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
#line 1022 "ll_backend.llds_out.llds_out_util.c"
{
#line 1024 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1026 "ll_backend.llds_out.llds_out_util.c"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 1029 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1031 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
#line 1034 "ll_backend.llds_out.llds_out_util.c"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 1036 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1038 "ll_backend.llds_out.llds_out_util.c"
}

#line 1041 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001(
#line 1044 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1046 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 1048 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
#line 1050 "ll_backend.llds_out.llds_out_util.c"
{
#line 1052 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1054 "ll_backend.llds_out.llds_out_util.c"
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

#line 1057 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1059 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
#line 1062 "ll_backend.llds_out.llds_out_util.c"
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
#line 1064 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1066 "ll_backend.llds_out.llds_out_util.c"
}

#line 1069 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001(
#line 1072 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1074 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
#line 1076 "ll_backend.llds_out.llds_out_util.c"
{
#line 1078 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1080 "ll_backend.llds_out.llds_out_util.c"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 1083 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1085 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
#line 1088 "ll_backend.llds_out.llds_out_util.c"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 1090 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1092 "ll_backend.llds_out.llds_out_util.c"
}

#line 1095 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001(
#line 1098 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1100 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 1102 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
#line 1104 "ll_backend.llds_out.llds_out_util.c"
{
#line 1106 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1108 "ll_backend.llds_out.llds_out_util.c"
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

#line 1111 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1113 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
#line 1116 "ll_backend.llds_out.llds_out_util.c"
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
#line 1118 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1120 "ll_backend.llds_out.llds_out_util.c"
}

#line 33 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0(
#line 33 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 33 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
#line 33 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
#line 33 "llds_out_util.m"
{
#line 33 "llds_out_util.m"
  {
#line 33 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 33 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_66 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;
#line 33 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_67 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__3_3;

#line 33 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_66 == ll_backend__llds_out__llds_out_util__CastY_67);
#line 33 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 1147 "ll_backend.llds_out.llds_out_util.c"
      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 0;
#line 33 "llds_out_util.m"
    else
#line 33 "llds_out_util.m"
      {
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 33 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 4)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 5)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 33 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 2)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 3)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 4)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 5)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_46_46;

#line 33 "llds_out_util.m"
        {
#line 33 "llds_out_util.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__llds_out__llds_out_util__V_46_46, ll_backend__llds_out__llds_out_util__V_4_4, ll_backend__llds_out__llds_out_util__V_25_25);
        }
#line 1245 "ll_backend.llds_out.llds_out_util.c"
        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_46_46 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_46_46;
#line 33 "llds_out_util.m"
        else
#line 33 "llds_out_util.m"
          {
#line 33 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_47_47;

#line 33 "llds_out_util.m"
            {
#line 33 "llds_out_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__llds_out__llds_out_util__V_47_47, ll_backend__llds_out__llds_out_util__V_5_5, ll_backend__llds_out__llds_out_util__V_26_26);
            }
#line 1265 "ll_backend.llds_out.llds_out_util.c"
            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_47_47 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_47_47;
#line 33 "llds_out_util.m"
            else
#line 33 "llds_out_util.m"
              {
#line 33 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_48_48;

#line 33 "llds_out_util.m"
                {
#line 33 "llds_out_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[0], &ll_backend__llds_out__llds_out_util__V_48_48, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_27_27)));
                }
#line 1285 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_48_48 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_48_48;
#line 33 "llds_out_util.m"
                else
#line 33 "llds_out_util.m"
                  {
#line 33 "llds_out_util.m"
                    MR_Word ll_backend__llds_out__llds_out_util__V_49_49;

#line 33 "llds_out_util.m"
                    {
#line 33 "llds_out_util.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[1], &ll_backend__llds_out__llds_out_util__V_49_49, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_7_7)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_28_28)));
                    }
#line 1305 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_49_49 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_49_49;
#line 33 "llds_out_util.m"
                    else
#line 33 "llds_out_util.m"
                      {
#line 33 "llds_out_util.m"
                        MR_Word ll_backend__llds_out__llds_out_util__V_50_50;

#line 33 "llds_out_util.m"
                        {
#line 33 "llds_out_util.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[2], &ll_backend__llds_out__llds_out_util__V_50_50, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_8_8)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_29_29)));
                        }
#line 1325 "ll_backend.llds_out.llds_out_util.c"
                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_50_50 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_50_50;
#line 33 "llds_out_util.m"
                        else
#line 33 "llds_out_util.m"
                          {
#line 33 "llds_out_util.m"
                            MR_Word ll_backend__llds_out__llds_out_util__V_51_51;

#line 33 "llds_out_util.m"
                            {
#line 33 "llds_out_util.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[3], &ll_backend__llds_out__llds_out_util__V_51_51, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_9_9)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_30_30)));
                            }
#line 1345 "ll_backend.llds_out.llds_out_util.c"
                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_51_51 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_51_51;
#line 33 "llds_out_util.m"
                            else
#line 33 "llds_out_util.m"
                              {
#line 33 "llds_out_util.m"
                                MR_Word ll_backend__llds_out__llds_out_util__V_52_52;
#line 33 "llds_out_util.m"
                                MR_Integer ll_backend__llds_out__llds_out_util__V_89_89 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_10_10;
#line 33 "llds_out_util.m"
                                MR_Integer ll_backend__llds_out__llds_out_util__V_90_90 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_31_31;

#line 33 "llds_out_util.m"
                                {
#line 33 "llds_out_util.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_52_52, ll_backend__llds_out__llds_out_util__V_89_89, ll_backend__llds_out__llds_out_util__V_90_90);
                                }
#line 1369 "ll_backend.llds_out.llds_out_util.c"
                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_52_52 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_52_52;
#line 33 "llds_out_util.m"
                                else
#line 33 "llds_out_util.m"
                                  {
#line 33 "llds_out_util.m"
                                    MR_Word ll_backend__llds_out__llds_out_util__V_53_53;
#line 33 "llds_out_util.m"
                                    MR_Integer ll_backend__llds_out__llds_out_util__V_91_91 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_11_11;
#line 33 "llds_out_util.m"
                                    MR_Integer ll_backend__llds_out__llds_out_util__V_92_92 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_32_32;

#line 33 "llds_out_util.m"
                                    {
#line 33 "llds_out_util.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_53_53, ll_backend__llds_out__llds_out_util__V_91_91, ll_backend__llds_out__llds_out_util__V_92_92);
                                    }
#line 1393 "ll_backend.llds_out.llds_out_util.c"
                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_53_53 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_53_53;
#line 33 "llds_out_util.m"
                                    else
#line 33 "llds_out_util.m"
                                      {
#line 33 "llds_out_util.m"
                                        MR_Word ll_backend__llds_out__llds_out_util__V_54_54;
#line 33 "llds_out_util.m"
                                        MR_Integer ll_backend__llds_out__llds_out_util__V_93_93 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_12_12;
#line 33 "llds_out_util.m"
                                        MR_Integer ll_backend__llds_out__llds_out_util__V_94_94 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_33_33;

#line 33 "llds_out_util.m"
                                        {
#line 33 "llds_out_util.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_54_54, ll_backend__llds_out__llds_out_util__V_93_93, ll_backend__llds_out__llds_out_util__V_94_94);
                                        }
#line 1417 "ll_backend.llds_out.llds_out_util.c"
                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_54_54 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_54_54;
#line 33 "llds_out_util.m"
                                        else
#line 33 "llds_out_util.m"
                                          {
#line 33 "llds_out_util.m"
                                            MR_Word ll_backend__llds_out__llds_out_util__V_55_55;
#line 33 "llds_out_util.m"
                                            MR_Integer ll_backend__llds_out__llds_out_util__V_95_95 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_13_13;
#line 33 "llds_out_util.m"
                                            MR_Integer ll_backend__llds_out__llds_out_util__V_96_96 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_34_34;

#line 33 "llds_out_util.m"
                                            {
#line 33 "llds_out_util.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_55_55, ll_backend__llds_out__llds_out_util__V_95_95, ll_backend__llds_out__llds_out_util__V_96_96);
                                            }
#line 1441 "ll_backend.llds_out.llds_out_util.c"
                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_55_55 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_55_55;
#line 33 "llds_out_util.m"
                                            else
#line 33 "llds_out_util.m"
                                              {
#line 33 "llds_out_util.m"
                                                MR_Word ll_backend__llds_out__llds_out_util__V_56_56;
#line 33 "llds_out_util.m"
                                                MR_Integer ll_backend__llds_out__llds_out_util__V_97_97 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_14_14;
#line 33 "llds_out_util.m"
                                                MR_Integer ll_backend__llds_out__llds_out_util__V_98_98 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_35_35;

#line 33 "llds_out_util.m"
                                                {
#line 33 "llds_out_util.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_56_56, ll_backend__llds_out__llds_out_util__V_97_97, ll_backend__llds_out__llds_out_util__V_98_98);
                                                }
#line 1465 "ll_backend.llds_out.llds_out_util.c"
                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_56_56 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_56_56;
#line 33 "llds_out_util.m"
                                                else
#line 33 "llds_out_util.m"
                                                  {
#line 33 "llds_out_util.m"
                                                    MR_Word ll_backend__llds_out__llds_out_util__V_57_57;
#line 33 "llds_out_util.m"
                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_99_99 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_15_15;
#line 33 "llds_out_util.m"
                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_100_100 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_36_36;

#line 33 "llds_out_util.m"
                                                    {
#line 33 "llds_out_util.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_57_57, ll_backend__llds_out__llds_out_util__V_99_99, ll_backend__llds_out__llds_out_util__V_100_100);
                                                    }
#line 1489 "ll_backend.llds_out.llds_out_util.c"
                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_57_57 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_57_57;
#line 33 "llds_out_util.m"
                                                    else
#line 33 "llds_out_util.m"
                                                      {
#line 33 "llds_out_util.m"
                                                        MR_Word ll_backend__llds_out__llds_out_util__V_58_58;
#line 33 "llds_out_util.m"
                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_101_101 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_16_16;
#line 33 "llds_out_util.m"
                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_102_102 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_37_37;

#line 33 "llds_out_util.m"
                                                        {
#line 33 "llds_out_util.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_58_58, ll_backend__llds_out__llds_out_util__V_101_101, ll_backend__llds_out__llds_out_util__V_102_102);
                                                        }
#line 1513 "ll_backend.llds_out.llds_out_util.c"
                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_58_58 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_58_58;
#line 33 "llds_out_util.m"
                                                        else
#line 33 "llds_out_util.m"
                                                          {
#line 33 "llds_out_util.m"
                                                            MR_Word ll_backend__llds_out__llds_out_util__V_59_59;
#line 33 "llds_out_util.m"
                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_103_103 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_17_17;
#line 33 "llds_out_util.m"
                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_104_104 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_38_38;

#line 33 "llds_out_util.m"
                                                            {
#line 33 "llds_out_util.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_59_59, ll_backend__llds_out__llds_out_util__V_103_103, ll_backend__llds_out__llds_out_util__V_104_104);
                                                            }
#line 1537 "ll_backend.llds_out.llds_out_util.c"
                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_59_59 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_59_59;
#line 33 "llds_out_util.m"
                                                            else
#line 33 "llds_out_util.m"
                                                              {
#line 33 "llds_out_util.m"
                                                                MR_Word ll_backend__llds_out__llds_out_util__V_60_60;
#line 33 "llds_out_util.m"
                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_105_105 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_18_18;
#line 33 "llds_out_util.m"
                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_106_106 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_39_39;

#line 33 "llds_out_util.m"
                                                                {
#line 33 "llds_out_util.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_60_60, ll_backend__llds_out__llds_out_util__V_105_105, ll_backend__llds_out__llds_out_util__V_106_106);
                                                                }
#line 1561 "ll_backend.llds_out.llds_out_util.c"
                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_60_60 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_60_60;
#line 33 "llds_out_util.m"
                                                                else
#line 33 "llds_out_util.m"
                                                                  {
#line 33 "llds_out_util.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_util__V_61_61;
#line 33 "llds_out_util.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_107_107 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_19_19;
#line 33 "llds_out_util.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_108_108 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_40_40;

#line 33 "llds_out_util.m"
                                                                    {
#line 33 "llds_out_util.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_61_61, ll_backend__llds_out__llds_out_util__V_107_107, ll_backend__llds_out__llds_out_util__V_108_108);
                                                                    }
#line 1585 "ll_backend.llds_out.llds_out_util.c"
                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_61_61 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_61_61;
#line 33 "llds_out_util.m"
                                                                    else
#line 33 "llds_out_util.m"
                                                                      {
#line 33 "llds_out_util.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_util__V_62_62;
#line 33 "llds_out_util.m"
                                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_109_109 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_20_20;
#line 33 "llds_out_util.m"
                                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_110_110 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_41_41;

#line 33 "llds_out_util.m"
                                                                        {
#line 33 "llds_out_util.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_62_62, ll_backend__llds_out__llds_out_util__V_109_109, ll_backend__llds_out__llds_out_util__V_110_110);
                                                                        }
#line 1609 "ll_backend.llds_out.llds_out_util.c"
                                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_62_62 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_62_62;
#line 33 "llds_out_util.m"
                                                                        else
#line 33 "llds_out_util.m"
                                                                          {
#line 33 "llds_out_util.m"
                                                                            MR_Word ll_backend__llds_out__llds_out_util__V_63_63;
#line 33 "llds_out_util.m"
                                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_111_111 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_21_21;
#line 33 "llds_out_util.m"
                                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_112_112 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_42_42;

#line 33 "llds_out_util.m"
                                                                            {
#line 33 "llds_out_util.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_63_63, ll_backend__llds_out__llds_out_util__V_111_111, ll_backend__llds_out__llds_out_util__V_112_112);
                                                                            }
#line 1633 "ll_backend.llds_out.llds_out_util.c"
                                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_63_63 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_63_63;
#line 33 "llds_out_util.m"
                                                                            else
#line 33 "llds_out_util.m"
                                                                              {
#line 33 "llds_out_util.m"
                                                                                MR_Word ll_backend__llds_out__llds_out_util__V_64_64;
#line 33 "llds_out_util.m"
                                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_113_113 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_22_22;
#line 33 "llds_out_util.m"
                                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_114_114 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_43_43;

#line 33 "llds_out_util.m"
                                                                                {
#line 33 "llds_out_util.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_64_64, ll_backend__llds_out__llds_out_util__V_113_113, ll_backend__llds_out__llds_out_util__V_114_114);
                                                                                }
#line 1657 "ll_backend.llds_out.llds_out_util.c"
                                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_64_64 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_64_64;
#line 33 "llds_out_util.m"
                                                                                else
#line 33 "llds_out_util.m"
                                                                                  {
#line 33 "llds_out_util.m"
                                                                                    MR_Word ll_backend__llds_out__llds_out_util__V_65_65;

#line 33 "llds_out_util.m"
                                                                                    {
#line 33 "llds_out_util.m"
                                                                                      libs__trace_params____Compare____trace_level_0_0(&ll_backend__llds_out__llds_out_util__V_65_65, ll_backend__llds_out__llds_out_util__V_23_23, ll_backend__llds_out__llds_out_util__V_44_44);
                                                                                    }
#line 1677 "ll_backend.llds_out.llds_out_util.c"
                                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_65_65 == (MR_Integer) 0);
#line 33 "llds_out_util.m"
                                                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 33 "llds_out_util.m"
                                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_65_65;
#line 33 "llds_out_util.m"
                                                                                    else
#line 33 "llds_out_util.m"
                                                                                      {
#line 33 "llds_out_util.m"
                                                                                        libs__globals____Compare____globals_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_24_24, ll_backend__llds_out__llds_out_util__V_45_45);
#line 33 "llds_out_util.m"
                                                                                        return;
                                                                                      }
#line 33 "llds_out_util.m"
                                                                                  }
#line 33 "llds_out_util.m"
                                                                              }
#line 33 "llds_out_util.m"
                                                                          }
#line 33 "llds_out_util.m"
                                                                      }
#line 33 "llds_out_util.m"
                                                                  }
#line 33 "llds_out_util.m"
                                                              }
#line 33 "llds_out_util.m"
                                                          }
#line 33 "llds_out_util.m"
                                                      }
#line 33 "llds_out_util.m"
                                                  }
#line 33 "llds_out_util.m"
                                              }
#line 33 "llds_out_util.m"
                                          }
#line 33 "llds_out_util.m"
                                      }
#line 33 "llds_out_util.m"
                                  }
#line 33 "llds_out_util.m"
                              }
#line 33 "llds_out_util.m"
                          }
#line 33 "llds_out_util.m"
                      }
#line 33 "llds_out_util.m"
                  }
#line 33 "llds_out_util.m"
              }
#line 33 "llds_out_util.m"
          }
#line 33 "llds_out_util.m"
      }
#line 33 "llds_out_util.m"
  }
#line 33 "llds_out_util.m"
}

#line 33 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0(
#line 33 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 33 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
#line 33 "llds_out_util.m"
{
#line 33 "llds_out_util.m"
  {
#line 33 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 33 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_45 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__1_1;
#line 33 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_46 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;

#line 33 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_45 == ll_backend__llds_out__llds_out_util__CastY_46);
#line 33 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__succeeded = MR_TRUE;
#line 33 "llds_out_util.m"
    else
#line 33 "llds_out_util.m"
      {
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_48_48;
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_49_49;
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_50_50;
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_51_51;
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 33 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 2)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 3)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 4)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 5)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 33 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 4)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 5)));
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 33 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)));

#line 1860 "ll_backend.llds_out.llds_out_util.c"
        {
#line 1862 "ll_backend.llds_out.llds_out_util.c"
          ll_backend__llds_out__llds_out_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__llds_out__llds_out_util__V_3_3, ll_backend__llds_out__llds_out_util__V_24_24);
        }
#line 33 "llds_out_util.m"
        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
          {
#line 1869 "ll_backend.llds_out.llds_out_util.c"
            ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_4_4, ll_backend__llds_out__llds_out_util__V_25_25) == 0);
#line 33 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
              {
#line 1875 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__TypeInfo_48_48 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[0];
#line 1877 "ll_backend.llds_out.llds_out_util.c"
                {
#line 1879 "ll_backend.llds_out.llds_out_util.c"
                  ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_48_48, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_5_5)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_26_26)));
                }
#line 33 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                  {
#line 1886 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__TypeInfo_49_49 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[1];
#line 1888 "ll_backend.llds_out.llds_out_util.c"
                    {
#line 1890 "ll_backend.llds_out.llds_out_util.c"
                      ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_49_49, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_27_27)));
                    }
#line 33 "llds_out_util.m"
                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                      {
#line 1897 "ll_backend.llds_out.llds_out_util.c"
                        ll_backend__llds_out__llds_out_util__TypeInfo_50_50 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[2];
#line 1899 "ll_backend.llds_out.llds_out_util.c"
                        {
#line 1901 "ll_backend.llds_out.llds_out_util.c"
                          ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_50_50, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_7_7)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_28_28)));
                        }
#line 33 "llds_out_util.m"
                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                          {
#line 1908 "ll_backend.llds_out.llds_out_util.c"
                            ll_backend__llds_out__llds_out_util__TypeInfo_51_51 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[3];
#line 1910 "ll_backend.llds_out.llds_out_util.c"
                            {
#line 1912 "ll_backend.llds_out.llds_out_util.c"
                              ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_51_51, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_8_8)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_29_29)));
                            }
#line 33 "llds_out_util.m"
                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                              {
#line 1919 "ll_backend.llds_out.llds_out_util.c"
                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_9_9 == ll_backend__llds_out__llds_out_util__V_30_30);
#line 33 "llds_out_util.m"
                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                  {
#line 1925 "ll_backend.llds_out.llds_out_util.c"
                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_10_10 == ll_backend__llds_out__llds_out_util__V_31_31);
#line 33 "llds_out_util.m"
                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                      {
#line 1931 "ll_backend.llds_out.llds_out_util.c"
                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_11_11 == ll_backend__llds_out__llds_out_util__V_32_32);
#line 33 "llds_out_util.m"
                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                          {
#line 1937 "ll_backend.llds_out.llds_out_util.c"
                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_12_12 == ll_backend__llds_out__llds_out_util__V_33_33);
#line 33 "llds_out_util.m"
                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                              {
#line 1943 "ll_backend.llds_out.llds_out_util.c"
                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_13_13 == ll_backend__llds_out__llds_out_util__V_34_34);
#line 33 "llds_out_util.m"
                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                  {
#line 1949 "ll_backend.llds_out.llds_out_util.c"
                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_14_14 == ll_backend__llds_out__llds_out_util__V_35_35);
#line 33 "llds_out_util.m"
                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                      {
#line 1955 "ll_backend.llds_out.llds_out_util.c"
                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_15_15 == ll_backend__llds_out__llds_out_util__V_36_36);
#line 33 "llds_out_util.m"
                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                          {
#line 1961 "ll_backend.llds_out.llds_out_util.c"
                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_16_16 == ll_backend__llds_out__llds_out_util__V_37_37);
#line 33 "llds_out_util.m"
                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                              {
#line 1967 "ll_backend.llds_out.llds_out_util.c"
                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_17_17 == ll_backend__llds_out__llds_out_util__V_38_38);
#line 33 "llds_out_util.m"
                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                                  {
#line 1973 "ll_backend.llds_out.llds_out_util.c"
                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_18_18 == ll_backend__llds_out__llds_out_util__V_39_39);
#line 33 "llds_out_util.m"
                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                                      {
#line 1979 "ll_backend.llds_out.llds_out_util.c"
                                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_19_19 == ll_backend__llds_out__llds_out_util__V_40_40);
#line 33 "llds_out_util.m"
                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                                          {
#line 1985 "ll_backend.llds_out.llds_out_util.c"
                                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_20_20 == ll_backend__llds_out__llds_out_util__V_41_41);
#line 33 "llds_out_util.m"
                                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                                              {
#line 1991 "ll_backend.llds_out.llds_out_util.c"
                                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_21_21 == ll_backend__llds_out__llds_out_util__V_42_42);
#line 33 "llds_out_util.m"
                                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 33 "llds_out_util.m"
                                                                                  {
#line 1997 "ll_backend.llds_out.llds_out_util.c"
                                                                                    {
#line 1999 "ll_backend.llds_out.llds_out_util.c"
                                                                                      ll_backend__llds_out__llds_out_util__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__llds_out__llds_out_util__V_22_22, ll_backend__llds_out__llds_out_util__V_43_43);
                                                                                    }
#line 33 "llds_out_util.m"
                                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 2004 "ll_backend.llds_out.llds_out_util.c"
                                                                                      {
#line 2006 "ll_backend.llds_out.llds_out_util.c"
                                                                                        return ll_backend__llds_out__llds_out_util__succeeded = libs__globals____Unify____globals_0_0(ll_backend__llds_out__llds_out_util__V_23_23, ll_backend__llds_out__llds_out_util__V_44_44);
                                                                                      }
#line 33 "llds_out_util.m"
                                                                                  }
#line 33 "llds_out_util.m"
                                                                              }
#line 33 "llds_out_util.m"
                                                                          }
#line 33 "llds_out_util.m"
                                                                      }
#line 33 "llds_out_util.m"
                                                                  }
#line 33 "llds_out_util.m"
                                                              }
#line 33 "llds_out_util.m"
                                                          }
#line 33 "llds_out_util.m"
                                                      }
#line 33 "llds_out_util.m"
                                                  }
#line 33 "llds_out_util.m"
                                              }
#line 33 "llds_out_util.m"
                                          }
#line 33 "llds_out_util.m"
                                      }
#line 33 "llds_out_util.m"
                                  }
#line 33 "llds_out_util.m"
                              }
#line 33 "llds_out_util.m"
                          }
#line 33 "llds_out_util.m"
                      }
#line 33 "llds_out_util.m"
                  }
#line 33 "llds_out_util.m"
              }
#line 33 "llds_out_util.m"
          }
#line 33 "llds_out_util.m"
      }
#line 33 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 33 "llds_out_util.m"
  }
#line 33 "llds_out_util.m"
}

#line 168 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0(
#line 168 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 168 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
#line 168 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
#line 168 "llds_out_util.m"
{
#line 168 "llds_out_util.m"
  {
#line 168 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 168 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar1_4 = ll_backend__llds_out__llds_out_util__HeadVar__2_2;
#line 168 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar2_5 = ll_backend__llds_out__llds_out_util__HeadVar__3_3;

#line 168 "llds_out_util.m"
    {
#line 168 "llds_out_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_1[0], ll_backend__llds_out__llds_out_util__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar2_5)));
#line 168 "llds_out_util.m"
      return;
    }
#line 168 "llds_out_util.m"
  }
#line 168 "llds_out_util.m"
}

#line 168 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0(
#line 168 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 168 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
#line 168 "llds_out_util.m"
{
#line 168 "llds_out_util.m"
  {
#line 168 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 168 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar1_3 = ll_backend__llds_out__llds_out_util__HeadVar__1_1;
#line 168 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar2_4 = ll_backend__llds_out__llds_out_util__HeadVar__2_2;

#line 168 "llds_out_util.m"
    {
#line 168 "llds_out_util.m"
      return ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_1[0], ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar2_4)));
    }
#line 168 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 168 "llds_out_util.m"
  }
#line 168 "llds_out_util.m"
}

#line 73 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0(
#line 73 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 73 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
#line 73 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
#line 73 "llds_out_util.m"
{
#line 73 "llds_out_util.m"
  {
#line 73 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 73 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_225 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;
#line 73 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_226 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__3_3;

#line 73 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_225 == ll_backend__llds_out__llds_out_util__CastY_226);
#line 73 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 2142 "ll_backend.llds_out.llds_out_util.c"
      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "llds_out_util.m"
    else
#line 73 "llds_out_util.m"
      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 73 "llds_out_util.m"
        {
#line 73 "llds_out_util.m"
          MR_Word ll_backend__llds_out__llds_out_util__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

#line 73 "llds_out_util.m"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 73 "llds_out_util.m"
            {
#line 73 "llds_out_util.m"
              MR_Word ll_backend__llds_out__llds_out_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));

#line 73 "llds_out_util.m"
              {
#line 73 "llds_out_util.m"
                ll_backend__llds____Compare____code_addr_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_239_239, ll_backend__llds_out__llds_out_util__V_51_51);
#line 73 "llds_out_util.m"
                return;
              }
#line 73 "llds_out_util.m"
            }
#line 73 "llds_out_util.m"
          else
#line 73 "llds_out_util.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2173 "ll_backend.llds_out.llds_out_util.c"
              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
            else
#line 73 "llds_out_util.m"
              if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2179 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
              else
#line 73 "llds_out_util.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2185 "ll_backend.llds_out.llds_out_util.c"
                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                else
#line 73 "llds_out_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2191 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                  else
#line 73 "llds_out_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2197 "ll_backend.llds_out.llds_out_util.c"
                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                    else
#line 73 "llds_out_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2203 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                      else
#line 73 "llds_out_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2209 "ll_backend.llds_out.llds_out_util.c"
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                        else
#line 73 "llds_out_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2215 "ll_backend.llds_out.llds_out_util.c"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                          else
#line 2219 "ll_backend.llds_out.llds_out_util.c"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
        }
#line 73 "llds_out_util.m"
      else
#line 73 "llds_out_util.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 73 "llds_out_util.m"
          {
#line 73 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

#line 73 "llds_out_util.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2234 "ll_backend.llds_out.llds_out_util.c"
              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
            else
#line 73 "llds_out_util.m"
              if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 73 "llds_out_util.m"
                {
#line 73 "llds_out_util.m"
                  MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "llds_out_util.m"
                  MR_Integer ll_backend__llds_out__llds_out_util__V_251_251 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_240_240;
#line 73 "llds_out_util.m"
                  MR_Integer ll_backend__llds_out__llds_out_util__V_252_252 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_28_28;

#line 73 "llds_out_util.m"
                  {
#line 73 "llds_out_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_251_251, ll_backend__llds_out__llds_out_util__V_252_252);
#line 73 "llds_out_util.m"
                    return;
                  }
#line 73 "llds_out_util.m"
                }
#line 73 "llds_out_util.m"
              else
#line 73 "llds_out_util.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2262 "ll_backend.llds_out.llds_out_util.c"
                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                else
#line 73 "llds_out_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2268 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                  else
#line 73 "llds_out_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2274 "ll_backend.llds_out.llds_out_util.c"
                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                    else
#line 73 "llds_out_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2280 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                      else
#line 73 "llds_out_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2286 "ll_backend.llds_out.llds_out_util.c"
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                        else
#line 73 "llds_out_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2292 "ll_backend.llds_out.llds_out_util.c"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                          else
#line 73 "llds_out_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2298 "ll_backend.llds_out.llds_out_util.c"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                            else
#line 2302 "ll_backend.llds_out.llds_out_util.c"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
          }
#line 73 "llds_out_util.m"
        else
#line 73 "llds_out_util.m"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 73 "llds_out_util.m"
            {
#line 73 "llds_out_util.m"
              MR_String ll_backend__llds_out__llds_out_util__V_241_241 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

#line 73 "llds_out_util.m"
              if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2317 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
              else
#line 73 "llds_out_util.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2323 "ll_backend.llds_out.llds_out_util.c"
                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                else
#line 73 "llds_out_util.m"
                  if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 73 "llds_out_util.m"
                    {
#line 73 "llds_out_util.m"
                      MR_String ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));

#line 73 "llds_out_util.m"
                      {
#line 73 "llds_out_util.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_241_241, ll_backend__llds_out__llds_out_util__V_5_5);
#line 73 "llds_out_util.m"
                        return;
                      }
#line 73 "llds_out_util.m"
                    }
#line 73 "llds_out_util.m"
                  else
#line 73 "llds_out_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2347 "ll_backend.llds_out.llds_out_util.c"
                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                    else
#line 73 "llds_out_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2353 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                      else
#line 73 "llds_out_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2359 "ll_backend.llds_out.llds_out_util.c"
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                        else
#line 73 "llds_out_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2365 "ll_backend.llds_out.llds_out_util.c"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                          else
#line 73 "llds_out_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2371 "ll_backend.llds_out.llds_out_util.c"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                            else
#line 73 "llds_out_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2377 "ll_backend.llds_out.llds_out_util.c"
                                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                              else
#line 2381 "ll_backend.llds_out.llds_out_util.c"
                                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
            }
#line 73 "llds_out_util.m"
          else
#line 73 "llds_out_util.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 73 "llds_out_util.m"
              {
#line 73 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2396 "ll_backend.llds_out.llds_out_util.c"
                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                else
#line 73 "llds_out_util.m"
                  if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2402 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                  else
#line 73 "llds_out_util.m"
                    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2408 "ll_backend.llds_out.llds_out_util.c"
                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                    else
#line 73 "llds_out_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 73 "llds_out_util.m"
                        {
#line 73 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "llds_out_util.m"
                          MR_String ll_backend__llds_out__llds_out_util__V_249_249 = (MR_String) ll_backend__llds_out__llds_out_util__V_238_238;
#line 73 "llds_out_util.m"
                          MR_String ll_backend__llds_out__llds_out_util__V_250_250 = (MR_String) ll_backend__llds_out__llds_out_util__V_178_178;

#line 73 "llds_out_util.m"
                          {
#line 73 "llds_out_util.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_249_249, ll_backend__llds_out__llds_out_util__V_250_250);
#line 73 "llds_out_util.m"
                            return;
                          }
#line 73 "llds_out_util.m"
                        }
#line 73 "llds_out_util.m"
                      else
#line 73 "llds_out_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2436 "ll_backend.llds_out.llds_out_util.c"
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                        else
#line 73 "llds_out_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2442 "ll_backend.llds_out.llds_out_util.c"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                          else
#line 73 "llds_out_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2448 "ll_backend.llds_out.llds_out_util.c"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                            else
#line 73 "llds_out_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2454 "ll_backend.llds_out.llds_out_util.c"
                                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                              else
#line 73 "llds_out_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2460 "ll_backend.llds_out.llds_out_util.c"
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                                else
#line 2464 "ll_backend.llds_out.llds_out_util.c"
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
              }
#line 73 "llds_out_util.m"
            else
#line 73 "llds_out_util.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 73 "llds_out_util.m"
                {
#line 73 "llds_out_util.m"
                  MR_String ll_backend__llds_out__llds_out_util__V_242_242 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                  if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2479 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                  else
#line 73 "llds_out_util.m"
                    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2485 "ll_backend.llds_out.llds_out_util.c"
                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                    else
#line 73 "llds_out_util.m"
                      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2491 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                      else
#line 73 "llds_out_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2497 "ll_backend.llds_out.llds_out_util.c"
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                        else
#line 73 "llds_out_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 73 "llds_out_util.m"
                            {
#line 73 "llds_out_util.m"
                              MR_String ll_backend__llds_out__llds_out_util__V_155_155 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                              {
#line 73 "llds_out_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_242_242, ll_backend__llds_out__llds_out_util__V_155_155);
#line 73 "llds_out_util.m"
                                return;
                              }
#line 73 "llds_out_util.m"
                            }
#line 73 "llds_out_util.m"
                          else
#line 73 "llds_out_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2521 "ll_backend.llds_out.llds_out_util.c"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                            else
#line 73 "llds_out_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2527 "ll_backend.llds_out.llds_out_util.c"
                                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                              else
#line 73 "llds_out_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2533 "ll_backend.llds_out.llds_out_util.c"
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                else
#line 73 "llds_out_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2539 "ll_backend.llds_out.llds_out_util.c"
                                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                                  else
#line 2543 "ll_backend.llds_out.llds_out_util.c"
                                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                }
#line 73 "llds_out_util.m"
              else
#line 73 "llds_out_util.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 73 "llds_out_util.m"
                  {
#line 73 "llds_out_util.m"
                    MR_Word ll_backend__llds_out__llds_out_util__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2558 "ll_backend.llds_out.llds_out_util.c"
                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                    else
#line 73 "llds_out_util.m"
                      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2564 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                      else
#line 73 "llds_out_util.m"
                        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2570 "ll_backend.llds_out.llds_out_util.c"
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                        else
#line 73 "llds_out_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2576 "ll_backend.llds_out.llds_out_util.c"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                          else
#line 73 "llds_out_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2582 "ll_backend.llds_out.llds_out_util.c"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                            else
#line 73 "llds_out_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 73 "llds_out_util.m"
                                {
#line 73 "llds_out_util.m"
                                  MR_Word ll_backend__llds_out__llds_out_util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                                  {
#line 73 "llds_out_util.m"
                                    ll_backend__layout____Compare____layout_name_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_243_243, ll_backend__llds_out__llds_out_util__V_97_97);
#line 73 "llds_out_util.m"
                                    return;
                                  }
#line 73 "llds_out_util.m"
                                }
#line 73 "llds_out_util.m"
                              else
#line 73 "llds_out_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2606 "ll_backend.llds_out.llds_out_util.c"
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                else
#line 73 "llds_out_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2612 "ll_backend.llds_out.llds_out_util.c"
                                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                                  else
#line 73 "llds_out_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2618 "ll_backend.llds_out.llds_out_util.c"
                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                                    else
#line 2622 "ll_backend.llds_out.llds_out_util.c"
                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                  }
#line 73 "llds_out_util.m"
                else
#line 73 "llds_out_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 73 "llds_out_util.m"
                    {
#line 73 "llds_out_util.m"
                      MR_Word ll_backend__llds_out__llds_out_util__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2637 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                      else
#line 73 "llds_out_util.m"
                        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2643 "ll_backend.llds_out.llds_out_util.c"
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                        else
#line 73 "llds_out_util.m"
                          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2649 "ll_backend.llds_out.llds_out_util.c"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                          else
#line 73 "llds_out_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2655 "ll_backend.llds_out.llds_out_util.c"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                            else
#line 73 "llds_out_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2661 "ll_backend.llds_out.llds_out_util.c"
                                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                              else
#line 73 "llds_out_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2667 "ll_backend.llds_out.llds_out_util.c"
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                                else
#line 73 "llds_out_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 73 "llds_out_util.m"
                                    {
#line 73 "llds_out_util.m"
                                      MR_Word ll_backend__llds_out__llds_out_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                                      {
#line 73 "llds_out_util.m"
                                        backend_libs__rtti____Compare____rtti_id_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_244_244, ll_backend__llds_out__llds_out_util__V_74_74);
#line 73 "llds_out_util.m"
                                        return;
                                      }
#line 73 "llds_out_util.m"
                                    }
#line 73 "llds_out_util.m"
                                  else
#line 73 "llds_out_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2691 "ll_backend.llds_out.llds_out_util.c"
                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                                    else
#line 73 "llds_out_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2697 "ll_backend.llds_out.llds_out_util.c"
                                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                                      else
#line 2701 "ll_backend.llds_out.llds_out_util.c"
                                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                    }
#line 73 "llds_out_util.m"
                  else
#line 73 "llds_out_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 73 "llds_out_util.m"
                      {
#line 73 "llds_out_util.m"
                        MR_Word ll_backend__llds_out__llds_out_util__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "llds_out_util.m"
                        MR_Word ll_backend__llds_out__llds_out_util__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2718 "ll_backend.llds_out.llds_out_util.c"
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                        else
#line 73 "llds_out_util.m"
                          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2724 "ll_backend.llds_out.llds_out_util.c"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                          else
#line 73 "llds_out_util.m"
                            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2730 "ll_backend.llds_out.llds_out_util.c"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                            else
#line 73 "llds_out_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2736 "ll_backend.llds_out.llds_out_util.c"
                                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                              else
#line 73 "llds_out_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2742 "ll_backend.llds_out.llds_out_util.c"
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                                else
#line 73 "llds_out_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2748 "ll_backend.llds_out.llds_out_util.c"
                                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                  else
#line 73 "llds_out_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2754 "ll_backend.llds_out.llds_out_util.c"
                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                    else
#line 73 "llds_out_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 73 "llds_out_util.m"
                                        {
#line 73 "llds_out_util.m"
                                          MR_Word ll_backend__llds_out__llds_out_util__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "llds_out_util.m"
                                          MR_Word ll_backend__llds_out__llds_out_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 2)));
#line 73 "llds_out_util.m"
                                          MR_Word ll_backend__llds_out__llds_out_util__V_128_128;

#line 73 "llds_out_util.m"
                                          {
#line 73 "llds_out_util.m"
                                            mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__llds_out__llds_out_util__V_128_128, ll_backend__llds_out__llds_out_util__V_246_246, ll_backend__llds_out__llds_out_util__V_126_126);
                                          }
#line 2774 "ll_backend.llds_out.llds_out_util.c"
                                          ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_128_128 == (MR_Integer) 0);
#line 73 "llds_out_util.m"
                                          ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 73 "llds_out_util.m"
                                          if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
                                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_128_128;
#line 73 "llds_out_util.m"
                                          else
#line 73 "llds_out_util.m"
                                            {
#line 73 "llds_out_util.m"
                                              backend_libs__rtti____Compare____proc_tabling_struct_id_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_245_245, ll_backend__llds_out__llds_out_util__V_127_127);
#line 73 "llds_out_util.m"
                                              return;
                                            }
#line 73 "llds_out_util.m"
                                        }
#line 73 "llds_out_util.m"
                                      else
#line 73 "llds_out_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2797 "ll_backend.llds_out.llds_out_util.c"
                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                                        else
#line 2801 "ll_backend.llds_out.llds_out_util.c"
                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                      }
#line 73 "llds_out_util.m"
                    else
#line 73 "llds_out_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 73 "llds_out_util.m"
                        {
#line 73 "llds_out_util.m"
                          MR_Integer ll_backend__llds_out__llds_out_util__V_247_247 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2816 "ll_backend.llds_out.llds_out_util.c"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                          else
#line 73 "llds_out_util.m"
                            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2822 "ll_backend.llds_out.llds_out_util.c"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                            else
#line 73 "llds_out_util.m"
                              if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2828 "ll_backend.llds_out.llds_out_util.c"
                                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                              else
#line 73 "llds_out_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2834 "ll_backend.llds_out.llds_out_util.c"
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                else
#line 73 "llds_out_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2840 "ll_backend.llds_out.llds_out_util.c"
                                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                  else
#line 73 "llds_out_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2846 "ll_backend.llds_out.llds_out_util.c"
                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                    else
#line 73 "llds_out_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2852 "ll_backend.llds_out.llds_out_util.c"
                                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                      else
#line 73 "llds_out_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2858 "ll_backend.llds_out.llds_out_util.c"
                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                        else
#line 73 "llds_out_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 73 "llds_out_util.m"
                                            {
#line 73 "llds_out_util.m"
                                              MR_Integer ll_backend__llds_out__llds_out_util__V_201_201 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                                              {
#line 73 "llds_out_util.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_247_247, ll_backend__llds_out__llds_out_util__V_201_201);
#line 73 "llds_out_util.m"
                                                return;
                                              }
#line 73 "llds_out_util.m"
                                            }
#line 73 "llds_out_util.m"
                                          else
#line 2880 "ll_backend.llds_out.llds_out_util.c"
                                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "llds_out_util.m"
                        }
#line 73 "llds_out_util.m"
                      else
#line 73 "llds_out_util.m"
                        {
#line 73 "llds_out_util.m"
                          MR_Integer ll_backend__llds_out__llds_out_util__V_248_248 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2893 "ll_backend.llds_out.llds_out_util.c"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                          else
#line 73 "llds_out_util.m"
                            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2899 "ll_backend.llds_out.llds_out_util.c"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                            else
#line 73 "llds_out_util.m"
                              if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2905 "ll_backend.llds_out.llds_out_util.c"
                                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                              else
#line 73 "llds_out_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2911 "ll_backend.llds_out.llds_out_util.c"
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                else
#line 73 "llds_out_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2917 "ll_backend.llds_out.llds_out_util.c"
                                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                  else
#line 73 "llds_out_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2923 "ll_backend.llds_out.llds_out_util.c"
                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                    else
#line 73 "llds_out_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2929 "ll_backend.llds_out.llds_out_util.c"
                                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                      else
#line 73 "llds_out_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2935 "ll_backend.llds_out.llds_out_util.c"
                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                        else
#line 73 "llds_out_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2941 "ll_backend.llds_out.llds_out_util.c"
                                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "llds_out_util.m"
                                          else
#line 73 "llds_out_util.m"
                                            {
#line 73 "llds_out_util.m"
                                              MR_Integer ll_backend__llds_out__llds_out_util__V_224_224 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 73 "llds_out_util.m"
                                              {
#line 73 "llds_out_util.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_248_248, ll_backend__llds_out__llds_out_util__V_224_224);
#line 73 "llds_out_util.m"
                                                return;
                                              }
#line 73 "llds_out_util.m"
                                            }
#line 73 "llds_out_util.m"
                        }
#line 73 "llds_out_util.m"
  }
#line 73 "llds_out_util.m"
}

#line 73 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0(
#line 73 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 73 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
#line 73 "llds_out_util.m"
{
#line 73 "llds_out_util.m"
  {
#line 73 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 73 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_25 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__1_1;
#line 73 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_26 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;

#line 73 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_25 == ll_backend__llds_out__llds_out_util__CastY_26);
#line 73 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__succeeded = MR_TRUE;
#line 73 "llds_out_util.m"
    else
#line 73 "llds_out_util.m"
      if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 73 "llds_out_util.m"
        {
#line 73 "llds_out_util.m"
          MR_Word ll_backend__llds_out__llds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "llds_out_util.m"
          MR_Word ll_backend__llds_out__llds_out_util__V_8_8;

#line 73 "llds_out_util.m"
          ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 73 "llds_out_util.m"
          if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
            {
#line 73 "llds_out_util.m"
              ll_backend__llds_out__llds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3009 "ll_backend.llds_out.llds_out_util.c"
              {
#line 3011 "ll_backend.llds_out.llds_out_util.c"
                return ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__llds_out__llds_out_util__V_7_7, ll_backend__llds_out__llds_out_util__V_8_8);
              }
#line 73 "llds_out_util.m"
            }
#line 73 "llds_out_util.m"
        }
#line 73 "llds_out_util.m"
      else
#line 73 "llds_out_util.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 73 "llds_out_util.m"
          {
#line 73 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_6_6;
#line 73 "llds_out_util.m"
            MR_Integer ll_backend__llds_out__llds_out_util__V_36_36;
#line 73 "llds_out_util.m"
            MR_Integer ll_backend__llds_out__llds_out_util__V_37_37;

#line 73 "llds_out_util.m"
            ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 73 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
              {
#line 73 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3041 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__V_36_36 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_5_5;
#line 3043 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__V_37_37 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_6_6;
#line 3045 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_36_36 == ll_backend__llds_out__llds_out_util__V_37_37);
#line 73 "llds_out_util.m"
              }
#line 73 "llds_out_util.m"
          }
#line 73 "llds_out_util.m"
        else
#line 73 "llds_out_util.m"
          if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 73 "llds_out_util.m"
            {
#line 73 "llds_out_util.m"
              MR_String ll_backend__llds_out__llds_out_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "llds_out_util.m"
              MR_String ll_backend__llds_out__llds_out_util__V_4_4;

#line 73 "llds_out_util.m"
              ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 73 "llds_out_util.m"
              if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
                {
#line 73 "llds_out_util.m"
                  ll_backend__llds_out__llds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3070 "ll_backend.llds_out.llds_out_util.c"
                  ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_3_3, ll_backend__llds_out__llds_out_util__V_4_4) == 0);
#line 73 "llds_out_util.m"
                }
#line 73 "llds_out_util.m"
            }
#line 73 "llds_out_util.m"
          else
#line 73 "llds_out_util.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 73 "llds_out_util.m"
              {
#line 73 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_20_20;
#line 73 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_34_34;
#line 73 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_35_35;

#line 73 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 73 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
                  {
#line 73 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3099 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__V_34_34 = (MR_String) ll_backend__llds_out__llds_out_util__V_19_19;
#line 3101 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__V_35_35 = (MR_String) ll_backend__llds_out__llds_out_util__V_20_20;
#line 3103 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_34_34, ll_backend__llds_out__llds_out_util__V_35_35) == 0);
#line 73 "llds_out_util.m"
                  }
#line 73 "llds_out_util.m"
              }
#line 73 "llds_out_util.m"
            else
#line 73 "llds_out_util.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 73 "llds_out_util.m"
                {
#line 73 "llds_out_util.m"
                  MR_String ll_backend__llds_out__llds_out_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "llds_out_util.m"
                  MR_String ll_backend__llds_out__llds_out_util__V_18_18;

#line 73 "llds_out_util.m"
                  ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 73 "llds_out_util.m"
                  if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
                    {
#line 73 "llds_out_util.m"
                      ll_backend__llds_out__llds_out_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3128 "ll_backend.llds_out.llds_out_util.c"
                      ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_17_17, ll_backend__llds_out__llds_out_util__V_18_18) == 0);
#line 73 "llds_out_util.m"
                    }
#line 73 "llds_out_util.m"
                }
#line 73 "llds_out_util.m"
              else
#line 73 "llds_out_util.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 73 "llds_out_util.m"
                  {
#line 73 "llds_out_util.m"
                    MR_Word ll_backend__llds_out__llds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "llds_out_util.m"
                    MR_Word ll_backend__llds_out__llds_out_util__V_12_12;

#line 73 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 73 "llds_out_util.m"
                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
                      {
#line 73 "llds_out_util.m"
                        ll_backend__llds_out__llds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3153 "ll_backend.llds_out.llds_out_util.c"
                        {
#line 3155 "ll_backend.llds_out.llds_out_util.c"
                          return ll_backend__llds_out__llds_out_util__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__llds_out__llds_out_util__V_11_11, ll_backend__llds_out__llds_out_util__V_12_12);
                        }
#line 73 "llds_out_util.m"
                      }
#line 73 "llds_out_util.m"
                  }
#line 73 "llds_out_util.m"
                else
#line 73 "llds_out_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 73 "llds_out_util.m"
                    {
#line 73 "llds_out_util.m"
                      MR_Word ll_backend__llds_out__llds_out_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "llds_out_util.m"
                      MR_Word ll_backend__llds_out__llds_out_util__V_10_10;

#line 73 "llds_out_util.m"
                      ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 73 "llds_out_util.m"
                      if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
                        {
#line 73 "llds_out_util.m"
                          ll_backend__llds_out__llds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3181 "ll_backend.llds_out.llds_out_util.c"
                          {
#line 3183 "ll_backend.llds_out.llds_out_util.c"
                            return ll_backend__llds_out__llds_out_util__succeeded = backend_libs__rtti____Unify____rtti_id_0_0(ll_backend__llds_out__llds_out_util__V_9_9, ll_backend__llds_out__llds_out_util__V_10_10);
                          }
#line 73 "llds_out_util.m"
                        }
#line 73 "llds_out_util.m"
                    }
#line 73 "llds_out_util.m"
                  else
#line 73 "llds_out_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 73 "llds_out_util.m"
                      {
#line 73 "llds_out_util.m"
                        MR_Word ll_backend__llds_out__llds_out_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "llds_out_util.m"
                        MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 2)));
#line 73 "llds_out_util.m"
                        MR_Word ll_backend__llds_out__llds_out_util__V_15_15;
#line 73 "llds_out_util.m"
                        MR_Word ll_backend__llds_out__llds_out_util__V_16_16;

#line 73 "llds_out_util.m"
                        ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 73 "llds_out_util.m"
                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
                          {
#line 73 "llds_out_util.m"
                            ll_backend__llds_out__llds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "llds_out_util.m"
                            ll_backend__llds_out__llds_out_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 3215 "ll_backend.llds_out.llds_out_util.c"
                            {
#line 3217 "ll_backend.llds_out.llds_out_util.c"
                              ll_backend__llds_out__llds_out_util__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__llds_out__llds_out_util__V_13_13, ll_backend__llds_out__llds_out_util__V_15_15);
                            }
#line 73 "llds_out_util.m"
                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 3222 "ll_backend.llds_out.llds_out_util.c"
                              {
#line 3224 "ll_backend.llds_out.llds_out_util.c"
                                return ll_backend__llds_out__llds_out_util__succeeded = backend_libs__rtti____Unify____proc_tabling_struct_id_0_0(ll_backend__llds_out__llds_out_util__V_14_14, ll_backend__llds_out__llds_out_util__V_16_16);
                              }
#line 73 "llds_out_util.m"
                          }
#line 73 "llds_out_util.m"
                      }
#line 73 "llds_out_util.m"
                    else
#line 73 "llds_out_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 73 "llds_out_util.m"
                        {
#line 73 "llds_out_util.m"
                          MR_Integer ll_backend__llds_out__llds_out_util__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "llds_out_util.m"
                          MR_Integer ll_backend__llds_out__llds_out_util__V_22_22;

#line 73 "llds_out_util.m"
                          ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 73 "llds_out_util.m"
                          if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
                            {
#line 73 "llds_out_util.m"
                              ll_backend__llds_out__llds_out_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3250 "ll_backend.llds_out.llds_out_util.c"
                              ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_21_21 == ll_backend__llds_out__llds_out_util__V_22_22);
#line 73 "llds_out_util.m"
                            }
#line 73 "llds_out_util.m"
                        }
#line 73 "llds_out_util.m"
                      else
#line 73 "llds_out_util.m"
                        {
#line 73 "llds_out_util.m"
                          MR_Integer ll_backend__llds_out__llds_out_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "llds_out_util.m"
                          MR_Integer ll_backend__llds_out__llds_out_util__V_24_24;

#line 73 "llds_out_util.m"
                          ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 73 "llds_out_util.m"
                          if (ll_backend__llds_out__llds_out_util__succeeded)
#line 73 "llds_out_util.m"
                            {
#line 73 "llds_out_util.m"
                              ll_backend__llds_out__llds_out_util__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3273 "ll_backend.llds_out.llds_out_util.c"
                              ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_23_23 == ll_backend__llds_out__llds_out_util__V_24_24);
#line 73 "llds_out_util.m"
                            }
#line 73 "llds_out_util.m"
                        }
#line 73 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 73 "llds_out_util.m"
  }
#line 73 "llds_out_util.m"
}

#line 99 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__output_indent_5_p_0(
#line 99 "llds_out_util.m"
  MR_String ll_backend__llds_out__llds_out_util__FirstIndent_6,
#line 99 "llds_out_util.m"
  MR_String ll_backend__llds_out__llds_out_util__LaterIndent_7,
#line 99 "llds_out_util.m"
  MR_Integer ll_backend__llds_out__llds_out_util__N0_8)
#line 99 "llds_out_util.m"
{
#line 184 "llds_out_util.m"
  {
#line 184 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__N0_8 > (MR_Integer) 0);

#line 184 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 183 "llds_out_util.m"
      {
#line 183 "llds_out_util.m"
        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_util__LaterIndent_7);
#line 183 "llds_out_util.m"
        return;
      }
#line 184 "llds_out_util.m"
    else
#line 185 "llds_out_util.m"
      {
#line 185 "llds_out_util.m"
        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_util__FirstIndent_6);
#line 185 "llds_out_util.m"
        return;
      }
#line 184 "llds_out_util.m"
  }
#line 99 "llds_out_util.m"
}

#line 95 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(
#line 95 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclId_3,
#line 95 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclSet_4)
#line 95 "llds_out_util.m"
{
#line 177 "llds_out_util.m"
  {
#line 177 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 177 "llds_out_util.m"
    {
#line 177 "llds_out_util.m"
      return ll_backend__llds_out__llds_out_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0, ll_backend__llds_out__llds_out_util__DeclSet_4, ((MR_Box) (ll_backend__llds_out__llds_out_util__DeclId_3)));
    }
#line 177 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 177 "llds_out_util.m"
  }
#line 95 "llds_out_util.m"
}

#line 93 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(
#line 93 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclId_4,
#line 93 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclSet0_5,
#line 93 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__DeclSet_6)
#line 93 "llds_out_util.m"
{
#line 174 "llds_out_util.m"
  {
#line 174 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 174 "llds_out_util.m"
    {
#line 174 "llds_out_util.m"
      mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0, ((MR_Box) (ll_backend__llds_out__llds_out_util__DeclId_4)), ll_backend__llds_out__llds_out_util__DeclSet0_5, ll_backend__llds_out__llds_out_util__DeclSet_6);
#line 174 "llds_out_util.m"
      return;
    }
#line 174 "llds_out_util.m"
  }
#line 93 "llds_out_util.m"
}

#line 91 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(
#line 91 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__DeclSet_2)
#line 91 "llds_out_util.m"
{
#line 171 "llds_out_util.m"
  {
#line 171 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 171 "llds_out_util.m"
    {
#line 171 "llds_out_util.m"
      *ll_backend__llds_out__llds_out_util__DeclSet_2 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0);
    }
#line 171 "llds_out_util.m"
  }
#line 91 "llds_out_util.m"
}

#line 69 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(
#line 69 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Info_4)
#line 69 "llds_out_util.m"
{
#line 157 "llds_out_util.m"
  {
#line 157 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 157 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LineNumbers_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 0)));
#line 158 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 1)));
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 2)));
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 3)));
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 4)));
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 5)));
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 158 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)));

#line 162 "llds_out_util.m"
    if ((ll_backend__llds_out__llds_out_util__LineNumbers_6 == (MR_Integer) 0))
#line 163 "llds_out_util.m"
      {
#line 163 "llds_out_util.m"
      }
#line 162 "llds_out_util.m"
    else
#line 161 "llds_out_util.m"
      {
#line 161 "llds_out_util.m"
        backend_libs__c_util__always_reset_line_num_2_p_0();
#line 161 "llds_out_util.m"
        return;
      }
#line 157 "llds_out_util.m"
  }
#line 69 "llds_out_util.m"
}

#line 66 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(
#line 66 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Info_5,
#line 66 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Context_6)
#line 66 "llds_out_util.m"
{
#line 146 "llds_out_util.m"
  {
#line 146 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 146 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LineNumbers_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 0)));
#line 147 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 1)));
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 2)));
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 3)));
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 4)));
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 5)));
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 147 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)));

#line 153 "llds_out_util.m"
    if ((ll_backend__llds_out__llds_out_util__LineNumbers_8 == (MR_Integer) 0))
#line 154 "llds_out_util.m"
      {
#line 154 "llds_out_util.m"
      }
#line 153 "llds_out_util.m"
    else
#line 149 "llds_out_util.m"
      {
#line 149 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__File_9;
#line 149 "llds_out_util.m"
        MR_Integer ll_backend__llds_out__llds_out_util__Line_10;

#line 150 "llds_out_util.m"
        {
#line 150 "llds_out_util.m"
          mercury__term__context_file_2_p_0(ll_backend__llds_out__llds_out_util__Context_6, &ll_backend__llds_out__llds_out_util__File_9);
        }
#line 151 "llds_out_util.m"
        {
#line 151 "llds_out_util.m"
          mercury__term__context_line_2_p_0(ll_backend__llds_out__llds_out_util__Context_6, &ll_backend__llds_out__llds_out_util__Line_10);
        }
#line 152 "llds_out_util.m"
        {
#line 152 "llds_out_util.m"
          backend_libs__c_util__always_set_line_num_4_p_0(ll_backend__llds_out__llds_out_util__File_9, ll_backend__llds_out__llds_out_util__Line_10);
#line 152 "llds_out_util.m"
          return;
        }
#line 149 "llds_out_util.m"
      }
#line 146 "llds_out_util.m"
  }
#line 66 "llds_out_util.m"
}

#line 61 "llds_out_util.m"
MR_Word MR_CALL 
ll_backend__llds_out__llds_out_util__init_llds_out_info_6_f_0(
#line 61 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__ModuleName_8,
#line 61 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Globals_9,
#line 61 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__InternalLabelToLayoutMap_10,
#line 61 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__EntryLabelToLayoutMap_11,
#line 61 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__TableIoDeclMap_12,
#line 61 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__AllocSiteMap_13)
#line 61 "llds_out_util.m"
{
#line 118 "llds_out_util.m"
  {
#line 118 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Info_14;
#line 118 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__MangledModuleName_15;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__AutoComments_16;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LineNumbers_17;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__EmitCLoops_18;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__GenerateBytecode_19;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_20;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileCalls_21;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileTime_22;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileMemory_23;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileDeep_24;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__UnboxedFloat_25;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__DetStackDwordAligment_26;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__StaticGroundFloats_27;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_28;
#line 118 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__TraceLevel_29;

#line 119 "llds_out_util.m"
    {
#line 119 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__MangledModuleName_15 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__llds_out__llds_out_util__ModuleName_8);
    }
#line 120 "llds_out_util.m"
    {
#line 120 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 134, &ll_backend__llds_out__llds_out_util__AutoComments_16);
    }
#line 121 "llds_out_util.m"
    {
#line 121 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 133, &ll_backend__llds_out__llds_out_util__LineNumbers_17);
    }
#line 122 "llds_out_util.m"
    {
#line 122 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 479, &ll_backend__llds_out__llds_out_util__EmitCLoops_18);
    }
#line 123 "llds_out_util.m"
    {
#line 123 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 132, &ll_backend__llds_out__llds_out_util__GenerateBytecode_19);
    }
#line 124 "llds_out_util.m"
    {
#line 124 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 482, &ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_20);
    }
#line 126 "llds_out_util.m"
    {
#line 126 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 188, &ll_backend__llds_out__llds_out_util__ProfileCalls_21);
    }
#line 127 "llds_out_util.m"
    {
#line 127 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 189, &ll_backend__llds_out__llds_out_util__ProfileTime_22);
    }
#line 128 "llds_out_util.m"
    {
#line 128 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 190, &ll_backend__llds_out__llds_out_util__ProfileMemory_23);
    }
#line 129 "llds_out_util.m"
    {
#line 129 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 191, &ll_backend__llds_out__llds_out_util__ProfileDeep_24);
    }
#line 130 "llds_out_util.m"
    {
#line 130 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 239, &ll_backend__llds_out__llds_out_util__UnboxedFloat_25);
    }
#line 131 "llds_out_util.m"
    {
#line 131 "llds_out_util.m"
      libs__globals__double_width_floats_on_det_stack_2_p_0(ll_backend__llds_out__llds_out_util__Globals_9, &ll_backend__llds_out__llds_out_util__DetStackDwordAligment_26);
    }
#line 132 "llds_out_util.m"
    {
#line 132 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 448, &ll_backend__llds_out__llds_out_util__StaticGroundFloats_27);
    }
#line 134 "llds_out_util.m"
    {
#line 134 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_9, (MR_Integer) 478, &ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_28);
    }
#line 136 "llds_out_util.m"
    {
#line 136 "llds_out_util.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__llds_out__llds_out_util__Globals_9, &ll_backend__llds_out__llds_out_util__TraceLevel_29);
    }
#line 137 "llds_out_util.m"
    {
#line 137 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__Info_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 137 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_14, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_util__ModuleName_8));
#line 137 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_util__MangledModuleName_15));
#line 137 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_14, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_util__InternalLabelToLayoutMap_10));
#line 137 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_14, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_util__EntryLabelToLayoutMap_11));
#line 137 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_14, 4) = ((MR_Box) (ll_backend__llds_out__llds_out_util__TableIoDeclMap_12));
#line 137 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_14, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_util__AllocSiteMap_13));
#line 137 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_14, 6) = ((MR_Box) ((ll_backend__llds_out__llds_out_util__AutoComments_16 | ((((ll_backend__llds_out__llds_out_util__LineNumbers_17 << (MR_Integer) 1)) | ((((ll_backend__llds_out__llds_out_util__EmitCLoops_18 << (MR_Integer) 2)) | ((((ll_backend__llds_out__llds_out_util__GenerateBytecode_19 << (MR_Integer) 3)) | ((((ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_20 << (MR_Integer) 4)) | ((((ll_backend__llds_out__llds_out_util__ProfileCalls_21 << (MR_Integer) 5)) | ((((ll_backend__llds_out__llds_out_util__ProfileTime_22 << (MR_Integer) 6)) | ((((ll_backend__llds_out__llds_out_util__ProfileMemory_23 << (MR_Integer) 7)) | ((((ll_backend__llds_out__llds_out_util__ProfileDeep_24 << (MR_Integer) 8)) | ((((ll_backend__llds_out__llds_out_util__UnboxedFloat_25 << (MR_Integer) 9)) | ((((ll_backend__llds_out__llds_out_util__DetStackDwordAligment_26 << (MR_Integer) 10)) | ((((ll_backend__llds_out__llds_out_util__StaticGroundFloats_27 << (MR_Integer) 11)) | ((((ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_28 << (MR_Integer) 12)) | ((ll_backend__llds_out__llds_out_util__TraceLevel_29 << (MR_Integer) 13)))))))))))))))))))))))))))));
#line 137 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_14, 7) = ((MR_Box) (ll_backend__llds_out__llds_out_util__Globals_9));
#line 137 "llds_out_util.m"
    }
#line 118 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__Info_14;
#line 118 "llds_out_util.m"
  }
#line 61 "llds_out_util.m"
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
