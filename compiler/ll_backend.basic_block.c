/*
** Automatically generated from `basic_block.m'
** by the Mercury compiler,
** version DEV
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


/* :- module ll_backend.basic_block. */
/* :- implementation. */

/*
INIT mercury__ll_backend__basic_block__init
ENDINIT
*/

#include "ll_backend.basic_block.mih"


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
#include "backend_libs.builtin_ops.mih"
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
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




#line 149 "ll_backend.basic_block.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 152 "ll_backend.basic_block.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

#line 155 "ll_backend.basic_block.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

#line 158 "ll_backend.basic_block.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 161 "ll_backend.basic_block.c"
static const MR_PseudoTypeInfo ll_backend__basic_block__ll_backend__basic_block__field_types_block_info_0_0[7];

#line 164 "ll_backend.basic_block.c"
static const MR_ConstString ll_backend__basic_block__ll_backend__basic_block__field_names_block_info_0_0[7];

#line 167 "ll_backend.basic_block.c"
static const MR_DuFunctorDesc ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0;

#line 170 "ll_backend.basic_block.c"
static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_stag_ordered_block_info_0_0[1];

#line 173 "ll_backend.basic_block.c"
static const MR_DuPtagLayout ll_backend__basic_block__ll_backend__basic_block__du_ptag_ordered_block_info_0[1];

#line 176 "ll_backend.basic_block.c"
static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_name_ordered_block_info_0[1];

#line 179 "ll_backend.basic_block.c"
static const MR_Integer ll_backend__basic_block__ll_backend__basic_block__functor_number_map_block_info_0[1];

#line 182 "ll_backend.basic_block.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__basic_block__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__basic_block__type_ctor_info_block_info_0;

#line 185 "ll_backend.basic_block.c"
static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_info_0_0_10001(
#line 188 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_1,
#line 190 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_2);

#line 193 "ll_backend.basic_block.c"
static void MR_CALL 
ll_backend__basic_block____Compare____block_info_0_0_10001(
#line 196 "ll_backend.basic_block.c"
  MR_Box * ll_backend__basic_block__wrapper_arg_1,
#line 198 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_2,
#line 200 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_3);

#line 203 "ll_backend.basic_block.c"
static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_map_0_0_10001(
#line 206 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_1,
#line 208 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_2);

#line 211 "ll_backend.basic_block.c"
static void MR_CALL 
ll_backend__basic_block____Compare____block_map_0_0_10001(
#line 214 "ll_backend.basic_block.c"
  MR_Box * ll_backend__basic_block__wrapper_arg_1,
#line 216 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_2,
#line 218 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_3);

#line 186 "basic_block.m"
static void MR_CALL 
ll_backend__basic_block__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(
#line 186 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__1_1,
#line 186 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_List_0_2,
#line 186 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_List_3,
#line 186 "basic_block.m"
  MR_Integer ll_backend__basic_block__STATE_VARIABLE_N_0_4,
#line 186 "basic_block.m"
  MR_Integer * ll_backend__basic_block__STATE_VARIABLE_N_5);

#line 228 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_p_0(
#line 228 "basic_block.m"
  MR_Word ll_backend__basic_block__NextBlockFallInto_30,
#line 228 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__2_54);

#line 226 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_p_0(
#line 226 "basic_block.m"
  MR_Word ll_backend__basic_block__BlockMaybeFallThrough_25,
#line 226 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__2_49);

#line 224 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_p_0(
#line 224 "basic_block.m"
  MR_Word ll_backend__basic_block__NextLabel_15,
#line 224 "basic_block.m"
  MR_Word ll_backend__basic_block__NextBlockLabel_26);

#line 222 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__222__1_2_p_0(
#line 222 "basic_block.m"
  MR_Word ll_backend__basic_block__Label_10,
#line 222 "basic_block.m"
  MR_Word ll_backend__basic_block__BlockLabel_19);

#line 169 "basic_block.m"
static void MR_CALL 
ll_backend__basic_block__take_until_end_of_block_4_p_0(
#line 169 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__1_1,
#line 169 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_0_2,
#line 169 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_3,
#line 169 "basic_block.m"
  MR_Word * ll_backend__basic_block__HeadVar__4_4);

#line 120 "basic_block.m"
static void MR_CALL 
ll_backend__basic_block__build_block_map_10_p_0(
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__1_1,
#line 120 "basic_block.m"
  MR_Word * ll_backend__basic_block__HeadVar__2_2,
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__ProcLabel_3,
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__FallInto_4,
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_BlockMap_0_5,
#line 120 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_BlockMap_6,
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_NewLabels_0_7,
#line 120 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_NewLabels_8,
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_C_0_9,
#line 120 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_C_10);

#line 228 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_4(
#line 228 "basic_block.m"
  MR_Box ll_backend__basic_block__closure_arg);

#line 226 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_3(
#line 226 "basic_block.m"
  MR_Box ll_backend__basic_block__closure_arg);

#line 224 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_2(
#line 224 "basic_block.m"
  MR_Box ll_backend__basic_block__closure_arg);

#line 222 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_1(
#line 222 "basic_block.m"
  MR_Box ll_backend__basic_block__closure_arg);


static /* final */ const MR_Box ll_backend__basic_block_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_3[3][5];




static /* final */ const MR_Box ll_backend__basic_block_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0))
  },
};

static /* final */ const MR_Box ll_backend__basic_block_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 400 "ll_backend.basic_block.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__basic_block__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 408 "ll_backend.basic_block.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 416 "ll_backend.basic_block.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 424 "ll_backend.basic_block.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__basic_block__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 432 "ll_backend.basic_block.c"
static const MR_PseudoTypeInfo ll_backend__basic_block__ll_backend__basic_block__field_types_block_info_0_0[7] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__basic_block__list__ti_list_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__basic_block__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0
};

#line 443 "ll_backend.basic_block.c"
static const MR_ConstString ll_backend__basic_block__ll_backend__basic_block__field_names_block_info_0_0[7] = {
  (MR_String) "bi_starting_label",
  (MR_String) "bi_label_instr",
  (MR_String) "bi_later_instrs",
  (MR_String) "bi_num_later_instrs",
  (MR_String) "bi_fallen_into",
  (MR_String) "bi_jump_dests",
  (MR_String) "bi_fall_dest"
};

#line 454 "ll_backend.basic_block.c"
static const MR_DuFunctorDesc ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0 = {
  (MR_String) "block_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__basic_block__ll_backend__basic_block__field_types_block_info_0_0,
  ll_backend__basic_block__ll_backend__basic_block__field_names_block_info_0_0,
  NULL,
  NULL
};

#line 469 "ll_backend.basic_block.c"
static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_stag_ordered_block_info_0_0[1] = {
  &ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0
};

#line 474 "ll_backend.basic_block.c"
static const MR_DuPtagLayout ll_backend__basic_block__ll_backend__basic_block__du_ptag_ordered_block_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__basic_block__ll_backend__basic_block__du_stag_ordered_block_info_0_0
  }
};

#line 483 "ll_backend.basic_block.c"
static const MR_DuFunctorDescPtr ll_backend__basic_block__ll_backend__basic_block__du_name_ordered_block_info_0[1] = {
  &ll_backend__basic_block__ll_backend__basic_block__du_functor_desc_block_info_0_0
};

#line 488 "ll_backend.basic_block.c"
static const MR_Integer ll_backend__basic_block__ll_backend__basic_block__functor_number_map_block_info_0[1] = {
  (MR_Integer) 0
};

#line 493 "ll_backend.basic_block.c"
const MR_TypeCtorInfo_Struct ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__basic_block____Unify____block_info_0_0_10001)),
  ((MR_Box) (ll_backend__basic_block____Compare____block_info_0_0_10001)),
  (MR_String) "ll_backend.basic_block",
  (MR_String) "block_info",
  {     ll_backend__basic_block__ll_backend__basic_block__du_name_ordered_block_info_0 },
  {     ll_backend__basic_block__ll_backend__basic_block__du_ptag_ordered_block_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__basic_block__ll_backend__basic_block__functor_number_map_block_info_0
};

#line 510 "ll_backend.basic_block.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__basic_block__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__basic_block__type_ctor_info_block_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0
  }
};

#line 519 "ll_backend.basic_block.c"
const MR_TypeCtorInfo_Struct ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__basic_block____Unify____block_map_0_0_10001)),
  ((MR_Box) (ll_backend__basic_block____Compare____block_map_0_0_10001)),
  (MR_String) "ll_backend.basic_block",
  (MR_String) "block_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__basic_block__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__basic_block__type_ctor_info_block_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 536 "ll_backend.basic_block.c"
