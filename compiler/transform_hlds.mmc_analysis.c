/*
** Automatically generated from `mmc_analysis.m'
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


/* :- module transform_hlds.mmc_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__mmc_analysis__init
ENDINIT
*/

#include "transform_hlds.mmc_analysis.mih"


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
#include "libs.file_util.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.exception_analysis.mih"
#include "transform_hlds.tabling_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
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




#line 154 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDesc transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0;

#line 157 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_value_ordered_mmc_0[1];

#line 160 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_name_ordered_mmc_0[1];

#line 163 "transform_hlds.mmc_analysis.c"
static const MR_Integer transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__functor_number_map_mmc_0[1];

#line 166 "transform_hlds.mmc_analysis.c"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis____Unify____mmc_0_0_10001(
#line 169 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 171 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2);

#line 174 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis____Compare____mmc_0_0_10001(
#line 177 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_1,
#line 179 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 181 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3);

#line 184 "transform_hlds.mmc_analysis.c"
static MR_Box MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__compiler_name_1_1_f_0_10001(
#line 187 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 189 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1);

#line 192 "transform_hlds.mmc_analysis.c"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__analyses_2_2_f_0_10001(
#line 195 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 197 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 199 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 201 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_3);

#line 204 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_read_file_name_7_7_p_0_10001(
#line 207 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 209 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 211 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 213 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3,
#line 215 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_4,
#line 217 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_5,
#line 219 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_6,
#line 221 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_7);

#line 224 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_write_file_name_7_7_p_0_10001(
#line 227 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 229 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 231 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 233 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3,
#line 235 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_4,
#line 237 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_5,
#line 239 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_6,
#line 241 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_7);

#line 111 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_119_114_105_116_101_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(
#line 111 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 111 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 111 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 111 "mmc_analysis.m"
  MR_String * transform_hlds__mmc_analysis__FileName_13);

#line 106 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_114_101_97_100_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(
#line 106 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 106 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 106 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 106 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__MaybeFileName_11);

#line 75 "mmc_analysis.m"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_101_115_95_50_95_95_91_49_93_95_48_2_f_0(
#line 75 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__HeadVar__2_2,
#line 75 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__3_3);

#line 73 "mmc_analysis.m"
static MR_String MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_110_97_109_101_95_49_95_95_91_49_93_95_48_1_f_0(void);

#line 111 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_write_file_name_7_7_p_0(
#line 111 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 111 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 111 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 111 "mmc_analysis.m"
  MR_String * transform_hlds__mmc_analysis__FileName_13);

#line 106 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_read_file_name_7_7_p_0(
#line 106 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 106 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 106 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 106 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__MaybeFileName_11);

#line 75 "mmc_analysis.m"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__analyses_2_2_f_0(
#line 75 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__HeadVar__2_2,
#line 75 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__3_3);

#line 73 "mmc_analysis.m"
static MR_String MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__compiler_name_1_1_f_0(void);


static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_1[16][3];

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_2[10][2];

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_3[10][5];

static /* final */ const MR_Box transform_hlds__mmc_analysis_scalar_common_4[6][6];


#line 75 "mmc_analysis.m"
/* sealed */ struct transform_hlds__mmc_analysis__vector_common_type_5_0_s {
#line 75 "mmc_analysis.m"
  const MR_String transform_hlds__mmc_analysis__vector_common_type_5_0__vct_5_f_0;
#line 75 "mmc_analysis.m"
  const MR_Word transform_hlds__mmc_analysis__vector_common_type_5_0__vct_5_f_1;
#line 75 "mmc_analysis.m"
};

static /* final */ const struct transform_hlds__mmc_analysis__vector_common_type_5_0_s transform_hlds__mmc_analysis_vector_common_5[6];



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
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[2])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[0])),
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
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__mmc_analysis_scalar_common_4[3])),
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


