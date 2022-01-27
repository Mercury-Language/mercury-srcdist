/*
** Automatically generated from `mmc_analysis.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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


/* :- module transform_hlds.mmc_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__mmc_analysis__init
ENDINIT
*/

#include "transform_hlds.mmc_analysis.mih"


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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.exception_analysis.mih"
#include "transform_hlds.tabling_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.trailing_analysis.mih"
#include "transform_hlds.unused_args.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.structure_reuse.analysis.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.analysis.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"




#line 145 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDesc transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0;

#line 148 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_value_ordered_mmc_0[1];

#line 151 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_name_ordered_mmc_0[1];

#line 154 "transform_hlds.mmc_analysis.c"
static const MR_Integer transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__functor_number_map_mmc_0[1];

#line 157 "transform_hlds.mmc_analysis.c"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis____Unify____mmc_0_0_10001(
#line 160 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 162 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2);

#line 165 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis____Compare____mmc_0_0_10001(
#line 168 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_1,
#line 170 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 172 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3);

#line 175 "transform_hlds.mmc_analysis.c"
static MR_Box MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__compiler_name_1_1_f_0_10001(
#line 178 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 180 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1);

#line 183 "transform_hlds.mmc_analysis.c"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__analyses_2_2_f_0_10001(
#line 186 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 188 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 190 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 192 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_3);

#line 195 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_read_file_name_7_7_p_0_10001(
#line 198 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 200 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 202 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 204 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3,
#line 206 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_4,
#line 208 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_5,
#line 210 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_6,
#line 212 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_7);

#line 215 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_write_file_name_7_7_p_0_10001(
#line 218 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 220 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 222 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 224 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3,
#line 226 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_4,
#line 228 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_5,
#line 230 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_6,
#line 232 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_7);

#line 108 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_119_114_105_116_101_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(
#line 108 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 108 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 108 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 108 "mmc_analysis.m"
  MR_String * transform_hlds__mmc_analysis__FileName_13);

#line 103 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_114_101_97_100_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(
#line 103 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 103 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 103 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 103 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__MaybeFileName_11);

#line 72 "mmc_analysis.m"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_101_115_95_50_95_95_91_49_93_95_48_2_f_0(
#line 72 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__HeadVar__2_2,
#line 72 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__3_3);

#line 70 "mmc_analysis.m"
static MR_String MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_110_97_109_101_95_49_95_95_91_49_93_95_48_1_f_0(void);

#line 108 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_write_file_name_7_7_p_0(
#line 108 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 108 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 108 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 108 "mmc_analysis.m"
  MR_String * transform_hlds__mmc_analysis__FileName_13);

#line 103 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_read_file_name_7_7_p_0(
#line 103 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 103 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 103 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 103 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__MaybeFileName_11);

#line 72 "mmc_analysis.m"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__analyses_2_2_f_0(
#line 72 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__HeadVar__2_2,
#line 72 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__3_3);

#line 70 "mmc_analysis.m"
static MR_String MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__compiler_name_1_1_f_0(void);


static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_1[16][3];

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_2[10][2];

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_3[10][5];

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_4[6][6];




