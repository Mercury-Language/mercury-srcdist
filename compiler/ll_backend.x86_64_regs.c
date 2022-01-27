/*
** Automatically generated from `x86_64_regs.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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


/* :- module ll_backend.x86_64_regs. */
/* :- implementation. */

/*
INIT mercury__ll_backend__x86_64_regs__init
ENDINIT
*/

#include "ll_backend.x86_64_regs.mih"


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
#include "ll_backend.x86_64_instrs.mih"
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




#line 141 "ll_backend.x86_64_regs.c"
static const MR_PseudoTypeInfo ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_types_reg_locn_0_0[1];

#line 144 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDesc ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_0;

#line 147 "ll_backend.x86_64_regs.c"
static const MR_PseudoTypeInfo ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_types_reg_locn_0_1[1];

#line 150 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDesc ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_1;

#line 153 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDescPtr ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_stag_ordered_reg_locn_0_0[1];

#line 156 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDescPtr ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_stag_ordered_reg_locn_0_1[1];

#line 159 "ll_backend.x86_64_regs.c"
static const MR_DuPtagLayout ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_ptag_ordered_reg_locn_0[2];

#line 162 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDescPtr ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_name_ordered_reg_locn_0[2];

#line 165 "ll_backend.x86_64_regs.c"
static const MR_Integer ll_backend__x86_64_regs__ll_backend__x86_64_regs__functor_number_map_reg_locn_0[2];

#line 168 "ll_backend.x86_64_regs.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__x86_64_regs__list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0;

#line 171 "ll_backend.x86_64_regs.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__x86_64_regs__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__x86_64_regs__type_ctor_info_reg_locn_0;

#line 174 "ll_backend.x86_64_regs.c"
static const MR_PseudoTypeInfo ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_types_reg_map_0_0[2];

#line 177 "ll_backend.x86_64_regs.c"
static const MR_ConstString ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_names_reg_map_0_0[2];

#line 180 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDesc ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_map_0_0;

#line 183 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDescPtr ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_stag_ordered_reg_map_0_0[1];

#line 186 "ll_backend.x86_64_regs.c"
static const MR_DuPtagLayout ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_ptag_ordered_reg_map_0[1];

#line 189 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDescPtr ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_name_ordered_reg_map_0[1];

#line 192 "ll_backend.x86_64_regs.c"
static const MR_Integer ll_backend__x86_64_regs__ll_backend__x86_64_regs__functor_number_map_reg_map_0[1];

#line 195 "ll_backend.x86_64_regs.c"
static MR_bool MR_CALL 
ll_backend__x86_64_regs____Unify____reg_locn_0_0_10001(
#line 198 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_1,
#line 200 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_2);

#line 203 "ll_backend.x86_64_regs.c"
static void MR_CALL 
ll_backend__x86_64_regs____Compare____reg_locn_0_0_10001(
#line 206 "ll_backend.x86_64_regs.c"
  MR_Box * ll_backend__x86_64_regs__wrapper_arg_1,
#line 208 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_2,
#line 210 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_3);

#line 213 "ll_backend.x86_64_regs.c"
static MR_bool MR_CALL 
ll_backend__x86_64_regs____Unify____reg_map_0_0_10001(
#line 216 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_1,
#line 218 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_2);

#line 221 "ll_backend.x86_64_regs.c"
static void MR_CALL 
ll_backend__x86_64_regs____Compare____reg_map_0_0_10001(
#line 224 "ll_backend.x86_64_regs.c"
  MR_Box * ll_backend__x86_64_regs__wrapper_arg_1,
#line 226 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_2,
#line 228 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_3);

#line 228 "x86_64_regs.m"
static void MR_CALL 
ll_backend__x86_64_regs__check_if_all_mvm_registers_2_p_0(
#line 228 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__HeadVar__1_1,
#line 228 "x86_64_regs.m"
  MR_Word * ll_backend__x86_64_regs__HeadVar__2_2);


static /* final */ const MR_Box ll_backend__x86_64_regs_scalar_common_1[110][2];

static /* final */ const MR_Box ll_backend__x86_64_regs_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__x86_64_regs_scalar_common_3[37][1];




static /* final */ const MR_Box ll_backend__x86_64_regs_scalar_common_1[110][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 32))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 31))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[3])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 30))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[2])))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[8])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[6])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 29))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[3])))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[11])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[9])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 28))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[4])))
  },
  /* row 15 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[14])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[12])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 27))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[5])))
  },
  /* row 18 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[15])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 26))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[6])))
  },
  /* row 21 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[20])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[18])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 25))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[7])))
  },
  /* row 24 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[23])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[21])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 24))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[8])))
  },
  /* row 27 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[26])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[24])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 23))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[9])))
  },
  /* row 30 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[29])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[27])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 22))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[10])))
  },
  /* row 33 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[32])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[30])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 21))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[11])))
  },
  /* row 36 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[35])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[33])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 20))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[12])))
  },
  /* row 39 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[36])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 19))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[13])))
  },
  /* row 42 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[39])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 18))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[14])))
  },
  /* row 45 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[44])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[42])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 17))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[15])))
  },
  /* row 48 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[47])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[45])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 16))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[16])))
  },
  /* row 51 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[50])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[48])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 15))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[17])))
  },
  /* row 54 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[53])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[51])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 14))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[18])))
  },
  /* row 57 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[56])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[54])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[19])))
  },
  /* row 60 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[59])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[57])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 12))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[20])))
  },
  /* row 63 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[62])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[60])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 11))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[21])))
  },
  /* row 66 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[65])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[63])))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[22])))
  },
  /* row 69 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[68])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[66])))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[23])))
  },
  /* row 72 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[71])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[69])))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[24])))
  },
  /* row 75 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[74])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[72])))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[25])))
  },
  /* row 78 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[77])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[75])))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[26])))
  },
  /* row 81 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[80])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[78])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[27])))
  },
  /* row 83 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[82])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[28])))
  },
  /* row 85 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[84])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[83])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[29])))
  },
  /* row 88 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[87])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[85])))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[30])))
  },
  /* row 91 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[90])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[88])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[31])))
  },
  /* row 93 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[92])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_3[32])))
  },
  /* row 96 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[95])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[93])))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[97]))),
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_3[33]))
  },
  /* row 99 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[98])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[96])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[100]))),
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_3[34]))
  },
  /* row 102 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[101])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[99])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_3[35]))
  },
  /* row 104 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[103])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))),
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_3[36]))
  },
  /* row 106 */
  {
    ((MR_Box) (&ll_backend__x86_64_regs_scalar_common_1[105])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[108])))
  },
};