static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_info_0_0_10001(
#line 539 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_1,
#line 541 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_2)
#line 543 "ll_backend.basic_block.c"
{
#line 545 "ll_backend.basic_block.c"
  {
#line 547 "ll_backend.basic_block.c"
    MR_bool ll_backend__basic_block__succeeded;

#line 550 "ll_backend.basic_block.c"
    {
#line 552 "ll_backend.basic_block.c"
      ll_backend__basic_block__succeeded = ll_backend__basic_block____Unify____block_info_0_0(((MR_Word) ll_backend__basic_block__wrapper_arg_1), ((MR_Word) ll_backend__basic_block__wrapper_arg_2));
    }
#line 555 "ll_backend.basic_block.c"
    return ll_backend__basic_block__succeeded;
#line 557 "ll_backend.basic_block.c"
  }
#line 559 "ll_backend.basic_block.c"
}

#line 562 "ll_backend.basic_block.c"
static void MR_CALL 
ll_backend__basic_block____Compare____block_info_0_0_10001(
#line 565 "ll_backend.basic_block.c"
  MR_Box * ll_backend__basic_block__wrapper_arg_1,
#line 567 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_2,
#line 569 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_3)
#line 571 "ll_backend.basic_block.c"
{
#line 573 "ll_backend.basic_block.c"
  {
#line 575 "ll_backend.basic_block.c"
    MR_Word ll_backend__basic_block__conv0_HeadVar__1_1;

#line 578 "ll_backend.basic_block.c"
    {
#line 580 "ll_backend.basic_block.c"
      ll_backend__basic_block____Compare____block_info_0_0(&ll_backend__basic_block__conv0_HeadVar__1_1, ((MR_Word) ll_backend__basic_block__wrapper_arg_2), ((MR_Word) ll_backend__basic_block__wrapper_arg_3));
    }
#line 583 "ll_backend.basic_block.c"
    *ll_backend__basic_block__wrapper_arg_1 = ((MR_Box) (ll_backend__basic_block__conv0_HeadVar__1_1));
#line 585 "ll_backend.basic_block.c"
  }
#line 587 "ll_backend.basic_block.c"
}

#line 590 "ll_backend.basic_block.c"
static MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_map_0_0_10001(
#line 593 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_1,
#line 595 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_2)
#line 597 "ll_backend.basic_block.c"
{
#line 599 "ll_backend.basic_block.c"
  {
#line 601 "ll_backend.basic_block.c"
    MR_bool ll_backend__basic_block__succeeded;

#line 604 "ll_backend.basic_block.c"
    {
#line 606 "ll_backend.basic_block.c"
      ll_backend__basic_block__succeeded = ll_backend__basic_block____Unify____block_map_0_0(((MR_Word) ll_backend__basic_block__wrapper_arg_1), ((MR_Word) ll_backend__basic_block__wrapper_arg_2));
    }
#line 609 "ll_backend.basic_block.c"
    return ll_backend__basic_block__succeeded;
#line 611 "ll_backend.basic_block.c"
  }
#line 613 "ll_backend.basic_block.c"
}

#line 616 "ll_backend.basic_block.c"
static void MR_CALL 
ll_backend__basic_block____Compare____block_map_0_0_10001(
#line 619 "ll_backend.basic_block.c"
  MR_Box * ll_backend__basic_block__wrapper_arg_1,
#line 621 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_2,
#line 623 "ll_backend.basic_block.c"
  MR_Box ll_backend__basic_block__wrapper_arg_3)
#line 625 "ll_backend.basic_block.c"
{
#line 627 "ll_backend.basic_block.c"
  {
#line 629 "ll_backend.basic_block.c"
    MR_Word ll_backend__basic_block__conv0_HeadVar__1_1;

#line 632 "ll_backend.basic_block.c"
    {
#line 634 "ll_backend.basic_block.c"
      ll_backend__basic_block____Compare____block_map_0_0(&ll_backend__basic_block__conv0_HeadVar__1_1, ((MR_Word) ll_backend__basic_block__wrapper_arg_2), ((MR_Word) ll_backend__basic_block__wrapper_arg_3));
    }
#line 637 "ll_backend.basic_block.c"
    *ll_backend__basic_block__wrapper_arg_1 = ((MR_Box) (ll_backend__basic_block__conv0_HeadVar__1_1));
#line 639 "ll_backend.basic_block.c"
  }
#line 641 "ll_backend.basic_block.c"
}

#line 186 "basic_block.m"
static void MR_CALL 
ll_backend__basic_block__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(
#line 186 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__1_1,
#line 186 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_List_0_2,
#line 186 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_List_3,
#line 186 "basic_block.m"
  MR_Integer ll_backend__basic_block__STATE_VARIABLE_N_0_4,
#line 186 "basic_block.m"
  MR_Integer * ll_backend__basic_block__STATE_VARIABLE_N_5)
#line 186 "basic_block.m"
{
#line 189 "basic_block.m"
  while (MR_TRUE)
#line 189 "basic_block.m"
    {
#line 189 "basic_block.m"
      /* tailcall optimized into a loop */
#line 189 "basic_block.m"
      {
#line 189 "basic_block.m"
        MR_bool ll_backend__basic_block__succeeded;

#line 189 "basic_block.m"
        if ((ll_backend__basic_block__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "basic_block.m"
          {
#line 189 "basic_block.m"
            *ll_backend__basic_block__STATE_VARIABLE_N_5 = ll_backend__basic_block__STATE_VARIABLE_N_0_4;
#line 189 "basic_block.m"
            *ll_backend__basic_block__STATE_VARIABLE_List_3 = ll_backend__basic_block__STATE_VARIABLE_List_0_2;
#line 189 "basic_block.m"
          }
#line 189 "basic_block.m"
        else
#line 190 "basic_block.m"
          {
#line 190 "basic_block.m"
            MR_Box ll_backend__basic_block__X_12 = (MR_hl_field(MR_mktag(1), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 0));
#line 190 "basic_block.m"
            MR_Word ll_backend__basic_block__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 1)));
#line 190 "basic_block.m"
            MR_Word ll_backend__basic_block__STATE_VARIABLE_List_20_20;
#line 190 "basic_block.m"
            MR_Integer ll_backend__basic_block__STATE_VARIABLE_N_21_21;

#line 191 "basic_block.m"
            {
#line 191 "basic_block.m"
              ll_backend__basic_block__STATE_VARIABLE_List_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "basic_block.m"
              MR_hl_field(MR_mktag(1), ll_backend__basic_block__STATE_VARIABLE_List_20_20, 0) = ll_backend__basic_block__X_12;
#line 191 "basic_block.m"
              MR_hl_field(MR_mktag(1), ll_backend__basic_block__STATE_VARIABLE_List_20_20, 1) = ((MR_Box) (ll_backend__basic_block__STATE_VARIABLE_List_0_2));
#line 191 "basic_block.m"
            }
#line 192 "basic_block.m"
            ll_backend__basic_block__STATE_VARIABLE_N_21_21 = (ll_backend__basic_block__STATE_VARIABLE_N_0_4 + (MR_Integer) 1);
#line 193 "basic_block.m"
            /* direct tailcall eliminated */
#line 193 "basic_block.m"
            {
#line 193 "basic_block.m"
              MR_Word ll_backend__basic_block__HeadVar__1__tmp_copy_1 = ll_backend__basic_block__Xs_13;
#line 193 "basic_block.m"
              MR_Word ll_backend__basic_block__STATE_VARIABLE_List_0__tmp_copy_2 = ll_backend__basic_block__STATE_VARIABLE_List_20_20;
#line 193 "basic_block.m"
              MR_Integer ll_backend__basic_block__STATE_VARIABLE_N_0__tmp_copy_4 = ll_backend__basic_block__STATE_VARIABLE_N_21_21;

#line 193 "basic_block.m"
              ll_backend__basic_block__STATE_VARIABLE_N_0_4 = ll_backend__basic_block__STATE_VARIABLE_N_0__tmp_copy_4;
#line 193 "basic_block.m"
              ll_backend__basic_block__STATE_VARIABLE_List_0_2 = ll_backend__basic_block__STATE_VARIABLE_List_0__tmp_copy_2;
#line 193 "basic_block.m"
              ll_backend__basic_block__HeadVar__1_1 = ll_backend__basic_block__HeadVar__1__tmp_copy_1;
#line 193 "basic_block.m"
            }
#line 193 "basic_block.m"
            continue;
#line 190 "basic_block.m"
          }
#line 189 "basic_block.m"
      }
#line 189 "basic_block.m"
      break;
#line 189 "basic_block.m"
    }
#line 186 "basic_block.m"
}

#line 228 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_p_0(
#line 228 "basic_block.m"
  MR_Word ll_backend__basic_block__NextBlockFallInto_30,
#line 228 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__2_54)
#line 228 "basic_block.m"
{
#line 228 "basic_block.m"
  {
#line 228 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded = (ll_backend__basic_block__NextBlockFallInto_30 == ll_backend__basic_block__HeadVar__2_54);

#line 228 "basic_block.m"
    return ll_backend__basic_block__succeeded;
#line 228 "basic_block.m"
  }
#line 228 "basic_block.m"
}

#line 226 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_p_0(
#line 226 "basic_block.m"
  MR_Word ll_backend__basic_block__BlockMaybeFallThrough_25,
#line 226 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__2_49)
#line 226 "basic_block.m"
{
#line 226 "basic_block.m"
  {
#line 226 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;

#line 226 "basic_block.m"
    {
#line 226 "basic_block.m"
      return ll_backend__basic_block__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__basic_block_scalar_common_1[0], ((MR_Box) (ll_backend__basic_block__BlockMaybeFallThrough_25)), ((MR_Box) (ll_backend__basic_block__HeadVar__2_49)));
    }
#line 226 "basic_block.m"
    return ll_backend__basic_block__succeeded;
#line 226 "basic_block.m"
  }
#line 226 "basic_block.m"
}

#line 224 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_p_0(
#line 224 "basic_block.m"
  MR_Word ll_backend__basic_block__NextLabel_15,
#line 224 "basic_block.m"
  MR_Word ll_backend__basic_block__NextBlockLabel_26)
#line 224 "basic_block.m"
{
#line 224 "basic_block.m"
  {
#line 224 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;

#line 224 "basic_block.m"
    {
#line 224 "basic_block.m"
      return ll_backend__basic_block__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__basic_block__NextBlockLabel_26, ll_backend__basic_block__NextLabel_15);
    }
#line 224 "basic_block.m"
    return ll_backend__basic_block__succeeded;
#line 224 "basic_block.m"
  }
#line 224 "basic_block.m"
}

#line 222 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__222__1_2_p_0(
#line 222 "basic_block.m"
  MR_Word ll_backend__basic_block__Label_10,
#line 222 "basic_block.m"
  MR_Word ll_backend__basic_block__BlockLabel_19)
#line 222 "basic_block.m"
{
#line 222 "basic_block.m"
  {
#line 222 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;

#line 222 "basic_block.m"
    {
#line 222 "basic_block.m"
      return ll_backend__basic_block__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__basic_block__BlockLabel_19, ll_backend__basic_block__Label_10);
    }
#line 222 "basic_block.m"
    return ll_backend__basic_block__succeeded;
#line 222 "basic_block.m"
  }
#line 222 "basic_block.m"
}