static /* final */ const struct transform_hlds__mmc_analysis__vector_common_type_5_0_s transform_hlds__mmc_analysis_vector_common_5[6] = {
  /* row 0 */
  {
    (MR_String) "exception_analysis",
    (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[10]
  },
  /* row 1 */
  {
    (MR_String) "mm_tabling_analysis",
    (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[11]
  },
  /* row 2 */
  {
    (MR_String) "structure_reuse",
    (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[12]
  },
  /* row 3 */
  {
    (MR_String) "structure_sharing",
    (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[13]
  },
  /* row 4 */
  {
    (MR_String) "trail_usage",
    (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[14]
  },
  /* row 5 */
  {
    (MR_String) "unused_args",
    (MR_Word) &transform_hlds__mmc_analysis_scalar_common_1[15]
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 673 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDesc transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0 = {
  (MR_String) "mmc",
  (MR_Integer) 0
};

#line 679 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_value_ordered_mmc_0[1] = {
  &transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0
};

#line 684 "transform_hlds.mmc_analysis.c"
static const MR_EnumFunctorDescPtr transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_name_ordered_mmc_0[1] = {
  &transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_functor_desc_mmc_0_0
};

#line 689 "transform_hlds.mmc_analysis.c"
static const MR_Integer transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__functor_number_map_mmc_0[1] = {
  (MR_Integer) 0
};

#line 694 "transform_hlds.mmc_analysis.c"
const MR_TypeCtorInfo_Struct transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__mmc_analysis____Unify____mmc_0_0_10001)),
  ((MR_Box) (transform_hlds__mmc_analysis____Compare____mmc_0_0_10001)),
  (MR_String) "transform_hlds.mmc_analysis",
  (MR_String) "mmc",
  {     transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_name_ordered_mmc_0 },
  {     transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__enum_value_ordered_mmc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__functor_number_map_mmc_0
};

#line 711 "transform_hlds.mmc_analysis.c"
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

#line 724 "transform_hlds.mmc_analysis.c"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis____Unify____mmc_0_0_10001(
#line 727 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 729 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2)
#line 731 "transform_hlds.mmc_analysis.c"
{
#line 733 "transform_hlds.mmc_analysis.c"
  {
#line 735 "transform_hlds.mmc_analysis.c"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 738 "transform_hlds.mmc_analysis.c"
    {
#line 740 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis__succeeded = transform_hlds__mmc_analysis____Unify____mmc_0_0();
    }
#line 743 "transform_hlds.mmc_analysis.c"
    return transform_hlds__mmc_analysis__succeeded;
#line 745 "transform_hlds.mmc_analysis.c"
  }
#line 747 "transform_hlds.mmc_analysis.c"
}

#line 750 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis____Compare____mmc_0_0_10001(
#line 753 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_1,
#line 755 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 757 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3)
#line 759 "transform_hlds.mmc_analysis.c"
{
#line 761 "transform_hlds.mmc_analysis.c"
  {
#line 763 "transform_hlds.mmc_analysis.c"
    MR_Word transform_hlds__mmc_analysis__conv0_HeadVar__1_1;

#line 766 "transform_hlds.mmc_analysis.c"
    {
#line 768 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis____Compare____mmc_0_0(&transform_hlds__mmc_analysis__conv0_HeadVar__1_1);
    }
#line 771 "transform_hlds.mmc_analysis.c"
    *transform_hlds__mmc_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__mmc_analysis__conv0_HeadVar__1_1));
#line 773 "transform_hlds.mmc_analysis.c"
  }
#line 775 "transform_hlds.mmc_analysis.c"
}

#line 778 "transform_hlds.mmc_analysis.c"
static MR_Box MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__compiler_name_1_1_f_0_10001(
#line 781 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 783 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1)
#line 785 "transform_hlds.mmc_analysis.c"
{
#line 787 "transform_hlds.mmc_analysis.c"
  {
#line 789 "transform_hlds.mmc_analysis.c"
    MR_Box transform_hlds__mmc_analysis__wrapper_arg_2;
#line 791 "transform_hlds.mmc_analysis.c"
    MR_Box transform_hlds__mmc_analysis__closure;
#line 793 "transform_hlds.mmc_analysis.c"
    MR_String transform_hlds__mmc_analysis__conv0_HeadVar__2_2;

#line 796 "transform_hlds.mmc_analysis.c"
    transform_hlds__mmc_analysis__closure = transform_hlds__mmc_analysis__closure_arg;
#line 798 "transform_hlds.mmc_analysis.c"
    {
#line 800 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis__conv0_HeadVar__2_2 = transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__compiler_name_1_1_f_0();
    }
#line 803 "transform_hlds.mmc_analysis.c"
    transform_hlds__mmc_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__mmc_analysis__conv0_HeadVar__2_2));
#line 805 "transform_hlds.mmc_analysis.c"
    return transform_hlds__mmc_analysis__wrapper_arg_2;
#line 807 "transform_hlds.mmc_analysis.c"
  }
#line 809 "transform_hlds.mmc_analysis.c"
}

#line 812 "transform_hlds.mmc_analysis.c"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__analyses_2_2_f_0_10001(
#line 815 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 817 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 819 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 821 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_3)
#line 823 "transform_hlds.mmc_analysis.c"
{
#line 825 "transform_hlds.mmc_analysis.c"
  {
#line 827 "transform_hlds.mmc_analysis.c"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 829 "transform_hlds.mmc_analysis.c"
    MR_Box transform_hlds__mmc_analysis__closure;
#line 831 "transform_hlds.mmc_analysis.c"
    MR_Word transform_hlds__mmc_analysis__conv0_HeadVar__3_3;

#line 834 "transform_hlds.mmc_analysis.c"
    transform_hlds__mmc_analysis__closure = transform_hlds__mmc_analysis__closure_arg;
#line 836 "transform_hlds.mmc_analysis.c"
    {
#line 838 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis__succeeded = transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__analyses_2_2_f_0(((MR_String) transform_hlds__mmc_analysis__wrapper_arg_2), &transform_hlds__mmc_analysis__conv0_HeadVar__3_3);
    }
#line 841 "transform_hlds.mmc_analysis.c"
    if (transform_hlds__mmc_analysis__succeeded)
#line 843 "transform_hlds.mmc_analysis.c"
      {
#line 845 "transform_hlds.mmc_analysis.c"
        *transform_hlds__mmc_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__mmc_analysis__conv0_HeadVar__3_3));
#line 847 "transform_hlds.mmc_analysis.c"
        transform_hlds__mmc_analysis__succeeded = MR_TRUE;
#line 849 "transform_hlds.mmc_analysis.c"
      }
#line 851 "transform_hlds.mmc_analysis.c"
    return transform_hlds__mmc_analysis__succeeded;
#line 853 "transform_hlds.mmc_analysis.c"
  }