static /* final */ const MR_Box ll_backend__x86_64_regs_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__x86_64_regs__ll_backend__x86_64_regs__type_ctor_info_reg_locn_0))
  },
};

static /* final */ const MR_Box ll_backend__x86_64_regs_scalar_common_3[37][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 36))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 35))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 34))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 33))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 32))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 31))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 30))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 29))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 28))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 27))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 26))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 25))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 24))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 23))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 22))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 21))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 20))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 19))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 18))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 17))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 16))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 15))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 14))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 12))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 11))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 15))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Integer) 14))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Integer) 12))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 979 "ll_backend.x86_64_regs.c"
static const MR_PseudoTypeInfo ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_types_reg_locn_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0
};

#line 984 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDesc ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_0 = {
  (MR_String) "actual",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_types_reg_locn_0_0,
  NULL,
  NULL,
  NULL
};

#line 999 "ll_backend.x86_64_regs.c"
static const MR_PseudoTypeInfo ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_types_reg_locn_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1004 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDesc ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_1 = {
  (MR_String) "virtual",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_types_reg_locn_0_1,
  NULL,
  NULL,
  NULL
};

#line 1019 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDescPtr ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_stag_ordered_reg_locn_0_0[1] = {
  &ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_0
};

#line 1024 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDescPtr ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_stag_ordered_reg_locn_0_1[1] = {
  &ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_1
};

#line 1029 "ll_backend.x86_64_regs.c"
static const MR_DuPtagLayout ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_ptag_ordered_reg_locn_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_stag_ordered_reg_locn_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_stag_ordered_reg_locn_0_1
  }
};

#line 1043 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDescPtr ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_name_ordered_reg_locn_0[2] = {
  &ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_0,
  &ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_1
};

#line 1049 "ll_backend.x86_64_regs.c"
static const MR_Integer ll_backend__x86_64_regs__ll_backend__x86_64_regs__functor_number_map_reg_locn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1055 "ll_backend.x86_64_regs.c"
const MR_TypeCtorInfo_Struct ll_backend__x86_64_regs__ll_backend__x86_64_regs__type_ctor_info_reg_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__x86_64_regs____Unify____reg_locn_0_0_10001)),
  ((MR_Box) (ll_backend__x86_64_regs____Compare____reg_locn_0_0_10001)),
  (MR_String) "ll_backend.x86_64_regs",
  (MR_String) "reg_locn",
  {
    ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_name_ordered_reg_locn_0
  },
  {
    ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_ptag_ordered_reg_locn_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__x86_64_regs__ll_backend__x86_64_regs__functor_number_map_reg_locn_0
};

#line 1076 "ll_backend.x86_64_regs.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__x86_64_regs__list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0
  }
};

#line 1084 "ll_backend.x86_64_regs.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__x86_64_regs__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__x86_64_regs__type_ctor_info_reg_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__x86_64_regs__ll_backend__x86_64_regs__type_ctor_info_reg_locn_0
  }
};

#line 1093 "ll_backend.x86_64_regs.c"
static const MR_PseudoTypeInfo ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_types_reg_map_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__x86_64_regs__list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0,
  (MR_PseudoTypeInfo) &ll_backend__x86_64_regs__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__x86_64_regs__type_ctor_info_reg_locn_0
};

#line 1099 "ll_backend.x86_64_regs.c"
static const MR_ConstString ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_names_reg_map_0_0[2] = {
  (MR_String) "scratch_reg_info",
  (MR_String) "lval_reg_map"
};

#line 1105 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDesc ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_map_0_0 = {
  (MR_String) "reg_map",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_types_reg_map_0_0,
  ll_backend__x86_64_regs__ll_backend__x86_64_regs__field_names_reg_map_0_0,
  NULL,
  NULL
};

#line 1120 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDescPtr ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_stag_ordered_reg_map_0_0[1] = {
  &ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_map_0_0
};

#line 1125 "ll_backend.x86_64_regs.c"
static const MR_DuPtagLayout ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_ptag_ordered_reg_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_stag_ordered_reg_map_0_0
  }
};

#line 1134 "ll_backend.x86_64_regs.c"
static const MR_DuFunctorDescPtr ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_name_ordered_reg_map_0[1] = {
  &ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_functor_desc_reg_map_0_0
};

#line 1139 "ll_backend.x86_64_regs.c"
static const MR_Integer ll_backend__x86_64_regs__ll_backend__x86_64_regs__functor_number_map_reg_map_0[1] = {
  (MR_Integer) 0
};

#line 1144 "ll_backend.x86_64_regs.c"
const MR_TypeCtorInfo_Struct ll_backend__x86_64_regs__ll_backend__x86_64_regs__type_ctor_info_reg_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__x86_64_regs____Unify____reg_map_0_0_10001)),
  ((MR_Box) (ll_backend__x86_64_regs____Compare____reg_map_0_0_10001)),
  (MR_String) "ll_backend.x86_64_regs",
  (MR_String) "reg_map",
  {
    ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_name_ordered_reg_map_0
  },
  {
    ll_backend__x86_64_regs__ll_backend__x86_64_regs__du_ptag_ordered_reg_map_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__x86_64_regs__ll_backend__x86_64_regs__functor_number_map_reg_map_0
};