#line 33 "basic_block.m"
void MR_CALL 
ll_backend__basic_block____Compare____block_map_0_0(
#line 33 "basic_block.m"
  MR_Word * ll_backend__basic_block__HeadVar__1_1,
#line 33 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__2_2,
#line 33 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__3_3)
#line 33 "basic_block.m"
{
#line 33 "basic_block.m"
  {
#line 33 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;
#line 33 "basic_block.m"
    MR_Word ll_backend__basic_block__Cast_HeadVar1_4 = ll_backend__basic_block__HeadVar__2_2;
#line 33 "basic_block.m"
    MR_Word ll_backend__basic_block__Cast_HeadVar2_5 = ll_backend__basic_block__HeadVar__3_3;

#line 33 "basic_block.m"
    {
#line 33 "basic_block.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__basic_block_scalar_common_2[0], ll_backend__basic_block__HeadVar__1_1, ((MR_Box) (ll_backend__basic_block__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__basic_block__Cast_HeadVar2_5)));
#line 33 "basic_block.m"
      return;
    }
#line 33 "basic_block.m"
  }
#line 33 "basic_block.m"
}

#line 33 "basic_block.m"
MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_map_0_0(
#line 33 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__1_1,
#line 33 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__2_2)
#line 33 "basic_block.m"
{
#line 33 "basic_block.m"
  {
#line 33 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;
#line 33 "basic_block.m"
    MR_Word ll_backend__basic_block__Cast_HeadVar1_3 = ll_backend__basic_block__HeadVar__1_1;
#line 33 "basic_block.m"
    MR_Word ll_backend__basic_block__Cast_HeadVar2_4 = ll_backend__basic_block__HeadVar__2_2;

#line 33 "basic_block.m"
    {
#line 33 "basic_block.m"
      return ll_backend__basic_block__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__basic_block_scalar_common_2[0], ((MR_Box) (ll_backend__basic_block__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__basic_block__Cast_HeadVar2_4)));
    }
#line 33 "basic_block.m"
    return ll_backend__basic_block__succeeded;
#line 33 "basic_block.m"
  }
#line 33 "basic_block.m"
}

#line 35 "basic_block.m"
void MR_CALL 
ll_backend__basic_block____Compare____block_info_0_0(
#line 35 "basic_block.m"
  MR_Word * ll_backend__basic_block__HeadVar__1_1,
#line 35 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__2_2,
#line 35 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__3_3)
#line 35 "basic_block.m"
{
#line 35 "basic_block.m"
  {
#line 35 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;
#line 35 "basic_block.m"
    MR_Integer ll_backend__basic_block__CastX_24 = (MR_Integer) ll_backend__basic_block__HeadVar__2_2;
#line 35 "basic_block.m"
    MR_Integer ll_backend__basic_block__CastY_25 = (MR_Integer) ll_backend__basic_block__HeadVar__3_3;

#line 35 "basic_block.m"
    ll_backend__basic_block__succeeded = (ll_backend__basic_block__CastX_24 == ll_backend__basic_block__CastY_25);
#line 35 "basic_block.m"
    if (ll_backend__basic_block__succeeded)
#line 922 "ll_backend.basic_block.c"
      *ll_backend__basic_block__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "basic_block.m"
    else
#line 35 "basic_block.m"
      {
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 2)));
#line 35 "basic_block.m"
        MR_Integer ll_backend__basic_block__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 3)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 4)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 5)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 6)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__3_3, (MR_Integer) 0)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__3_3, (MR_Integer) 1)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__3_3, (MR_Integer) 2)));
#line 35 "basic_block.m"
        MR_Integer ll_backend__basic_block__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__3_3, (MR_Integer) 3)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__3_3, (MR_Integer) 4)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__3_3, (MR_Integer) 5)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__3_3, (MR_Integer) 6)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_18_18;

#line 35 "basic_block.m"
        {
#line 35 "basic_block.m"
          ll_backend__llds____Compare____label_0_0(&ll_backend__basic_block__V_18_18, ll_backend__basic_block__V_4_4, ll_backend__basic_block__V_11_11);
        }
#line 964 "ll_backend.basic_block.c"
        ll_backend__basic_block__succeeded = (ll_backend__basic_block__V_18_18 == (MR_Integer) 0);
#line 35 "basic_block.m"
        ll_backend__basic_block__succeeded = !(ll_backend__basic_block__succeeded);
#line 35 "basic_block.m"
        if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
          *ll_backend__basic_block__HeadVar__1_1 = ll_backend__basic_block__V_18_18;
#line 35 "basic_block.m"
        else
#line 35 "basic_block.m"
          {
#line 35 "basic_block.m"
            MR_Word ll_backend__basic_block__V_19_19;

#line 35 "basic_block.m"
            {
#line 35 "basic_block.m"
              ll_backend__llds____Compare____instruction_0_0(&ll_backend__basic_block__V_19_19, ll_backend__basic_block__V_5_5, ll_backend__basic_block__V_12_12);
            }
#line 984 "ll_backend.basic_block.c"
            ll_backend__basic_block__succeeded = (ll_backend__basic_block__V_19_19 == (MR_Integer) 0);
#line 35 "basic_block.m"
            ll_backend__basic_block__succeeded = !(ll_backend__basic_block__succeeded);
#line 35 "basic_block.m"
            if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
              *ll_backend__basic_block__HeadVar__1_1 = ll_backend__basic_block__V_19_19;
#line 35 "basic_block.m"
            else
#line 35 "basic_block.m"
              {
#line 35 "basic_block.m"
                MR_Word ll_backend__basic_block__V_20_20;

#line 35 "basic_block.m"
                {
#line 35 "basic_block.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__basic_block_scalar_common_1[1], &ll_backend__basic_block__V_20_20, ((MR_Box) (ll_backend__basic_block__V_6_6)), ((MR_Box) (ll_backend__basic_block__V_13_13)));
                }
#line 1004 "ll_backend.basic_block.c"
                ll_backend__basic_block__succeeded = (ll_backend__basic_block__V_20_20 == (MR_Integer) 0);
#line 35 "basic_block.m"
                ll_backend__basic_block__succeeded = !(ll_backend__basic_block__succeeded);
#line 35 "basic_block.m"
                if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
                  *ll_backend__basic_block__HeadVar__1_1 = ll_backend__basic_block__V_20_20;
#line 35 "basic_block.m"
                else
#line 35 "basic_block.m"
                  {
#line 35 "basic_block.m"
                    MR_Word ll_backend__basic_block__V_21_21;

#line 35 "basic_block.m"
                    {
#line 35 "basic_block.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__basic_block__V_21_21, ll_backend__basic_block__V_7_7, ll_backend__basic_block__V_14_14);
                    }
#line 1024 "ll_backend.basic_block.c"
                    ll_backend__basic_block__succeeded = (ll_backend__basic_block__V_21_21 == (MR_Integer) 0);
#line 35 "basic_block.m"
                    ll_backend__basic_block__succeeded = !(ll_backend__basic_block__succeeded);
#line 35 "basic_block.m"
                    if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
                      *ll_backend__basic_block__HeadVar__1_1 = ll_backend__basic_block__V_21_21;
#line 35 "basic_block.m"
                    else
#line 35 "basic_block.m"
                      {
#line 35 "basic_block.m"
                        MR_Word ll_backend__basic_block__V_22_22;
#line 35 "basic_block.m"
                        MR_Integer ll_backend__basic_block__V_33_33 = (MR_Integer) ll_backend__basic_block__V_8_8;
#line 35 "basic_block.m"
                        MR_Integer ll_backend__basic_block__V_34_34 = (MR_Integer) ll_backend__basic_block__V_15_15;

#line 35 "basic_block.m"
                        {
#line 35 "basic_block.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__basic_block__V_22_22, ll_backend__basic_block__V_33_33, ll_backend__basic_block__V_34_34);
                        }
#line 1048 "ll_backend.basic_block.c"
                        ll_backend__basic_block__succeeded = (ll_backend__basic_block__V_22_22 == (MR_Integer) 0);
#line 35 "basic_block.m"
                        ll_backend__basic_block__succeeded = !(ll_backend__basic_block__succeeded);
#line 35 "basic_block.m"
                        if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
                          *ll_backend__basic_block__HeadVar__1_1 = ll_backend__basic_block__V_22_22;
#line 35 "basic_block.m"
                        else
#line 35 "basic_block.m"
                          {
#line 35 "basic_block.m"
                            MR_Word ll_backend__basic_block__V_23_23;

#line 35 "basic_block.m"
                            {
#line 35 "basic_block.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__basic_block_scalar_common_1[2], &ll_backend__basic_block__V_23_23, ((MR_Box) (ll_backend__basic_block__V_9_9)), ((MR_Box) (ll_backend__basic_block__V_16_16)));
                            }
#line 1068 "ll_backend.basic_block.c"
                            ll_backend__basic_block__succeeded = (ll_backend__basic_block__V_23_23 == (MR_Integer) 0);
#line 35 "basic_block.m"
                            ll_backend__basic_block__succeeded = !(ll_backend__basic_block__succeeded);
#line 35 "basic_block.m"
                            if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
                              *ll_backend__basic_block__HeadVar__1_1 = ll_backend__basic_block__V_23_23;
#line 35 "basic_block.m"
                            else
#line 35 "basic_block.m"
                              {
#line 35 "basic_block.m"
                                {
#line 35 "basic_block.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__basic_block_scalar_common_1[0], ll_backend__basic_block__HeadVar__1_1, ((MR_Box) (ll_backend__basic_block__V_10_10)), ((MR_Box) (ll_backend__basic_block__V_17_17)));
#line 35 "basic_block.m"
                                  return;
                                }
#line 35 "basic_block.m"
                              }
#line 35 "basic_block.m"
                          }
#line 35 "basic_block.m"
                      }
#line 35 "basic_block.m"
                  }
#line 35 "basic_block.m"
              }
#line 35 "basic_block.m"
          }
#line 35 "basic_block.m"
      }
#line 35 "basic_block.m"
  }
#line 35 "basic_block.m"
}

#line 35 "basic_block.m"
MR_bool MR_CALL 
ll_backend__basic_block____Unify____block_info_0_0(
#line 35 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__1_1,
#line 35 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__2_2)
#line 35 "basic_block.m"
{
#line 35 "basic_block.m"
  {
#line 35 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;
#line 35 "basic_block.m"
    MR_Integer ll_backend__basic_block__CastX_17 = (MR_Integer) ll_backend__basic_block__HeadVar__1_1;
#line 35 "basic_block.m"
    MR_Integer ll_backend__basic_block__CastY_18 = (MR_Integer) ll_backend__basic_block__HeadVar__2_2;

#line 35 "basic_block.m"
    ll_backend__basic_block__succeeded = (ll_backend__basic_block__CastX_17 == ll_backend__basic_block__CastY_18);
#line 35 "basic_block.m"
    if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
      ll_backend__basic_block__succeeded = MR_TRUE;
#line 35 "basic_block.m"
    else
#line 35 "basic_block.m"
      {
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__TypeInfo_21_21;
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__TypeInfo_22_22;
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__TypeInfo_23_23;
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 1)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 2)));
#line 35 "basic_block.m"
        MR_Integer ll_backend__basic_block__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 3)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 4)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 5)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 6)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 2)));
#line 35 "basic_block.m"
        MR_Integer ll_backend__basic_block__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 3)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 4)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 5)));