#line 855 "transform_hlds.mmc_analysis.c"
}

#line 858 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_read_file_name_7_7_p_0_10001(
#line 861 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 863 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 865 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 867 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3,
#line 869 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_4,
#line 871 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_5,
#line 873 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_6,
#line 875 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_7)
#line 877 "transform_hlds.mmc_analysis.c"
{
#line 879 "transform_hlds.mmc_analysis.c"
  {
#line 881 "transform_hlds.mmc_analysis.c"
    MR_Box transform_hlds__mmc_analysis__closure;
#line 883 "transform_hlds.mmc_analysis.c"
    MR_Word transform_hlds__mmc_analysis__conv0_MaybeFileName_11;

#line 886 "transform_hlds.mmc_analysis.c"
    transform_hlds__mmc_analysis__closure = transform_hlds__mmc_analysis__closure_arg;
#line 888 "transform_hlds.mmc_analysis.c"
    {
#line 890 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_read_file_name_7_7_p_0(((MR_Word) transform_hlds__mmc_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__mmc_analysis__wrapper_arg_3), ((MR_String) transform_hlds__mmc_analysis__wrapper_arg_4), &transform_hlds__mmc_analysis__conv0_MaybeFileName_11);
    }
#line 893 "transform_hlds.mmc_analysis.c"
    *transform_hlds__mmc_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__mmc_analysis__conv0_MaybeFileName_11));
#line 895 "transform_hlds.mmc_analysis.c"
  }
#line 897 "transform_hlds.mmc_analysis.c"
}

#line 900 "transform_hlds.mmc_analysis.c"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_write_file_name_7_7_p_0_10001(
#line 903 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__closure_arg,
#line 905 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_1,
#line 907 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_2,
#line 909 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_3,
#line 911 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_4,
#line 913 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_5,
#line 915 "transform_hlds.mmc_analysis.c"
  MR_Box transform_hlds__mmc_analysis__wrapper_arg_6,