#line 1165 "ll_backend.x86_64_regs.c"
static MR_bool MR_CALL 
ll_backend__x86_64_regs____Unify____reg_locn_0_0_10001(
#line 1168 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_1,
#line 1170 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_2)
#line 1172 "ll_backend.x86_64_regs.c"
{
#line 1174 "ll_backend.x86_64_regs.c"
  {
#line 1176 "ll_backend.x86_64_regs.c"
    MR_bool ll_backend__x86_64_regs__succeeded;

#line 1179 "ll_backend.x86_64_regs.c"
    {
#line 1181 "ll_backend.x86_64_regs.c"
      ll_backend__x86_64_regs__succeeded = ll_backend__x86_64_regs____Unify____reg_locn_0_0(((MR_Word) ll_backend__x86_64_regs__wrapper_arg_1), ((MR_Word) ll_backend__x86_64_regs__wrapper_arg_2));
    }
#line 1184 "ll_backend.x86_64_regs.c"
    return ll_backend__x86_64_regs__succeeded;
#line 1186 "ll_backend.x86_64_regs.c"
  }
#line 1188 "ll_backend.x86_64_regs.c"
}

#line 1191 "ll_backend.x86_64_regs.c"
static void MR_CALL 
ll_backend__x86_64_regs____Compare____reg_locn_0_0_10001(
#line 1194 "ll_backend.x86_64_regs.c"
  MR_Box * ll_backend__x86_64_regs__wrapper_arg_1,
#line 1196 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_2,
#line 1198 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_3)
#line 1200 "ll_backend.x86_64_regs.c"
{
#line 1202 "ll_backend.x86_64_regs.c"
  {
#line 1204 "ll_backend.x86_64_regs.c"
    MR_Word ll_backend__x86_64_regs__conv0_HeadVar__1_1;

#line 1207 "ll_backend.x86_64_regs.c"
    {
#line 1209 "ll_backend.x86_64_regs.c"
      ll_backend__x86_64_regs____Compare____reg_locn_0_0(&ll_backend__x86_64_regs__conv0_HeadVar__1_1, ((MR_Word) ll_backend__x86_64_regs__wrapper_arg_2), ((MR_Word) ll_backend__x86_64_regs__wrapper_arg_3));
    }
#line 1212 "ll_backend.x86_64_regs.c"
    *ll_backend__x86_64_regs__wrapper_arg_1 = ((MR_Box) (ll_backend__x86_64_regs__conv0_HeadVar__1_1));
#line 1214 "ll_backend.x86_64_regs.c"
  }
#line 1216 "ll_backend.x86_64_regs.c"
}

#line 1219 "ll_backend.x86_64_regs.c"
static MR_bool MR_CALL 
ll_backend__x86_64_regs____Unify____reg_map_0_0_10001(
#line 1222 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_1,
#line 1224 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_2)
#line 1226 "ll_backend.x86_64_regs.c"
{
#line 1228 "ll_backend.x86_64_regs.c"
  {
#line 1230 "ll_backend.x86_64_regs.c"
    MR_bool ll_backend__x86_64_regs__succeeded;

#line 1233 "ll_backend.x86_64_regs.c"
    {
#line 1235 "ll_backend.x86_64_regs.c"
      ll_backend__x86_64_regs__succeeded = ll_backend__x86_64_regs____Unify____reg_map_0_0(((MR_Word) ll_backend__x86_64_regs__wrapper_arg_1), ((MR_Word) ll_backend__x86_64_regs__wrapper_arg_2));
    }
#line 1238 "ll_backend.x86_64_regs.c"
    return ll_backend__x86_64_regs__succeeded;
#line 1240 "ll_backend.x86_64_regs.c"
  }
#line 1242 "ll_backend.x86_64_regs.c"
}

#line 1245 "ll_backend.x86_64_regs.c"
static void MR_CALL 
ll_backend__x86_64_regs____Compare____reg_map_0_0_10001(
#line 1248 "ll_backend.x86_64_regs.c"
  MR_Box * ll_backend__x86_64_regs__wrapper_arg_1,
#line 1250 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_2,
#line 1252 "ll_backend.x86_64_regs.c"
  MR_Box ll_backend__x86_64_regs__wrapper_arg_3)
#line 1254 "ll_backend.x86_64_regs.c"
{
#line 1256 "ll_backend.x86_64_regs.c"
  {
#line 1258 "ll_backend.x86_64_regs.c"
    MR_Word ll_backend__x86_64_regs__conv0_HeadVar__1_1;

#line 1261 "ll_backend.x86_64_regs.c"
    {
#line 1263 "ll_backend.x86_64_regs.c"
      ll_backend__x86_64_regs____Compare____reg_map_0_0(&ll_backend__x86_64_regs__conv0_HeadVar__1_1, ((MR_Word) ll_backend__x86_64_regs__wrapper_arg_2), ((MR_Word) ll_backend__x86_64_regs__wrapper_arg_3));
    }
#line 1266 "ll_backend.x86_64_regs.c"
    *ll_backend__x86_64_regs__wrapper_arg_1 = ((MR_Box) (ll_backend__x86_64_regs__conv0_HeadVar__1_1));
#line 1268 "ll_backend.x86_64_regs.c"
  }
#line 1270 "ll_backend.x86_64_regs.c"
}

#line 107 "x86_64_regs.m"
void MR_CALL 
ll_backend__x86_64_regs____Compare____reg_map_0_0(
#line 107 "x86_64_regs.m"
  MR_Word * ll_backend__x86_64_regs__HeadVar__1_1,
#line 107 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__HeadVar__2_2,
#line 107 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__HeadVar__3_3)
#line 107 "x86_64_regs.m"
{
#line 107 "x86_64_regs.m"
  {
#line 107 "x86_64_regs.m"
    MR_bool ll_backend__x86_64_regs__succeeded;
#line 107 "x86_64_regs.m"
    MR_Integer ll_backend__x86_64_regs__CastX_9 = (MR_Integer) ll_backend__x86_64_regs__HeadVar__2_2;
#line 107 "x86_64_regs.m"
    MR_Integer ll_backend__x86_64_regs__CastY_10 = (MR_Integer) ll_backend__x86_64_regs__HeadVar__3_3;

#line 107 "x86_64_regs.m"
    ll_backend__x86_64_regs__succeeded = (ll_backend__x86_64_regs__CastX_9 == ll_backend__x86_64_regs__CastY_10);
#line 107 "x86_64_regs.m"
    if (ll_backend__x86_64_regs__succeeded)
#line 1297 "ll_backend.x86_64_regs.c"
      *ll_backend__x86_64_regs__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "x86_64_regs.m"
    else
#line 107 "x86_64_regs.m"
      {
#line 107 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__3_3, (MR_Integer) 1)));
#line 107 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__V_8_8;

#line 107 "x86_64_regs.m"
        {
#line 107 "x86_64_regs.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__x86_64_regs_scalar_common_1[0], &ll_backend__x86_64_regs__V_8_8, ((MR_Box) (ll_backend__x86_64_regs__V_4_4)), ((MR_Box) (ll_backend__x86_64_regs__V_6_6)));
        }
#line 1319 "ll_backend.x86_64_regs.c"
        ll_backend__x86_64_regs__succeeded = (ll_backend__x86_64_regs__V_8_8 == (MR_Integer) 0);
#line 107 "x86_64_regs.m"
        ll_backend__x86_64_regs__succeeded = !(ll_backend__x86_64_regs__succeeded);
#line 107 "x86_64_regs.m"
        if (ll_backend__x86_64_regs__succeeded)
#line 107 "x86_64_regs.m"
          *ll_backend__x86_64_regs__HeadVar__1_1 = ll_backend__x86_64_regs__V_8_8;
#line 107 "x86_64_regs.m"
        else
#line 107 "x86_64_regs.m"
          {
#line 107 "x86_64_regs.m"
            {
#line 107 "x86_64_regs.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__x86_64_regs_scalar_common_2[0], ll_backend__x86_64_regs__HeadVar__1_1, ((MR_Box) (ll_backend__x86_64_regs__V_5_5)), ((MR_Box) (ll_backend__x86_64_regs__V_7_7)));
#line 107 "x86_64_regs.m"
              return;
            }
#line 107 "x86_64_regs.m"
          }
#line 107 "x86_64_regs.m"
      }
#line 107 "x86_64_regs.m"
  }
#line 107 "x86_64_regs.m"
}

#line 107 "x86_64_regs.m"
MR_bool MR_CALL 
ll_backend__x86_64_regs____Unify____reg_map_0_0(
#line 107 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__HeadVar__1_1,
#line 107 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__HeadVar__2_2)
#line 107 "x86_64_regs.m"
{
#line 107 "x86_64_regs.m"
  {
#line 107 "x86_64_regs.m"
    MR_bool ll_backend__x86_64_regs__succeeded;
#line 107 "x86_64_regs.m"
    MR_Integer ll_backend__x86_64_regs__CastX_7 = (MR_Integer) ll_backend__x86_64_regs__HeadVar__1_1;
#line 107 "x86_64_regs.m"
    MR_Integer ll_backend__x86_64_regs__CastY_8 = (MR_Integer) ll_backend__x86_64_regs__HeadVar__2_2;

#line 107 "x86_64_regs.m"
    ll_backend__x86_64_regs__succeeded = (ll_backend__x86_64_regs__CastX_7 == ll_backend__x86_64_regs__CastY_8);
#line 107 "x86_64_regs.m"
    if (ll_backend__x86_64_regs__succeeded)
#line 107 "x86_64_regs.m"
      ll_backend__x86_64_regs__succeeded = MR_TRUE;
#line 107 "x86_64_regs.m"
    else
#line 107 "x86_64_regs.m"
      {
#line 107 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__TypeInfo_10_10;
#line 107 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__1_1, (MR_Integer) 1)));
#line 107 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__2_2, (MR_Integer) 1)));

#line 1386 "ll_backend.x86_64_regs.c"
        {
#line 1388 "ll_backend.x86_64_regs.c"
          ll_backend__x86_64_regs__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__x86_64_regs_scalar_common_1[0], ((MR_Box) (ll_backend__x86_64_regs__V_3_3)), ((MR_Box) (ll_backend__x86_64_regs__V_5_5)));
        }
#line 107 "x86_64_regs.m"
        if (ll_backend__x86_64_regs__succeeded)
#line 107 "x86_64_regs.m"
          {
#line 1395 "ll_backend.x86_64_regs.c"
            ll_backend__x86_64_regs__TypeInfo_10_10 = (MR_Word) &ll_backend__x86_64_regs_scalar_common_2[0];
#line 1397 "ll_backend.x86_64_regs.c"
            {
#line 1399 "ll_backend.x86_64_regs.c"
              return ll_backend__x86_64_regs__succeeded = mercury__builtin__unify_2_p_0(ll_backend__x86_64_regs__TypeInfo_10_10, ((MR_Box) (ll_backend__x86_64_regs__V_4_4)), ((MR_Box) (ll_backend__x86_64_regs__V_6_6)));
            }
#line 107 "x86_64_regs.m"
          }
#line 107 "x86_64_regs.m"
      }
#line 107 "x86_64_regs.m"
    return ll_backend__x86_64_regs__succeeded;
#line 107 "x86_64_regs.m"
  }
#line 107 "x86_64_regs.m"
}

#line 47 "x86_64_regs.m"
void MR_CALL 
ll_backend__x86_64_regs____Compare____reg_locn_0_0(
#line 47 "x86_64_regs.m"
  MR_Word * ll_backend__x86_64_regs__HeadVar__1_1,
#line 47 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__HeadVar__2_2,
#line 47 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__HeadVar__3_3)
#line 47 "x86_64_regs.m"
{
#line 47 "x86_64_regs.m"
  {
#line 47 "x86_64_regs.m"
    MR_bool ll_backend__x86_64_regs__succeeded;
#line 47 "x86_64_regs.m"
    MR_Integer ll_backend__x86_64_regs__CastX_12 = (MR_Integer) ll_backend__x86_64_regs__HeadVar__2_2;
#line 47 "x86_64_regs.m"
    MR_Integer ll_backend__x86_64_regs__CastY_13 = (MR_Integer) ll_backend__x86_64_regs__HeadVar__3_3;

#line 47 "x86_64_regs.m"
    ll_backend__x86_64_regs__succeeded = (ll_backend__x86_64_regs__CastX_12 == ll_backend__x86_64_regs__CastY_13);
#line 47 "x86_64_regs.m"
    if (ll_backend__x86_64_regs__succeeded)
#line 1437 "ll_backend.x86_64_regs.c"
      *ll_backend__x86_64_regs__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "x86_64_regs.m"
    else
#line 47 "x86_64_regs.m"
      if (((MR_tag((MR_Word) ll_backend__x86_64_regs__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 47 "x86_64_regs.m"
        {
#line 47 "x86_64_regs.m"
          MR_Word ll_backend__x86_64_regs__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__2_2, (MR_Integer) 0)));

#line 47 "x86_64_regs.m"
          if (((MR_tag((MR_Word) ll_backend__x86_64_regs__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 47 "x86_64_regs.m"
            {
#line 47 "x86_64_regs.m"
              MR_Word ll_backend__x86_64_regs__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__3_3, (MR_Integer) 0)));
#line 47 "x86_64_regs.m"
              MR_Integer ll_backend__x86_64_regs__V_18_18 = (MR_Integer) ll_backend__x86_64_regs__V_16_16;
#line 47 "x86_64_regs.m"
              MR_Integer ll_backend__x86_64_regs__V_19_19 = (MR_Integer) ll_backend__x86_64_regs__V_5_5;

#line 47 "x86_64_regs.m"
              {
#line 47 "x86_64_regs.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__x86_64_regs__HeadVar__1_1, ll_backend__x86_64_regs__V_18_18, ll_backend__x86_64_regs__V_19_19);
#line 47 "x86_64_regs.m"
                return;
              }
#line 47 "x86_64_regs.m"
            }
#line 47 "x86_64_regs.m"
          else
#line 1470 "ll_backend.x86_64_regs.c"
            *ll_backend__x86_64_regs__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "x86_64_regs.m"
        }
#line 47 "x86_64_regs.m"
      else
#line 47 "x86_64_regs.m"
        {
#line 47 "x86_64_regs.m"
          MR_Integer ll_backend__x86_64_regs__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_regs__HeadVar__2_2, (MR_Integer) 0)));

#line 47 "x86_64_regs.m"
          if (((MR_tag((MR_Word) ll_backend__x86_64_regs__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1483 "ll_backend.x86_64_regs.c"
            *ll_backend__x86_64_regs__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "x86_64_regs.m"
          else
#line 47 "x86_64_regs.m"
            {
#line 47 "x86_64_regs.m"
              MR_Integer ll_backend__x86_64_regs__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_regs__HeadVar__3_3, (MR_Integer) 0)));

#line 47 "x86_64_regs.m"
              {
#line 47 "x86_64_regs.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__x86_64_regs__HeadVar__1_1, ll_backend__x86_64_regs__V_17_17, ll_backend__x86_64_regs__V_11_11);
#line 47 "x86_64_regs.m"
                return;
              }
#line 47 "x86_64_regs.m"
            }
#line 47 "x86_64_regs.m"
        }
#line 47 "x86_64_regs.m"
  }
#line 47 "x86_64_regs.m"
}

#line 47 "x86_64_regs.m"
MR_bool MR_CALL 
ll_backend__x86_64_regs____Unify____reg_locn_0_0(
#line 47 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__HeadVar__1_1,
#line 47 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__HeadVar__2_2)
#line 47 "x86_64_regs.m"
{
#line 47 "x86_64_regs.m"
  {
#line 47 "x86_64_regs.m"
    MR_bool ll_backend__x86_64_regs__succeeded;
#line 47 "x86_64_regs.m"
    MR_Integer ll_backend__x86_64_regs__CastX_7 = (MR_Integer) ll_backend__x86_64_regs__HeadVar__1_1;
#line 47 "x86_64_regs.m"
    MR_Integer ll_backend__x86_64_regs__CastY_8 = (MR_Integer) ll_backend__x86_64_regs__HeadVar__2_2;

#line 47 "x86_64_regs.m"
    ll_backend__x86_64_regs__succeeded = (ll_backend__x86_64_regs__CastX_7 == ll_backend__x86_64_regs__CastY_8);
#line 47 "x86_64_regs.m"
    if (ll_backend__x86_64_regs__succeeded)
#line 47 "x86_64_regs.m"
      ll_backend__x86_64_regs__succeeded = MR_TRUE;
#line 47 "x86_64_regs.m"
    else
#line 47 "x86_64_regs.m"
      if (((MR_tag((MR_Word) ll_backend__x86_64_regs__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 47 "x86_64_regs.m"
        {
#line 47 "x86_64_regs.m"
          MR_Word ll_backend__x86_64_regs__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "x86_64_regs.m"
          MR_Word ll_backend__x86_64_regs__V_4_4;

#line 47 "x86_64_regs.m"
          ll_backend__x86_64_regs__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_regs__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 47 "x86_64_regs.m"
          if (ll_backend__x86_64_regs__succeeded)
#line 47 "x86_64_regs.m"
            {
#line 47 "x86_64_regs.m"
              ll_backend__x86_64_regs__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__HeadVar__2_2, (MR_Integer) 0)));
#line 1551 "ll_backend.x86_64_regs.c"
              ll_backend__x86_64_regs__succeeded = (ll_backend__x86_64_regs__V_3_3 == ll_backend__x86_64_regs__V_4_4);
#line 47 "x86_64_regs.m"
            }
#line 47 "x86_64_regs.m"
        }
#line 47 "x86_64_regs.m"
      else
#line 47 "x86_64_regs.m"
        {
#line 47 "x86_64_regs.m"
          MR_Integer ll_backend__x86_64_regs__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_regs__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "x86_64_regs.m"
          MR_Integer ll_backend__x86_64_regs__V_6_6;

#line 47 "x86_64_regs.m"
          ll_backend__x86_64_regs__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_regs__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 47 "x86_64_regs.m"
          if (ll_backend__x86_64_regs__succeeded)
#line 47 "x86_64_regs.m"
            {
#line 47 "x86_64_regs.m"
              ll_backend__x86_64_regs__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_regs__HeadVar__2_2, (MR_Integer) 0)));
#line 1574 "ll_backend.x86_64_regs.c"
              ll_backend__x86_64_regs__succeeded = (ll_backend__x86_64_regs__V_5_5 == ll_backend__x86_64_regs__V_6_6);
#line 47 "x86_64_regs.m"
            }
#line 47 "x86_64_regs.m"
        }
#line 47 "x86_64_regs.m"
    return ll_backend__x86_64_regs__succeeded;
#line 47 "x86_64_regs.m"
  }
#line 47 "x86_64_regs.m"
}

#line 228 "x86_64_regs.m"
static void MR_CALL 
ll_backend__x86_64_regs__check_if_all_mvm_registers_2_p_0(
#line 228 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__HeadVar__1_1,
#line 228 "x86_64_regs.m"
  MR_Word * ll_backend__x86_64_regs__HeadVar__2_2)
#line 228 "x86_64_regs.m"
{
#line 230 "x86_64_regs.m"
  while (MR_TRUE)
#line 230 "x86_64_regs.m"
    {
#line 230 "x86_64_regs.m"
      /* tailcall optimized into a loop */
#line 230 "x86_64_regs.m"
      {
#line 230 "x86_64_regs.m"
        MR_bool ll_backend__x86_64_regs__succeeded;

#line 230 "x86_64_regs.m"
        if ((ll_backend__x86_64_regs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "x86_64_regs.m"
          *ll_backend__x86_64_regs__HeadVar__2_2 = (MR_Integer) 1;
#line 230 "x86_64_regs.m"
        else
#line 231 "x86_64_regs.m"
          {
#line 231 "x86_64_regs.m"
            MR_Word ll_backend__x86_64_regs__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_regs__HeadVar__1_1, (MR_Integer) 0)));
#line 231 "x86_64_regs.m"
            MR_Word ll_backend__x86_64_regs__Lvals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_regs__HeadVar__1_1, (MR_Integer) 1)));

#line 234 "x86_64_regs.m"
            if ((ll_backend__x86_64_regs__Lval_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 236 "x86_64_regs.m"
              ll_backend__x86_64_regs__succeeded = MR_TRUE;
#line 234 "x86_64_regs.m"
            else
#line 234 "x86_64_regs.m"
              if ((ll_backend__x86_64_regs__Lval_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 237 "x86_64_regs.m"
                ll_backend__x86_64_regs__succeeded = MR_TRUE;
#line 234 "x86_64_regs.m"
              else
#line 234 "x86_64_regs.m"
                if ((ll_backend__x86_64_regs__Lval_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 235 "x86_64_regs.m"
                  ll_backend__x86_64_regs__succeeded = MR_TRUE;
#line 234 "x86_64_regs.m"
                else
#line 234 "x86_64_regs.m"
                  if ((ll_backend__x86_64_regs__Lval_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 238 "x86_64_regs.m"
                    ll_backend__x86_64_regs__succeeded = MR_TRUE;
#line 234 "x86_64_regs.m"
                  else
#line 234 "x86_64_regs.m"
                    if ((ll_backend__x86_64_regs__Lval_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 234 "x86_64_regs.m"
                      ll_backend__x86_64_regs__succeeded = MR_TRUE;
#line 234 "x86_64_regs.m"
                    else
#line 234 "x86_64_regs.m"
                      if (((MR_tag((MR_Word) ll_backend__x86_64_regs__Lval_3)) == (MR_mktag((MR_Integer) 1))))
#line 233 "x86_64_regs.m"
                        {
#line 233 "x86_64_regs.m"
                          MR_Word ll_backend__x86_64_regs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_regs__Lval_3, (MR_Integer) 0)));
#line 233 "x86_64_regs.m"
                          MR_Integer ll_backend__x86_64_regs__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_regs__Lval_3, (MR_Integer) 1)));

#line 233 "x86_64_regs.m"
                          ll_backend__x86_64_regs__succeeded = (ll_backend__x86_64_regs__V_7_7 == (MR_Integer) 0);
#line 233 "x86_64_regs.m"
                        }
#line 234 "x86_64_regs.m"
                      else
#line 234 "x86_64_regs.m"
                        ll_backend__x86_64_regs__succeeded = MR_FALSE;
#line 242 "x86_64_regs.m"
            if (ll_backend__x86_64_regs__succeeded)
#line 241 "x86_64_regs.m"
              {
#line 241 "x86_64_regs.m"
                /* direct tailcall eliminated */
#line 241 "x86_64_regs.m"
                {
#line 241 "x86_64_regs.m"
                  MR_Word ll_backend__x86_64_regs__HeadVar__1__tmp_copy_1 = ll_backend__x86_64_regs__Lvals_4;

#line 241 "x86_64_regs.m"
                  ll_backend__x86_64_regs__HeadVar__1_1 = ll_backend__x86_64_regs__HeadVar__1__tmp_copy_1;
#line 241 "x86_64_regs.m"
                }
#line 241 "x86_64_regs.m"
                continue;
#line 241 "x86_64_regs.m"
              }
#line 242 "x86_64_regs.m"
            else
#line 243 "x86_64_regs.m"
              *ll_backend__x86_64_regs__HeadVar__2_2 = (MR_Integer) 0;
#line 231 "x86_64_regs.m"
          }
#line 230 "x86_64_regs.m"
      }
#line 230 "x86_64_regs.m"
      break;
#line 230 "x86_64_regs.m"
    }
#line 228 "x86_64_regs.m"
}

#line 86 "x86_64_regs.m"
void MR_CALL 
ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(
#line 86 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__RegMap0_3,
#line 86 "x86_64_regs.m"
  MR_Word * ll_backend__x86_64_regs__RegMap_4)
#line 86 "x86_64_regs.m"
{
#line 217 "x86_64_regs.m"
  {
#line 217 "x86_64_regs.m"
    MR_bool ll_backend__x86_64_regs__succeeded;
#line 217 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__ScratchRegs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__RegMap0_3, (MR_Integer) 0)));
#line 218 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__RegMap0_3, (MR_Integer) 1)));
#line 221 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__ScratchRegs1_6;

#line 219 "x86_64_regs.m"
    {
#line 219 "x86_64_regs.m"
      ll_backend__x86_64_regs__succeeded = mercury__list__drop_3_p_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0, (MR_Integer) 0, ll_backend__x86_64_regs__ScratchRegs0_5, &ll_backend__x86_64_regs__ScratchRegs1_6);
    }
#line 221 "x86_64_regs.m"
    if (ll_backend__x86_64_regs__succeeded)
#line 220 "x86_64_regs.m"
      {
#line 220 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__RegMap0_3, (MR_Integer) 1)));
#line 220 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__RegMap0_3, (MR_Integer) 0)));

#line 220 "x86_64_regs.m"
        {
#line 220 "x86_64_regs.m"
          MR_Word base;
#line 220 "x86_64_regs.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "x86_64_regs.m"
          *ll_backend__x86_64_regs__RegMap_4 = base;
#line 220 "x86_64_regs.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__x86_64_regs__ScratchRegs1_6));
#line 220 "x86_64_regs.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__x86_64_regs__V_13_13));
#line 220 "x86_64_regs.m"
        }
#line 220 "x86_64_regs.m"
      }
#line 221 "x86_64_regs.m"
    else
#line 222 "x86_64_regs.m"
      {
#line 222 "x86_64_regs.m"
        {
#line 222 "x86_64_regs.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_regs", (MR_String) "predicate \140ll_backend.x86_64_regs.reg_map_remove_scratch_reg\'/2", (MR_String) "scratch registers exhausted");
#line 222 "x86_64_regs.m"
          return;
        }
#line 222 "x86_64_regs.m"
      }
#line 217 "x86_64_regs.m"
  }
#line 86 "x86_64_regs.m"
}

#line 81 "x86_64_regs.m"
MR_Word MR_CALL 
ll_backend__x86_64_regs__get_scratch_reg_0_f_0(void)
#line 81 "x86_64_regs.m"
{
#line 252 "x86_64_regs.m"
  {
#line 252 "x86_64_regs.m"
    MR_bool ll_backend__x86_64_regs__succeeded;

#line 252 "x86_64_regs.m"
    return (MR_Integer) 9;
#line 252 "x86_64_regs.m"
  }
#line 81 "x86_64_regs.m"
}

#line 77 "x86_64_regs.m"
MR_Word MR_CALL 
ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_f_0(
#line 77 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__RegMap_3)
#line 77 "x86_64_regs.m"
{
#line 209 "x86_64_regs.m"
  {
#line 209 "x86_64_regs.m"
    MR_bool ll_backend__x86_64_regs__succeeded;
#line 209 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__ScratchReg_4;
#line 209 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__ScratchRegs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__RegMap_3, (MR_Integer) 0)));
#line 210 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__RegMap_3, (MR_Integer) 1)));
#line 213 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__ScratchReg0_6;
#line 211 "x86_64_regs.m"
    MR_Box ll_backend__x86_64_regs__conv0_ScratchReg0_6;

#line 211 "x86_64_regs.m"
    {
#line 211 "x86_64_regs.m"
      ll_backend__x86_64_regs__succeeded = mercury__list__index0_3_p_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0, ll_backend__x86_64_regs__ScratchRegs_5, (MR_Integer) 0, &ll_backend__x86_64_regs__conv0_ScratchReg0_6);
    }
#line 211 "x86_64_regs.m"
    if (ll_backend__x86_64_regs__succeeded)
#line 211 "x86_64_regs.m"
      {
#line 211 "x86_64_regs.m"
        ll_backend__x86_64_regs__ScratchReg0_6 = ((MR_Word) ll_backend__x86_64_regs__conv0_ScratchReg0_6);
#line 211 "x86_64_regs.m"
        ll_backend__x86_64_regs__succeeded = MR_TRUE;
#line 211 "x86_64_regs.m"
      }
#line 213 "x86_64_regs.m"
    if (ll_backend__x86_64_regs__succeeded)
#line 212 "x86_64_regs.m"
      ll_backend__x86_64_regs__ScratchReg_4 = ll_backend__x86_64_regs__ScratchReg0_6;
#line 213 "x86_64_regs.m"
    else
#line 214 "x86_64_regs.m"
      {
#line 214 "x86_64_regs.m"
        {
#line 214 "x86_64_regs.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_regs", (MR_String) "function \140ll_backend.x86_64_regs.reg_map_get_scratch_reg\'/1", (MR_String) "scratch registers exhausted");
        }
#line 214 "x86_64_regs.m"
      }
#line 209 "x86_64_regs.m"
    return ll_backend__x86_64_regs__ScratchReg_4;
#line 209 "x86_64_regs.m"
  }
#line 77 "x86_64_regs.m"
}

#line 73 "x86_64_regs.m"
void MR_CALL 
ll_backend__x86_64_regs__reg_map_reset_scratch_reg_info_2_p_0(
#line 73 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__RegMap0_3,
#line 73 "x86_64_regs.m"
  MR_Word * ll_backend__x86_64_regs__RegMap_4)
#line 73 "x86_64_regs.m"
{
#line 205 "x86_64_regs.m"
  {
#line 205 "x86_64_regs.m"
    MR_bool ll_backend__x86_64_regs__succeeded;
#line 207 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__RegMap0_3, (MR_Integer) 1)));
#line 207 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__RegMap0_3, (MR_Integer) 0)));

#line 207 "x86_64_regs.m"
    {
#line 207 "x86_64_regs.m"
      MR_Word base;
#line 207 "x86_64_regs.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "x86_64_regs.m"
      *ll_backend__x86_64_regs__RegMap_4 = base;
#line 207 "x86_64_regs.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[109])));
#line 207 "x86_64_regs.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__x86_64_regs__V_7_7));
#line 207 "x86_64_regs.m"
    }
#line 205 "x86_64_regs.m"
  }
#line 73 "x86_64_regs.m"
}

#line 68 "x86_64_regs.m"
MR_Word MR_CALL 
ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_f_0(
#line 68 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__Map_4,
#line 68 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__Lval_5)
#line 68 "x86_64_regs.m"
{
#line 172 "x86_64_regs.m"
  {
#line 172 "x86_64_regs.m"
    MR_bool ll_backend__x86_64_regs__succeeded;
#line 172 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__RegLocn_6;
#line 172 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__RegMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__Map_4, (MR_Integer) 1)));
#line 173 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__Map_4, (MR_Integer) 0)));

#line 186 "x86_64_regs.m"
    if (((((MR_tag((MR_Word) ll_backend__x86_64_regs__Lval_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_regs__Lval_5, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 187 "x86_64_regs.m"
      {
#line 188 "x86_64_regs.m"
        {
#line 188 "x86_64_regs.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_regs", (MR_String) "function \140ll_backend.x86_64_regs.reg_map_lookup_reg_locn\'/2", (MR_String) "lvar");
        }
#line 187 "x86_64_regs.m"
      }
#line 186 "x86_64_regs.m"
    else
#line 186 "x86_64_regs.m"
      if ((((((((((((((((((((((ll_backend__x86_64_regs__Lval_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((((MR_tag((MR_Word) ll_backend__x86_64_regs__Lval_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_regs__Lval_5, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) ll_backend__x86_64_regs__Lval_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_regs__Lval_5, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || ((ll_backend__x86_64_regs__Lval_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))))) || ((ll_backend__x86_64_regs__Lval_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || ((ll_backend__x86_64_regs__Lval_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))))) || (((MR_tag((MR_Word) ll_backend__x86_64_regs__Lval_5)) == (MR_mktag((MR_Integer) 1)))))) || ((ll_backend__x86_64_regs__Lval_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))))) || (((((MR_tag((MR_Word) ll_backend__x86_64_regs__Lval_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_regs__Lval_5, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || ((ll_backend__x86_64_regs__Lval_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))) || (((MR_tag((MR_Word) ll_backend__x86_64_regs__Lval_5)) == (MR_mktag((MR_Integer) 2))))))
#line 201 "x86_64_regs.m"
        {
#line 202 "x86_64_regs.m"
          MR_Box ll_backend__x86_64_regs__conv0_RegLocn_6;

#line 202 "x86_64_regs.m"
          {
#line 202 "x86_64_regs.m"
            mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__x86_64_regs__ll_backend__x86_64_regs__type_ctor_info_reg_locn_0, ll_backend__x86_64_regs__RegMap_8, ((MR_Box) (ll_backend__x86_64_regs__Lval_5)), &ll_backend__x86_64_regs__conv0_RegLocn_6);
          }
#line 202 "x86_64_regs.m"
          ll_backend__x86_64_regs__RegLocn_6 = ((MR_Word) ll_backend__x86_64_regs__conv0_RegLocn_6);
#line 201 "x86_64_regs.m"
        }
#line 186 "x86_64_regs.m"
      else
#line 184 "x86_64_regs.m"
        {
#line 185 "x86_64_regs.m"
          {
#line 185 "x86_64_regs.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_regs", (MR_String) "function \140ll_backend.x86_64_regs.reg_map_lookup_reg_locn\'/2", (MR_String) "lval is not a virtual machine register");
          }
#line 184 "x86_64_regs.m"
        }
#line 172 "x86_64_regs.m"
    return ll_backend__x86_64_regs__RegLocn_6;
#line 172 "x86_64_regs.m"
  }
#line 68 "x86_64_regs.m"
}

#line 61 "x86_64_regs.m"
MR_Word MR_CALL 
ll_backend__x86_64_regs__reg_map_init_1_f_0(
#line 61 "x86_64_regs.m"
  MR_Word ll_backend__x86_64_regs__AssocRegMap_3)
#line 61 "x86_64_regs.m"
{
#line 158 "x86_64_regs.m"
  {
#line 158 "x86_64_regs.m"
    MR_bool ll_backend__x86_64_regs__succeeded;
#line 158 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__RegMap_4;
#line 158 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__TypeCtorInfo_13_13 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 158 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__TypeCtorInfo_14_14 = (MR_Word) &ll_backend__x86_64_regs__ll_backend__x86_64_regs__type_ctor_info_reg_locn_0;
#line 158 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__Map0_5;
#line 158 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__ListOfKeys_6;
#line 158 "x86_64_regs.m"
    MR_Word ll_backend__x86_64_regs__Result_7;

#line 159 "x86_64_regs.m"
    {
#line 159 "x86_64_regs.m"
      mercury__map__init_1_p_0(ll_backend__x86_64_regs__TypeCtorInfo_13_13, ll_backend__x86_64_regs__TypeCtorInfo_14_14, &ll_backend__x86_64_regs__Map0_5);
    }
#line 160 "x86_64_regs.m"
    {
#line 160 "x86_64_regs.m"
      mercury__assoc_list__keys_2_p_0(ll_backend__x86_64_regs__TypeCtorInfo_13_13, ll_backend__x86_64_regs__TypeCtorInfo_14_14, ll_backend__x86_64_regs__AssocRegMap_3, &ll_backend__x86_64_regs__ListOfKeys_6);
    }
#line 161 "x86_64_regs.m"
    {
#line 161 "x86_64_regs.m"
      ll_backend__x86_64_regs__check_if_all_mvm_registers_2_p_0(ll_backend__x86_64_regs__ListOfKeys_6, &ll_backend__x86_64_regs__Result_7);
    }
#line 166 "x86_64_regs.m"
    if ((ll_backend__x86_64_regs__Result_7 == (MR_Integer) 0))
#line 167 "x86_64_regs.m"
      {
#line 168 "x86_64_regs.m"
        {
#line 168 "x86_64_regs.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_regs", (MR_String) "function \140ll_backend.x86_64_regs.reg_map_init\'/1", (MR_String) "non-MVM register found in the association list");
        }
#line 167 "x86_64_regs.m"
      }
#line 166 "x86_64_regs.m"
    else
#line 163 "x86_64_regs.m"
      {
#line 163 "x86_64_regs.m"
        MR_Word ll_backend__x86_64_regs__Map1_8;

#line 164 "x86_64_regs.m"
        {
#line 164 "x86_64_regs.m"
          mercury__map__det_insert_from_assoc_list_3_p_0(ll_backend__x86_64_regs__TypeCtorInfo_13_13, ll_backend__x86_64_regs__TypeCtorInfo_14_14, ll_backend__x86_64_regs__AssocRegMap_3, ll_backend__x86_64_regs__Map0_5, &ll_backend__x86_64_regs__Map1_8);
        }
#line 165 "x86_64_regs.m"
        {
#line 165 "x86_64_regs.m"
          ll_backend__x86_64_regs__RegMap_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 165 "x86_64_regs.m"
          MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__RegMap_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[109])));
#line 165 "x86_64_regs.m"
          MR_hl_field(MR_mktag(0), ll_backend__x86_64_regs__RegMap_4, 1) = ((MR_Box) (ll_backend__x86_64_regs__Map1_8));
#line 165 "x86_64_regs.m"
        }
#line 163 "x86_64_regs.m"
      }
#line 158 "x86_64_regs.m"
    return ll_backend__x86_64_regs__RegMap_4;
#line 158 "x86_64_regs.m"
  }
#line 61 "x86_64_regs.m"
}

#line 54 "x86_64_regs.m"
void MR_CALL 
ll_backend__x86_64_regs__default_x86_64_reg_mapping_1_p_0(
#line 54 "x86_64_regs.m"
  MR_Word * ll_backend__x86_64_regs__HeadVar__1_1)
#line 54 "x86_64_regs.m"
{
#line 118 "x86_64_regs.m"
  {
#line 118 "x86_64_regs.m"
    MR_bool ll_backend__x86_64_regs__succeeded;

#line 118 "x86_64_regs.m"
    *ll_backend__x86_64_regs__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__x86_64_regs_scalar_common_1[106]);
#line 118 "x86_64_regs.m"
  }
#line 54 "x86_64_regs.m"
}

void mercury__ll_backend__x86_64_regs__init(void)
{
}

void mercury__ll_backend__x86_64_regs__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__x86_64_regs__ll_backend__x86_64_regs__type_ctor_info_reg_locn_0);
	MR_register_type_ctor_info(&ll_backend__x86_64_regs__ll_backend__x86_64_regs__type_ctor_info_reg_map_0);
}

void mercury__ll_backend__x86_64_regs__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.x86_64_regs. */