#line 35 "basic_block.m"
        MR_Word ll_backend__basic_block__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__HeadVar__2_2, (MR_Integer) 6)));

#line 1169 "ll_backend.basic_block.c"
        {
#line 1171 "ll_backend.basic_block.c"
          ll_backend__basic_block__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__basic_block__V_3_3, ll_backend__basic_block__V_10_10);
        }
#line 35 "basic_block.m"
        if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
          {
#line 1178 "ll_backend.basic_block.c"
            {
#line 1180 "ll_backend.basic_block.c"
              ll_backend__basic_block__succeeded = ll_backend__llds____Unify____instruction_0_0(ll_backend__basic_block__V_4_4, ll_backend__basic_block__V_11_11);
            }
#line 35 "basic_block.m"
            if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
              {
#line 1187 "ll_backend.basic_block.c"
                ll_backend__basic_block__TypeInfo_21_21 = (MR_Word) &ll_backend__basic_block_scalar_common_1[1];
#line 1189 "ll_backend.basic_block.c"
                {
#line 1191 "ll_backend.basic_block.c"
                  ll_backend__basic_block__succeeded = mercury__builtin__unify_2_p_0(ll_backend__basic_block__TypeInfo_21_21, ((MR_Box) (ll_backend__basic_block__V_5_5)), ((MR_Box) (ll_backend__basic_block__V_12_12)));
                }
#line 35 "basic_block.m"
                if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
                  {
#line 1198 "ll_backend.basic_block.c"
                    ll_backend__basic_block__succeeded = (ll_backend__basic_block__V_6_6 == ll_backend__basic_block__V_13_13);
#line 35 "basic_block.m"
                    if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
                      {
#line 1204 "ll_backend.basic_block.c"
                        ll_backend__basic_block__succeeded = (ll_backend__basic_block__V_7_7 == ll_backend__basic_block__V_14_14);
#line 35 "basic_block.m"
                        if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
                          {
#line 1210 "ll_backend.basic_block.c"
                            ll_backend__basic_block__TypeInfo_22_22 = (MR_Word) &ll_backend__basic_block_scalar_common_1[2];
#line 1212 "ll_backend.basic_block.c"
                            {
#line 1214 "ll_backend.basic_block.c"
                              ll_backend__basic_block__succeeded = mercury__builtin__unify_2_p_0(ll_backend__basic_block__TypeInfo_22_22, ((MR_Box) (ll_backend__basic_block__V_8_8)), ((MR_Box) (ll_backend__basic_block__V_15_15)));
                            }
#line 35 "basic_block.m"
                            if (ll_backend__basic_block__succeeded)
#line 35 "basic_block.m"
                              {
#line 1221 "ll_backend.basic_block.c"
                                ll_backend__basic_block__TypeInfo_23_23 = (MR_Word) &ll_backend__basic_block_scalar_common_1[0];
#line 1223 "ll_backend.basic_block.c"
                                {
#line 1225 "ll_backend.basic_block.c"
                                  return ll_backend__basic_block__succeeded = mercury__builtin__unify_2_p_0(ll_backend__basic_block__TypeInfo_23_23, ((MR_Box) (ll_backend__basic_block__V_9_9)), ((MR_Box) (ll_backend__basic_block__V_16_16)));
                                }
#line 35 "basic_block.m"
                              }
#line 35 "basic_block.m"
                          }
#line 35 "basic_block.m"
                      }
#line 35 "basic_block.m"
                  }
#line 35 "basic_block.m"
              }
#line 35 "basic_block.m"
          }
#line 35 "basic_block.m"
      }
#line 35 "basic_block.m"
    return ll_backend__basic_block__succeeded;
#line 35 "basic_block.m"
  }
#line 35 "basic_block.m"
}

#line 169 "basic_block.m"
static void MR_CALL 
ll_backend__basic_block__take_until_end_of_block_4_p_0(
#line 169 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__1_1,
#line 169 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_0_2,
#line 169 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_3,
#line 169 "basic_block.m"
  MR_Word * ll_backend__basic_block__HeadVar__4_4)
#line 169 "basic_block.m"
{
#line 173 "basic_block.m"
  while (MR_TRUE)
#line 173 "basic_block.m"
    {
#line 173 "basic_block.m"
      /* tailcall optimized into a loop */
#line 173 "basic_block.m"
      {
#line 173 "basic_block.m"
        MR_bool ll_backend__basic_block__succeeded;

#line 173 "basic_block.m"
        if ((ll_backend__basic_block__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "basic_block.m"
          {
#line 173 "basic_block.m"
            *ll_backend__basic_block__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 173 "basic_block.m"
            *ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_3 = ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_0_2;
#line 173 "basic_block.m"
          }
#line 173 "basic_block.m"
        else
#line 174 "basic_block.m"
          {
#line 174 "basic_block.m"
            MR_Word ll_backend__basic_block__Instr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 0)));
#line 174 "basic_block.m"
            MR_Word ll_backend__basic_block__Instrs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 1)));
#line 174 "basic_block.m"
            MR_Word ll_backend__basic_block__Uinstr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__Instr0_8, (MR_Integer) 0)));
#line 175 "basic_block.m"
            MR_String ll_backend__basic_block___Comment_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__Instr0_8, (MR_Integer) 1)));
#line 176 "basic_block.m"
            MR_Word ll_backend__basic_block__V_14_14;

#line 176 "basic_block.m"
            ll_backend__basic_block__succeeded = ((((MR_tag((MR_Word) ll_backend__basic_block__Uinstr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__basic_block__Uinstr0_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 176 "basic_block.m"
            if (ll_backend__basic_block__succeeded)
#line 176 "basic_block.m"
              {
#line 176 "basic_block.m"
                ll_backend__basic_block__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__basic_block__Uinstr0_12, (MR_Integer) 1)));
#line 177 "basic_block.m"
                *ll_backend__basic_block__HeadVar__4_4 = ll_backend__basic_block__HeadVar__1_1;
#line 177 "basic_block.m"
                *ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_3 = ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_0_2;
#line 176 "basic_block.m"
              }
#line 176 "basic_block.m"
            else
#line 181 "basic_block.m"
              {
#line 178 "basic_block.m"
                MR_Word ll_backend__basic_block__V_17_17;

#line 178 "basic_block.m"
                {
#line 178 "basic_block.m"
                  ll_backend__basic_block__V_17_17 = ll_backend__opt_util__can_instr_branch_away_1_f_0(ll_backend__basic_block__Uinstr0_12);
                }
#line 178 "basic_block.m"
                ll_backend__basic_block__succeeded = (ll_backend__basic_block__V_17_17 == (MR_Integer) 1);
#line 181 "basic_block.m"
                if (ll_backend__basic_block__succeeded)
#line 179 "basic_block.m"
                  {
#line 179 "basic_block.m"
                    {
#line 179 "basic_block.m"
                      MR_Word base;
#line 179 "basic_block.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "basic_block.m"
                      *ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_3 = base;
#line 179 "basic_block.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__basic_block__Instr0_8));
#line 179 "basic_block.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_0_2));
#line 179 "basic_block.m"
                    }
#line 180 "basic_block.m"
                    *ll_backend__basic_block__HeadVar__4_4 = ll_backend__basic_block__Instrs0_9;
#line 179 "basic_block.m"
                  }
#line 181 "basic_block.m"
                else
#line 182 "basic_block.m"
                  {
#line 182 "basic_block.m"
                    MR_Word ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_19_19;

#line 182 "basic_block.m"
                    {
#line 182 "basic_block.m"
                      ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "basic_block.m"
                      MR_hl_field(MR_mktag(1), ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_19_19, 0) = ((MR_Box) (ll_backend__basic_block__Instr0_8));
#line 182 "basic_block.m"
                      MR_hl_field(MR_mktag(1), ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_19_19, 1) = ((MR_Box) (ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_0_2));
#line 182 "basic_block.m"
                    }
#line 183 "basic_block.m"
                    /* direct tailcall eliminated */
#line 183 "basic_block.m"
                    {
#line 183 "basic_block.m"
                      MR_Word ll_backend__basic_block__HeadVar__1__tmp_copy_1 = ll_backend__basic_block__Instrs0_9;
#line 183 "basic_block.m"
                      MR_Word ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_0__tmp_copy_2 = ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_19_19;

#line 183 "basic_block.m"
                      ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_0_2 = ll_backend__basic_block__STATE_VARIABLE_RevBlockInstrs_0__tmp_copy_2;
#line 183 "basic_block.m"
                      ll_backend__basic_block__HeadVar__1_1 = ll_backend__basic_block__HeadVar__1__tmp_copy_1;
#line 183 "basic_block.m"
                    }
#line 183 "basic_block.m"
                    continue;
#line 182 "basic_block.m"
                  }
#line 181 "basic_block.m"
              }
#line 174 "basic_block.m"
          }
#line 173 "basic_block.m"
      }
#line 173 "basic_block.m"
      break;
#line 173 "basic_block.m"
    }
#line 169 "basic_block.m"
}

#line 120 "basic_block.m"
static void MR_CALL 
ll_backend__basic_block__build_block_map_10_p_0(
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__1_1,
#line 120 "basic_block.m"
  MR_Word * ll_backend__basic_block__HeadVar__2_2,
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__ProcLabel_3,
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__FallInto_4,
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_BlockMap_0_5,
#line 120 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_BlockMap_6,
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_NewLabels_0_7,
#line 120 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_NewLabels_8,
#line 120 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_C_0_9,
#line 120 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_C_10)
#line 120 "basic_block.m"
{
#line 124 "basic_block.m"
  {
#line 124 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;

#line 124 "basic_block.m"
    if ((ll_backend__basic_block__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 124 "basic_block.m"
      {
#line 124 "basic_block.m"
        *ll_backend__basic_block__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 124 "basic_block.m"
        *ll_backend__basic_block__STATE_VARIABLE_C_10 = ll_backend__basic_block__STATE_VARIABLE_C_0_9;
#line 124 "basic_block.m"
        *ll_backend__basic_block__STATE_VARIABLE_NewLabels_8 = ll_backend__basic_block__STATE_VARIABLE_NewLabels_0_7;
#line 124 "basic_block.m"
        *ll_backend__basic_block__STATE_VARIABLE_BlockMap_6 = ll_backend__basic_block__STATE_VARIABLE_BlockMap_0_5;
#line 124 "basic_block.m"
      }
#line 124 "basic_block.m"
    else
#line 126 "basic_block.m"
      {
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__OrigInstr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 0)));
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__OrigInstrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 1)));
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__Label_32;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__LabelInstr_33;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__RestInstrs_34;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__RevBlockInstrs_36;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__Instrs1_37;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__LabelSeq1_38;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__NextFallInto_39;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__BlockInstrs_42;
#line 126 "basic_block.m"
        MR_Integer ll_backend__basic_block__NumBlockInstrs_43;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__SideLabels_46;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__MaybeFallThrough_48;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__BlockInfo_49;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__STATE_VARIABLE_C_57_57;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__STATE_VARIABLE_NewLabels_58_58;