#line 917 "transform_hlds.mmc_analysis.c"
  MR_Box * transform_hlds__mmc_analysis__wrapper_arg_7)
#line 919 "transform_hlds.mmc_analysis.c"
{
#line 921 "transform_hlds.mmc_analysis.c"
  {
#line 923 "transform_hlds.mmc_analysis.c"
    MR_Box transform_hlds__mmc_analysis__closure;
#line 925 "transform_hlds.mmc_analysis.c"
    MR_String transform_hlds__mmc_analysis__conv0_FileName_13;

#line 928 "transform_hlds.mmc_analysis.c"
    transform_hlds__mmc_analysis__closure = transform_hlds__mmc_analysis__closure_arg;
#line 930 "transform_hlds.mmc_analysis.c"
    {
#line 932 "transform_hlds.mmc_analysis.c"
      transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_write_file_name_7_7_p_0(((MR_Word) transform_hlds__mmc_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__mmc_analysis__wrapper_arg_3), ((MR_String) transform_hlds__mmc_analysis__wrapper_arg_4), &transform_hlds__mmc_analysis__conv0_FileName_13);
    }
#line 935 "transform_hlds.mmc_analysis.c"
    *transform_hlds__mmc_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__mmc_analysis__conv0_FileName_13));
#line 937 "transform_hlds.mmc_analysis.c"
  }
#line 939 "transform_hlds.mmc_analysis.c"
}

#line 111 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_119_114_105_116_101_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(
#line 111 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 111 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 111 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 111 "mmc_analysis.m"
  MR_String * transform_hlds__mmc_analysis__FileName_13)
#line 111 "mmc_analysis.m"
{
#line 128 "mmc_analysis.m"
  {
#line 128 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 129 "mmc_analysis.m"
    {
#line 129 "mmc_analysis.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__mmc_analysis__Globals_8, transform_hlds__mmc_analysis__ModuleName_9, transform_hlds__mmc_analysis__Ext_10, (MR_Integer) 0, transform_hlds__mmc_analysis__FileName_13);
    }
#line 128 "mmc_analysis.m"
  }
#line 111 "mmc_analysis.m"
}

#line 106 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_114_101_97_100_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(
#line 106 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 106 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 106 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 106 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__MaybeFileName_11)
#line 106 "mmc_analysis.m"
{
#line 120 "mmc_analysis.m"
  {
#line 120 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 120 "mmc_analysis.m"
    MR_String transform_hlds__mmc_analysis__FileName0_24;
#line 120 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__Dirs_25;

#line 121 "mmc_analysis.m"
    {
#line 121 "mmc_analysis.m"
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(transform_hlds__mmc_analysis__Globals_8, transform_hlds__mmc_analysis__ModuleName_9, transform_hlds__mmc_analysis__Ext_10, &transform_hlds__mmc_analysis__FileName0_24);
    }
#line 122 "mmc_analysis.m"
    {
#line 122 "mmc_analysis.m"
      libs__globals__lookup_accumulating_option_3_p_0(transform_hlds__mmc_analysis__Globals_8, (MR_Integer) 636, &transform_hlds__mmc_analysis__Dirs_25);
    }
#line 123 "mmc_analysis.m"
    {
#line 123 "mmc_analysis.m"
      libs__file_util__search_for_file_6_p_0((MR_Integer) 1, transform_hlds__mmc_analysis__Dirs_25, transform_hlds__mmc_analysis__FileName0_24, transform_hlds__mmc_analysis__MaybeFileName_11);
    }
#line 120 "mmc_analysis.m"
  }
#line 106 "mmc_analysis.m"
}

