/*
** Automatically generated from `llds_out_util.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 152 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0[1];

#line 155 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0;

#line 158 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1[1];

#line 161 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1;

#line 164 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2[1];

#line 167 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2;

#line 170 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3[1];

#line 173 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3;

#line 176 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4[1];

#line 179 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4;

#line 182 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5[2];

#line 185 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5;

#line 188 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6[1];

#line 191 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6;

#line 194 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7[1];

#line 197 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7;

#line 200 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8[1];

#line 203 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8;

#line 206 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9[1];

#line 209 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9;

#line 212 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0[1];

#line 215 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1[1];

#line 218 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2[1];

#line 221 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3[7];

#line 224 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0[4];

#line 227 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0[10];

#line 230 "ll_backend.llds_out.llds_out_util.c"
static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0[10];

#line 233 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

#line 236 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 239 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0;

#line 242 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 245 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 248 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0[22];

#line 251 "ll_backend.llds_out.llds_out_util.c"
static const MR_ConstString ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0[22];

#line 254 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuArgLocn ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0[22];

#line 257 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0;

#line 260 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0[1];

#line 263 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0[1];

#line 266 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0[1];

#line 269 "ll_backend.llds_out.llds_out_util.c"
static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0[1];

#line 272 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001(
#line 275 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 277 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

#line 280 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001(
#line 283 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 285 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 287 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3);

#line 290 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001(
#line 293 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 295 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

#line 298 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001(
#line 301 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 303 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 305 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3);

#line 308 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001(
#line 311 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 313 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

#line 316 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001(
#line 319 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 321 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 323 "ll_backend.llds_out.llds_out_util.c"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 378 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 383 "ll_backend.llds_out.llds_out_util.c"
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

#line 398 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
};

#line 403 "ll_backend.llds_out.llds_out_util.c"
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

#line 418 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0
};

#line 423 "ll_backend.llds_out.llds_out_util.c"
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

#line 438 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
};

#line 443 "ll_backend.llds_out.llds_out_util.c"
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

#line 458 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
};

#line 463 "ll_backend.llds_out.llds_out_util.c"
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

#line 478 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0
};

#line 484 "ll_backend.llds_out.llds_out_util.c"
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

#line 499 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 504 "ll_backend.llds_out.llds_out_util.c"
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

#line 519 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_global_var_ref_0
};

#line 524 "ll_backend.llds_out.llds_out_util.c"
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

#line 539 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 544 "ll_backend.llds_out.llds_out_util.c"
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

#line 559 "ll_backend.llds_out.llds_out_util.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 564 "ll_backend.llds_out.llds_out_util.c"
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

#line 579 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0
};

#line 584 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1
};

#line 589 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2
};

#line 594 "ll_backend.llds_out.llds_out_util.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3[7] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9
};

#line 605 "ll_backend.llds_out.llds_out_util.c"
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

#line 629 "ll_backend.llds_out.llds_out_util.c"
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

#line 643 "ll_backend.llds_out.llds_out_util.c"
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

#line 657 "ll_backend.llds_out.llds_out_util.c"
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

#line 674 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

#line 682 "ll_backend.llds_out.llds_out_util.c"
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

#line 699 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 708 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 717 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 726 "ll_backend.llds_out.llds_out_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 735 "ll_backend.llds_out.llds_out_util.c"
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

#line 761 "ll_backend.llds_out.llds_out_util.c"
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

#line 787 "ll_backend.llds_out.llds_out_util.c"
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

#line 901 "ll_backend.llds_out.llds_out_util.c"
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
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0 },
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0
};

#line 957 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001(
#line 960 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 962 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
#line 964 "ll_backend.llds_out.llds_out_util.c"
{
#line 966 "ll_backend.llds_out.llds_out_util.c"
  {
#line 968 "ll_backend.llds_out.llds_out_util.c"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 971 "ll_backend.llds_out.llds_out_util.c"
    {
#line 973 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
#line 976 "ll_backend.llds_out.llds_out_util.c"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 978 "ll_backend.llds_out.llds_out_util.c"
  }
#line 980 "ll_backend.llds_out.llds_out_util.c"
}

#line 983 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001(
#line 986 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 988 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 990 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
#line 992 "ll_backend.llds_out.llds_out_util.c"
{
#line 994 "ll_backend.llds_out.llds_out_util.c"
  {
#line 996 "ll_backend.llds_out.llds_out_util.c"
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

#line 999 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1001 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
#line 1004 "ll_backend.llds_out.llds_out_util.c"
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
#line 1006 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1008 "ll_backend.llds_out.llds_out_util.c"
}

#line 1011 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001(
#line 1014 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1016 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
#line 1018 "ll_backend.llds_out.llds_out_util.c"
{
#line 1020 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1022 "ll_backend.llds_out.llds_out_util.c"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 1025 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1027 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
#line 1030 "ll_backend.llds_out.llds_out_util.c"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 1032 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1034 "ll_backend.llds_out.llds_out_util.c"
}

#line 1037 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001(
#line 1040 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1042 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 1044 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
#line 1046 "ll_backend.llds_out.llds_out_util.c"
{
#line 1048 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1050 "ll_backend.llds_out.llds_out_util.c"
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

#line 1053 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1055 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
#line 1058 "ll_backend.llds_out.llds_out_util.c"
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
#line 1060 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1062 "ll_backend.llds_out.llds_out_util.c"
}

#line 1065 "ll_backend.llds_out.llds_out_util.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001(
#line 1068 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1070 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
#line 1072 "ll_backend.llds_out.llds_out_util.c"
{
#line 1074 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1076 "ll_backend.llds_out.llds_out_util.c"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 1079 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1081 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
#line 1084 "ll_backend.llds_out.llds_out_util.c"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 1086 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1088 "ll_backend.llds_out.llds_out_util.c"
}

#line 1091 "ll_backend.llds_out.llds_out_util.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001(
#line 1094 "ll_backend.llds_out.llds_out_util.c"
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
#line 1096 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
#line 1098 "ll_backend.llds_out.llds_out_util.c"
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
#line 1100 "ll_backend.llds_out.llds_out_util.c"
{
#line 1102 "ll_backend.llds_out.llds_out_util.c"
  {
#line 1104 "ll_backend.llds_out.llds_out_util.c"
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

#line 1107 "ll_backend.llds_out.llds_out_util.c"
    {
#line 1109 "ll_backend.llds_out.llds_out_util.c"
      ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
#line 1112 "ll_backend.llds_out.llds_out_util.c"
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
#line 1114 "ll_backend.llds_out.llds_out_util.c"
  }
#line 1116 "ll_backend.llds_out.llds_out_util.c"
}

#line 39 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0(
#line 39 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 39 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
#line 39 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
#line 39 "llds_out_util.m"
{
#line 39 "llds_out_util.m"
  {
#line 39 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 39 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_69 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;
#line 39 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_70 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__3_3;

#line 39 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_69 == ll_backend__llds_out__llds_out_util__CastY_70);
#line 39 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 1143 "ll_backend.llds_out.llds_out_util.c"
      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "llds_out_util.m"
    else
#line 39 "llds_out_util.m"
      {
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 4)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 5)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 8)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 39 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 39 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 2)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 3)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 4)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 5)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 8)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_48_48;

#line 39 "llds_out_util.m"
        {
#line 39 "llds_out_util.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__llds_out__llds_out_util__V_48_48, ll_backend__llds_out__llds_out_util__V_4_4, ll_backend__llds_out__llds_out_util__V_26_26);
        }
#line 1245 "ll_backend.llds_out.llds_out_util.c"
        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_48_48 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_48_48;
#line 39 "llds_out_util.m"
        else
#line 39 "llds_out_util.m"
          {
#line 39 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_49_49;

#line 39 "llds_out_util.m"
            {
#line 39 "llds_out_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__llds_out__llds_out_util__V_49_49, ll_backend__llds_out__llds_out_util__V_5_5, ll_backend__llds_out__llds_out_util__V_27_27);
            }
#line 1265 "ll_backend.llds_out.llds_out_util.c"
            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_49_49 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_49_49;
#line 39 "llds_out_util.m"
            else
#line 39 "llds_out_util.m"
              {
#line 39 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_50_50;

#line 39 "llds_out_util.m"
                {
#line 39 "llds_out_util.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__llds_out__llds_out_util__V_50_50, ll_backend__llds_out__llds_out_util__V_6_6, ll_backend__llds_out__llds_out_util__V_28_28);
                }
#line 1285 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_50_50 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_50_50;
#line 39 "llds_out_util.m"
                else
#line 39 "llds_out_util.m"
                  {
#line 39 "llds_out_util.m"
                    MR_Word ll_backend__llds_out__llds_out_util__V_51_51;

#line 39 "llds_out_util.m"
                    {
#line 39 "llds_out_util.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[0], &ll_backend__llds_out__llds_out_util__V_51_51, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_7_7)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_29_29)));
                    }
#line 1305 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_51_51 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_51_51;
#line 39 "llds_out_util.m"
                    else
#line 39 "llds_out_util.m"
                      {
#line 39 "llds_out_util.m"
                        MR_Word ll_backend__llds_out__llds_out_util__V_52_52;

#line 39 "llds_out_util.m"
                        {
#line 39 "llds_out_util.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[1], &ll_backend__llds_out__llds_out_util__V_52_52, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_8_8)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_30_30)));
                        }
#line 1325 "ll_backend.llds_out.llds_out_util.c"
                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_52_52 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_52_52;
#line 39 "llds_out_util.m"
                        else
#line 39 "llds_out_util.m"
                          {
#line 39 "llds_out_util.m"
                            MR_Word ll_backend__llds_out__llds_out_util__V_53_53;

#line 39 "llds_out_util.m"
                            {
#line 39 "llds_out_util.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[2], &ll_backend__llds_out__llds_out_util__V_53_53, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_9_9)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_31_31)));
                            }
#line 1345 "ll_backend.llds_out.llds_out_util.c"
                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_53_53 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_53_53;
#line 39 "llds_out_util.m"
                            else
#line 39 "llds_out_util.m"
                              {
#line 39 "llds_out_util.m"
                                MR_Word ll_backend__llds_out__llds_out_util__V_54_54;

#line 39 "llds_out_util.m"
                                {
#line 39 "llds_out_util.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[3], &ll_backend__llds_out__llds_out_util__V_54_54, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_10_10)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_32_32)));
                                }
#line 1365 "ll_backend.llds_out.llds_out_util.c"
                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_54_54 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_54_54;
#line 39 "llds_out_util.m"
                                else
#line 39 "llds_out_util.m"
                                  {
#line 39 "llds_out_util.m"
                                    MR_Word ll_backend__llds_out__llds_out_util__V_55_55;
#line 39 "llds_out_util.m"
                                    MR_Integer ll_backend__llds_out__llds_out_util__V_93_93 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_11_11;
#line 39 "llds_out_util.m"
                                    MR_Integer ll_backend__llds_out__llds_out_util__V_94_94 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_33_33;

#line 39 "llds_out_util.m"
                                    {
#line 39 "llds_out_util.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_55_55, ll_backend__llds_out__llds_out_util__V_93_93, ll_backend__llds_out__llds_out_util__V_94_94);
                                    }
#line 1389 "ll_backend.llds_out.llds_out_util.c"
                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_55_55 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_55_55;
#line 39 "llds_out_util.m"
                                    else
#line 39 "llds_out_util.m"
                                      {
#line 39 "llds_out_util.m"
                                        MR_Word ll_backend__llds_out__llds_out_util__V_56_56;
#line 39 "llds_out_util.m"
                                        MR_Integer ll_backend__llds_out__llds_out_util__V_95_95 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_12_12;
#line 39 "llds_out_util.m"
                                        MR_Integer ll_backend__llds_out__llds_out_util__V_96_96 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_34_34;

#line 39 "llds_out_util.m"
                                        {
#line 39 "llds_out_util.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_56_56, ll_backend__llds_out__llds_out_util__V_95_95, ll_backend__llds_out__llds_out_util__V_96_96);
                                        }
#line 1413 "ll_backend.llds_out.llds_out_util.c"
                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_56_56 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_56_56;
#line 39 "llds_out_util.m"
                                        else
#line 39 "llds_out_util.m"
                                          {
#line 39 "llds_out_util.m"
                                            MR_Word ll_backend__llds_out__llds_out_util__V_57_57;
#line 39 "llds_out_util.m"
                                            MR_Integer ll_backend__llds_out__llds_out_util__V_97_97 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_13_13;
#line 39 "llds_out_util.m"
                                            MR_Integer ll_backend__llds_out__llds_out_util__V_98_98 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_35_35;

#line 39 "llds_out_util.m"
                                            {
#line 39 "llds_out_util.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_57_57, ll_backend__llds_out__llds_out_util__V_97_97, ll_backend__llds_out__llds_out_util__V_98_98);
                                            }
#line 1437 "ll_backend.llds_out.llds_out_util.c"
                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_57_57 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_57_57;
#line 39 "llds_out_util.m"
                                            else
#line 39 "llds_out_util.m"
                                              {
#line 39 "llds_out_util.m"
                                                MR_Word ll_backend__llds_out__llds_out_util__V_58_58;
#line 39 "llds_out_util.m"
                                                MR_Integer ll_backend__llds_out__llds_out_util__V_99_99 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_14_14;
#line 39 "llds_out_util.m"
                                                MR_Integer ll_backend__llds_out__llds_out_util__V_100_100 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_36_36;

#line 39 "llds_out_util.m"
                                                {
#line 39 "llds_out_util.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_58_58, ll_backend__llds_out__llds_out_util__V_99_99, ll_backend__llds_out__llds_out_util__V_100_100);
                                                }
#line 1461 "ll_backend.llds_out.llds_out_util.c"
                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_58_58 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_58_58;
#line 39 "llds_out_util.m"
                                                else
#line 39 "llds_out_util.m"
                                                  {
#line 39 "llds_out_util.m"
                                                    MR_Word ll_backend__llds_out__llds_out_util__V_59_59;
#line 39 "llds_out_util.m"
                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_101_101 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_15_15;
#line 39 "llds_out_util.m"
                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_102_102 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_37_37;

#line 39 "llds_out_util.m"
                                                    {
#line 39 "llds_out_util.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_59_59, ll_backend__llds_out__llds_out_util__V_101_101, ll_backend__llds_out__llds_out_util__V_102_102);
                                                    }
#line 1485 "ll_backend.llds_out.llds_out_util.c"
                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_59_59 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_59_59;
#line 39 "llds_out_util.m"
                                                    else
#line 39 "llds_out_util.m"
                                                      {
#line 39 "llds_out_util.m"
                                                        MR_Word ll_backend__llds_out__llds_out_util__V_60_60;
#line 39 "llds_out_util.m"
                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_103_103 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_16_16;
#line 39 "llds_out_util.m"
                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_104_104 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_38_38;

#line 39 "llds_out_util.m"
                                                        {
#line 39 "llds_out_util.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_60_60, ll_backend__llds_out__llds_out_util__V_103_103, ll_backend__llds_out__llds_out_util__V_104_104);
                                                        }
#line 1509 "ll_backend.llds_out.llds_out_util.c"
                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_60_60 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_60_60;
#line 39 "llds_out_util.m"
                                                        else
#line 39 "llds_out_util.m"
                                                          {
#line 39 "llds_out_util.m"
                                                            MR_Word ll_backend__llds_out__llds_out_util__V_61_61;
#line 39 "llds_out_util.m"
                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_105_105 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_17_17;
#line 39 "llds_out_util.m"
                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_106_106 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_39_39;

#line 39 "llds_out_util.m"
                                                            {
#line 39 "llds_out_util.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_61_61, ll_backend__llds_out__llds_out_util__V_105_105, ll_backend__llds_out__llds_out_util__V_106_106);
                                                            }
#line 1533 "ll_backend.llds_out.llds_out_util.c"
                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_61_61 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_61_61;
#line 39 "llds_out_util.m"
                                                            else
#line 39 "llds_out_util.m"
                                                              {
#line 39 "llds_out_util.m"
                                                                MR_Word ll_backend__llds_out__llds_out_util__V_62_62;
#line 39 "llds_out_util.m"
                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_107_107 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_18_18;
#line 39 "llds_out_util.m"
                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_108_108 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_40_40;

#line 39 "llds_out_util.m"
                                                                {
#line 39 "llds_out_util.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_62_62, ll_backend__llds_out__llds_out_util__V_107_107, ll_backend__llds_out__llds_out_util__V_108_108);
                                                                }
#line 1557 "ll_backend.llds_out.llds_out_util.c"
                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_62_62 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_62_62;
#line 39 "llds_out_util.m"
                                                                else
#line 39 "llds_out_util.m"
                                                                  {
#line 39 "llds_out_util.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_util__V_63_63;
#line 39 "llds_out_util.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_109_109 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_19_19;
#line 39 "llds_out_util.m"
                                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_110_110 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_41_41;

#line 39 "llds_out_util.m"
                                                                    {
#line 39 "llds_out_util.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_63_63, ll_backend__llds_out__llds_out_util__V_109_109, ll_backend__llds_out__llds_out_util__V_110_110);
                                                                    }
#line 1581 "ll_backend.llds_out.llds_out_util.c"
                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_63_63 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_63_63;
#line 39 "llds_out_util.m"
                                                                    else
#line 39 "llds_out_util.m"
                                                                      {
#line 39 "llds_out_util.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_util__V_64_64;
#line 39 "llds_out_util.m"
                                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_111_111 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_20_20;
#line 39 "llds_out_util.m"
                                                                        MR_Integer ll_backend__llds_out__llds_out_util__V_112_112 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_42_42;

#line 39 "llds_out_util.m"
                                                                        {
#line 39 "llds_out_util.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_64_64, ll_backend__llds_out__llds_out_util__V_111_111, ll_backend__llds_out__llds_out_util__V_112_112);
                                                                        }
#line 1605 "ll_backend.llds_out.llds_out_util.c"
                                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_64_64 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_64_64;
#line 39 "llds_out_util.m"
                                                                        else
#line 39 "llds_out_util.m"
                                                                          {
#line 39 "llds_out_util.m"
                                                                            MR_Word ll_backend__llds_out__llds_out_util__V_65_65;
#line 39 "llds_out_util.m"
                                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_113_113 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_21_21;
#line 39 "llds_out_util.m"
                                                                            MR_Integer ll_backend__llds_out__llds_out_util__V_114_114 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_43_43;

#line 39 "llds_out_util.m"
                                                                            {
#line 39 "llds_out_util.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_65_65, ll_backend__llds_out__llds_out_util__V_113_113, ll_backend__llds_out__llds_out_util__V_114_114);
                                                                            }
#line 1629 "ll_backend.llds_out.llds_out_util.c"
                                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_65_65 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_65_65;
#line 39 "llds_out_util.m"
                                                                            else
#line 39 "llds_out_util.m"
                                                                              {
#line 39 "llds_out_util.m"
                                                                                MR_Word ll_backend__llds_out__llds_out_util__V_66_66;
#line 39 "llds_out_util.m"
                                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_115_115 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_22_22;
#line 39 "llds_out_util.m"
                                                                                MR_Integer ll_backend__llds_out__llds_out_util__V_116_116 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_44_44;

#line 39 "llds_out_util.m"
                                                                                {
#line 39 "llds_out_util.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_66_66, ll_backend__llds_out__llds_out_util__V_115_115, ll_backend__llds_out__llds_out_util__V_116_116);
                                                                                }
#line 1653 "ll_backend.llds_out.llds_out_util.c"
                                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_66_66 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_66_66;
#line 39 "llds_out_util.m"
                                                                                else
#line 39 "llds_out_util.m"
                                                                                  {
#line 39 "llds_out_util.m"
                                                                                    MR_Word ll_backend__llds_out__llds_out_util__V_67_67;
#line 39 "llds_out_util.m"
                                                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_117_117 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_23_23;
#line 39 "llds_out_util.m"
                                                                                    MR_Integer ll_backend__llds_out__llds_out_util__V_118_118 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_45_45;

#line 39 "llds_out_util.m"
                                                                                    {
#line 39 "llds_out_util.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__V_67_67, ll_backend__llds_out__llds_out_util__V_117_117, ll_backend__llds_out__llds_out_util__V_118_118);
                                                                                    }
#line 1677 "ll_backend.llds_out.llds_out_util.c"
                                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_67_67 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_67_67;
#line 39 "llds_out_util.m"
                                                                                    else
#line 39 "llds_out_util.m"
                                                                                      {
#line 39 "llds_out_util.m"
                                                                                        MR_Word ll_backend__llds_out__llds_out_util__V_68_68;

#line 39 "llds_out_util.m"
                                                                                        {
#line 39 "llds_out_util.m"
                                                                                          libs__trace_params____Compare____trace_level_0_0(&ll_backend__llds_out__llds_out_util__V_68_68, ll_backend__llds_out__llds_out_util__V_24_24, ll_backend__llds_out__llds_out_util__V_46_46);
                                                                                        }
#line 1697 "ll_backend.llds_out.llds_out_util.c"
                                                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_68_68 == (MR_Integer) 0);
#line 39 "llds_out_util.m"
                                                                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 39 "llds_out_util.m"
                                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_68_68;
#line 39 "llds_out_util.m"
                                                                                        else
#line 39 "llds_out_util.m"
                                                                                          {
#line 39 "llds_out_util.m"
                                                                                            libs__globals____Compare____globals_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_25_25, ll_backend__llds_out__llds_out_util__V_47_47);
                                                                                          }
#line 39 "llds_out_util.m"
                                                                                      }
#line 39 "llds_out_util.m"
                                                                                  }
#line 39 "llds_out_util.m"
                                                                              }
#line 39 "llds_out_util.m"
                                                                          }
#line 39 "llds_out_util.m"
                                                                      }
#line 39 "llds_out_util.m"
                                                                  }
#line 39 "llds_out_util.m"
                                                              }
#line 39 "llds_out_util.m"
                                                          }
#line 39 "llds_out_util.m"
                                                      }
#line 39 "llds_out_util.m"
                                                  }
#line 39 "llds_out_util.m"
                                              }
#line 39 "llds_out_util.m"
                                          }
#line 39 "llds_out_util.m"
                                      }
#line 39 "llds_out_util.m"
                                  }
#line 39 "llds_out_util.m"
                              }
#line 39 "llds_out_util.m"
                          }
#line 39 "llds_out_util.m"
                      }
#line 39 "llds_out_util.m"
                  }
#line 39 "llds_out_util.m"
              }
#line 39 "llds_out_util.m"
          }
#line 39 "llds_out_util.m"
      }
#line 39 "llds_out_util.m"
  }
#line 39 "llds_out_util.m"
}

#line 39 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0(
#line 39 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 39 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
#line 39 "llds_out_util.m"
{
#line 39 "llds_out_util.m"
  {
#line 39 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 39 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_47 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__1_1;
#line 39 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_48 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;

#line 39 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_47 == ll_backend__llds_out__llds_out_util__CastY_48);
#line 39 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__succeeded = MR_TRUE;
#line 39 "llds_out_util.m"
    else
#line 39 "llds_out_util.m"
      {
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_50_50;
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_51_51;
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_52_52;
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_53_53;
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 39 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 2)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 3)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 4)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 5)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 8)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "llds_out_util.m"
        MR_String ll_backend__llds_out__llds_out_util__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 4)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 5)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)));
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 39 "llds_out_util.m"
        MR_Word ll_backend__llds_out__llds_out_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 8)));

#line 1884 "ll_backend.llds_out.llds_out_util.c"
        {
#line 1886 "ll_backend.llds_out.llds_out_util.c"
          ll_backend__llds_out__llds_out_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__llds_out__llds_out_util__V_3_3, ll_backend__llds_out__llds_out_util__V_25_25);
        }
#line 39 "llds_out_util.m"
        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
          {
#line 1893 "ll_backend.llds_out.llds_out_util.c"
            ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_4_4, ll_backend__llds_out__llds_out_util__V_26_26) == 0);
#line 39 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
              {
#line 1899 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_5_5, ll_backend__llds_out__llds_out_util__V_27_27) == 0);
#line 39 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                  {
#line 1905 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__TypeInfo_50_50 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[0];
#line 1907 "ll_backend.llds_out.llds_out_util.c"
                    {
#line 1909 "ll_backend.llds_out.llds_out_util.c"
                      ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_50_50, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_28_28)));
                    }
#line 39 "llds_out_util.m"
                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                      {
#line 1916 "ll_backend.llds_out.llds_out_util.c"
                        ll_backend__llds_out__llds_out_util__TypeInfo_51_51 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[1];
#line 1918 "ll_backend.llds_out.llds_out_util.c"
                        {
#line 1920 "ll_backend.llds_out.llds_out_util.c"
                          ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_51_51, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_7_7)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_29_29)));
                        }
#line 39 "llds_out_util.m"
                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                          {
#line 1927 "ll_backend.llds_out.llds_out_util.c"
                            ll_backend__llds_out__llds_out_util__TypeInfo_52_52 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[2];
#line 1929 "ll_backend.llds_out.llds_out_util.c"
                            {
#line 1931 "ll_backend.llds_out.llds_out_util.c"
                              ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_52_52, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_8_8)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_30_30)));
                            }
#line 39 "llds_out_util.m"
                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                              {
#line 1938 "ll_backend.llds_out.llds_out_util.c"
                                ll_backend__llds_out__llds_out_util__TypeInfo_53_53 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[3];
#line 1940 "ll_backend.llds_out.llds_out_util.c"
                                {
#line 1942 "ll_backend.llds_out.llds_out_util.c"
                                  ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_53_53, ((MR_Box) (ll_backend__llds_out__llds_out_util__V_9_9)), ((MR_Box) (ll_backend__llds_out__llds_out_util__V_31_31)));
                                }
#line 39 "llds_out_util.m"
                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                  {
#line 1949 "ll_backend.llds_out.llds_out_util.c"
                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_10_10 == ll_backend__llds_out__llds_out_util__V_32_32);
#line 39 "llds_out_util.m"
                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                      {
#line 1955 "ll_backend.llds_out.llds_out_util.c"
                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_11_11 == ll_backend__llds_out__llds_out_util__V_33_33);
#line 39 "llds_out_util.m"
                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                          {
#line 1961 "ll_backend.llds_out.llds_out_util.c"
                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_12_12 == ll_backend__llds_out__llds_out_util__V_34_34);
#line 39 "llds_out_util.m"
                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                              {
#line 1967 "ll_backend.llds_out.llds_out_util.c"
                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_13_13 == ll_backend__llds_out__llds_out_util__V_35_35);
#line 39 "llds_out_util.m"
                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                  {
#line 1973 "ll_backend.llds_out.llds_out_util.c"
                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_14_14 == ll_backend__llds_out__llds_out_util__V_36_36);
#line 39 "llds_out_util.m"
                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                      {
#line 1979 "ll_backend.llds_out.llds_out_util.c"
                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_15_15 == ll_backend__llds_out__llds_out_util__V_37_37);
#line 39 "llds_out_util.m"
                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                          {
#line 1985 "ll_backend.llds_out.llds_out_util.c"
                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_16_16 == ll_backend__llds_out__llds_out_util__V_38_38);
#line 39 "llds_out_util.m"
                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                              {
#line 1991 "ll_backend.llds_out.llds_out_util.c"
                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_17_17 == ll_backend__llds_out__llds_out_util__V_39_39);
#line 39 "llds_out_util.m"
                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                  {
#line 1997 "ll_backend.llds_out.llds_out_util.c"
                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_18_18 == ll_backend__llds_out__llds_out_util__V_40_40);
#line 39 "llds_out_util.m"
                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                      {
#line 2003 "ll_backend.llds_out.llds_out_util.c"
                                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_19_19 == ll_backend__llds_out__llds_out_util__V_41_41);
#line 39 "llds_out_util.m"
                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                          {
#line 2009 "ll_backend.llds_out.llds_out_util.c"
                                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_20_20 == ll_backend__llds_out__llds_out_util__V_42_42);
#line 39 "llds_out_util.m"
                                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                              {
#line 2015 "ll_backend.llds_out.llds_out_util.c"
                                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_21_21 == ll_backend__llds_out__llds_out_util__V_43_43);
#line 39 "llds_out_util.m"
                                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                                  {
#line 2021 "ll_backend.llds_out.llds_out_util.c"
                                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_22_22 == ll_backend__llds_out__llds_out_util__V_44_44);
#line 39 "llds_out_util.m"
                                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 39 "llds_out_util.m"
                                                                                      {
#line 2027 "ll_backend.llds_out.llds_out_util.c"
                                                                                        {
#line 2029 "ll_backend.llds_out.llds_out_util.c"
                                                                                          ll_backend__llds_out__llds_out_util__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__llds_out__llds_out_util__V_23_23, ll_backend__llds_out__llds_out_util__V_45_45);
                                                                                        }
#line 39 "llds_out_util.m"
                                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
#line 2034 "ll_backend.llds_out.llds_out_util.c"
                                                                                          {
#line 2036 "ll_backend.llds_out.llds_out_util.c"
                                                                                            ll_backend__llds_out__llds_out_util__succeeded = libs__globals____Unify____globals_0_0(ll_backend__llds_out__llds_out_util__V_24_24, ll_backend__llds_out__llds_out_util__V_46_46);
                                                                                          }
#line 39 "llds_out_util.m"
                                                                                      }
#line 39 "llds_out_util.m"
                                                                                  }
#line 39 "llds_out_util.m"
                                                                              }
#line 39 "llds_out_util.m"
                                                                          }
#line 39 "llds_out_util.m"
                                                                      }
#line 39 "llds_out_util.m"
                                                                  }
#line 39 "llds_out_util.m"
                                                              }
#line 39 "llds_out_util.m"
                                                          }
#line 39 "llds_out_util.m"
                                                      }
#line 39 "llds_out_util.m"
                                                  }
#line 39 "llds_out_util.m"
                                              }
#line 39 "llds_out_util.m"
                                          }
#line 39 "llds_out_util.m"
                                      }
#line 39 "llds_out_util.m"
                                  }
#line 39 "llds_out_util.m"
                              }
#line 39 "llds_out_util.m"
                          }
#line 39 "llds_out_util.m"
                      }
#line 39 "llds_out_util.m"
                  }
#line 39 "llds_out_util.m"
              }
#line 39 "llds_out_util.m"
          }
#line 39 "llds_out_util.m"
      }
#line 39 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 39 "llds_out_util.m"
  }
#line 39 "llds_out_util.m"
}

#line 176 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0(
#line 176 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 176 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
#line 176 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
#line 176 "llds_out_util.m"
{
#line 176 "llds_out_util.m"
  {
#line 176 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 176 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar1_4 = ll_backend__llds_out__llds_out_util__HeadVar__2_2;
#line 176 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar2_5 = ll_backend__llds_out__llds_out_util__HeadVar__3_3;

#line 176 "llds_out_util.m"
    {
#line 176 "llds_out_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_1[0], ll_backend__llds_out__llds_out_util__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar2_5)));
    }
#line 176 "llds_out_util.m"
  }
#line 176 "llds_out_util.m"
}

#line 176 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0(
#line 176 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 176 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
#line 176 "llds_out_util.m"
{
#line 176 "llds_out_util.m"
  {
#line 176 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 176 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar1_3 = ll_backend__llds_out__llds_out_util__HeadVar__1_1;
#line 176 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar2_4 = ll_backend__llds_out__llds_out_util__HeadVar__2_2;

#line 176 "llds_out_util.m"
    {
#line 176 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_1[0], ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar2_4)));
    }
#line 176 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 176 "llds_out_util.m"
  }
#line 176 "llds_out_util.m"
}

#line 80 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0(
#line 80 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 80 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
#line 80 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
#line 80 "llds_out_util.m"
{
#line 80 "llds_out_util.m"
  {
#line 80 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 80 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_225 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;
#line 80 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_226 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__3_3;

#line 80 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_225 == ll_backend__llds_out__llds_out_util__CastY_226);
#line 80 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 2172 "ll_backend.llds_out.llds_out_util.c"
      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 0;
#line 80 "llds_out_util.m"
    else
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
      switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) {
#line 80 "llds_out_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
        case (MR_Integer) 0:
#line 80 "llds_out_util.m"
          {
#line 80 "llds_out_util.m"
            MR_String ll_backend__llds_out__llds_out_util__V_241_241 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 80 "llds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
              case (MR_Integer) 0:
#line 80 "llds_out_util.m"
                {
#line 80 "llds_out_util.m"
                  MR_String ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));

#line 80 "llds_out_util.m"
                  {
#line 80 "llds_out_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_241_241, ll_backend__llds_out__llds_out_util__V_5_5);
                  }
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
              case (MR_Integer) 1:
#line 2211 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
              case (MR_Integer) 2:
#line 2217 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
              case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2230 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2236 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2242 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 2248 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 4:
#line 2254 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 5:
#line 2260 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 6:
#line 2266 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
            }
#line 80 "llds_out_util.m"
          }
#line 80 "llds_out_util.m"
          break;
#line 80 "llds_out_util.m"
        case (MR_Integer) 1:
#line 80 "llds_out_util.m"
          {
#line 80 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 80 "llds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
              case (MR_Integer) 0:
#line 2294 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
              case (MR_Integer) 1:
#line 80 "llds_out_util.m"
                {
#line 80 "llds_out_util.m"
                  MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 80 "llds_out_util.m"
                  MR_Integer ll_backend__llds_out__llds_out_util__V_251_251 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_240_240;
#line 80 "llds_out_util.m"
                  MR_Integer ll_backend__llds_out__llds_out_util__V_252_252 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_28_28;

#line 80 "llds_out_util.m"
                  {
#line 80 "llds_out_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_251_251, ll_backend__llds_out__llds_out_util__V_252_252);
                  }
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
              case (MR_Integer) 2:
#line 2320 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
              case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2333 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2339 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2345 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 2351 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 4:
#line 2357 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 5:
#line 2363 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 6:
#line 2369 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
            }
#line 80 "llds_out_util.m"
          }
#line 80 "llds_out_util.m"
          break;
#line 80 "llds_out_util.m"
        case (MR_Integer) 2:
#line 80 "llds_out_util.m"
          {
#line 80 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 80 "llds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
              case (MR_Integer) 0:
#line 2397 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
              case (MR_Integer) 1:
#line 2403 "ll_backend.llds_out.llds_out_util.c"
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
              case (MR_Integer) 2:
#line 80 "llds_out_util.m"
                {
#line 80 "llds_out_util.m"
                  MR_Word ll_backend__llds_out__llds_out_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));

#line 80 "llds_out_util.m"
                  {
#line 80 "llds_out_util.m"
                    ll_backend__llds____Compare____code_addr_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_239_239, ll_backend__llds_out__llds_out_util__V_51_51);
                  }
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
              case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2432 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2438 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2444 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 2450 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 4:
#line 2456 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 5:
#line 2462 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 6:
#line 2468 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
                break;
#line 80 "llds_out_util.m"
            }
#line 80 "llds_out_util.m"
          }
#line 80 "llds_out_util.m"
          break;
#line 80 "llds_out_util.m"
        case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
            case (MR_Integer) 0:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 80 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2503 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2509 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2515 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 80 "llds_out_util.m"
                        {
#line 80 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
                          {
#line 80 "llds_out_util.m"
                            backend_libs__rtti____Compare____rtti_id_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_244_244, ll_backend__llds_out__llds_out_util__V_74_74);
                          }
#line 80 "llds_out_util.m"
                        }
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 2544 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 2550 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 2556 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 2562 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 2568 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 2574 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                    }
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 1:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 80 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2602 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2608 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2614 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 2627 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 80 "llds_out_util.m"
                        {
#line 80 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
                          {
#line 80 "llds_out_util.m"
                            ll_backend__layout____Compare____layout_name_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_243_243, ll_backend__llds_out__llds_out_util__V_97_97);
                          }
#line 80 "llds_out_util.m"
                        }
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 2649 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 2655 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 2661 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 2667 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 2673 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                    }
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 2:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 80 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2703 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2709 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2715 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 2728 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 2734 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 80 "llds_out_util.m"
                        {
#line 80 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 80 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 2)));
#line 80 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_128_128;

#line 80 "llds_out_util.m"
                          {
#line 80 "llds_out_util.m"
                            mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__llds_out__llds_out_util__V_128_128, ll_backend__llds_out__llds_out_util__V_246_246, ll_backend__llds_out__llds_out_util__V_126_126);
                          }
#line 2754 "ll_backend.llds_out.llds_out_util.c"
                          ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_128_128 == (MR_Integer) 0);
#line 80 "llds_out_util.m"
                          ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
#line 80 "llds_out_util.m"
                          if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__V_128_128;
#line 80 "llds_out_util.m"
                          else
#line 80 "llds_out_util.m"
                            {
#line 80 "llds_out_util.m"
                              backend_libs__rtti____Compare____proc_tabling_struct_id_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_245_245, ll_backend__llds_out__llds_out_util__V_127_127);
                            }
#line 80 "llds_out_util.m"
                        }
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 2775 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 2781 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 2787 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 2793 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                    }
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 3:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_242_242 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 80 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2821 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2827 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2833 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 2846 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 2852 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 2858 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 80 "llds_out_util.m"
                        {
#line 80 "llds_out_util.m"
                          MR_String ll_backend__llds_out__llds_out_util__V_155_155 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
                          {
#line 80 "llds_out_util.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_242_242, ll_backend__llds_out__llds_out_util__V_155_155);
                          }
#line 80 "llds_out_util.m"
                        }
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 2880 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 2886 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 2892 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                    }
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 4:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 80 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 2920 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 2926 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 2932 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 2945 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 2951 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 2957 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 2963 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 80 "llds_out_util.m"
                        {
#line 80 "llds_out_util.m"
                          MR_Word ll_backend__llds_out__llds_out_util__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 80 "llds_out_util.m"
                          MR_String ll_backend__llds_out__llds_out_util__V_249_249 = (MR_String) ll_backend__llds_out__llds_out_util__V_238_238;
#line 80 "llds_out_util.m"
                          MR_String ll_backend__llds_out__llds_out_util__V_250_250 = (MR_String) ll_backend__llds_out__llds_out_util__V_178_178;

#line 80 "llds_out_util.m"
                          {
#line 80 "llds_out_util.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_249_249, ll_backend__llds_out__llds_out_util__V_250_250);
                          }
#line 80 "llds_out_util.m"
                        }
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 2989 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 2995 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                    }
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 5:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_247_247 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 80 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 3023 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 3029 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 3035 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 3048 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 3054 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 3060 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 3066 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 3072 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 80 "llds_out_util.m"
                        {
#line 80 "llds_out_util.m"
                          MR_Integer ll_backend__llds_out__llds_out_util__V_201_201 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
                          {
#line 80 "llds_out_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_247_247, ll_backend__llds_out__llds_out_util__V_201_201);
                          }
#line 80 "llds_out_util.m"
                        }
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 3094 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                    }
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 6:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_248_248 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
#line 80 "llds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                  case (MR_Integer) 0:
#line 3122 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 1:
#line 3128 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 2:
#line 3134 "ll_backend.llds_out.llds_out_util.c"
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                  case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
                      case (MR_Integer) 0:
#line 3147 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 1:
#line 3153 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 2:
#line 3159 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 3:
#line 3165 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 4:
#line 3171 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 5:
#line 3177 "ll_backend.llds_out.llds_out_util.c"
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                      case (MR_Integer) 6:
#line 80 "llds_out_util.m"
                        {
#line 80 "llds_out_util.m"
                          MR_Integer ll_backend__llds_out__llds_out_util__V_224_224 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

#line 80 "llds_out_util.m"
                          {
#line 80 "llds_out_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__V_248_248, ll_backend__llds_out__llds_out_util__V_224_224);
                          }
#line 80 "llds_out_util.m"
                        }
#line 80 "llds_out_util.m"
                        break;
#line 80 "llds_out_util.m"
                    }
#line 80 "llds_out_util.m"
                    break;
#line 80 "llds_out_util.m"
                }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
          }
#line 80 "llds_out_util.m"
          break;
#line 80 "llds_out_util.m"
      }
#line 80 "llds_out_util.m"
  }
#line 80 "llds_out_util.m"
}

#line 80 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0(
#line 80 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
#line 80 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
#line 80 "llds_out_util.m"
{
#line 80 "llds_out_util.m"
  {
#line 80 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 80 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_25 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__1_1;
#line 80 "llds_out_util.m"
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_26 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;

#line 80 "llds_out_util.m"
    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_25 == ll_backend__llds_out__llds_out_util__CastY_26);
#line 80 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__succeeded = MR_TRUE;
#line 80 "llds_out_util.m"
    else
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
      switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) {
#line 80 "llds_out_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
        case (MR_Integer) 0:
#line 80 "llds_out_util.m"
          {
#line 80 "llds_out_util.m"
            MR_String ll_backend__llds_out__llds_out_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 80 "llds_out_util.m"
            MR_String ll_backend__llds_out__llds_out_util__V_4_4;

#line 80 "llds_out_util.m"
            ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 80 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3266 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_3_3, ll_backend__llds_out__llds_out_util__V_4_4) == 0);
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
          }
#line 80 "llds_out_util.m"
          break;
#line 80 "llds_out_util.m"
        case (MR_Integer) 1:
#line 80 "llds_out_util.m"
          {
#line 80 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 80 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_6_6;
#line 80 "llds_out_util.m"
            MR_Integer ll_backend__llds_out__llds_out_util__V_36_36;
#line 80 "llds_out_util.m"
            MR_Integer ll_backend__llds_out__llds_out_util__V_37_37;

#line 80 "llds_out_util.m"
            ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 80 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3295 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__V_36_36 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_5_5;
#line 3297 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__V_37_37 = (MR_Integer) ll_backend__llds_out__llds_out_util__V_6_6;
#line 3299 "ll_backend.llds_out.llds_out_util.c"
                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_36_36 == ll_backend__llds_out__llds_out_util__V_37_37);
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
          }
#line 80 "llds_out_util.m"
          break;
#line 80 "llds_out_util.m"
        case (MR_Integer) 2:
#line 80 "llds_out_util.m"
          {
#line 80 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 80 "llds_out_util.m"
            MR_Word ll_backend__llds_out__llds_out_util__V_8_8;

#line 80 "llds_out_util.m"
            ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 80 "llds_out_util.m"
            if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3324 "ll_backend.llds_out.llds_out_util.c"
                {
#line 3326 "ll_backend.llds_out.llds_out_util.c"
                  ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__llds_out__llds_out_util__V_7_7, ll_backend__llds_out__llds_out_util__V_8_8);
                }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
          }
#line 80 "llds_out_util.m"
          break;
#line 80 "llds_out_util.m"
        case (MR_Integer) 3:
#line 80 "llds_out_util.m"
#line 80 "llds_out_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 80 "llds_out_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 80 "llds_out_util.m"
            case (MR_Integer) 0:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_10_10;

#line 80 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 80 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
                  {
#line 80 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3359 "ll_backend.llds_out.llds_out_util.c"
                    {
#line 3361 "ll_backend.llds_out.llds_out_util.c"
                      ll_backend__llds_out__llds_out_util__succeeded = backend_libs__rtti____Unify____rtti_id_0_0(ll_backend__llds_out__llds_out_util__V_9_9, ll_backend__llds_out__llds_out_util__V_10_10);
                    }
#line 80 "llds_out_util.m"
                  }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 1:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_12_12;

#line 80 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 80 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
                  {
#line 80 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3387 "ll_backend.llds_out.llds_out_util.c"
                    {
#line 3389 "ll_backend.llds_out.llds_out_util.c"
                      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__llds_out__llds_out_util__V_11_11, ll_backend__llds_out__llds_out_util__V_12_12);
                    }
#line 80 "llds_out_util.m"
                  }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 2:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 2)));
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_15_15;
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_16_16;

#line 80 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 80 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
                  {
#line 80 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 80 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 3421 "ll_backend.llds_out.llds_out_util.c"
                    {
#line 3423 "ll_backend.llds_out.llds_out_util.c"
                      ll_backend__llds_out__llds_out_util__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__llds_out__llds_out_util__V_13_13, ll_backend__llds_out__llds_out_util__V_15_15);
                    }
#line 80 "llds_out_util.m"
                    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 3428 "ll_backend.llds_out.llds_out_util.c"
                      {
#line 3430 "ll_backend.llds_out.llds_out_util.c"
                        ll_backend__llds_out__llds_out_util__succeeded = backend_libs__rtti____Unify____proc_tabling_struct_id_0_0(ll_backend__llds_out__llds_out_util__V_14_14, ll_backend__llds_out__llds_out_util__V_16_16);
                      }
#line 80 "llds_out_util.m"
                  }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 3:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 80 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_18_18;

#line 80 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 80 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
                  {
#line 80 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3456 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_17_17, ll_backend__llds_out__llds_out_util__V_18_18) == 0);
#line 80 "llds_out_util.m"
                  }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 4:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 80 "llds_out_util.m"
                MR_Word ll_backend__llds_out__llds_out_util__V_20_20;
#line 80 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_34_34;
#line 80 "llds_out_util.m"
                MR_String ll_backend__llds_out__llds_out_util__V_35_35;

#line 80 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 80 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
                  {
#line 80 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3485 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__V_34_34 = (MR_String) ll_backend__llds_out__llds_out_util__V_19_19;
#line 3487 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__V_35_35 = (MR_String) ll_backend__llds_out__llds_out_util__V_20_20;
#line 3489 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__V_34_34, ll_backend__llds_out__llds_out_util__V_35_35) == 0);
#line 80 "llds_out_util.m"
                  }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 5:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 80 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_22_22;

#line 80 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 80 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
                  {
#line 80 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3514 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_21_21 == ll_backend__llds_out__llds_out_util__V_22_22);
#line 80 "llds_out_util.m"
                  }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
            case (MR_Integer) 6:
#line 80 "llds_out_util.m"
              {
#line 80 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 80 "llds_out_util.m"
                MR_Integer ll_backend__llds_out__llds_out_util__V_24_24;

#line 80 "llds_out_util.m"
                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 80 "llds_out_util.m"
                if (ll_backend__llds_out__llds_out_util__succeeded)
#line 80 "llds_out_util.m"
                  {
#line 80 "llds_out_util.m"
                    ll_backend__llds_out__llds_out_util__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 3539 "ll_backend.llds_out.llds_out_util.c"
                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__V_23_23 == ll_backend__llds_out__llds_out_util__V_24_24);
#line 80 "llds_out_util.m"
                  }
#line 80 "llds_out_util.m"
              }
#line 80 "llds_out_util.m"
              break;
#line 80 "llds_out_util.m"
          }
#line 80 "llds_out_util.m"
          break;
#line 80 "llds_out_util.m"
      }
#line 80 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 80 "llds_out_util.m"
  }
#line 80 "llds_out_util.m"
}

#line 106 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__output_indent_5_p_0(
#line 106 "llds_out_util.m"
  MR_String ll_backend__llds_out__llds_out_util__FirstIndent_6,
#line 106 "llds_out_util.m"
  MR_String ll_backend__llds_out__llds_out_util__LaterIndent_7,
#line 106 "llds_out_util.m"
  MR_Integer ll_backend__llds_out__llds_out_util__N0_8)
#line 106 "llds_out_util.m"
{
#line 190 "llds_out_util.m"
  {
#line 190 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__N0_8 > (MR_Integer) 0);

#line 190 "llds_out_util.m"
    if (ll_backend__llds_out__llds_out_util__succeeded)
#line 191 "llds_out_util.m"
      {
#line 191 "llds_out_util.m"
        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_util__LaterIndent_7);
      }
#line 190 "llds_out_util.m"
    else
#line 193 "llds_out_util.m"
      {
#line 193 "llds_out_util.m"
        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_util__FirstIndent_6);
      }
#line 190 "llds_out_util.m"
  }
#line 106 "llds_out_util.m"
}

#line 102 "llds_out_util.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(
#line 102 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclId_3,
#line 102 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclSet_4)
#line 102 "llds_out_util.m"
{
#line 185 "llds_out_util.m"
  {
#line 185 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 185 "llds_out_util.m"
    {
#line 185 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0, ll_backend__llds_out__llds_out_util__DeclSet_4, ((MR_Box) (ll_backend__llds_out__llds_out_util__DeclId_3)));
    }
#line 185 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__succeeded;
#line 185 "llds_out_util.m"
  }
#line 102 "llds_out_util.m"
}

#line 100 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(
#line 100 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclId_4,
#line 100 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__DeclSet0_5,
#line 100 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__DeclSet_6)
#line 100 "llds_out_util.m"
{
#line 182 "llds_out_util.m"
  {
#line 182 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 182 "llds_out_util.m"
    {
#line 182 "llds_out_util.m"
      mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0, ((MR_Box) (ll_backend__llds_out__llds_out_util__DeclId_4)), ll_backend__llds_out__llds_out_util__DeclSet0_5, ll_backend__llds_out__llds_out_util__DeclSet_6);
    }
#line 182 "llds_out_util.m"
  }
#line 100 "llds_out_util.m"
}

#line 98 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(
#line 98 "llds_out_util.m"
  MR_Word * ll_backend__llds_out__llds_out_util__DeclSet_2)
#line 98 "llds_out_util.m"
{
#line 179 "llds_out_util.m"
  {
#line 179 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

#line 179 "llds_out_util.m"
    {
#line 179 "llds_out_util.m"
      *ll_backend__llds_out__llds_out_util__DeclSet_2 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0);
    }
#line 179 "llds_out_util.m"
  }
#line 98 "llds_out_util.m"
}

#line 76 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(
#line 76 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Info_4)
#line 76 "llds_out_util.m"
{
#line 165 "llds_out_util.m"
  {
#line 165 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 165 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LineNumbers_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 0)));
#line 166 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 1)));
#line 166 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 2)));
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 3)));
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 4)));
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 5)));
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 6)));
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 166 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_4, (MR_Integer) 8)));

#line 170 "llds_out_util.m"
#line 170 "llds_out_util.m"
    switch (ll_backend__llds_out__llds_out_util__LineNumbers_6) {
#line 170 "llds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 170 "llds_out_util.m"
      case (MR_Integer) 0:
#line 171 "llds_out_util.m"
        {
#line 171 "llds_out_util.m"
        }
#line 170 "llds_out_util.m"
        break;
#line 170 "llds_out_util.m"
      case (MR_Integer) 1:
#line 168 "llds_out_util.m"
        {
#line 169 "llds_out_util.m"
          {
#line 169 "llds_out_util.m"
            backend_libs__c_util__always_reset_line_num_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 168 "llds_out_util.m"
        }
#line 170 "llds_out_util.m"
        break;
#line 170 "llds_out_util.m"
    }
#line 165 "llds_out_util.m"
  }
#line 76 "llds_out_util.m"
}

#line 73 "llds_out_util.m"
void MR_CALL 
ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(
#line 73 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Info_5,
#line 73 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Context_6)
#line 73 "llds_out_util.m"
{
#line 154 "llds_out_util.m"
  {
#line 154 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 154 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LineNumbers_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 0)));
#line 155 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 1)));
#line 155 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 2)));
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 3)));
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 4)));
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 5)));
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 6)));
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 155 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_5, (MR_Integer) 8)));

#line 161 "llds_out_util.m"
#line 161 "llds_out_util.m"
    switch (ll_backend__llds_out__llds_out_util__LineNumbers_8) {
#line 161 "llds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 161 "llds_out_util.m"
      case (MR_Integer) 0:
#line 162 "llds_out_util.m"
        {
#line 162 "llds_out_util.m"
        }
#line 161 "llds_out_util.m"
        break;
#line 161 "llds_out_util.m"
      case (MR_Integer) 1:
#line 157 "llds_out_util.m"
        {
#line 157 "llds_out_util.m"
          MR_String ll_backend__llds_out__llds_out_util__File_9;
#line 157 "llds_out_util.m"
          MR_Integer ll_backend__llds_out__llds_out_util__Line_10;

#line 158 "llds_out_util.m"
          {
#line 158 "llds_out_util.m"
            mercury__term__context_file_2_p_0(ll_backend__llds_out__llds_out_util__Context_6, &ll_backend__llds_out__llds_out_util__File_9);
          }
#line 159 "llds_out_util.m"
          {
#line 159 "llds_out_util.m"
            mercury__term__context_line_2_p_0(ll_backend__llds_out__llds_out_util__Context_6, &ll_backend__llds_out__llds_out_util__Line_10);
          }
#line 160 "llds_out_util.m"
          {
#line 160 "llds_out_util.m"
            backend_libs__c_util__always_set_line_num_4_p_0(ll_backend__llds_out__llds_out_util__File_9, ll_backend__llds_out__llds_out_util__Line_10);
          }
#line 157 "llds_out_util.m"
        }
#line 161 "llds_out_util.m"
        break;
#line 161 "llds_out_util.m"
    }
#line 154 "llds_out_util.m"
  }
#line 73 "llds_out_util.m"
}

#line 68 "llds_out_util.m"
MR_Word MR_CALL 
ll_backend__llds_out__llds_out_util__init_llds_out_info_7_f_0(
#line 68 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__ModuleName_9,
#line 68 "llds_out_util.m"
  MR_String ll_backend__llds_out__llds_out_util__SourceFileName_10,
#line 68 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__Globals_11,
#line 68 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__InternalLabelToLayoutMap_12,
#line 68 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__EntryLabelToLayoutMap_13,
#line 68 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__TableIoEntryMap_14,
#line 68 "llds_out_util.m"
  MR_Word ll_backend__llds_out__llds_out_util__AllocSiteMap_15)
#line 68 "llds_out_util.m"
{
#line 126 "llds_out_util.m"
  {
#line 126 "llds_out_util.m"
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__Info_16;
#line 126 "llds_out_util.m"
    MR_String ll_backend__llds_out__llds_out_util__MangledModuleName_17;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__AutoComments_18;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LineNumbers_19;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__EmitCLoops_20;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__GenerateBytecode_21;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_22;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileCalls_23;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileTime_24;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileMemory_25;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__ProfileDeep_26;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__UnboxedFloat_27;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__DetStackDwordAligment_28;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__StaticGroundFloats_29;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_30;
#line 126 "llds_out_util.m"
    MR_Word ll_backend__llds_out__llds_out_util__TraceLevel_31;

#line 127 "llds_out_util.m"
    {
#line 127 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__MangledModuleName_17 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__llds_out__llds_out_util__ModuleName_9);
    }
#line 128 "llds_out_util.m"
    {
#line 128 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 140, &ll_backend__llds_out__llds_out_util__AutoComments_18);
    }
#line 129 "llds_out_util.m"
    {
#line 129 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 138, &ll_backend__llds_out__llds_out_util__LineNumbers_19);
    }
#line 130 "llds_out_util.m"
    {
#line 130 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 475, &ll_backend__llds_out__llds_out_util__EmitCLoops_20);
    }
#line 131 "llds_out_util.m"
    {
#line 131 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 137, &ll_backend__llds_out__llds_out_util__GenerateBytecode_21);
    }
#line 132 "llds_out_util.m"
    {
#line 132 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 478, &ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_22);
    }
#line 134 "llds_out_util.m"
    {
#line 134 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 190, &ll_backend__llds_out__llds_out_util__ProfileCalls_23);
    }
#line 135 "llds_out_util.m"
    {
#line 135 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 191, &ll_backend__llds_out__llds_out_util__ProfileTime_24);
    }
#line 136 "llds_out_util.m"
    {
#line 136 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 192, &ll_backend__llds_out__llds_out_util__ProfileMemory_25);
    }
#line 137 "llds_out_util.m"
    {
#line 137 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 193, &ll_backend__llds_out__llds_out_util__ProfileDeep_26);
    }
#line 138 "llds_out_util.m"
    {
#line 138 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 241, &ll_backend__llds_out__llds_out_util__UnboxedFloat_27);
    }
#line 139 "llds_out_util.m"
    {
#line 139 "llds_out_util.m"
      libs__globals__double_width_floats_on_det_stack_2_p_0(ll_backend__llds_out__llds_out_util__Globals_11, &ll_backend__llds_out__llds_out_util__DetStackDwordAligment_28);
    }
#line 140 "llds_out_util.m"
    {
#line 140 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 444, &ll_backend__llds_out__llds_out_util__StaticGroundFloats_29);
    }
#line 142 "llds_out_util.m"
    {
#line 142 "llds_out_util.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 474, &ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_30);
    }
#line 144 "llds_out_util.m"
    {
#line 144 "llds_out_util.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__llds_out__llds_out_util__Globals_11, &ll_backend__llds_out__llds_out_util__TraceLevel_31);
    }
#line 145 "llds_out_util.m"
    {
#line 145 "llds_out_util.m"
      ll_backend__llds_out__llds_out_util__Info_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 145 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_util__ModuleName_9));
#line 145 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_util__MangledModuleName_17));
#line 145 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_util__SourceFileName_10));
#line 145 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_util__InternalLabelToLayoutMap_12));
#line 145 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 4) = ((MR_Box) (ll_backend__llds_out__llds_out_util__EntryLabelToLayoutMap_13));
#line 145 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_util__TableIoEntryMap_14));
#line 145 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 6) = ((MR_Box) (ll_backend__llds_out__llds_out_util__AllocSiteMap_15));
#line 145 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 7) = ((MR_Box) ((ll_backend__llds_out__llds_out_util__AutoComments_18 | ((((ll_backend__llds_out__llds_out_util__LineNumbers_19 << (MR_Integer) 1)) | ((((ll_backend__llds_out__llds_out_util__EmitCLoops_20 << (MR_Integer) 2)) | ((((ll_backend__llds_out__llds_out_util__GenerateBytecode_21 << (MR_Integer) 3)) | ((((ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_22 << (MR_Integer) 4)) | ((((ll_backend__llds_out__llds_out_util__ProfileCalls_23 << (MR_Integer) 5)) | ((((ll_backend__llds_out__llds_out_util__ProfileTime_24 << (MR_Integer) 6)) | ((((ll_backend__llds_out__llds_out_util__ProfileMemory_25 << (MR_Integer) 7)) | ((((ll_backend__llds_out__llds_out_util__ProfileDeep_26 << (MR_Integer) 8)) | ((((ll_backend__llds_out__llds_out_util__UnboxedFloat_27 << (MR_Integer) 9)) | ((((ll_backend__llds_out__llds_out_util__DetStackDwordAligment_28 << (MR_Integer) 10)) | ((((ll_backend__llds_out__llds_out_util__StaticGroundFloats_29 << (MR_Integer) 11)) | ((((ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_30 << (MR_Integer) 12)) | ((ll_backend__llds_out__llds_out_util__TraceLevel_31 << (MR_Integer) 13)))))))))))))))))))))))))))));
#line 145 "llds_out_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 8) = ((MR_Box) (ll_backend__llds_out__llds_out_util__Globals_11));
#line 145 "llds_out_util.m"
    }
#line 126 "llds_out_util.m"
    return ll_backend__llds_out__llds_out_util__Info_16;
#line 126 "llds_out_util.m"
  }
#line 68 "llds_out_util.m"
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