static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_1[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row 5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row 6 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0))
  },
  /* row 7 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row 8 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0))
  },
  /* row 9 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[5])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[4])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[2])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_2[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row 5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row 6 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0))
  },
  /* row 7 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row 8 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0))
  },
  /* row 9 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_3[10][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[0])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[1])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[2])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[3])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[4])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[4])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row 5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[5])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[5])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row 6 */
  {
    ((MR_Box) (base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[6])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[6])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0))
  },
  /* row 7 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[7])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[7])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row 8 */
  {
    ((MR_Box) (base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[8])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[8])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0))
  },
  /* row 9 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_1[9])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_2[9])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_4[6][6] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[1])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[2])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[3])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[4])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[5])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[6])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[7])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row 5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[8])),
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_3[9])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
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



#line 628 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDesc transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0 = {
  (MR_String) "mmc",
  (MR_Integer) 0
};

#line 634 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_value_ordered_mmc_0[1] = {
  &transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0
};

#line 639 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_name_ordered_mmc_0[1] = {
  &transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0
};

#line 644 "transform_hlds.mmc_analysis.c"
static const MR_Integer transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__functor_number_map_mmc_0[1] = {
  (MR_Integer) 0
};

#line 649 "transform_hlds.mmc_analysis.c"
const MR_TypeCtorInfo_Struct transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__mmc_analysis____Unify____mmc_0_0_10001)),
  ((MR_Box) (transform_hlds__mmc_analysis____Compare____mmc_0_0_10001)),
  (MR_String) "transform_hlds.mmc_analysis",
  (MR_String) "mmc",
  {
    transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_name_ordered_mmc_0
  },
  {
    transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_value_ordered_mmc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__functor_number_map_mmc_0
};

#line 670 "transform_hlds.mmc_analysis.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__[9] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__compiler_name_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__analyses_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_read_file_name_7_7_p_0_10001)),
  ((MR_Box) (transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_write_file_name_7_7_p_0_10001))
};

#line 683 "transform_hlds.mmc_analysis.c"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis____Unify____mmc_0_0_10001(
#line 686 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 688 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2)
#line 690 "transform_hlds.mmc_analysis.c"
{
#line 692 "transform_hlds.mmc_analysis.c"
  {
#line 694 "transform_hlds.mmc_analysis.c"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 697 "transform_hlds.mmc_analysis.c"
    {
#line 699 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis__succeeded = transform_hlds__mmc_analysis____Unify____mmc_0_0();
    }
#line 702 "transform_hlds.mmc_analysis.c"
    return transform_hlds__mmc_analysis__succeeded;
#line 704 "transform_hlds.mmc_analysis.c"
  }
#line 706 "transform_hlds.mmc_analysis.c"
}

#line 709 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis____Compare____mmc_0_0_10001(
#line 712 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_1,
#line 714 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 716 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3)
#line 718 "transform_hlds.mmc_analysis.c"
{
#line 720 "transform_hlds.mmc_analysis.c"
  {
#line 722 "transform_hlds.mmc_analysis.c"
    MR_Word transform_hlds__mmc_analysis__conv0_HeadVar__1_1;

#line 725 "transform_hlds.mmc_analysis.c"
    {
#line 727 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis____Compare____mmc_0_0(&transform_hlds__mmc_analysis__conv0_HeadVar__1_1);
    }
#line 730 "transform_hlds.mmc_analysis.c"
    *transform_hlds__mmc_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__mmc_analysis__conv0_HeadVar__1_1));
#line 732 "transform_hlds.mmc_analysis.c"
  }
#line 734 "transform_hlds.mmc_analysis.c"
}

#line 737 "transform_hlds.mmc_analysis.c"
static MR_Box MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__compiler_name_1_1_f_0_10001(
#line 740 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 742 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1)
#line 744 "transform_hlds.mmc_analysis.c"
{
#line 746 "transform_hlds.mmc_analysis.c"
  {
#line 748 "transform_hlds.mmc_analysis.c"
    MR_Box transform_hlds__mmc_analysis__wrapper_arg_2;
#line 750 "transform_hlds.mmc_analysis.c"
    MR_Box transform_hlds__mmc_analysis__closure;
#line 752 "transform_hlds.mmc_analysis.c"
    MR_String transform_hlds__mmc_analysis__conv0_HeadVar__2_2;

#line 755 "transform_hlds.mmc_analysis.c"
    transform_hlds__mmc_analysis__closure = transform_hlds__mmc_analysis__closure_arg;
#line 757 "transform_hlds.mmc_analysis.c"
    {
#line 759 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis__conv0_HeadVar__2_2 = transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__compiler_name_1_1_f_0();
    }
#line 762 "transform_hlds.mmc_analysis.c"
    transform_hlds__mmc_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__mmc_analysis__conv0_HeadVar__2_2));
#line 764 "transform_hlds.mmc_analysis.c"
    return transform_hlds__mmc_analysis__wrapper_arg_2;
#line 766 "transform_hlds.mmc_analysis.c"
  }
#line 768 "transform_hlds.mmc_analysis.c"
}

#line 771 "transform_hlds.mmc_analysis.c"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__analyses_2_2_f_0_10001(
#line 774 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 776 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 778 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 780 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_3)
#line 782 "transform_hlds.mmc_analysis.c"
{
#line 784 "transform_hlds.mmc_analysis.c"
  {
#line 786 "transform_hlds.mmc_analysis.c"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 788 "transform_hlds.mmc_analysis.c"
    MR_Box transform_hlds__mmc_analysis__closure;
#line 790 "transform_hlds.mmc_analysis.c"
    MR_Word transform_hlds__mmc_analysis__conv0_HeadVar__3_3;

#line 793 "transform_hlds.mmc_analysis.c"
    transform_hlds__mmc_analysis__closure = transform_hlds__mmc_analysis__closure_arg;
#line 795 "transform_hlds.mmc_analysis.c"
    {
#line 797 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis__succeeded = transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__analyses_2_2_f_0(((MR_String) transform_hlds__mmc_analysis__wrapper_arg_2), &transform_hlds__mmc_analysis__conv0_HeadVar__3_3);
    }
#line 800 "transform_hlds.mmc_analysis.c"
    if (transform_hlds__mmc_analysis__succeeded)
#line 802 "transform_hlds.mmc_analysis.c"
      {
#line 804 "transform_hlds.mmc_analysis.c"
        *transform_hlds__mmc_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__mmc_analysis__conv0_HeadVar__3_3));
#line 806 "transform_hlds.mmc_analysis.c"
        transform_hlds__mmc_analysis__succeeded = MR_TRUE;
#line 808 "transform_hlds.mmc_analysis.c"
      }
#line 810 "transform_hlds.mmc_analysis.c"
    return transform_hlds__mmc_analysis__succeeded;
#line 812 "transform_hlds.mmc_analysis.c"
  }
#line 814 "transform_hlds.mmc_analysis.c"
}

#line 817 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_read_file_name_7_7_p_0_10001(
#line 820 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 822 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 824 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 826 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3,
#line 828 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_4,
#line 830 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_5,
#line 832 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_6,
#line 834 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_7)
#line 836 "transform_hlds.mmc_analysis.c"
{
#line 838 "transform_hlds.mmc_analysis.c"
  {
#line 840 "transform_hlds.mmc_analysis.c"
    MR_Box transform_hlds__mmc_analysis__closure;
#line 842 "transform_hlds.mmc_analysis.c"
    MR_Word transform_hlds__mmc_analysis__conv0_MaybeFileName_11;

#line 845 "transform_hlds.mmc_analysis.c"
    transform_hlds__mmc_analysis__closure = transform_hlds__mmc_analysis__closure_arg;
#line 847 "transform_hlds.mmc_analysis.c"
    {
#line 849 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_read_file_name_7_7_p_0(((MR_Word) transform_hlds__mmc_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__mmc_analysis__wrapper_arg_3), ((MR_String) transform_hlds__mmc_analysis__wrapper_arg_4), &transform_hlds__mmc_analysis__conv0_MaybeFileName_11);
    }
#line 852 "transform_hlds.mmc_analysis.c"
    *transform_hlds__mmc_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__mmc_analysis__conv0_MaybeFileName_11));
#line 854 "transform_hlds.mmc_analysis.c"
  }
#line 856 "transform_hlds.mmc_analysis.c"
}

#line 859 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_write_file_name_7_7_p_0_10001(
#line 862 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 864 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 866 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 868 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3,
#line 870 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_4,
#line 872 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_5,
#line 874 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_6,
#line 876 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_7)
#line 878 "transform_hlds.mmc_analysis.c"
{
#line 880 "transform_hlds.mmc_analysis.c"
  {
#line 882 "transform_hlds.mmc_analysis.c"
    MR_Box transform_hlds__mmc_analysis__closure;
#line 884 "transform_hlds.mmc_analysis.c"
    MR_String transform_hlds__mmc_analysis__conv0_FileName_13;

#line 887 "transform_hlds.mmc_analysis.c"
    transform_hlds__mmc_analysis__closure = transform_hlds__mmc_analysis__closure_arg;
#line 889 "transform_hlds.mmc_analysis.c"
    {
#line 891 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_write_file_name_7_7_p_0(((MR_Word) transform_hlds__mmc_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__mmc_analysis__wrapper_arg_3), ((MR_String) transform_hlds__mmc_analysis__wrapper_arg_4), &transform_hlds__mmc_analysis__conv0_FileName_13);
    }
#line 894 "transform_hlds.mmc_analysis.c"
    *transform_hlds__mmc_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__mmc_analysis__conv0_FileName_13));
#line 896 "transform_hlds.mmc_analysis.c"
  }
#line 898 "transform_hlds.mmc_analysis.c"
}

#line 108 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_119_114_105_116_101_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(
#line 108 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 108 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 108 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 108 "mmc_analysis.m"
  MR_String * transform_hlds__mmc_analysis__FileName_13)
#line 108 "mmc_analysis.m"
{
#line 125 "mmc_analysis.m"
  {
#line 125 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 126 "mmc_analysis.m"
    {
#line 126 "mmc_analysis.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__mmc_analysis__Globals_8, transform_hlds__mmc_analysis__ModuleName_9, transform_hlds__mmc_analysis__Ext_10, (MR_Integer) 0, transform_hlds__mmc_analysis__FileName_13);
#line 126 "mmc_analysis.m"
      return;
    }
#line 125 "mmc_analysis.m"
  }
#line 108 "mmc_analysis.m"
}

#line 103 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_114_101_97_100_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(
#line 103 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 103 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 103 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 103 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__MaybeFileName_11)
#line 103 "mmc_analysis.m"
{
#line 117 "mmc_analysis.m"
  {
#line 117 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 117 "mmc_analysis.m"
    MR_String transform_hlds__mmc_analysis__FileName0_24;
#line 117 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__Dirs_25;

#line 118 "mmc_analysis.m"
    {
#line 118 "mmc_analysis.m"
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(transform_hlds__mmc_analysis__Globals_8, transform_hlds__mmc_analysis__ModuleName_9, transform_hlds__mmc_analysis__Ext_10, &transform_hlds__mmc_analysis__FileName0_24);
    }
#line 119 "mmc_analysis.m"
    {
#line 119 "mmc_analysis.m"
      libs__globals__lookup_accumulating_option_3_p_0(transform_hlds__mmc_analysis__Globals_8, (MR_Integer) 635, &transform_hlds__mmc_analysis__Dirs_25);
    }
#line 120 "mmc_analysis.m"
    {
#line 120 "mmc_analysis.m"
      libs__file_util__search_for_file_6_p_0((MR_Integer) 1, transform_hlds__mmc_analysis__Dirs_25, transform_hlds__mmc_analysis__FileName0_24, transform_hlds__mmc_analysis__MaybeFileName_11);
#line 120 "mmc_analysis.m"
      return;
    }
#line 117 "mmc_analysis.m"
  }
#line 103 "mmc_analysis.m"
}

#line 72 "mmc_analysis.m"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_101_115_95_50_95_95_91_49_93_95_48_2_f_0(
#line 72 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__HeadVar__2_2,
#line 72 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__3_3)
#line 72 "mmc_analysis.m"
{
#line 72 "mmc_analysis.m"
  {
#line 72 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 72 "mmc_analysis.m"
    if ((strcmp(transform_hlds__mmc_analysis__HeadVar__2_2, (MR_String) "trail_usage") == 0))
#line 72 "mmc_analysis.m"
      {
#line 78 "mmc_analysis.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 78 "mmc_analysis.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 72 "mmc_analysis.m"
        *transform_hlds__mmc_analysis__HeadVar__3_3 = (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[10];
#line 72 "mmc_analysis.m"
        transform_hlds__mmc_analysis__succeeded = MR_TRUE;
#line 72 "mmc_analysis.m"
      }
#line 72 "mmc_analysis.m"
    else
#line 72 "mmc_analysis.m"
      if ((strcmp(transform_hlds__mmc_analysis__HeadVar__2_2, (MR_String) "unused_args") == 0))
#line 72 "mmc_analysis.m"
        {
#line 88 "mmc_analysis.m"
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 88 "mmc_analysis.m"
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 72 "mmc_analysis.m"
          *transform_hlds__mmc_analysis__HeadVar__3_3 = (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[11];
#line 72 "mmc_analysis.m"
          transform_hlds__mmc_analysis__succeeded = MR_TRUE;
#line 72 "mmc_analysis.m"
        }
#line 72 "mmc_analysis.m"
      else
#line 72 "mmc_analysis.m"
        if ((strcmp(transform_hlds__mmc_analysis__HeadVar__2_2, (MR_String) "structure_reuse") == 0))
#line 72 "mmc_analysis.m"
          {
#line 98 "mmc_analysis.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 98 "mmc_analysis.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 72 "mmc_analysis.m"
            *transform_hlds__mmc_analysis__HeadVar__3_3 = (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[12];
#line 72 "mmc_analysis.m"
            transform_hlds__mmc_analysis__succeeded = MR_TRUE;
#line 72 "mmc_analysis.m"
          }
#line 72 "mmc_analysis.m"
        else
#line 72 "mmc_analysis.m"
          if ((strcmp(transform_hlds__mmc_analysis__HeadVar__2_2, (MR_String) "structure_sharing") == 0))
#line 72 "mmc_analysis.m"
            {
#line 93 "mmc_analysis.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 93 "mmc_analysis.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 72 "mmc_analysis.m"
              *transform_hlds__mmc_analysis__HeadVar__3_3 = (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[13];
#line 72 "mmc_analysis.m"
              transform_hlds__mmc_analysis__succeeded = MR_TRUE;
#line 72 "mmc_analysis.m"
            }
#line 72 "mmc_analysis.m"
          else
#line 72 "mmc_analysis.m"
            if ((strcmp(transform_hlds__mmc_analysis__HeadVar__2_2, (MR_String) "exception_analysis") == 0))
#line 72 "mmc_analysis.m"
              {
#line 83 "mmc_analysis.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 83 "mmc_analysis.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 72 "mmc_analysis.m"
                *transform_hlds__mmc_analysis__HeadVar__3_3 = (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[14];
#line 72 "mmc_analysis.m"
                transform_hlds__mmc_analysis__succeeded = MR_TRUE;
#line 72 "mmc_analysis.m"
              }
#line 72 "mmc_analysis.m"
            else
#line 72 "mmc_analysis.m"
              if ((strcmp(transform_hlds__mmc_analysis__HeadVar__2_2, (MR_String) "mm_tabling_analysis") == 0))
#line 72 "mmc_analysis.m"
                {
#line 73 "mmc_analysis.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 73 "mmc_analysis.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 72 "mmc_analysis.m"
                  *transform_hlds__mmc_analysis__HeadVar__3_3 = (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[15];
#line 72 "mmc_analysis.m"
                  transform_hlds__mmc_analysis__succeeded = MR_TRUE;
#line 72 "mmc_analysis.m"
                }
#line 72 "mmc_analysis.m"
              else
#line 72 "mmc_analysis.m"
                transform_hlds__mmc_analysis__succeeded = MR_FALSE;
#line 72 "mmc_analysis.m"
    return transform_hlds__mmc_analysis__succeeded;
#line 72 "mmc_analysis.m"
  }
#line 72 "mmc_analysis.m"
}

#line 70 "mmc_analysis.m"
static MR_String MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_110_97_109_101_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 70 "mmc_analysis.m"
{
#line 70 "mmc_analysis.m"
  {
#line 70 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 70 "mmc_analysis.m"
    return (MR_String) "mmc";
#line 70 "mmc_analysis.m"
  }
#line 70 "mmc_analysis.m"
}

#line 27 "mmc_analysis.m"
void MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 27 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__1_1)
#line 27 "mmc_analysis.m"
{
#line 27 "mmc_analysis.m"
  {
#line 27 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 27 "mmc_analysis.m"
    *transform_hlds__mmc_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 27 "mmc_analysis.m"
  }
#line 27 "mmc_analysis.m"
}

#line 27 "mmc_analysis.m"
MR_bool MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 27 "mmc_analysis.m"
{
#line 27 "mmc_analysis.m"
  {
#line 27 "mmc_analysis.m"
    return MR_TRUE;
#line 27 "mmc_analysis.m"
  }
#line 27 "mmc_analysis.m"
}

#line 108 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_write_file_name_7_7_p_0(
#line 108 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 108 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 108 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 108 "mmc_analysis.m"
  MR_String * transform_hlds__mmc_analysis__FileName_13)
#line 108 "mmc_analysis.m"
{
#line 125 "mmc_analysis.m"
  {
#line 125 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 125 "mmc_analysis.m"
    {
#line 125 "mmc_analysis.m"
      transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_119_114_105_116_101_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(transform_hlds__mmc_analysis__Globals_8, transform_hlds__mmc_analysis__ModuleName_9, transform_hlds__mmc_analysis__Ext_10, transform_hlds__mmc_analysis__FileName_13);
#line 125 "mmc_analysis.m"
      return;
    }
#line 125 "mmc_analysis.m"
  }
#line 108 "mmc_analysis.m"
}

#line 103 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_read_file_name_7_7_p_0(
#line 103 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 103 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 103 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 103 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__MaybeFileName_11)
#line 103 "mmc_analysis.m"
{
#line 117 "mmc_analysis.m"
  {
#line 117 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 117 "mmc_analysis.m"
    {
#line 117 "mmc_analysis.m"
      transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_114_101_97_100_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(transform_hlds__mmc_analysis__Globals_8, transform_hlds__mmc_analysis__ModuleName_9, transform_hlds__mmc_analysis__Ext_10, transform_hlds__mmc_analysis__MaybeFileName_11);
#line 117 "mmc_analysis.m"
      return;
    }
#line 117 "mmc_analysis.m"
  }
#line 103 "mmc_analysis.m"
}

#line 72 "mmc_analysis.m"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__analyses_2_2_f_0(
#line 72 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__HeadVar__2_2,
#line 72 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__3_3)
#line 72 "mmc_analysis.m"
{
#line 72 "mmc_analysis.m"
  {
#line 72 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 72 "mmc_analysis.m"
    {
#line 72 "mmc_analysis.m"
      return transform_hlds__mmc_analysis__succeeded = transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_101_115_95_50_95_95_91_49_93_95_48_2_f_0(transform_hlds__mmc_analysis__HeadVar__2_2, transform_hlds__mmc_analysis__HeadVar__3_3);
    }
#line 72 "mmc_analysis.m"
    return transform_hlds__mmc_analysis__succeeded;
#line 72 "mmc_analysis.m"
  }
#line 72 "mmc_analysis.m"
}

#line 70 "mmc_analysis.m"
static MR_String MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__compiler_name_1_1_f_0(void)
#line 70 "mmc_analysis.m"
{
#line 70 "mmc_analysis.m"
  {
#line 70 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 70 "mmc_analysis.m"
    MR_String transform_hlds__mmc_analysis__HeadVar__2_2;

#line 70 "mmc_analysis.m"
    {
#line 70 "mmc_analysis.m"
      return transform_hlds__mmc_analysis__HeadVar__2_2 = transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_110_97_109_101_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 70 "mmc_analysis.m"
    return transform_hlds__mmc_analysis__HeadVar__2_2;
#line 70 "mmc_analysis.m"
  }
#line 70 "mmc_analysis.m"
}

#line 27 "mmc_analysis.m"
void MR_CALL 
transform_hlds__mmc_analysis____Compare____mmc_0_0(
#line 27 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__1_1)
#line 27 "mmc_analysis.m"
{
#line 27 "mmc_analysis.m"
  {
#line 27 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 27 "mmc_analysis.m"
    {
#line 27 "mmc_analysis.m"
      transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(transform_hlds__mmc_analysis__HeadVar__1_1);
#line 27 "mmc_analysis.m"
      return;
    }
#line 27 "mmc_analysis.m"
  }
#line 27 "mmc_analysis.m"
}

#line 27 "mmc_analysis.m"
MR_bool MR_CALL 
transform_hlds__mmc_analysis____Unify____mmc_0_0(void)
#line 27 "mmc_analysis.m"
{
#line 27 "mmc_analysis.m"
  {
#line 27 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 27 "mmc_analysis.m"
    {
#line 27 "mmc_analysis.m"
      return transform_hlds__mmc_analysis__succeeded = transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 27 "mmc_analysis.m"
    return transform_hlds__mmc_analysis__succeeded;
#line 27 "mmc_analysis.m"
  }
#line 27 "mmc_analysis.m"
}

#line 38 "mmc_analysis.m"
void MR_CALL 
transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(
#line 38 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleInfo_5,
#line 38 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_6,
#line 38 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__FuncId_7,
#line 38 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__PPId_8)
#line 38 "mmc_analysis.m"
{
#line 140 "mmc_analysis.m"
  {
#line 140 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 140 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__FuncId_7, (MR_Integer) 0)));
#line 140 "mmc_analysis.m"
    MR_String transform_hlds__mmc_analysis__FuncName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__FuncId_7, (MR_Integer) 1)));
#line 140 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__FuncId_7, (MR_Integer) 2)));
#line 140 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__FuncId_7, (MR_Integer) 3)));
#line 140 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredTable_13;
#line 140 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredIds_14;

#line 142 "mmc_analysis.m"
    {
#line 142 "mmc_analysis.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__mmc_analysis__ModuleInfo_5, &transform_hlds__mmc_analysis__PredTable_13);
    }
#line 143 "mmc_analysis.m"
    {
#line 143 "mmc_analysis.m"
      hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(transform_hlds__mmc_analysis__PredTable_13, (MR_Integer) 0, transform_hlds__mmc_analysis__PredOrFunc_9, transform_hlds__mmc_analysis__ModuleName_6, transform_hlds__mmc_analysis__FuncName_10, transform_hlds__mmc_analysis__Arity_11, &transform_hlds__mmc_analysis__PredIds_14);
    }
#line 148 "mmc_analysis.m"
    if ((transform_hlds__mmc_analysis__PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 146 "mmc_analysis.m"
      {
#line 147 "mmc_analysis.m"
        {
#line 147 "mmc_analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.mmc_analysis", (MR_String) "predicate \140transform_hlds.mmc_analysis.func_id_to_ppid\'/4", (MR_String) "no predicate");
#line 147 "mmc_analysis.m"
          return;
        }
#line 146 "mmc_analysis.m"
      }
#line 148 "mmc_analysis.m"
    else
#line 148 "mmc_analysis.m"
      {
#line 148 "mmc_analysis.m"
        MR_Word transform_hlds__mmc_analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__mmc_analysis__PredIds_14, (MR_Integer) 1)));
#line 148 "mmc_analysis.m"
        MR_Word transform_hlds__mmc_analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__mmc_analysis__PredIds_14, (MR_Integer) 0)));

#line 148 "mmc_analysis.m"
        if ((transform_hlds__mmc_analysis__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "mmc_analysis.m"
          {
#line 150 "mmc_analysis.m"
            MR_Word base;
#line 150 "mmc_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 150 "mmc_analysis.m"
            *transform_hlds__mmc_analysis__PPId_8 = base;
#line 150 "mmc_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__mmc_analysis__V_29_29));
#line 150 "mmc_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__mmc_analysis__ProcId_12));
#line 150 "mmc_analysis.m"
          }
#line 148 "mmc_analysis.m"
        else
#line 152 "mmc_analysis.m"
          {
#line 153 "mmc_analysis.m"
            {
#line 153 "mmc_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.mmc_analysis", (MR_String) "predicate \140transform_hlds.mmc_analysis.func_id_to_ppid\'/4", (MR_String) "more than one predicate");
#line 153 "mmc_analysis.m"
              return;
            }
#line 152 "mmc_analysis.m"
          }
#line 148 "mmc_analysis.m"
      }
#line 140 "mmc_analysis.m"
  }
#line 38 "mmc_analysis.m"
}

#line 35 "mmc_analysis.m"
void MR_CALL 
transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(
#line 35 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__PredInfo_5,
#line 35 "mmc_analysis.m"
  MR_Integer transform_hlds__mmc_analysis__ProcId_6,
#line 35 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__PredModule_7,
#line 35 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__FuncId_8)
#line 35 "mmc_analysis.m"
{
#line 133 "mmc_analysis.m"
  {
#line 133 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 133 "mmc_analysis.m"
    MR_String transform_hlds__mmc_analysis__PredName_9;
#line 133 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredOrFunc_10;
#line 133 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__PredArity_11;

#line 134 "mmc_analysis.m"
    {
#line 134 "mmc_analysis.m"
      *transform_hlds__mmc_analysis__PredModule_7 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__mmc_analysis__PredInfo_5);
    }
#line 135 "mmc_analysis.m"
    {
#line 135 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredName_9 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__mmc_analysis__PredInfo_5);
    }
#line 136 "mmc_analysis.m"
    {
#line 136 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__mmc_analysis__PredInfo_5);
    }
#line 137 "mmc_analysis.m"
    {
#line 137 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredArity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__mmc_analysis__PredInfo_5);
    }
#line 138 "mmc_analysis.m"
    {
#line 138 "mmc_analysis.m"
      MR_Word base;
#line 138 "mmc_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 138 "mmc_analysis.m"
      *transform_hlds__mmc_analysis__FuncId_8 = base;
#line 138 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__mmc_analysis__PredOrFunc_10));
#line 138 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__mmc_analysis__PredName_9));
#line 138 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__mmc_analysis__PredArity_11));
#line 138 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__mmc_analysis__ProcId_6));
#line 138 "mmc_analysis.m"
    }
#line 133 "mmc_analysis.m"
  }
#line 35 "mmc_analysis.m"
}

#line 32 "mmc_analysis.m"
void MR_CALL 
transform_hlds__mmc_analysis__module_name_func_id_4_p_0(
#line 32 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleInfo_5,
#line 32 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__HeadVar__2_2,
#line 32 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__PredModule_8,
#line 32 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__FuncId_9)
#line 32 "mmc_analysis.m"
{
#line 129 "mmc_analysis.m"
  {
#line 129 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 129 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 129 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 129 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredInfo_10;
#line 129 "mmc_analysis.m"
    MR_String transform_hlds__mmc_analysis__PredName_15;
#line 129 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredOrFunc_16;
#line 129 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__PredArity_17;

#line 130 "mmc_analysis.m"
    {
#line 130 "mmc_analysis.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__mmc_analysis__ModuleInfo_5, transform_hlds__mmc_analysis__PredId_6, &transform_hlds__mmc_analysis__PredInfo_10);
    }
#line 134 "mmc_analysis.m"
    {
#line 134 "mmc_analysis.m"
      *transform_hlds__mmc_analysis__PredModule_8 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__mmc_analysis__PredInfo_10);
    }
#line 135 "mmc_analysis.m"
    {
#line 135 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__mmc_analysis__PredInfo_10);
    }
#line 136 "mmc_analysis.m"
    {
#line 136 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__mmc_analysis__PredInfo_10);
    }
#line 137 "mmc_analysis.m"
    {
#line 137 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredArity_17 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__mmc_analysis__PredInfo_10);
    }
#line 138 "mmc_analysis.m"
    {
#line 138 "mmc_analysis.m"
      MR_Word base;
#line 138 "mmc_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 138 "mmc_analysis.m"
      *transform_hlds__mmc_analysis__FuncId_9 = base;
#line 138 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__mmc_analysis__PredOrFunc_16));
#line 138 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__mmc_analysis__PredName_15));
#line 138 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__mmc_analysis__PredArity_17));
#line 138 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__mmc_analysis__ProcId_7));
#line 138 "mmc_analysis.m"
    }
#line 129 "mmc_analysis.m"
  }
#line 32 "mmc_analysis.m"
}

void mercury__transform_hlds__mmc_analysis__init(void)
{
}

void mercury__transform_hlds__mmc_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0);
}

void mercury__transform_hlds__mmc_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.mmc_analysis. */