#line 75 "mmc_analysis.m"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_101_115_95_50_95_95_91_49_93_95_48_2_f_0(
#line 75 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__HeadVar__2_2,
#line 75 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__3_3)
#line 75 "mmc_analysis.m"
{
#line 75 "mmc_analysis.m"
  {
#line 75 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 75 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__lo_0;
#line 75 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__hi_1;
#line 75 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__mid_2;
#line 75 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__result_3;

#line 75 "mmc_analysis.m"
    /* binary string simple lookup switch */
#line 75 "mmc_analysis.m"
    transform_hlds__mmc_analysis__lo_0 = (MR_Integer) 0;
#line 75 "mmc_analysis.m"
    transform_hlds__mmc_analysis__hi_1 = (MR_Integer) 5;
#line 75 "mmc_analysis.m"
    do
#line 75 "mmc_analysis.m"
      {
#line 75 "mmc_analysis.m"
        transform_hlds__mmc_analysis__mid_2 = (((transform_hlds__mmc_analysis__lo_0 + transform_hlds__mmc_analysis__hi_1)) / (MR_Integer) 2);
#line 75 "mmc_analysis.m"
        transform_hlds__mmc_analysis__result_3 = MR_strcmp(transform_hlds__mmc_analysis__HeadVar__2_2, ((&transform_hlds__mmc_analysis_vector_common_5[0 + transform_hlds__mmc_analysis__mid_2]))->transform_hlds__mmc_analysis__vector_common_type_5_0__vct_5_f_0);
#line 75 "mmc_analysis.m"
        if ((transform_hlds__mmc_analysis__result_3 == (MR_Integer) 0))
#line 75 "mmc_analysis.m"
          {
#line 75 "mmc_analysis.m"
            *transform_hlds__mmc_analysis__HeadVar__3_3 = ((&transform_hlds__mmc_analysis_vector_common_5[0 + transform_hlds__mmc_analysis__mid_2]))->transform_hlds__mmc_analysis__vector_common_type_5_0__vct_5_f_1;
#line 75 "mmc_analysis.m"
            transform_hlds__mmc_analysis__succeeded = MR_TRUE;
#line 75 "mmc_analysis.m"
            /* jump out of search loop */
#line 75 "mmc_analysis.m"
            goto label_0;
#line 75 "mmc_analysis.m"
          }
#line 75 "mmc_analysis.m"
        else
#line 75 "mmc_analysis.m"
        if ((transform_hlds__mmc_analysis__result_3 < (MR_Integer) 0))
#line 75 "mmc_analysis.m"
          transform_hlds__mmc_analysis__hi_1 = (transform_hlds__mmc_analysis__mid_2 - (MR_Integer) 1);
#line 75 "mmc_analysis.m"
        else
#line 75 "mmc_analysis.m"
          transform_hlds__mmc_analysis__lo_0 = (transform_hlds__mmc_analysis__mid_2 + (MR_Integer) 1);
#line 75 "mmc_analysis.m"
      }
#line 75 "mmc_analysis.m"
    while ((transform_hlds__mmc_analysis__lo_0 <= transform_hlds__mmc_analysis__hi_1));
#line 75 "mmc_analysis.m"
    transform_hlds__mmc_analysis__succeeded = MR_FALSE;
#line 75 "mmc_analysis.m"
  label_0:;
#line 75 "mmc_analysis.m"
    return transform_hlds__mmc_analysis__succeeded;
#line 75 "mmc_analysis.m"
  }
#line 75 "mmc_analysis.m"
}

#line 73 "mmc_analysis.m"
static MR_String MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_110_97_109_101_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 73 "mmc_analysis.m"
{
#line 73 "mmc_analysis.m"
  {
#line 73 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 73 "mmc_analysis.m"
    return (MR_String) "mmc";
#line 73 "mmc_analysis.m"
  }
#line 73 "mmc_analysis.m"
}

#line 28 "mmc_analysis.m"
void MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 28 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__1_1)
#line 28 "mmc_analysis.m"
{
#line 28 "mmc_analysis.m"
  {
#line 28 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 28 "mmc_analysis.m"
    *transform_hlds__mmc_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 28 "mmc_analysis.m"
  }
#line 28 "mmc_analysis.m"
}

#line 28 "mmc_analysis.m"
MR_bool MR_CALL 
transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 28 "mmc_analysis.m"
{
#line 28 "mmc_analysis.m"
  {
#line 28 "mmc_analysis.m"
    return MR_TRUE;
#line 28 "mmc_analysis.m"
  }
#line 28 "mmc_analysis.m"
}

#line 111 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_write_file_name_7_7_p_0(
#line 111 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 111 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 111 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 111 "mmc_analysis.m"
  MR_String * transform_hlds__mmc_analysis__FileName_13)