#line 126 "basic_block.m"
        MR_Word ll_backend__basic_block__STATE_VARIABLE_BlockMap_62_62;
#line 131 "basic_block.m"
        MR_Word ll_backend__basic_block__OrigLabel_30;
#line 127 "basic_block.m"
        MR_Word ll_backend__basic_block__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__OrigInstr0_22, (MR_Integer) 0)));
#line 127 "basic_block.m"
        MR_String ll_backend__basic_block__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__OrigInstr0_22, (MR_Integer) 1)));

#line 127 "basic_block.m"
        ll_backend__basic_block__succeeded = ((((MR_tag((MR_Word) ll_backend__basic_block__V_56_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__basic_block__V_56_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 127 "basic_block.m"
        if (ll_backend__basic_block__succeeded)
#line 127 "basic_block.m"
          {
#line 127 "basic_block.m"
            ll_backend__basic_block__OrigLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__basic_block__V_56_56, (MR_Integer) 1)));
#line 128 "basic_block.m"
            ll_backend__basic_block__Label_32 = ll_backend__basic_block__OrigLabel_30;
#line 129 "basic_block.m"
            ll_backend__basic_block__LabelInstr_33 = ll_backend__basic_block__OrigInstr0_22;
#line 130 "basic_block.m"
            ll_backend__basic_block__RestInstrs_34 = ll_backend__basic_block__OrigInstrs0_23;
#line 128 "basic_block.m"
            ll_backend__basic_block__STATE_VARIABLE_C_57_57 = ll_backend__basic_block__STATE_VARIABLE_C_0_9;
#line 128 "basic_block.m"
            ll_backend__basic_block__STATE_VARIABLE_NewLabels_58_58 = ll_backend__basic_block__STATE_VARIABLE_NewLabels_0_7;
#line 127 "basic_block.m"
          }
#line 127 "basic_block.m"
        else
#line 132 "basic_block.m"
          {
#line 132 "basic_block.m"
            MR_Integer ll_backend__basic_block__N_35;
#line 132 "basic_block.m"
            MR_Word ll_backend__basic_block__V_59_59;

#line 132 "basic_block.m"
            {
#line 132 "basic_block.m"
              mercury__counter__allocate_3_p_0(&ll_backend__basic_block__N_35, ll_backend__basic_block__STATE_VARIABLE_C_0_9, &ll_backend__basic_block__STATE_VARIABLE_C_57_57);
            }
#line 133 "basic_block.m"
            {
#line 133 "basic_block.m"
              ll_backend__basic_block__Label_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 133 "basic_block.m"
              MR_hl_field(MR_mktag(0), ll_backend__basic_block__Label_32, 0) = ((MR_Box) (ll_backend__basic_block__N_35));
#line 133 "basic_block.m"
              MR_hl_field(MR_mktag(0), ll_backend__basic_block__Label_32, 1) = ((MR_Box) (ll_backend__basic_block__ProcLabel_3));
#line 133 "basic_block.m"
            }
#line 134 "basic_block.m"
            {
#line 134 "basic_block.m"
              mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__basic_block__Label_32)), ll_backend__basic_block__STATE_VARIABLE_NewLabels_0_7, &ll_backend__basic_block__STATE_VARIABLE_NewLabels_58_58);
            }
#line 135 "basic_block.m"
            {
#line 135 "basic_block.m"
              ll_backend__basic_block__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "basic_block.m"
              MR_hl_field(MR_mktag(3), ll_backend__basic_block__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 135 "basic_block.m"
              MR_hl_field(MR_mktag(3), ll_backend__basic_block__V_59_59, 1) = ((MR_Box) (ll_backend__basic_block__Label_32));
#line 135 "basic_block.m"
            }
#line 135 "basic_block.m"
            {
#line 135 "basic_block.m"
              ll_backend__basic_block__LabelInstr_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 135 "basic_block.m"
              MR_hl_field(MR_mktag(0), ll_backend__basic_block__LabelInstr_33, 0) = ((MR_Box) (ll_backend__basic_block__V_59_59));
#line 135 "basic_block.m"
              MR_hl_field(MR_mktag(0), ll_backend__basic_block__LabelInstr_33, 1) = ((MR_Box) ((MR_String) ""));
#line 135 "basic_block.m"
            }
#line 136 "basic_block.m"
            ll_backend__basic_block__RestInstrs_34 = ll_backend__basic_block__HeadVar__1_1;
#line 132 "basic_block.m"
          }
#line 139 "basic_block.m"
        {
#line 139 "basic_block.m"
          ll_backend__basic_block__take_until_end_of_block_4_p_0(ll_backend__basic_block__RestInstrs_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__basic_block__RevBlockInstrs_36, &ll_backend__basic_block__Instrs1_37);
        }
#line 149 "basic_block.m"
        if ((ll_backend__basic_block__RevBlockInstrs_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "basic_block.m"
          {
#line 151 "basic_block.m"
            ll_backend__basic_block__BlockInstrs_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 152 "basic_block.m"
            ll_backend__basic_block__NumBlockInstrs_43 = (MR_Integer) 0;
#line 153 "basic_block.m"
            ll_backend__basic_block__SideLabels_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 154 "basic_block.m"
            ll_backend__basic_block__NextFallInto_39 = (MR_Integer) 1;
#line 150 "basic_block.m"
          }
#line 149 "basic_block.m"
        else
#line 143 "basic_block.m"
          {
#line 143 "basic_block.m"
            MR_Word ll_backend__basic_block__LastUinstr_44;
#line 143 "basic_block.m"
            MR_Word ll_backend__basic_block__X_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__RevBlockInstrs_36, (MR_Integer) 0)));
#line 143 "basic_block.m"
            MR_Word ll_backend__basic_block__Xs_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__RevBlockInstrs_36, (MR_Integer) 1)));
#line 143 "basic_block.m"
            MR_Word ll_backend__basic_block__STATE_VARIABLE_List_20_90;
#line 146 "basic_block.m"
            MR_String ll_backend__basic_block__V_45_45;
#line 147 "basic_block.m"
            MR_Word ll_backend__basic_block___SideCodeAddrs_47;

#line 191 "basic_block.m"
            {
#line 191 "basic_block.m"
              ll_backend__basic_block__STATE_VARIABLE_List_20_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "basic_block.m"
              MR_hl_field(MR_mktag(1), ll_backend__basic_block__STATE_VARIABLE_List_20_90, 0) = ((MR_Box) (ll_backend__basic_block__X_82));
#line 191 "basic_block.m"
              MR_hl_field(MR_mktag(1), ll_backend__basic_block__STATE_VARIABLE_List_20_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "basic_block.m"
            }
#line 193 "basic_block.m"
            {
#line 193 "basic_block.m"
              ll_backend__basic_block__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(ll_backend__basic_block__Xs_83, ll_backend__basic_block__STATE_VARIABLE_List_20_90, &ll_backend__basic_block__BlockInstrs_42, ((MR_Integer) 0 + (MR_Integer) 1), &ll_backend__basic_block__NumBlockInstrs_43);
            }
#line 146 "basic_block.m"
            ll_backend__basic_block__LastUinstr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__X_82, (MR_Integer) 0)));
#line 146 "basic_block.m"
            ll_backend__basic_block__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__X_82, (MR_Integer) 1)));
#line 147 "basic_block.m"
            {
#line 147 "basic_block.m"
              ll_backend__opt_util__possible_targets_3_p_0(ll_backend__basic_block__LastUinstr_44, &ll_backend__basic_block__SideLabels_46, &ll_backend__basic_block___SideCodeAddrs_47);
            }
#line 148 "basic_block.m"
            {
#line 148 "basic_block.m"
              ll_backend__basic_block__NextFallInto_39 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__basic_block__LastUinstr_44);
            }
#line 143 "basic_block.m"
          }
#line 140 "basic_block.m"
        {
#line 140 "basic_block.m"
          ll_backend__basic_block__build_block_map_10_p_0(ll_backend__basic_block__Instrs1_37, &ll_backend__basic_block__LabelSeq1_38, ll_backend__basic_block__ProcLabel_3, ll_backend__basic_block__NextFallInto_39, ll_backend__basic_block__STATE_VARIABLE_BlockMap_0_5, &ll_backend__basic_block__STATE_VARIABLE_BlockMap_62_62, ll_backend__basic_block__STATE_VARIABLE_NewLabels_58_58, ll_backend__basic_block__STATE_VARIABLE_NewLabels_8, ll_backend__basic_block__STATE_VARIABLE_C_57_57, ll_backend__basic_block__STATE_VARIABLE_C_10);
        }
#line 159 "basic_block.m"
#line 159 "basic_block.m"
        switch (ll_backend__basic_block__NextFallInto_39) {
#line 159 "basic_block.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 159 "basic_block.m"
          case (MR_Integer) 0:
#line 161 "basic_block.m"
            ll_backend__basic_block__MaybeFallThrough_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 159 "basic_block.m"
            break;
#line 159 "basic_block.m"
          case (MR_Integer) 1:
#line 199 "basic_block.m"
            if ((ll_backend__basic_block__LabelSeq1_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "basic_block.m"
              ll_backend__basic_block__MaybeFallThrough_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 199 "basic_block.m"
            else
#line 199 "basic_block.m"
              {
#line 199 "basic_block.m"
                MR_Word ll_backend__basic_block__NextLabel_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__LabelSeq1_38, (MR_Integer) 0)));
#line 199 "basic_block.m"
                MR_Word ll_backend__basic_block__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__LabelSeq1_38, (MR_Integer) 1)));

#line 200 "basic_block.m"
                {
#line 200 "basic_block.m"
                  ll_backend__basic_block__MaybeFallThrough_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 200 "basic_block.m"
                  MR_hl_field(MR_mktag(1), ll_backend__basic_block__MaybeFallThrough_48, 0) = ((MR_Box) (ll_backend__basic_block__NextLabel_74));
#line 200 "basic_block.m"
                }
#line 199 "basic_block.m"
              }
#line 159 "basic_block.m"
            break;
#line 159 "basic_block.m"
        }
#line 163 "basic_block.m"
        {
#line 163 "basic_block.m"
          ll_backend__basic_block__BlockInfo_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 163 "basic_block.m"
          MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_49, 0) = ((MR_Box) (ll_backend__basic_block__Label_32));
#line 163 "basic_block.m"
          MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_49, 1) = ((MR_Box) (ll_backend__basic_block__LabelInstr_33));
#line 163 "basic_block.m"
          MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_49, 2) = ((MR_Box) (ll_backend__basic_block__BlockInstrs_42));
#line 163 "basic_block.m"
          MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_49, 3) = ((MR_Box) (ll_backend__basic_block__NumBlockInstrs_43));
#line 163 "basic_block.m"
          MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_49, 4) = ((MR_Box) (ll_backend__basic_block__FallInto_4));
#line 163 "basic_block.m"
          MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_49, 5) = ((MR_Box) (ll_backend__basic_block__SideLabels_46));
#line 163 "basic_block.m"
          MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_49, 6) = ((MR_Box) (ll_backend__basic_block__MaybeFallThrough_48));
#line 163 "basic_block.m"
        }
#line 165 "basic_block.m"
        {
#line 165 "basic_block.m"
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0, ((MR_Box) (ll_backend__basic_block__Label_32)), ((MR_Box) (ll_backend__basic_block__BlockInfo_49)), ll_backend__basic_block__STATE_VARIABLE_BlockMap_62_62, ll_backend__basic_block__STATE_VARIABLE_BlockMap_6);
        }
#line 166 "basic_block.m"
        {
#line 166 "basic_block.m"
          MR_Word base;
#line 166 "basic_block.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "basic_block.m"
          *ll_backend__basic_block__HeadVar__2_2 = base;
#line 166 "basic_block.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__basic_block__Label_32));
#line 166 "basic_block.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__basic_block__LabelSeq1_38));
#line 166 "basic_block.m"
        }
#line 126 "basic_block.m"
      }
#line 124 "basic_block.m"
  }
#line 120 "basic_block.m"
}

#line 93 "basic_block.m"
void MR_CALL 
ll_backend__basic_block__flatten_basic_blocks_4_p_0(
#line 93 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__1_1,
#line 93 "basic_block.m"
  MR_Word ll_backend__basic_block__BlockMap_2,
#line 93 "basic_block.m"
  MR_Word * ll_backend__basic_block__HeadVar__3_3,
#line 93 "basic_block.m"
  MR_Integer * ll_backend__basic_block__HeadVar__4_4)
#line 93 "basic_block.m"
{
#line 245 "basic_block.m"
  {
#line 245 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;

#line 245 "basic_block.m"
    if ((ll_backend__basic_block__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "basic_block.m"
      {
#line 245 "basic_block.m"
        *ll_backend__basic_block__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 245 "basic_block.m"
        *ll_backend__basic_block__HeadVar__4_4 = (MR_Integer) 0;
#line 245 "basic_block.m"
      }
#line 245 "basic_block.m"
    else
#line 246 "basic_block.m"
      {
#line 246 "basic_block.m"
        MR_Word ll_backend__basic_block__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "basic_block.m"
        MR_Word ll_backend__basic_block__Labels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 1)));
#line 246 "basic_block.m"
        MR_Word ll_backend__basic_block__RestInstrs_11;
#line 246 "basic_block.m"
        MR_Integer ll_backend__basic_block__RestNumInstrs_12;
#line 246 "basic_block.m"
        MR_Word ll_backend__basic_block__BlockInfo_13;
#line 246 "basic_block.m"
        MR_Word ll_backend__basic_block__BlockLabelInstr_15;
#line 246 "basic_block.m"
        MR_Word ll_backend__basic_block__BlockInstrs_16;
#line 246 "basic_block.m"
        MR_Integer ll_backend__basic_block__NumBlockInstrs_17;
#line 246 "basic_block.m"
        MR_Word ll_backend__basic_block__V_21_21;
#line 248 "basic_block.m"
        MR_Box ll_backend__basic_block__conv0_BlockInfo_13;
#line 249 "basic_block.m"
        MR_Word ll_backend__basic_block__V_14_14;
#line 249 "basic_block.m"
        MR_Word ll_backend__basic_block__V_18_18;
#line 249 "basic_block.m"
        MR_Word ll_backend__basic_block__V_19_19;
#line 249 "basic_block.m"
        MR_Word ll_backend__basic_block__V_20_20;

#line 247 "basic_block.m"
        {
#line 247 "basic_block.m"
          ll_backend__basic_block__flatten_basic_blocks_4_p_0(ll_backend__basic_block__Labels_7, ll_backend__basic_block__BlockMap_2, &ll_backend__basic_block__RestInstrs_11, &ll_backend__basic_block__RestNumInstrs_12);
        }
#line 248 "basic_block.m"
        {
#line 248 "basic_block.m"
          mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0, ll_backend__basic_block__BlockMap_2, ((MR_Box) (ll_backend__basic_block__Label_6)), &ll_backend__basic_block__conv0_BlockInfo_13);
        }
#line 248 "basic_block.m"
        ll_backend__basic_block__BlockInfo_13 = ((MR_Word) ll_backend__basic_block__conv0_BlockInfo_13);
#line 249 "basic_block.m"
        ll_backend__basic_block__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_13, (MR_Integer) 0)));
#line 249 "basic_block.m"
        ll_backend__basic_block__BlockLabelInstr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_13, (MR_Integer) 1)));
#line 249 "basic_block.m"
        ll_backend__basic_block__BlockInstrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_13, (MR_Integer) 2)));
#line 249 "basic_block.m"
        ll_backend__basic_block__NumBlockInstrs_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_13, (MR_Integer) 3)));
#line 249 "basic_block.m"
        ll_backend__basic_block__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_13, (MR_Integer) 4)));
#line 249 "basic_block.m"
        ll_backend__basic_block__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_13, (MR_Integer) 5)));
#line 249 "basic_block.m"
        ll_backend__basic_block__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_13, (MR_Integer) 6)));
#line 251 "basic_block.m"
        {
#line 251 "basic_block.m"
          ll_backend__basic_block__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "basic_block.m"
          MR_hl_field(MR_mktag(1), ll_backend__basic_block__V_21_21, 0) = ((MR_Box) (ll_backend__basic_block__BlockLabelInstr_15));
#line 251 "basic_block.m"
          MR_hl_field(MR_mktag(1), ll_backend__basic_block__V_21_21, 1) = ((MR_Box) (ll_backend__basic_block__BlockInstrs_16));
#line 251 "basic_block.m"
        }
#line 251 "basic_block.m"
        {
#line 251 "basic_block.m"
          *ll_backend__basic_block__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__basic_block__V_21_21, ll_backend__basic_block__RestInstrs_11);
        }
#line 252 "basic_block.m"
        *ll_backend__basic_block__HeadVar__4_4 = (ll_backend__basic_block__NumBlockInstrs_17 + ll_backend__basic_block__RestNumInstrs_12);
#line 246 "basic_block.m"
      }
#line 245 "basic_block.m"
  }
#line 93 "basic_block.m"
}

#line 228 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_4(
#line 228 "basic_block.m"
  MR_Box ll_backend__basic_block__closure_arg)
#line 228 "basic_block.m"
{
#line 228 "basic_block.m"
  {
#line 228 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;
#line 228 "basic_block.m"
    MR_Box ll_backend__basic_block__closure = ll_backend__basic_block__closure_arg;

#line 228 "basic_block.m"
    {
#line 228 "basic_block.m"
      return ll_backend__basic_block__succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__closure, (MR_Integer) 4))));
    }
#line 228 "basic_block.m"
    return ll_backend__basic_block__succeeded;
#line 228 "basic_block.m"
  }
#line 228 "basic_block.m"
}

#line 226 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_3(
#line 226 "basic_block.m"
  MR_Box ll_backend__basic_block__closure_arg)
#line 226 "basic_block.m"
{
#line 226 "basic_block.m"
  {
#line 226 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;
#line 226 "basic_block.m"
    MR_Box ll_backend__basic_block__closure = ll_backend__basic_block__closure_arg;

#line 226 "basic_block.m"
    {
#line 226 "basic_block.m"
      return ll_backend__basic_block__succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__closure, (MR_Integer) 4))));
    }
#line 226 "basic_block.m"
    return ll_backend__basic_block__succeeded;
#line 226 "basic_block.m"
  }
#line 226 "basic_block.m"
}

#line 224 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_2(
#line 224 "basic_block.m"
  MR_Box ll_backend__basic_block__closure_arg)
#line 224 "basic_block.m"
{
#line 224 "basic_block.m"
  {
#line 224 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;
#line 224 "basic_block.m"
    MR_Box ll_backend__basic_block__closure = ll_backend__basic_block__closure_arg;

#line 224 "basic_block.m"
    {
#line 224 "basic_block.m"
      return ll_backend__basic_block__succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__closure, (MR_Integer) 4))));
    }
#line 224 "basic_block.m"
    return ll_backend__basic_block__succeeded;
#line 224 "basic_block.m"
  }
#line 224 "basic_block.m"
}

#line 222 "basic_block.m"
static MR_bool MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0_1(
#line 222 "basic_block.m"
  MR_Box ll_backend__basic_block__closure_arg)
#line 222 "basic_block.m"
{
#line 222 "basic_block.m"
  {
#line 222 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;
#line 222 "basic_block.m"
    MR_Box ll_backend__basic_block__closure = ll_backend__basic_block__closure_arg;

#line 222 "basic_block.m"
    {
#line 222 "basic_block.m"
      return ll_backend__basic_block__succeeded = ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__222__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__closure, (MR_Integer) 4))));
    }
#line 222 "basic_block.m"
    return ll_backend__basic_block__succeeded;
#line 222 "basic_block.m"
  }
#line 222 "basic_block.m"
}

#line 84 "basic_block.m"
void MR_CALL 
ll_backend__basic_block__extend_basic_blocks_5_p_0(
#line 84 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__1_1,
#line 84 "basic_block.m"
  MR_Word * ll_backend__basic_block__HeadVar__2_2,
#line 84 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_BlockMap_0_3,
#line 84 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_BlockMap_4,
#line 84 "basic_block.m"
  MR_Word ll_backend__basic_block__HeadVar__5_5)