#line 111 "mmc_analysis.m"
{
#line 128 "mmc_analysis.m"
  {
#line 128 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 128 "mmc_analysis.m"
    {
#line 128 "mmc_analysis.m"
      transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_119_114_105_116_101_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(transform_hlds__mmc_analysis__Globals_8, transform_hlds__mmc_analysis__ModuleName_9, transform_hlds__mmc_analysis__Ext_10, transform_hlds__mmc_analysis__FileName_13);
    }
#line 128 "mmc_analysis.m"
  }
#line 111 "mmc_analysis.m"
}

#line 106 "mmc_analysis.m"
static void MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__module_name_to_read_file_name_7_7_p_0(
#line 106 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__Globals_8,
#line 106 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_9,
#line 106 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__Ext_10,
#line 106 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__MaybeFileName_11)
#line 106 "mmc_analysis.m"
{
#line 120 "mmc_analysis.m"
  {
#line 120 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 120 "mmc_analysis.m"
    {
#line 120 "mmc_analysis.m"
      transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_114_101_97_100_95_102_105_108_101_95_110_97_109_101_95_55_95_95_91_49_93_95_48_7_p_0(transform_hlds__mmc_analysis__Globals_8, transform_hlds__mmc_analysis__ModuleName_9, transform_hlds__mmc_analysis__Ext_10, transform_hlds__mmc_analysis__MaybeFileName_11);
    }
#line 120 "mmc_analysis.m"
  }
#line 106 "mmc_analysis.m"
}

#line 75 "mmc_analysis.m"
static MR_bool MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__analyses_2_2_f_0(
#line 75 "mmc_analysis.m"
  MR_String transform_hlds__mmc_analysis__HeadVar__2_2,
#line 75 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__3_3)
#line 75 "mmc_analysis.m"
{
#line 75 "mmc_analysis.m"
  {
#line 75 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 75 "mmc_analysis.m"
    {
#line 75 "mmc_analysis.m"
      transform_hlds__mmc_analysis__succeeded = transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_101_115_95_50_95_95_91_49_93_95_48_2_f_0(transform_hlds__mmc_analysis__HeadVar__2_2, transform_hlds__mmc_analysis__HeadVar__3_3);
    }
#line 75 "mmc_analysis.m"
    return transform_hlds__mmc_analysis__succeeded;
#line 75 "mmc_analysis.m"
  }
#line 75 "mmc_analysis.m"
}

#line 73 "mmc_analysis.m"
static MR_String MR_CALL 
transform_hlds__mmc_analysis__ClassMethod_for_analysis__compiler____transform_hlds__mmc_analysis__mmc__arity0______analysis__compiler_name_1_1_f_0(void)
#line 73 "mmc_analysis.m"
{
#line 73 "mmc_analysis.m"
  {
#line 73 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 73 "mmc_analysis.m"
    MR_String transform_hlds__mmc_analysis__HeadVar__2_2;

#line 73 "mmc_analysis.m"
    {
#line 73 "mmc_analysis.m"
      transform_hlds__mmc_analysis__HeadVar__2_2 = transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_99_111_109_112_105_108_101_114_95_110_97_109_101_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 73 "mmc_analysis.m"
    return transform_hlds__mmc_analysis__HeadVar__2_2;
#line 73 "mmc_analysis.m"
  }
#line 73 "mmc_analysis.m"
}

#line 28 "mmc_analysis.m"
void MR_CALL 
transform_hlds__mmc_analysis____Compare____mmc_0_0(
#line 28 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__HeadVar__1_1)
#line 28 "mmc_analysis.m"
{
#line 28 "mmc_analysis.m"
  {
#line 28 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 28 "mmc_analysis.m"
    {
#line 28 "mmc_analysis.m"
      transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(transform_hlds__mmc_analysis__HeadVar__1_1);
    }
#line 28 "mmc_analysis.m"
  }
#line 28 "mmc_analysis.m"
}

#line 28 "mmc_analysis.m"
MR_bool MR_CALL 
transform_hlds__mmc_analysis____Unify____mmc_0_0(void)
#line 28 "mmc_analysis.m"
{
#line 28 "mmc_analysis.m"
  {
#line 28 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;

#line 28 "mmc_analysis.m"
    {
#line 28 "mmc_analysis.m"
      transform_hlds__mmc_analysis__succeeded = transform_hlds__mmc_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_109_109_99_95_97_110_97_108_121_115_105_115_95_95_109_109_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 28 "mmc_analysis.m"
    return transform_hlds__mmc_analysis__succeeded;
#line 28 "mmc_analysis.m"
  }
#line 28 "mmc_analysis.m"
}

#line 39 "mmc_analysis.m"
void MR_CALL 
transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(
#line 39 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleInfo_5,
#line 39 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleName_6,
#line 39 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__FuncId_7,
#line 39 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__PPId_8)
#line 39 "mmc_analysis.m"
{
#line 143 "mmc_analysis.m"
  {
#line 143 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 143 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__FuncId_7, (MR_Integer) 0)));
#line 143 "mmc_analysis.m"
    MR_String transform_hlds__mmc_analysis__FuncName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__FuncId_7, (MR_Integer) 1)));
#line 143 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__FuncId_7, (MR_Integer) 2)));
#line 143 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__FuncId_7, (MR_Integer) 3)));
#line 143 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredTable_13;
#line 143 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredIds_14;

#line 145 "mmc_analysis.m"
    {
#line 145 "mmc_analysis.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__mmc_analysis__ModuleInfo_5, &transform_hlds__mmc_analysis__PredTable_13);
    }
#line 146 "mmc_analysis.m"
    {
#line 146 "mmc_analysis.m"
      hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(transform_hlds__mmc_analysis__PredTable_13, (MR_Integer) 0, transform_hlds__mmc_analysis__PredOrFunc_9, transform_hlds__mmc_analysis__ModuleName_6, transform_hlds__mmc_analysis__FuncName_10, transform_hlds__mmc_analysis__Arity_11, &transform_hlds__mmc_analysis__PredIds_14);
    }
#line 151 "mmc_analysis.m"
    if ((transform_hlds__mmc_analysis__PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "mmc_analysis.m"
      {
#line 150 "mmc_analysis.m"
        {
#line 150 "mmc_analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.mmc_analysis", (MR_String) "predicate \140transform_hlds.mmc_analysis.func_id_to_ppid\'/4", (MR_String) "no predicate");
#line 150 "mmc_analysis.m"
          return;
        }
#line 149 "mmc_analysis.m"
      }
#line 151 "mmc_analysis.m"
    else
#line 151 "mmc_analysis.m"
      {
#line 151 "mmc_analysis.m"
        MR_Word transform_hlds__mmc_analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__mmc_analysis__PredIds_14, (MR_Integer) 1)));
#line 151 "mmc_analysis.m"
        MR_Word transform_hlds__mmc_analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__mmc_analysis__PredIds_14, (MR_Integer) 0)));

#line 151 "mmc_analysis.m"
        if ((transform_hlds__mmc_analysis__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "mmc_analysis.m"
          {
#line 153 "mmc_analysis.m"
            MR_Word base;
#line 153 "mmc_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 153 "mmc_analysis.m"
            *transform_hlds__mmc_analysis__PPId_8 = base;
#line 153 "mmc_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__mmc_analysis__V_29_29));
#line 153 "mmc_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__mmc_analysis__ProcId_12));
#line 153 "mmc_analysis.m"
          }
#line 151 "mmc_analysis.m"
        else
#line 155 "mmc_analysis.m"
          {
#line 156 "mmc_analysis.m"
            {
#line 156 "mmc_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.mmc_analysis", (MR_String) "predicate \140transform_hlds.mmc_analysis.func_id_to_ppid\'/4", (MR_String) "more than one predicate");
#line 156 "mmc_analysis.m"
              return;
            }
#line 155 "mmc_analysis.m"
          }
#line 151 "mmc_analysis.m"
      }
#line 143 "mmc_analysis.m"
  }
#line 39 "mmc_analysis.m"
}

#line 36 "mmc_analysis.m"
void MR_CALL 
transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(
#line 36 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__PredInfo_5,
#line 36 "mmc_analysis.m"
  MR_Integer transform_hlds__mmc_analysis__ProcId_6,
#line 36 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__PredModule_7,
#line 36 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__FuncId_8)
#line 36 "mmc_analysis.m"
{
#line 136 "mmc_analysis.m"
  {
#line 136 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 136 "mmc_analysis.m"
    MR_String transform_hlds__mmc_analysis__PredName_9;
#line 136 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredOrFunc_10;
#line 136 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__PredArity_11;

#line 137 "mmc_analysis.m"
    {
#line 137 "mmc_analysis.m"
      *transform_hlds__mmc_analysis__PredModule_7 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__mmc_analysis__PredInfo_5);
    }
#line 138 "mmc_analysis.m"
    {
#line 138 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredName_9 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__mmc_analysis__PredInfo_5);
    }
#line 139 "mmc_analysis.m"
    {
#line 139 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__mmc_analysis__PredInfo_5);
    }
#line 140 "mmc_analysis.m"
    {
#line 140 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredArity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__mmc_analysis__PredInfo_5);
    }
#line 141 "mmc_analysis.m"
    {
#line 141 "mmc_analysis.m"
      MR_Word base;
#line 141 "mmc_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 141 "mmc_analysis.m"
      *transform_hlds__mmc_analysis__FuncId_8 = base;
#line 141 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__mmc_analysis__PredOrFunc_10));
#line 141 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__mmc_analysis__PredName_9));
#line 141 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__mmc_analysis__PredArity_11));
#line 141 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__mmc_analysis__ProcId_6));
#line 141 "mmc_analysis.m"
    }
#line 136 "mmc_analysis.m"
  }
#line 36 "mmc_analysis.m"
}

#line 33 "mmc_analysis.m"
void MR_CALL 
transform_hlds__mmc_analysis__module_name_func_id_4_p_0(
#line 33 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__ModuleInfo_5,
#line 33 "mmc_analysis.m"
  MR_Word transform_hlds__mmc_analysis__HeadVar__2_2,
#line 33 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__PredModule_8,
#line 33 "mmc_analysis.m"
  MR_Word * transform_hlds__mmc_analysis__FuncId_9)
#line 33 "mmc_analysis.m"
{
#line 132 "mmc_analysis.m"
  {
#line 132 "mmc_analysis.m"
    MR_bool transform_hlds__mmc_analysis__succeeded;
#line 132 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 132 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__mmc_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredInfo_10;
#line 132 "mmc_analysis.m"
    MR_String transform_hlds__mmc_analysis__PredName_15;
#line 132 "mmc_analysis.m"
    MR_Word transform_hlds__mmc_analysis__PredOrFunc_16;
#line 132 "mmc_analysis.m"
    MR_Integer transform_hlds__mmc_analysis__PredArity_17;

#line 133 "mmc_analysis.m"
    {
#line 133 "mmc_analysis.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__mmc_analysis__ModuleInfo_5, transform_hlds__mmc_analysis__PredId_6, &transform_hlds__mmc_analysis__PredInfo_10);
    }
#line 137 "mmc_analysis.m"
    {
#line 137 "mmc_analysis.m"
      *transform_hlds__mmc_analysis__PredModule_8 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__mmc_analysis__PredInfo_10);
    }
#line 138 "mmc_analysis.m"
    {
#line 138 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__mmc_analysis__PredInfo_10);
    }
#line 139 "mmc_analysis.m"
    {
#line 139 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__mmc_analysis__PredInfo_10);
    }
#line 140 "mmc_analysis.m"
    {
#line 140 "mmc_analysis.m"
      transform_hlds__mmc_analysis__PredArity_17 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__mmc_analysis__PredInfo_10);
    }
#line 141 "mmc_analysis.m"
    {
#line 141 "mmc_analysis.m"
      MR_Word base;
#line 141 "mmc_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 141 "mmc_analysis.m"
      *transform_hlds__mmc_analysis__FuncId_9 = base;
#line 141 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__mmc_analysis__PredOrFunc_16));
#line 141 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__mmc_analysis__PredName_15));
#line 141 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__mmc_analysis__PredArity_17));
#line 141 "mmc_analysis.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__mmc_analysis__ProcId_7));
#line 141 "mmc_analysis.m"
    }
#line 132 "mmc_analysis.m"
  }
#line 33 "mmc_analysis.m"
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