#line 84 "basic_block.m"
{
#line 208 "basic_block.m"
  while (MR_TRUE)
#line 208 "basic_block.m"
    {
#line 208 "basic_block.m"
      /* tailcall optimized into a loop */
#line 208 "basic_block.m"
      {
#line 208 "basic_block.m"
        MR_bool ll_backend__basic_block__succeeded;

#line 208 "basic_block.m"
        if ((ll_backend__basic_block__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "basic_block.m"
          {
#line 208 "basic_block.m"
            *ll_backend__basic_block__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 208 "basic_block.m"
            *ll_backend__basic_block__STATE_VARIABLE_BlockMap_4 = ll_backend__basic_block__STATE_VARIABLE_BlockMap_0_3;
#line 208 "basic_block.m"
          }
#line 208 "basic_block.m"
        else
#line 209 "basic_block.m"
          {
#line 209 "basic_block.m"
            MR_Word ll_backend__basic_block__Label_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 0)));
#line 209 "basic_block.m"
            MR_Word ll_backend__basic_block__Labels_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "basic_block.m"
            MR_Word ll_backend__basic_block__NextLabel_15;
#line 238 "basic_block.m"
            MR_Word ll_backend__basic_block__RestLabels_16;
#line 211 "basic_block.m"
            MR_Word ll_backend__basic_block__TypeCtorInfo_63_63;

#line 211 "basic_block.m"
            ll_backend__basic_block__succeeded = ((MR_tag((MR_Word) ll_backend__basic_block__Labels_11)) == (MR_mktag((MR_Integer) 1)));
#line 211 "basic_block.m"
            if (ll_backend__basic_block__succeeded)
#line 211 "basic_block.m"
              {
#line 211 "basic_block.m"
                ll_backend__basic_block__NextLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__Labels_11, (MR_Integer) 0)));
#line 211 "basic_block.m"
                ll_backend__basic_block__RestLabels_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__basic_block__Labels_11, (MR_Integer) 1)));
#line 1993 "ll_backend.basic_block.c"
                ll_backend__basic_block__TypeCtorInfo_63_63 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 212 "basic_block.m"
                {
#line 212 "basic_block.m"
                  ll_backend__basic_block__succeeded = mercury__set__member_2_p_0(ll_backend__basic_block__TypeCtorInfo_63_63, ((MR_Box) (ll_backend__basic_block__NextLabel_15)), ll_backend__basic_block__HeadVar__5_5);
                }
#line 211 "basic_block.m"
              }
#line 238 "basic_block.m"
            if (ll_backend__basic_block__succeeded)
#line 214 "basic_block.m"
              {
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__TypeCtorInfo_64_64 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__TypeCtorInfo_65_65 = (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__BlockInfo_17;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__NextBlockInfo_18;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__BlockLabel_19;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__BlockLabelInstr_20;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__BlockInstrs_21;
#line 214 "basic_block.m"
                MR_Integer ll_backend__basic_block__NumBlockInstrs_22;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__BlockFallInto_23;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__BlockSideLabels_24;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__BlockMaybeFallThrough_25;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__NextBlockLabel_26;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__NextBlockInstrs_28;
#line 214 "basic_block.m"
                MR_Integer ll_backend__basic_block__NumNextBlockInstrs_29;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__NextBlockFallInto_30;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__NextBlockSideLabels_31;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__NextBlockMaybeFallThrough_32;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__NewBlockInfo_33;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__V_37_37;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__V_41_41;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__V_45_45;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__V_49_49;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__V_50_50;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__V_55_55;
#line 214 "basic_block.m"
                MR_Integer ll_backend__basic_block__V_56_56;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__V_57_57;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__STATE_VARIABLE_BlockMap_58_58;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__STATE_VARIABLE_BlockMap_59_59;
#line 214 "basic_block.m"
                MR_Word ll_backend__basic_block__V_60_60;
#line 214 "basic_block.m"
                MR_Box ll_backend__basic_block__conv0_BlockInfo_17;
#line 215 "basic_block.m"
                MR_Box ll_backend__basic_block__conv1_NextBlockInfo_18;
#line 219 "basic_block.m"
                MR_Word ll_backend__basic_block__V_27_27;

#line 214 "basic_block.m"
                {
#line 214 "basic_block.m"
                  mercury__map__lookup_3_p_0(ll_backend__basic_block__TypeCtorInfo_64_64, ll_backend__basic_block__TypeCtorInfo_65_65, ll_backend__basic_block__STATE_VARIABLE_BlockMap_0_3, ((MR_Box) (ll_backend__basic_block__Label_10)), &ll_backend__basic_block__conv0_BlockInfo_17);
                }
#line 214 "basic_block.m"
                ll_backend__basic_block__BlockInfo_17 = ((MR_Word) ll_backend__basic_block__conv0_BlockInfo_17);
#line 215 "basic_block.m"
                {
#line 215 "basic_block.m"
                  mercury__map__lookup_3_p_0(ll_backend__basic_block__TypeCtorInfo_64_64, ll_backend__basic_block__TypeCtorInfo_65_65, ll_backend__basic_block__STATE_VARIABLE_BlockMap_0_3, ((MR_Box) (ll_backend__basic_block__NextLabel_15)), &ll_backend__basic_block__conv1_NextBlockInfo_18);
                }
#line 215 "basic_block.m"
                ll_backend__basic_block__NextBlockInfo_18 = ((MR_Word) ll_backend__basic_block__conv1_NextBlockInfo_18);
#line 216 "basic_block.m"
                ll_backend__basic_block__BlockLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_17, (MR_Integer) 0)));
#line 216 "basic_block.m"
                ll_backend__basic_block__BlockLabelInstr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_17, (MR_Integer) 1)));
#line 216 "basic_block.m"
                ll_backend__basic_block__BlockInstrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_17, (MR_Integer) 2)));
#line 216 "basic_block.m"
                ll_backend__basic_block__NumBlockInstrs_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_17, (MR_Integer) 3)));
#line 216 "basic_block.m"
                ll_backend__basic_block__BlockFallInto_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_17, (MR_Integer) 4)));
#line 216 "basic_block.m"
                ll_backend__basic_block__BlockSideLabels_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_17, (MR_Integer) 5)));
#line 216 "basic_block.m"
                ll_backend__basic_block__BlockMaybeFallThrough_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__BlockInfo_17, (MR_Integer) 6)));
#line 219 "basic_block.m"
                ll_backend__basic_block__NextBlockLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__NextBlockInfo_18, (MR_Integer) 0)));
#line 219 "basic_block.m"
                ll_backend__basic_block__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__NextBlockInfo_18, (MR_Integer) 1)));
#line 219 "basic_block.m"
                ll_backend__basic_block__NextBlockInstrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__NextBlockInfo_18, (MR_Integer) 2)));
#line 219 "basic_block.m"
                ll_backend__basic_block__NumNextBlockInstrs_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__NextBlockInfo_18, (MR_Integer) 3)));
#line 219 "basic_block.m"
                ll_backend__basic_block__NextBlockFallInto_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__NextBlockInfo_18, (MR_Integer) 4)));
#line 219 "basic_block.m"
                ll_backend__basic_block__NextBlockSideLabels_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__NextBlockInfo_18, (MR_Integer) 5)));
#line 219 "basic_block.m"
                ll_backend__basic_block__NextBlockMaybeFallThrough_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__basic_block__NextBlockInfo_18, (MR_Integer) 6)));
#line 222 "basic_block.m"
                {
#line 222 "basic_block.m"
                  ll_backend__basic_block__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 222 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_37_37, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[0]));
#line 222 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_37_37, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_1));
#line 222 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 222 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_37_37, 3) = ((MR_Box) (ll_backend__basic_block__Label_10));
#line 222 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_37_37, 4) = ((MR_Box) (ll_backend__basic_block__BlockLabel_19));
#line 222 "basic_block.m"
                }
#line 222 "basic_block.m"
                {
#line 222 "basic_block.m"
                  mercury__require__expect_4_p_0(ll_backend__basic_block__V_37_37, (MR_String) "ll_backend.basic_block", (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "block label mismatch");
                }
#line 224 "basic_block.m"
                {
#line 224 "basic_block.m"
                  ll_backend__basic_block__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 224 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_41_41, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[0]));
#line 224 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_41_41, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_2));
#line 224 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 224 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_41_41, 3) = ((MR_Box) (ll_backend__basic_block__NextLabel_15));
#line 224 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_41_41, 4) = ((MR_Box) (ll_backend__basic_block__NextBlockLabel_26));
#line 224 "basic_block.m"
                }
#line 224 "basic_block.m"
                {
#line 224 "basic_block.m"
                  mercury__require__expect_4_p_0(ll_backend__basic_block__V_41_41, (MR_String) "ll_backend.basic_block", (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "next block label mismatch");
                }
#line 226 "basic_block.m"
                {
#line 226 "basic_block.m"
                  ll_backend__basic_block__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 226 "basic_block.m"
                  MR_hl_field(MR_mktag(1), ll_backend__basic_block__V_49_49, 0) = ((MR_Box) (ll_backend__basic_block__NextLabel_15));
#line 226 "basic_block.m"
                }
#line 226 "basic_block.m"
                {
#line 226 "basic_block.m"
                  ll_backend__basic_block__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 226 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_45_45, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[1]));
#line 226 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_45_45, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_3));
#line 226 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 226 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_45_45, 3) = ((MR_Box) (ll_backend__basic_block__BlockMaybeFallThrough_25));
#line 226 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_45_45, 4) = ((MR_Box) (ll_backend__basic_block__V_49_49));
#line 226 "basic_block.m"
                }
#line 226 "basic_block.m"
                {
#line 226 "basic_block.m"
                  mercury__require__expect_4_p_0(ll_backend__basic_block__V_45_45, (MR_String) "ll_backend.basic_block", (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "fall through mismatch");
                }
#line 228 "basic_block.m"
                {
#line 228 "basic_block.m"
                  ll_backend__basic_block__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 228 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_50_50, 0) = ((MR_Box) (&ll_backend__basic_block_scalar_common_3[2]));
#line 228 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_50_50, 1) = ((MR_Box) (ll_backend__basic_block__extend_basic_blocks_5_p_0_4));
#line 228 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 228 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_50_50, 3) = ((MR_Box) (ll_backend__basic_block__NextBlockFallInto_30));
#line 228 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__V_50_50, 4) = ((MR_Box) ((MR_Integer) 1));
#line 228 "basic_block.m"
                }
#line 228 "basic_block.m"
                {
#line 228 "basic_block.m"
                  mercury__require__expect_4_p_0(ll_backend__basic_block__V_50_50, (MR_String) "ll_backend.basic_block", (MR_String) "predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", (MR_String) "fall into mismatch");
                }
#line 231 "basic_block.m"
                {
#line 231 "basic_block.m"
                  ll_backend__basic_block__V_55_55 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__basic_block__BlockInstrs_21, ll_backend__basic_block__NextBlockInstrs_28);
                }
#line 232 "basic_block.m"
                ll_backend__basic_block__V_56_56 = (ll_backend__basic_block__NumBlockInstrs_22 + ll_backend__basic_block__NumNextBlockInstrs_29);
#line 233 "basic_block.m"
                {
#line 233 "basic_block.m"
                  ll_backend__basic_block__V_57_57 = mercury__list__f_43_43_2_f_0(ll_backend__basic_block__TypeCtorInfo_64_64, ll_backend__basic_block__BlockSideLabels_24, ll_backend__basic_block__NextBlockSideLabels_31);
                }
#line 230 "basic_block.m"
                {
#line 230 "basic_block.m"
                  ll_backend__basic_block__NewBlockInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 230 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__NewBlockInfo_33, 0) = ((MR_Box) (ll_backend__basic_block__BlockLabel_19));
#line 230 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__NewBlockInfo_33, 1) = ((MR_Box) (ll_backend__basic_block__BlockLabelInstr_20));
#line 230 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__NewBlockInfo_33, 2) = ((MR_Box) (ll_backend__basic_block__V_55_55));
#line 230 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__NewBlockInfo_33, 3) = ((MR_Box) (ll_backend__basic_block__V_56_56));
#line 230 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__NewBlockInfo_33, 4) = ((MR_Box) (ll_backend__basic_block__BlockFallInto_23));
#line 230 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__NewBlockInfo_33, 5) = ((MR_Box) (ll_backend__basic_block__V_57_57));
#line 230 "basic_block.m"
                  MR_hl_field(MR_mktag(0), ll_backend__basic_block__NewBlockInfo_33, 6) = ((MR_Box) (ll_backend__basic_block__NextBlockMaybeFallThrough_32));
#line 230 "basic_block.m"
                }
#line 234 "basic_block.m"
                {
#line 234 "basic_block.m"
                  mercury__map__det_update_4_p_0(ll_backend__basic_block__TypeCtorInfo_64_64, ll_backend__basic_block__TypeCtorInfo_65_65, ((MR_Box) (ll_backend__basic_block__Label_10)), ((MR_Box) (ll_backend__basic_block__NewBlockInfo_33)), ll_backend__basic_block__STATE_VARIABLE_BlockMap_0_3, &ll_backend__basic_block__STATE_VARIABLE_BlockMap_58_58);
                }
#line 235 "basic_block.m"
                {
#line 235 "basic_block.m"
                  mercury__map__delete_3_p_0(ll_backend__basic_block__TypeCtorInfo_64_64, ll_backend__basic_block__TypeCtorInfo_65_65, ((MR_Box) (ll_backend__basic_block__NextLabel_15)), ll_backend__basic_block__STATE_VARIABLE_BlockMap_58_58, &ll_backend__basic_block__STATE_VARIABLE_BlockMap_59_59);
                }
#line 236 "basic_block.m"
                {
#line 236 "basic_block.m"
                  ll_backend__basic_block__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "basic_block.m"
                  MR_hl_field(MR_mktag(1), ll_backend__basic_block__V_60_60, 0) = ((MR_Box) (ll_backend__basic_block__Label_10));
#line 236 "basic_block.m"
                  MR_hl_field(MR_mktag(1), ll_backend__basic_block__V_60_60, 1) = ((MR_Box) (ll_backend__basic_block__RestLabels_16));
#line 236 "basic_block.m"
                }
#line 236 "basic_block.m"
                /* direct tailcall eliminated */
#line 236 "basic_block.m"
                {
#line 236 "basic_block.m"
                  MR_Word ll_backend__basic_block__HeadVar__1__tmp_copy_1 = ll_backend__basic_block__V_60_60;
#line 236 "basic_block.m"
                  MR_Word ll_backend__basic_block__STATE_VARIABLE_BlockMap_0__tmp_copy_3 = ll_backend__basic_block__STATE_VARIABLE_BlockMap_59_59;

#line 236 "basic_block.m"
                  ll_backend__basic_block__STATE_VARIABLE_BlockMap_0_3 = ll_backend__basic_block__STATE_VARIABLE_BlockMap_0__tmp_copy_3;
#line 236 "basic_block.m"
                  ll_backend__basic_block__HeadVar__1_1 = ll_backend__basic_block__HeadVar__1__tmp_copy_1;
#line 236 "basic_block.m"
                }
#line 236 "basic_block.m"
                continue;
#line 214 "basic_block.m"
              }
#line 238 "basic_block.m"
            else
#line 239 "basic_block.m"
              {
#line 239 "basic_block.m"
                MR_Word ll_backend__basic_block__LabelSeqTail_34;

#line 239 "basic_block.m"
                {
#line 239 "basic_block.m"
                  ll_backend__basic_block__extend_basic_blocks_5_p_0(ll_backend__basic_block__Labels_11, &ll_backend__basic_block__LabelSeqTail_34, ll_backend__basic_block__STATE_VARIABLE_BlockMap_0_3, ll_backend__basic_block__STATE_VARIABLE_BlockMap_4, ll_backend__basic_block__HeadVar__5_5);
                }
#line 240 "basic_block.m"
                {
#line 240 "basic_block.m"
                  MR_Word base;
#line 240 "basic_block.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "basic_block.m"
                  *ll_backend__basic_block__HeadVar__2_2 = base;
#line 240 "basic_block.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__basic_block__Label_10));
#line 240 "basic_block.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__basic_block__LabelSeqTail_34));
#line 240 "basic_block.m"
                }
#line 239 "basic_block.m"
              }
#line 209 "basic_block.m"
          }
#line 208 "basic_block.m"
      }
#line 208 "basic_block.m"
      break;
#line 208 "basic_block.m"
    }
#line 84 "basic_block.m"
}

#line 71 "basic_block.m"
void MR_CALL 
ll_backend__basic_block__create_basic_blocks_8_p_0(
#line 71 "basic_block.m"
  MR_Word ll_backend__basic_block__Instrs0_9,
#line 71 "basic_block.m"
  MR_Word * ll_backend__basic_block__Comments_10,
#line 71 "basic_block.m"
  MR_Word ll_backend__basic_block__ProcLabel_11,
#line 71 "basic_block.m"
  MR_Word ll_backend__basic_block__STATE_VARIABLE_C_0_19,
#line 71 "basic_block.m"
  MR_Word * ll_backend__basic_block__STATE_VARIABLE_C_20,
#line 71 "basic_block.m"
  MR_Word * ll_backend__basic_block__NewLabels_13,
#line 71 "basic_block.m"
  MR_Word * ll_backend__basic_block__LabelSeq_14,
#line 71 "basic_block.m"
  MR_Word * ll_backend__basic_block__BlockMap_15)
#line 71 "basic_block.m"
{
#line 109 "basic_block.m"
  {
#line 109 "basic_block.m"
    MR_bool ll_backend__basic_block__succeeded;
#line 109 "basic_block.m"
    MR_Word ll_backend__basic_block__TypeCtorInfo_25_25;
#line 109 "basic_block.m"
    MR_Word ll_backend__basic_block__LabelInstr_16;
#line 109 "basic_block.m"
    MR_Word ll_backend__basic_block__AfterLabelInstrs_17;
#line 109 "basic_block.m"
    MR_Word ll_backend__basic_block__Instrs1_18;
#line 109 "basic_block.m"
    MR_Word ll_backend__basic_block__V_22_22;
#line 109 "basic_block.m"
    MR_Word ll_backend__basic_block__V_23_23;

#line 110 "basic_block.m"
    {
#line 110 "basic_block.m"
      ll_backend__opt_util__get_prologue_4_p_0(ll_backend__basic_block__Instrs0_9, &ll_backend__basic_block__LabelInstr_16, ll_backend__basic_block__Comments_10, &ll_backend__basic_block__AfterLabelInstrs_17);
    }
#line 111 "basic_block.m"
    {
#line 111 "basic_block.m"
      ll_backend__basic_block__Instrs1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "basic_block.m"
      MR_hl_field(MR_mktag(1), ll_backend__basic_block__Instrs1_18, 0) = ((MR_Box) (ll_backend__basic_block__LabelInstr_16));
#line 111 "basic_block.m"
      MR_hl_field(MR_mktag(1), ll_backend__basic_block__Instrs1_18, 1) = ((MR_Box) (ll_backend__basic_block__AfterLabelInstrs_17));
#line 111 "basic_block.m"
    }
#line 2368 "ll_backend.basic_block.c"
    ll_backend__basic_block__TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 112 "basic_block.m"
    {
#line 112 "basic_block.m"
      ll_backend__basic_block__V_22_22 = mercury__map__init_0_f_0(ll_backend__basic_block__TypeCtorInfo_25_25, (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0);
    }
#line 113 "basic_block.m"
    {
#line 113 "basic_block.m"
      ll_backend__basic_block__V_23_23 = mercury__set__init_0_f_0(ll_backend__basic_block__TypeCtorInfo_25_25);
    }
#line 112 "basic_block.m"
    {
#line 112 "basic_block.m"
      ll_backend__basic_block__build_block_map_10_p_0(ll_backend__basic_block__Instrs1_18, ll_backend__basic_block__LabelSeq_14, ll_backend__basic_block__ProcLabel_11, (MR_Integer) 0, ll_backend__basic_block__V_22_22, ll_backend__basic_block__BlockMap_15, ll_backend__basic_block__V_23_23, ll_backend__basic_block__NewLabels_13, ll_backend__basic_block__STATE_VARIABLE_C_0_19, ll_backend__basic_block__STATE_VARIABLE_C_20);
#line 112 "basic_block.m"
      return;
    }
#line 109 "basic_block.m"
  }
#line 71 "basic_block.m"
}

void mercury__ll_backend__basic_block__init(void)
{
}

void mercury__ll_backend__basic_block__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0);
	MR_register_type_ctor_info(&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_map_0);
}

void mercury__ll_backend__basic_block__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.basic_block. */
