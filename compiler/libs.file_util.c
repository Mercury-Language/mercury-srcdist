/*
** Automatically generated from `file_util.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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


/* :- module libs.file_util. */
/* :- implementation. */

/*
INIT mercury__libs__file_util__init
ENDINIT
*/

#include "libs.file_util.mih"


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
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
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
#include "libs.globals.mih"
#include "libs.handle_options.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "libs.file_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__file_util____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 142 "libs.file_util.c"
static const MR_PseudoTypeInfo libs__file_util__libs__file_util__field_types_include_file_error_0_0[2];

#line 145 "libs.file_util.c"
static const MR_DuFunctorDesc libs__file_util__libs__file_util__du_functor_desc_include_file_error_0_0;

#line 148 "libs.file_util.c"
static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_stag_ordered_include_file_error_0_0[1];

#line 151 "libs.file_util.c"
static const MR_DuPtagLayout libs__file_util__libs__file_util__du_ptag_ordered_include_file_error_0[1];

#line 154 "libs.file_util.c"
static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_name_ordered_include_file_error_0[1];

#line 157 "libs.file_util.c"
static const MR_Integer libs__file_util__libs__file_util__functor_number_map_include_file_error_0[1];

#line 160 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0;

#line 163 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1;

#line 166 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0[2];

#line 169 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0[2];

#line 172 "libs.file_util.c"
static const MR_Integer libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0[2];

#line 175 "libs.file_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 178 "libs.file_util.c"
static const MR_VA_PseudoTypeInfo_Struct3 libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 181 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
#line 184 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 186 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2);

#line 189 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
#line 192 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 194 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 196 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 199 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
#line 202 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 204 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2);

#line 207 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
#line 210 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 212 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 214 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 217 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0_10001(
#line 220 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 222 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2);

#line 225 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0_10001(
#line 228 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 230 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 232 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 235 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0_10001(
#line 238 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 240 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2);

#line 243 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0_10001(
#line 246 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 248 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 250 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 253 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0_10001(
#line 256 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 258 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 260 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 263 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0_10001(
#line 266 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 268 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_2,
#line 270 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3,
#line 272 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_4);

#line 214 "file_util.m"
static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_50_95_95_91_50_93_95_48_6_p_0(
#line 214 "file_util.m"
  MR_Word libs__file_util__V_26_26,
#line 214 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 214 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 214 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4);

#line 214 "file_util.m"
static void MR_CALL 
libs__file_util__do_search_for_file__ho1_6_p_0(
#line 214 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 214 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 214 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4);

#line 246 "file_util.m"
static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file__246__1_4_p_0(
#line 246 "file_util.m"
  MR_Word libs__file_util__Action_9,
#line 246 "file_util.m"
  MR_Integer * libs__file_util__HeadVar__2_19);

#line 141 "file_util.m"
static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0(
#line 141 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 141 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 141 "file_util.m"
  MR_Word libs__file_util__HeadVar__3_3);

#line 141 "file_util.m"
static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0(
#line 141 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1,
#line 141 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2);

#line 344 "file_util.m"
static void MR_CALL 
libs__file_util__copy_stream_5_p_0(
#line 344 "file_util.m"
  MR_Word libs__file_util__OutputStream_6,
#line 344 "file_util.m"
  MR_Word libs__file_util__InputStream_7,
#line 344 "file_util.m"
  MR_Word * libs__file_util__Res_8);

#line 207 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_mod_time_5_p_0(
#line 207 "file_util.m"
  MR_String libs__file_util__Dir_6,
#line 207 "file_util.m"
  MR_String libs__file_util__FileName_7,
#line 207 "file_util.m"
  MR_Word * libs__file_util__Result_8);

#line 174 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_return_dir_6_p_0(
#line 174 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 174 "file_util.m"
  MR_String libs__file_util__Dir_8,
#line 174 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 174 "file_util.m"
  MR_Word * libs__file_util__Result_10);

#line 433 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_dir_command_3_f_0_1(
#line 433 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 433 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1);

#line 419 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
#line 419 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 419 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1);

#line 327 "file_util.m"
static void MR_CALL 
libs__file_util__write_include_file_contents_3_p_0_1(
#line 327 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 327 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 327 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_2,
#line 327 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_3);

#line 246 "file_util.m"
static void MR_CALL 
libs__file_util__output_to_file_6_p_0_1(
#line 246 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 246 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 246 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_2,
#line 246 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_3);


static /* final */ const MR_Box libs__file_util_scalar_common_1[1][7];

static /* final */ const MR_Box libs__file_util_scalar_common_2[1][2];

static /* final */ const MR_Box libs__file_util_scalar_common_3[1][1];

static /* final */ const MR_Box libs__file_util_scalar_common_4[1][8];

static /* final */ const MR_Box libs__file_util_scalar_common_5[1][5];

static /* final */ const MR_Box libs__file_util_scalar_common_6[2][3];




static /* final */ const MR_Box libs__file_util_scalar_common_1[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__file_util____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\' for output.")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_6[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__file_util_scalar_common_5[0])),
    ((MR_Box) (libs__file_util__make_install_file_command_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__file_util_scalar_common_5[0])),
    ((MR_Box) (libs__file_util__make_install_dir_command_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "dir.mh"
#include "dir.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"



#line 502 "libs.file_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__file_util____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 512 "libs.file_util.c"
const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_dir_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__file_util____Unify____dir_name_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____dir_name_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "dir_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 529 "libs.file_util.c"
const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_file_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__file_util____Unify____file_name_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____file_name_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "file_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 546 "libs.file_util.c"
static const MR_PseudoTypeInfo libs__file_util__libs__file_util__field_types_include_file_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 552 "libs.file_util.c"
static const MR_DuFunctorDesc libs__file_util__libs__file_util__du_functor_desc_include_file_error_0_0 = {
  (MR_String) "include_file_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__file_util__libs__file_util__field_types_include_file_error_0_0,
  NULL,
  NULL,
  NULL
};

#line 567 "libs.file_util.c"
static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_stag_ordered_include_file_error_0_0[1] = {
  &libs__file_util__libs__file_util__du_functor_desc_include_file_error_0_0
};

#line 572 "libs.file_util.c"
static const MR_DuPtagLayout libs__file_util__libs__file_util__du_ptag_ordered_include_file_error_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__file_util__libs__file_util__du_stag_ordered_include_file_error_0_0
  }
};

#line 581 "libs.file_util.c"
static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_name_ordered_include_file_error_0[1] = {
  &libs__file_util__libs__file_util__du_functor_desc_include_file_error_0_0
};

#line 586 "libs.file_util.c"
static const MR_Integer libs__file_util__libs__file_util__functor_number_map_include_file_error_0[1] = {
  (MR_Integer) 0
};

#line 591 "libs.file_util.c"
const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_include_file_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__file_util____Unify____include_file_error_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____include_file_error_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "include_file_error",
  {     libs__file_util__libs__file_util__du_name_ordered_include_file_error_0 },
  {     libs__file_util__libs__file_util__du_ptag_ordered_include_file_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__file_util__libs__file_util__functor_number_map_include_file_error_0
};

#line 608 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0 = {
  (MR_String) "open_file",
  (MR_Integer) 0
};

#line 614 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1 = {
  (MR_String) "do_not_open_file",
  (MR_Integer) 1
};

#line 620 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0[2] = {
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0,
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1
};

#line 626 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0[2] = {
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1,
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0
};

#line 632 "libs.file_util.c"
static const MR_Integer libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 638 "libs.file_util.c"
const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_maybe_open_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__file_util____Unify____maybe_open_file_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____maybe_open_file_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "maybe_open_file",
  {     libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0 },
  {     libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0
};

#line 655 "libs.file_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 664 "libs.file_util.c"
static const MR_VA_PseudoTypeInfo_Struct3 libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 675 "libs.file_util.c"
const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_open_file_pred_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__file_util____Unify____open_file_pred_1_0_10001)),
  ((MR_Box) (libs__file_util____Compare____open_file_pred_1_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "open_file_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 692 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
#line 695 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 697 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 699 "libs.file_util.c"
{
#line 701 "libs.file_util.c"
  {
#line 703 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 706 "libs.file_util.c"
    {
#line 708 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____dir_name_0_0(((MR_String) libs__file_util__wrapper_arg_1), ((MR_String) libs__file_util__wrapper_arg_2));
    }
#line 711 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 713 "libs.file_util.c"
  }
#line 715 "libs.file_util.c"
}

#line 718 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
#line 721 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 723 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 725 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 727 "libs.file_util.c"
{
#line 729 "libs.file_util.c"
  {
#line 731 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 734 "libs.file_util.c"
    {
#line 736 "libs.file_util.c"
      libs__file_util____Compare____dir_name_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_String) libs__file_util__wrapper_arg_2), ((MR_String) libs__file_util__wrapper_arg_3));
    }
#line 739 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 741 "libs.file_util.c"
  }
#line 743 "libs.file_util.c"
}

#line 746 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
#line 749 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 751 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 753 "libs.file_util.c"
{
#line 755 "libs.file_util.c"
  {
#line 757 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 760 "libs.file_util.c"
    {
#line 762 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____file_name_0_0(((MR_String) libs__file_util__wrapper_arg_1), ((MR_String) libs__file_util__wrapper_arg_2));
    }
#line 765 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 767 "libs.file_util.c"
  }
#line 769 "libs.file_util.c"
}

#line 772 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
#line 775 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 777 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 779 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 781 "libs.file_util.c"
{
#line 783 "libs.file_util.c"
  {
#line 785 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 788 "libs.file_util.c"
    {
#line 790 "libs.file_util.c"
      libs__file_util____Compare____file_name_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_String) libs__file_util__wrapper_arg_2), ((MR_String) libs__file_util__wrapper_arg_3));
    }
#line 793 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 795 "libs.file_util.c"
  }
#line 797 "libs.file_util.c"
}

#line 800 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0_10001(
#line 803 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 805 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 807 "libs.file_util.c"
{
#line 809 "libs.file_util.c"
  {
#line 811 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 814 "libs.file_util.c"
    {
#line 816 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____include_file_error_0_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2));
    }
#line 819 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 821 "libs.file_util.c"
  }
#line 823 "libs.file_util.c"
}

#line 826 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0_10001(
#line 829 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 831 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 833 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 835 "libs.file_util.c"
{
#line 837 "libs.file_util.c"
  {
#line 839 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 842 "libs.file_util.c"
    {
#line 844 "libs.file_util.c"
      libs__file_util____Compare____include_file_error_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
#line 847 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 849 "libs.file_util.c"
  }
#line 851 "libs.file_util.c"
}

#line 854 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0_10001(
#line 857 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 859 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 861 "libs.file_util.c"
{
#line 863 "libs.file_util.c"
  {
#line 865 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 868 "libs.file_util.c"
    {
#line 870 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____maybe_open_file_0_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2));
    }
#line 873 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 875 "libs.file_util.c"
  }
#line 877 "libs.file_util.c"
}

#line 880 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0_10001(
#line 883 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 885 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 887 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 889 "libs.file_util.c"
{
#line 891 "libs.file_util.c"
  {
#line 893 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 896 "libs.file_util.c"
    {
#line 898 "libs.file_util.c"
      libs__file_util____Compare____maybe_open_file_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
#line 901 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 903 "libs.file_util.c"
  }
#line 905 "libs.file_util.c"
}

#line 908 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0_10001(
#line 911 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 913 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 915 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 917 "libs.file_util.c"
{
#line 919 "libs.file_util.c"
  {
#line 921 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 924 "libs.file_util.c"
    {
#line 926 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____open_file_pred_1_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
#line 929 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 931 "libs.file_util.c"
  }
#line 933 "libs.file_util.c"
}

#line 936 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0_10001(
#line 939 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 941 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_2,
#line 943 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3,
#line 945 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_4)
#line 947 "libs.file_util.c"
{
#line 949 "libs.file_util.c"
  {
#line 951 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 954 "libs.file_util.c"
    {
#line 956 "libs.file_util.c"
      libs__file_util____Compare____open_file_pred_1_0(((MR_Word) libs__file_util__wrapper_arg_1), &libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_3), ((MR_Word) libs__file_util__wrapper_arg_4));
    }
#line 959 "libs.file_util.c"
    *libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 961 "libs.file_util.c"
  }
#line 963 "libs.file_util.c"
}

#line 214 "file_util.m"
static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_50_95_95_91_50_93_95_48_6_p_0(
#line 214 "file_util.m"
  MR_Word libs__file_util__V_26_26,
#line 214 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 214 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 214 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4)
#line 214 "file_util.m"
{
#line 219 "file_util.m"
  while (MR_TRUE)
#line 219 "file_util.m"
    {
#line 219 "file_util.m"
      /* tailcall optimized into a loop */
#line 219 "file_util.m"
      {
#line 219 "file_util.m"
        MR_bool libs__file_util__succeeded;

#line 219 "file_util.m"
        if ((libs__file_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "file_util.m"
          *libs__file_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 219 "file_util.m"
        else
#line 220 "file_util.m"
          {
#line 220 "file_util.m"
            MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "file_util.m"
            MR_Word libs__file_util__Dirs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "file_util.m"
            MR_Word libs__file_util__Result0_18;

#line 221 "file_util.m"
            {
#line 221 "file_util.m"
              libs__file_util__check_file_return_dir_6_p_0(libs__file_util__V_26_26, libs__file_util__Dir_13, libs__file_util__HeadVar__3_3, &libs__file_util__Result0_18);
            }
#line 225 "file_util.m"
            if (((MR_tag((MR_Word) libs__file_util__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 227 "file_util.m"
              {
#line 227 "file_util.m"
                /* direct tailcall eliminated */
#line 227 "file_util.m"
                {
#line 227 "file_util.m"
                  MR_Word libs__file_util__HeadVar__2__tmp_copy_2 = libs__file_util__Dirs_14;

#line 227 "file_util.m"
                  libs__file_util__HeadVar__2_2 = libs__file_util__HeadVar__2__tmp_copy_2;
#line 227 "file_util.m"
                }
#line 227 "file_util.m"
                continue;
#line 227 "file_util.m"
              }
#line 225 "file_util.m"
            else
#line 223 "file_util.m"
              {
#line 223 "file_util.m"
                MR_String libs__file_util__TimeT_19 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_18, (MR_Integer) 0)));

#line 224 "file_util.m"
                {
#line 224 "file_util.m"
                  MR_Word base;
#line 224 "file_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "file_util.m"
                  *libs__file_util__HeadVar__4_4 = base;
#line 224 "file_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__TimeT_19));
#line 224 "file_util.m"
                }
#line 223 "file_util.m"
              }
#line 220 "file_util.m"
          }
#line 219 "file_util.m"
      }
#line 219 "file_util.m"
      break;
#line 219 "file_util.m"
    }
#line 214 "file_util.m"
}

#line 214 "file_util.m"
static void MR_CALL 
libs__file_util__do_search_for_file__ho1_6_p_0(
#line 214 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 214 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 214 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4)
#line 214 "file_util.m"
{
#line 219 "file_util.m"
  while (MR_TRUE)
#line 219 "file_util.m"
    {
#line 219 "file_util.m"
      /* tailcall optimized into a loop */
#line 219 "file_util.m"
      {
#line 219 "file_util.m"
        MR_bool libs__file_util__succeeded;

#line 219 "file_util.m"
        if ((libs__file_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "file_util.m"
          *libs__file_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 219 "file_util.m"
        else
#line 220 "file_util.m"
          {
#line 220 "file_util.m"
            MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "file_util.m"
            MR_Word libs__file_util__Dirs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "file_util.m"
            MR_Word libs__file_util__Result0_18;

#line 221 "file_util.m"
            {
#line 221 "file_util.m"
              libs__file_util__check_file_mod_time_5_p_0(libs__file_util__Dir_13, libs__file_util__HeadVar__3_3, &libs__file_util__Result0_18);
            }
#line 225 "file_util.m"
            if (((MR_tag((MR_Word) libs__file_util__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 227 "file_util.m"
              {
#line 227 "file_util.m"
                /* direct tailcall eliminated */
#line 227 "file_util.m"
                {
#line 227 "file_util.m"
                  MR_Word libs__file_util__HeadVar__2__tmp_copy_2 = libs__file_util__Dirs_14;

#line 227 "file_util.m"
                  libs__file_util__HeadVar__2_2 = libs__file_util__HeadVar__2__tmp_copy_2;
#line 227 "file_util.m"
                }
#line 227 "file_util.m"
                continue;
#line 227 "file_util.m"
              }
#line 225 "file_util.m"
            else
#line 223 "file_util.m"
              {
#line 223 "file_util.m"
                MR_Word libs__file_util__TimeT_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_18, (MR_Integer) 0)));

#line 224 "file_util.m"
                {
#line 224 "file_util.m"
                  MR_Word base;
#line 224 "file_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "file_util.m"
                  *libs__file_util__HeadVar__4_4 = base;
#line 224 "file_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__TimeT_19));
#line 224 "file_util.m"
                }
#line 223 "file_util.m"
              }
#line 220 "file_util.m"
          }
#line 219 "file_util.m"
      }
#line 219 "file_util.m"
      break;
#line 219 "file_util.m"
    }
#line 214 "file_util.m"
}

#line 246 "file_util.m"
static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file__246__1_4_p_0(
#line 246 "file_util.m"
  MR_Word libs__file_util__Action_9,
#line 246 "file_util.m"
  MR_Integer * libs__file_util__HeadVar__2_19)
#line 246 "file_util.m"
{
#line 246 "file_util.m"
  {
#line 246 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 246 "file_util.m"
    void MR_CALL (* libs__file_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__file_util__Action_9, (MR_Integer) 1)));
#line 246 "file_util.m"
    MR_Box libs__file_util__conv1_HeadVar__4_21;

#line 246 "file_util.m"
    {
#line 246 "file_util.m"
      libs__file_util__func_0(((MR_Box) libs__file_util__Action_9), ((MR_Box) ((MR_Integer) 0)), &libs__file_util__conv1_HeadVar__4_21);
    }
#line 246 "file_util.m"
    *libs__file_util__HeadVar__2_19 = (MR_Integer) 0;
#line 246 "file_util.m"
  }
#line 246 "file_util.m"
}

#line 35 "file_util.m"
void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0(
#line 35 "file_util.m"
  MR_Word libs__file_util__TypeInfo_for_FileInfo_6,
#line 35 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 35 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 35 "file_util.m"
  MR_Word libs__file_util__HeadVar__3_3)
#line 35 "file_util.m"
{
#line 35 "file_util.m"
  {
#line 35 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 35 "file_util.m"
    MR_Word libs__file_util__Cast_HeadVar1_4 = libs__file_util__HeadVar__2_2;
#line 35 "file_util.m"
    MR_Word libs__file_util__Cast_HeadVar2_5 = libs__file_util__HeadVar__3_3;

#line 35 "file_util.m"
    {
#line 35 "file_util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(libs__file_util__HeadVar__1_1, (MR_Word) libs__file_util__Cast_HeadVar1_4, (MR_Word) libs__file_util__Cast_HeadVar2_5);
#line 35 "file_util.m"
      return;
    }
#line 35 "file_util.m"
  }
#line 35 "file_util.m"
}

#line 35 "file_util.m"
MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0(
#line 35 "file_util.m"
  MR_Word libs__file_util__TypeInfo_for_FileInfo_5,
#line 35 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1,
#line 35 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2)
#line 35 "file_util.m"
{
#line 35 "file_util.m"
  {
#line 35 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 35 "file_util.m"
    MR_Word libs__file_util__Cast_HeadVar1_3 = libs__file_util__HeadVar__1_1;
#line 35 "file_util.m"
    MR_Word libs__file_util__Cast_HeadVar2_4 = libs__file_util__HeadVar__2_2;

#line 35 "file_util.m"
    {
#line 35 "file_util.m"
      return libs__file_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__file_util__Cast_HeadVar1_3, (MR_Word) libs__file_util__Cast_HeadVar2_4);
    }
#line 35 "file_util.m"
    return libs__file_util__succeeded;
#line 35 "file_util.m"
  }
#line 35 "file_util.m"
}

#line 38 "file_util.m"
void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0(
#line 38 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 38 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 38 "file_util.m"
  MR_Word libs__file_util__HeadVar__3_3)
#line 38 "file_util.m"
{
#line 38 "file_util.m"
  {
#line 38 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 38 "file_util.m"
    MR_Integer libs__file_util__Cast_HeadVar1_4 = (MR_Integer) libs__file_util__HeadVar__2_2;
#line 38 "file_util.m"
    MR_Integer libs__file_util__Cast_HeadVar2_5 = (MR_Integer) libs__file_util__HeadVar__3_3;

#line 38 "file_util.m"
    {
#line 38 "file_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__Cast_HeadVar1_4, libs__file_util__Cast_HeadVar2_5);
#line 38 "file_util.m"
      return;
    }
#line 38 "file_util.m"
  }
#line 38 "file_util.m"
}

#line 38 "file_util.m"
MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0(
#line 38 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_1,
#line 38 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2)
#line 38 "file_util.m"
{
#line 1291 "libs.file_util.c"
  {
#line 1293 "libs.file_util.c"
    MR_bool libs__file_util__succeeded = (libs__file_util__HeadVar__2_1 == libs__file_util__HeadVar__2_2);

#line 1296 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 1298 "libs.file_util.c"
  }
#line 38 "file_util.m"
}

#line 141 "file_util.m"
static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0(
#line 141 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 141 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 141 "file_util.m"
  MR_Word libs__file_util__HeadVar__3_3)
#line 141 "file_util.m"
{
#line 141 "file_util.m"
  {
#line 141 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 141 "file_util.m"
    MR_Integer libs__file_util__CastX_9 = (MR_Integer) libs__file_util__HeadVar__2_2;
#line 141 "file_util.m"
    MR_Integer libs__file_util__CastY_10 = (MR_Integer) libs__file_util__HeadVar__3_3;

#line 141 "file_util.m"
    libs__file_util__succeeded = (libs__file_util__CastX_9 == libs__file_util__CastY_10);
#line 141 "file_util.m"
    if (libs__file_util__succeeded)
#line 1327 "libs.file_util.c"
      *libs__file_util__HeadVar__1_1 = (MR_Integer) 0;
#line 141 "file_util.m"
    else
#line 141 "file_util.m"
      {
#line 141 "file_util.m"
        MR_String libs__file_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 141 "file_util.m"
        MR_String libs__file_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
#line 141 "file_util.m"
        MR_String libs__file_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__3_3, (MR_Integer) 0)));
#line 141 "file_util.m"
        MR_String libs__file_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__3_3, (MR_Integer) 1)));
#line 141 "file_util.m"
        MR_Word libs__file_util__V_8_8;

#line 141 "file_util.m"
        {
#line 141 "file_util.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&libs__file_util__V_8_8, libs__file_util__V_4_4, libs__file_util__V_6_6);
        }
#line 1349 "libs.file_util.c"
        libs__file_util__succeeded = (libs__file_util__V_8_8 == (MR_Integer) 0);
#line 141 "file_util.m"
        libs__file_util__succeeded = !(libs__file_util__succeeded);
#line 141 "file_util.m"
        if (libs__file_util__succeeded)
#line 141 "file_util.m"
          *libs__file_util__HeadVar__1_1 = libs__file_util__V_8_8;
#line 141 "file_util.m"
        else
#line 141 "file_util.m"
          {
#line 141 "file_util.m"
            mercury__private_builtin__builtin_compare_string_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__V_5_5, libs__file_util__V_7_7);
#line 141 "file_util.m"
            return;
          }
#line 141 "file_util.m"
      }
#line 141 "file_util.m"
  }
#line 141 "file_util.m"
}

#line 141 "file_util.m"
static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0(
#line 141 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1,
#line 141 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2)
#line 141 "file_util.m"
{
#line 141 "file_util.m"
  {
#line 141 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 141 "file_util.m"
    MR_Integer libs__file_util__CastX_7 = (MR_Integer) libs__file_util__HeadVar__1_1;
#line 141 "file_util.m"
    MR_Integer libs__file_util__CastY_8 = (MR_Integer) libs__file_util__HeadVar__2_2;

#line 141 "file_util.m"
    libs__file_util__succeeded = (libs__file_util__CastX_7 == libs__file_util__CastY_8);
#line 141 "file_util.m"
    if (libs__file_util__succeeded)
#line 141 "file_util.m"
      libs__file_util__succeeded = MR_TRUE;
#line 141 "file_util.m"
    else
#line 141 "file_util.m"
      {
#line 141 "file_util.m"
        MR_String libs__file_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__1_1, (MR_Integer) 0)));
#line 141 "file_util.m"
        MR_String libs__file_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__1_1, (MR_Integer) 1)));
#line 141 "file_util.m"
        MR_String libs__file_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 141 "file_util.m"
        MR_String libs__file_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));

#line 1410 "libs.file_util.c"
        libs__file_util__succeeded = (strcmp(libs__file_util__V_3_3, libs__file_util__V_5_5) == 0);
#line 141 "file_util.m"
        if (libs__file_util__succeeded)
#line 1414 "libs.file_util.c"
          libs__file_util__succeeded = (strcmp(libs__file_util__V_4_4, libs__file_util__V_6_6) == 0);
#line 141 "file_util.m"
      }
#line 141 "file_util.m"
    return libs__file_util__succeeded;
#line 141 "file_util.m"
  }
#line 141 "file_util.m"
}

#line 29 "file_util.m"
void MR_CALL 
libs__file_util____Compare____file_name_0_0(
#line 29 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 29 "file_util.m"
  MR_String libs__file_util__HeadVar__2_2,
#line 29 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3)
#line 29 "file_util.m"
{
#line 29 "file_util.m"
  {
#line 29 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 29 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar1_4 = libs__file_util__HeadVar__2_2;
#line 29 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar2_5 = libs__file_util__HeadVar__3_3;

#line 29 "file_util.m"
    {
#line 29 "file_util.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__Cast_HeadVar1_4, libs__file_util__Cast_HeadVar2_5);
#line 29 "file_util.m"
      return;
    }
#line 29 "file_util.m"
  }
#line 29 "file_util.m"
}

#line 29 "file_util.m"
MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0(
#line 29 "file_util.m"
  MR_String libs__file_util__HeadVar__1_1,
#line 29 "file_util.m"
  MR_String libs__file_util__HeadVar__2_2)
#line 29 "file_util.m"
{
#line 29 "file_util.m"
  {
#line 29 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 29 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar1_3 = libs__file_util__HeadVar__1_1;
#line 29 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar2_4 = libs__file_util__HeadVar__2_2;

#line 29 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Cast_HeadVar1_3, libs__file_util__Cast_HeadVar2_4) == 0);
#line 29 "file_util.m"
    return libs__file_util__succeeded;
#line 29 "file_util.m"
  }
#line 29 "file_util.m"
}

#line 30 "file_util.m"
void MR_CALL 
libs__file_util____Compare____dir_name_0_0(
#line 30 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 30 "file_util.m"
  MR_String libs__file_util__HeadVar__2_2,
#line 30 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3)
#line 30 "file_util.m"
{
#line 30 "file_util.m"
  {
#line 30 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 30 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar1_4 = libs__file_util__HeadVar__2_2;
#line 30 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar2_5 = libs__file_util__HeadVar__3_3;

#line 30 "file_util.m"
    {
#line 30 "file_util.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__Cast_HeadVar1_4, libs__file_util__Cast_HeadVar2_5);
#line 30 "file_util.m"
      return;
    }
#line 30 "file_util.m"
  }
#line 30 "file_util.m"
}

#line 30 "file_util.m"
MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0(
#line 30 "file_util.m"
  MR_String libs__file_util__HeadVar__1_1,
#line 30 "file_util.m"
  MR_String libs__file_util__HeadVar__2_2)
#line 30 "file_util.m"
{
#line 30 "file_util.m"
  {
#line 30 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 30 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar1_3 = libs__file_util__HeadVar__1_1;
#line 30 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar2_4 = libs__file_util__HeadVar__2_2;

#line 30 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Cast_HeadVar1_3, libs__file_util__Cast_HeadVar2_4) == 0);
#line 30 "file_util.m"
    return libs__file_util__succeeded;
#line 30 "file_util.m"
  }
#line 30 "file_util.m"
}

#line 344 "file_util.m"
static void MR_CALL 
libs__file_util__copy_stream_5_p_0(
#line 344 "file_util.m"
  MR_Word libs__file_util__OutputStream_6,
#line 344 "file_util.m"
  MR_Word libs__file_util__InputStream_7,
#line 344 "file_util.m"
  MR_Word * libs__file_util__Res_8)
#line 344 "file_util.m"
{
#line 347 "file_util.m"
  {
#line 347 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 347 "file_util.m"
    MR_Word libs__file_util__ReadRes_10;

#line 348 "file_util.m"
    {
#line 348 "file_util.m"
      mercury__io__read_file_as_string_4_p_0(libs__file_util__InputStream_7, &libs__file_util__ReadRes_10);
    }
#line 353 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__ReadRes_10)) == (MR_mktag((MR_Integer) 1))))
#line 354 "file_util.m"
      {
#line 354 "file_util.m"
        MR_Word libs__file_util__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__ReadRes_10, (MR_Integer) 1)));
#line 354 "file_util.m"
        MR_String libs__file_util___Partial_12 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__ReadRes_10, (MR_Integer) 0)));

#line 355 "file_util.m"
        {
#line 355 "file_util.m"
          MR_Word base;
#line 355 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "file_util.m"
          *libs__file_util__Res_8 = base;
#line 355 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Error_13));
#line 355 "file_util.m"
        }
#line 354 "file_util.m"
      }
#line 353 "file_util.m"
    else
#line 350 "file_util.m"
      {
#line 350 "file_util.m"
        MR_String libs__file_util__InputContents_11 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__ReadRes_10, (MR_Integer) 0)));

#line 351 "file_util.m"
        {
#line 351 "file_util.m"
          mercury__io__write_string_4_p_0(libs__file_util__OutputStream_6, libs__file_util__InputContents_11);
        }
#line 352 "file_util.m"
        *libs__file_util__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "file_util.m"
      }
#line 347 "file_util.m"
  }
#line 344 "file_util.m"
}

#line 207 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_mod_time_5_p_0(
#line 207 "file_util.m"
  MR_String libs__file_util__Dir_6,
#line 207 "file_util.m"
  MR_String libs__file_util__FileName_7,
#line 207 "file_util.m"
  MR_Word * libs__file_util__Result_8)
#line 207 "file_util.m"
{
#line 210 "file_util.m"
  {
#line 210 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 210 "file_util.m"
    MR_String libs__file_util__PathName_10;
#line 234 "file_util.m"
    MR_String libs__file_util__V_23_23;

#line 234 "file_util.m"
    {
#line 234 "file_util.m"
      mercury__dir__this_directory_1_p_0(&libs__file_util__V_23_23);
    }
#line 234 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Dir_6, libs__file_util__V_23_23) == 0);
#line 236 "file_util.m"
    if (libs__file_util__succeeded)
#line 235 "file_util.m"
      libs__file_util__PathName_10 = libs__file_util__FileName_7;
#line 236 "file_util.m"
    else
#line 239 "file_util.m"
      {
#line 239 "file_util.m"
        MR_String libs__file_util__Sep_17;
#line 239 "file_util.m"
        MR_Char libs__file_util__V_18_18;
#line 239 "file_util.m"
        MR_Word libs__file_util__V_19_19;
#line 239 "file_util.m"
        MR_Word libs__file_util__V_20_20;
#line 239 "file_util.m"
        MR_Word libs__file_util__V_21_21;

#line 239 "file_util.m"
        {
#line 239 "file_util.m"
          libs__file_util__V_18_18 = mercury__dir__directory_separator_0_f_0();
        }
#line 239 "file_util.m"
        {
#line 239 "file_util.m"
          libs__file_util__Sep_17 = mercury__string__from_char_1_f_0(libs__file_util__V_18_18);
        }
#line 240 "file_util.m"
        {
#line 240 "file_util.m"
          libs__file_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_21_21, 0) = ((MR_Box) (libs__file_util__FileName_7));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "file_util.m"
        }
#line 240 "file_util.m"
        {
#line 240 "file_util.m"
          libs__file_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_20_20, 0) = ((MR_Box) (libs__file_util__Sep_17));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_20_20, 1) = ((MR_Box) (libs__file_util__V_21_21));
#line 240 "file_util.m"
        }
#line 240 "file_util.m"
        {
#line 240 "file_util.m"
          libs__file_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_19_19, 0) = ((MR_Box) (libs__file_util__Dir_6));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_19_19, 1) = ((MR_Box) (libs__file_util__V_20_20));
#line 240 "file_util.m"
        }
#line 240 "file_util.m"
        {
#line 240 "file_util.m"
          libs__file_util__PathName_10 = mercury__string__append_list_1_f_0(libs__file_util__V_19_19);
        }
#line 239 "file_util.m"
      }
#line 212 "file_util.m"
    {
#line 212 "file_util.m"
      mercury__io__file_modification_time_4_p_0(libs__file_util__PathName_10, libs__file_util__Result_8);
#line 212 "file_util.m"
      return;
    }
#line 210 "file_util.m"
  }
#line 207 "file_util.m"
}

#line 174 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_return_dir_6_p_0(
#line 174 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 174 "file_util.m"
  MR_String libs__file_util__Dir_8,
#line 174 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 174 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 174 "file_util.m"
{
#line 177 "file_util.m"
  {
#line 177 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 177 "file_util.m"
    MR_String libs__file_util__PathName_12;
#line 177 "file_util.m"
    MR_Word libs__file_util__OpenResult_13;
#line 234 "file_util.m"
    MR_String libs__file_util__V_31_31;

#line 234 "file_util.m"
    {
#line 234 "file_util.m"
      mercury__dir__this_directory_1_p_0(&libs__file_util__V_31_31);
    }
#line 234 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Dir_8, libs__file_util__V_31_31) == 0);
#line 236 "file_util.m"
    if (libs__file_util__succeeded)
#line 235 "file_util.m"
      libs__file_util__PathName_12 = libs__file_util__FileName_9;
#line 236 "file_util.m"
    else
#line 239 "file_util.m"
      {
#line 239 "file_util.m"
        MR_String libs__file_util__Sep_25;
#line 239 "file_util.m"
        MR_Char libs__file_util__V_26_26;
#line 239 "file_util.m"
        MR_Word libs__file_util__V_27_27;
#line 239 "file_util.m"
        MR_Word libs__file_util__V_28_28;
#line 239 "file_util.m"
        MR_Word libs__file_util__V_29_29;

#line 239 "file_util.m"
        {
#line 239 "file_util.m"
          libs__file_util__V_26_26 = mercury__dir__directory_separator_0_f_0();
        }
#line 239 "file_util.m"
        {
#line 239 "file_util.m"
          libs__file_util__Sep_25 = mercury__string__from_char_1_f_0(libs__file_util__V_26_26);
        }
#line 240 "file_util.m"
        {
#line 240 "file_util.m"
          libs__file_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_29_29, 0) = ((MR_Box) (libs__file_util__FileName_9));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "file_util.m"
        }
#line 240 "file_util.m"
        {
#line 240 "file_util.m"
          libs__file_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_28_28, 0) = ((MR_Box) (libs__file_util__Sep_25));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_28_28, 1) = ((MR_Box) (libs__file_util__V_29_29));
#line 240 "file_util.m"
        }
#line 240 "file_util.m"
        {
#line 240 "file_util.m"
          libs__file_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_27_27, 0) = ((MR_Box) (libs__file_util__Dir_8));
#line 240 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_27_27, 1) = ((MR_Box) (libs__file_util__V_28_28));
#line 240 "file_util.m"
        }
#line 240 "file_util.m"
        {
#line 240 "file_util.m"
          libs__file_util__PathName_12 = mercury__string__append_list_1_f_0(libs__file_util__V_27_27);
        }
#line 239 "file_util.m"
      }
#line 179 "file_util.m"
    {
#line 179 "file_util.m"
      mercury__io__open_input_4_p_0(libs__file_util__PathName_12, &libs__file_util__OpenResult_13);
    }
#line 190 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 192 "file_util.m"
      *libs__file_util__Result_10 = (MR_Word) libs__file_util__OpenResult_13;
#line 190 "file_util.m"
    else
#line 181 "file_util.m"
      {
#line 181 "file_util.m"
        MR_Word libs__file_util__Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__OpenResult_13, (MR_Integer) 0)));

#line 185 "file_util.m"
        if ((libs__file_util__MaybeOpen_7 == (MR_Integer) 1))
#line 187 "file_util.m"
          {
#line 187 "file_util.m"
            mercury__io__close_input_3_p_0(libs__file_util__Stream_14);
          }
#line 185 "file_util.m"
        else
#line 184 "file_util.m"
          {
#line 184 "file_util.m"
            MR_Word libs__file_util__V_15_15;

#line 184 "file_util.m"
            {
#line 184 "file_util.m"
              mercury__io__set_input_stream_4_p_0(libs__file_util__Stream_14, &libs__file_util__V_15_15);
            }
#line 184 "file_util.m"
          }
#line 189 "file_util.m"
        {
#line 189 "file_util.m"
          MR_Word base;
#line 189 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 189 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 189 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Dir_8));
#line 189 "file_util.m"
        }
#line 181 "file_util.m"
      }
#line 177 "file_util.m"
  }
#line 174 "file_util.m"
}

#line 433 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_dir_command_3_f_0_1(
#line 433 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 433 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1)
#line 433 "file_util.m"
{
#line 433 "file_util.m"
  {
#line 433 "file_util.m"
    MR_Box libs__file_util__wrapper_arg_2;
#line 433 "file_util.m"
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
#line 433 "file_util.m"
    MR_String libs__file_util__conv0_HeadVar__2_2;

#line 433 "file_util.m"
    {
#line 433 "file_util.m"
      libs__file_util__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) libs__file_util__wrapper_arg_1));
    }
#line 433 "file_util.m"
    libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__2_2));
#line 433 "file_util.m"
    return libs__file_util__wrapper_arg_2;
#line 433 "file_util.m"
  }
#line 433 "file_util.m"
}

#line 126 "file_util.m"
MR_String MR_CALL 
libs__file_util__make_install_dir_command_3_f_0(
#line 126 "file_util.m"
  MR_Word libs__file_util__Globals_5,
#line 126 "file_util.m"
  MR_String libs__file_util__SourceDirName_6,
#line 126 "file_util.m"
  MR_String libs__file_util__InstallDir_7)
#line 126 "file_util.m"
{
#line 422 "file_util.m"
  {
#line 422 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 422 "file_util.m"
    MR_String libs__file_util__Command_8;
#line 422 "file_util.m"
    MR_Word libs__file_util__TypeCtorInfo_20_20;
#line 422 "file_util.m"
    MR_Word libs__file_util__FileInstallCmd_9;
#line 422 "file_util.m"
    MR_String libs__file_util__InstallCmd_10;
#line 422 "file_util.m"
    MR_String libs__file_util__InstallCmdDirOpt_11;
#line 422 "file_util.m"
    MR_Word libs__file_util__V_13_13;
#line 422 "file_util.m"
    MR_Word libs__file_util__V_15_15;
#line 422 "file_util.m"
    MR_Word libs__file_util__V_16_16;
#line 422 "file_util.m"
    MR_Word libs__file_util__V_17_17;
#line 422 "file_util.m"
    MR_Word libs__file_util__V_18_18;

#line 423 "file_util.m"
    {
#line 423 "file_util.m"
      libs__globals__get_file_install_cmd_2_p_0(libs__file_util__Globals_5, &libs__file_util__FileInstallCmd_9);
    }
#line 426 "file_util.m"
    if ((libs__file_util__FileInstallCmd_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "file_util.m"
      {
#line 428 "file_util.m"
        libs__file_util__InstallCmd_10 = (MR_String) "cp";
#line 431 "file_util.m"
        libs__file_util__InstallCmdDirOpt_11 = (MR_String) "-R";
#line 427 "file_util.m"
      }
#line 426 "file_util.m"
    else
#line 425 "file_util.m"
      {
#line 425 "file_util.m"
        libs__file_util__InstallCmd_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 0)));
#line 425 "file_util.m"
        libs__file_util__InstallCmdDirOpt_11 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 1)));
#line 425 "file_util.m"
      }
#line 1961 "libs.file_util.c"
    libs__file_util__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 434 "file_util.m"
    {
#line 434 "file_util.m"
      libs__file_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_18_18, 0) = ((MR_Box) (libs__file_util__InstallDir_7));
#line 434 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "file_util.m"
    }
#line 434 "file_util.m"
    {
#line 434 "file_util.m"
      libs__file_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 0) = ((MR_Box) (libs__file_util__SourceDirName_6));
#line 434 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 1) = ((MR_Box) (libs__file_util__V_18_18));
#line 434 "file_util.m"
    }
#line 434 "file_util.m"
    {
#line 434 "file_util.m"
      libs__file_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 0) = ((MR_Box) (libs__file_util__InstallCmdDirOpt_11));
#line 434 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 1) = ((MR_Box) (libs__file_util__V_17_17));
#line 434 "file_util.m"
    }
#line 434 "file_util.m"
    {
#line 434 "file_util.m"
      libs__file_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 0) = ((MR_Box) (libs__file_util__InstallCmd_10));
#line 434 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 1) = ((MR_Box) (libs__file_util__V_16_16));
#line 434 "file_util.m"
    }
#line 433 "file_util.m"
    {
#line 433 "file_util.m"
      libs__file_util__V_13_13 = mercury__list__map_2_f_0(libs__file_util__TypeCtorInfo_20_20, libs__file_util__TypeCtorInfo_20_20, (MR_Word) &libs__file_util_scalar_common_6[1], libs__file_util__V_15_15);
    }
#line 433 "file_util.m"
    {
#line 433 "file_util.m"
      return libs__file_util__Command_8 = mercury__string__join_list_2_f_0((MR_String) "   ", libs__file_util__V_13_13);
    }
#line 422 "file_util.m"
    return libs__file_util__Command_8;
#line 422 "file_util.m"
  }
#line 126 "file_util.m"
}

#line 419 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
#line 419 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 419 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1)
#line 419 "file_util.m"
{
#line 419 "file_util.m"
  {
#line 419 "file_util.m"
    MR_Box libs__file_util__wrapper_arg_2;
#line 419 "file_util.m"
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
#line 419 "file_util.m"
    MR_String libs__file_util__conv0_HeadVar__2_2;

#line 419 "file_util.m"
    {
#line 419 "file_util.m"
      libs__file_util__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) libs__file_util__wrapper_arg_1));
    }
#line 419 "file_util.m"
    libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__2_2));
#line 419 "file_util.m"
    return libs__file_util__wrapper_arg_2;
#line 419 "file_util.m"
  }
#line 419 "file_util.m"
}

#line 120 "file_util.m"
MR_String MR_CALL 
libs__file_util__make_install_file_command_3_f_0(
#line 120 "file_util.m"
  MR_Word libs__file_util__Globals_5,
#line 120 "file_util.m"
  MR_String libs__file_util__FileName_6,
#line 120 "file_util.m"
  MR_String libs__file_util__InstallDir_7)
#line 120 "file_util.m"
{
#line 411 "file_util.m"
  {
#line 411 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 411 "file_util.m"
    MR_String libs__file_util__Command_8;
#line 411 "file_util.m"
    MR_Word libs__file_util__TypeCtorInfo_19_19;
#line 411 "file_util.m"
    MR_Word libs__file_util__FileInstallCmd_9;
#line 411 "file_util.m"
    MR_String libs__file_util__InstallCmd_10;
#line 411 "file_util.m"
    MR_Word libs__file_util__V_13_13;
#line 411 "file_util.m"
    MR_Word libs__file_util__V_15_15;
#line 411 "file_util.m"
    MR_Word libs__file_util__V_16_16;
#line 411 "file_util.m"
    MR_Word libs__file_util__V_17_17;

#line 412 "file_util.m"
    {
#line 412 "file_util.m"
      libs__globals__get_file_install_cmd_2_p_0(libs__file_util__Globals_5, &libs__file_util__FileInstallCmd_9);
    }
#line 415 "file_util.m"
    if ((libs__file_util__FileInstallCmd_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "file_util.m"
      libs__file_util__InstallCmd_10 = (MR_String) "cp";
#line 415 "file_util.m"
    else
#line 414 "file_util.m"
      {
#line 414 "file_util.m"
        MR_String libs__file_util___InstallCmdDirOpt_11;

#line 414 "file_util.m"
        libs__file_util__InstallCmd_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 0)));
#line 414 "file_util.m"
        libs__file_util___InstallCmdDirOpt_11 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 1)));
#line 414 "file_util.m"
      }
#line 2106 "libs.file_util.c"
    libs__file_util__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 420 "file_util.m"
    {
#line 420 "file_util.m"
      libs__file_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 0) = ((MR_Box) (libs__file_util__InstallDir_7));
#line 420 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "file_util.m"
    }
#line 420 "file_util.m"
    {
#line 420 "file_util.m"
      libs__file_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 0) = ((MR_Box) (libs__file_util__FileName_6));
#line 420 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 1) = ((MR_Box) (libs__file_util__V_17_17));
#line 420 "file_util.m"
    }
#line 420 "file_util.m"
    {
#line 420 "file_util.m"
      libs__file_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 0) = ((MR_Box) (libs__file_util__InstallCmd_10));
#line 420 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 1) = ((MR_Box) (libs__file_util__V_16_16));
#line 420 "file_util.m"
    }
#line 419 "file_util.m"
    {
#line 419 "file_util.m"
      libs__file_util__V_13_13 = mercury__list__map_2_f_0(libs__file_util__TypeCtorInfo_19_19, libs__file_util__TypeCtorInfo_19_19, (MR_Word) &libs__file_util_scalar_common_6[0], libs__file_util__V_15_15);
    }
#line 419 "file_util.m"
    {
#line 419 "file_util.m"
      return libs__file_util__Command_8 = mercury__string__join_list_2_f_0((MR_String) "   ", libs__file_util__V_13_13);
    }
#line 411 "file_util.m"
    return libs__file_util__Command_8;
#line 411 "file_util.m"
  }
#line 120 "file_util.m"
}

#line 111 "file_util.m"
void MR_CALL 
libs__file_util__report_error_to_stream_4_p_0(
#line 111 "file_util.m"
  MR_Word libs__file_util__Stream_5,
#line 111 "file_util.m"
  MR_String libs__file_util__ErrorMessage_6)
#line 111 "file_util.m"
{
#line 404 "file_util.m"
  {
#line 404 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 404 "file_util.m"
    MR_Word libs__file_util__OldStream_8;
#line 407 "file_util.m"
    MR_Word libs__file_util__V_9_9;

#line 405 "file_util.m"
    {
#line 405 "file_util.m"
      mercury__io__set_output_stream_4_p_0(libs__file_util__Stream_5, &libs__file_util__OldStream_8);
    }
#line 406 "file_util.m"
    {
#line 406 "file_util.m"
      libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_6);
    }
#line 407 "file_util.m"
    {
#line 407 "file_util.m"
      mercury__io__set_output_stream_4_p_0(libs__file_util__OldStream_8, &libs__file_util__V_9_9);
    }
#line 404 "file_util.m"
  }
#line 111 "file_util.m"
}

#line 110 "file_util.m"
void MR_CALL 
libs__file_util__report_error_3_p_0(
#line 110 "file_util.m"
  MR_String libs__file_util__ErrorMessage_4)
#line 110 "file_util.m"
{
#line 397 "file_util.m"
  {
#line 397 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 398 "file_util.m"
    {
#line 398 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "Error: ");
    }
#line 399 "file_util.m"
    {
#line 399 "file_util.m"
      mercury__io__write_string_3_p_0(libs__file_util__ErrorMessage_4);
    }
#line 400 "file_util.m"
    {
#line 400 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 401 "file_util.m"
    {
#line 401 "file_util.m"
      mercury__io__flush_output_2_p_0();
    }
#line 402 "file_util.m"
    {
#line 402 "file_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 402 "file_util.m"
      return;
    }
#line 397 "file_util.m"
  }
#line 110 "file_util.m"
}

#line 108 "file_util.m"
void MR_CALL 
libs__file_util__maybe_flush_output_3_p_0(
#line 108 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1)
#line 108 "file_util.m"
{
#line 393 "file_util.m"
  {
#line 393 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 393 "file_util.m"
    if ((libs__file_util__HeadVar__1_1 == (MR_Integer) 0))
#line 395 "file_util.m"
      {
#line 395 "file_util.m"
      }
#line 393 "file_util.m"
    else
#line 394 "file_util.m"
      {
#line 394 "file_util.m"
        mercury__io__flush_output_2_p_0();
#line 394 "file_util.m"
        return;
      }
#line 393 "file_util.m"
  }
#line 108 "file_util.m"
}

#line 107 "file_util.m"
void MR_CALL 
libs__file_util__maybe_write_string_4_p_0(
#line 107 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1,
#line 107 "file_util.m"
  MR_String libs__file_util__String_2)
#line 107 "file_util.m"
{
#line 389 "file_util.m"
  {
#line 389 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 389 "file_util.m"
    if ((libs__file_util__HeadVar__1_1 == (MR_Integer) 0))
#line 391 "file_util.m"
      {
#line 391 "file_util.m"
      }
#line 389 "file_util.m"
    else
#line 390 "file_util.m"
      {
#line 390 "file_util.m"
        mercury__io__write_string_3_p_0(libs__file_util__String_2);
#line 390 "file_util.m"
        return;
      }
#line 389 "file_util.m"
  }
#line 107 "file_util.m"
}

#line 106 "file_util.m"
void MR_CALL 
libs__file_util__maybe_report_stats_3_p_0(
#line 106 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1)
#line 106 "file_util.m"
{
#line 385 "file_util.m"
  {
#line 385 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 385 "file_util.m"
    if ((libs__file_util__HeadVar__1_1 == (MR_Integer) 0))
#line 387 "file_util.m"
      {
#line 387 "file_util.m"
      }
#line 385 "file_util.m"
    else
#line 386 "file_util.m"
      {
#line 386 "file_util.m"
        mercury__io__report_stats_2_p_0();
#line 386 "file_util.m"
        return;
      }
#line 385 "file_util.m"
  }
#line 106 "file_util.m"
}

#line 102 "file_util.m"
void MR_CALL 
libs__file_util__get_install_name_option_3_p_0(
#line 102 "file_util.m"
  MR_Word libs__file_util__Globals_4,
#line 102 "file_util.m"
  MR_String libs__file_util__OutputFileName_5,
#line 102 "file_util.m"
  MR_String * libs__file_util__InstallNameOpt_6)
#line 102 "file_util.m"
{
#line 368 "file_util.m"
  {
#line 368 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 368 "file_util.m"
    MR_String libs__file_util__InstallNameFlag_7;
#line 368 "file_util.m"
    MR_String libs__file_util__InstallNamePath0_8;
#line 368 "file_util.m"
    MR_String libs__file_util__InstallNamePath_11;
#line 368 "file_util.m"
    MR_String libs__file_util__V_21_21;
#line 368 "file_util.m"
    MR_String libs__file_util__V_22_22;

#line 369 "file_util.m"
    {
#line 369 "file_util.m"
      libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 617, &libs__file_util__InstallNameFlag_7);
    }
#line 371 "file_util.m"
    {
#line 371 "file_util.m"
      libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 618, &libs__file_util__InstallNamePath0_8);
    }
#line 373 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__InstallNamePath0_8, (MR_String) "") == 0);
#line 377 "file_util.m"
    if (libs__file_util__succeeded)
#line 374 "file_util.m"
      {
#line 374 "file_util.m"
        MR_String libs__file_util__InstallPrefix_9;
#line 374 "file_util.m"
        MR_String libs__file_util__GradeDir_10;
#line 374 "file_util.m"
        MR_String libs__file_util__V_15_15;
#line 374 "file_util.m"
        MR_String libs__file_util__V_16_16;
#line 374 "file_util.m"
        MR_String libs__file_util__V_17_17;

#line 374 "file_util.m"
        {
#line 374 "file_util.m"
          libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 631, &libs__file_util__InstallPrefix_9);
        }
#line 375 "file_util.m"
        {
#line 375 "file_util.m"
          libs__handle_options__grade_directory_component_2_p_0(libs__file_util__Globals_4, &libs__file_util__GradeDir_10);
        }
#line 376 "file_util.m"
        {
#line 376 "file_util.m"
          libs__file_util__V_17_17 = mercury__dir__f_slash_2_f_0(libs__file_util__InstallPrefix_9, (MR_String) "lib");
        }
#line 376 "file_util.m"
        {
#line 376 "file_util.m"
          libs__file_util__V_16_16 = mercury__dir__f_slash_2_f_0(libs__file_util__V_17_17, (MR_String) "mercury");
        }
#line 376 "file_util.m"
        {
#line 376 "file_util.m"
          libs__file_util__V_15_15 = mercury__dir__f_slash_2_f_0(libs__file_util__V_16_16, (MR_String) "lib");
        }
#line 376 "file_util.m"
        {
#line 376 "file_util.m"
          libs__file_util__InstallNamePath_11 = mercury__dir__f_slash_2_f_0(libs__file_util__V_15_15, libs__file_util__GradeDir_10);
        }
#line 374 "file_util.m"
      }
#line 377 "file_util.m"
    else
#line 378 "file_util.m"
      libs__file_util__InstallNamePath_11 = libs__file_util__InstallNamePath0_8;
#line 381 "file_util.m"
    {
#line 381 "file_util.m"
      libs__file_util__V_22_22 = libs__options__quote_arg_1_f_0(libs__file_util__InstallNamePath_11);
    }
#line 381 "file_util.m"
    {
#line 381 "file_util.m"
      libs__file_util__V_21_21 = mercury__dir__f_slash_2_f_0(libs__file_util__V_22_22, libs__file_util__OutputFileName_5);
    }
#line 380 "file_util.m"
    {
#line 380 "file_util.m"
      *libs__file_util__InstallNameOpt_6 = mercury__string__f_43_43_2_f_0(libs__file_util__InstallNameFlag_7, libs__file_util__V_21_21);
    }
#line 368 "file_util.m"
  }
#line 102 "file_util.m"
}

#line 327 "file_util.m"
static void MR_CALL 
libs__file_util__write_include_file_contents_3_p_0_1(
#line 327 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 327 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 327 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_2,
#line 327 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_3)
#line 327 "file_util.m"
{
#line 327 "file_util.m"
  {
#line 327 "file_util.m"
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
#line 327 "file_util.m"
    MR_Word libs__file_util__conv0_Res_8;

#line 327 "file_util.m"
    {
#line 327 "file_util.m"
      libs__file_util__copy_stream_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__closure, (MR_Integer) 4))), &libs__file_util__conv0_Res_8);
    }
#line 327 "file_util.m"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_Res_8));
#line 327 "file_util.m"
  }
#line 327 "file_util.m"
}

#line 92 "file_util.m"
void MR_CALL 
libs__file_util__write_include_file_contents_3_p_0(
#line 92 "file_util.m"
  MR_String libs__file_util__FileName_4)
#line 92 "file_util.m"
{
#line 301 "file_util.m"
  {
#line 301 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 301 "file_util.m"
    MR_Word libs__file_util__MaybeType_7;

#line 303 "file_util.m"
    {
#line 303 "file_util.m"
      mercury__io__file_type_5_p_0((MR_Integer) 1, libs__file_util__FileName_4, &libs__file_util__MaybeType_7);
    }
#line 312 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__MaybeType_7)) == (MR_mktag((MR_Integer) 1))))
#line 313 "file_util.m"
      {
#line 313 "file_util.m"
        MR_Word libs__file_util__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeType_7, (MR_Integer) 0)));
#line 313 "file_util.m"
        MR_String libs__file_util__Msg_11;
#line 313 "file_util.m"
        MR_String libs__file_util__V_16_16;
#line 313 "file_util.m"
        MR_Word libs__file_util__V_17_17;

#line 315 "file_util.m"
        {
#line 315 "file_util.m"
          libs__file_util__V_16_16 = mercury__io__error_message_1_f_0(libs__file_util__Error_10);
        }
#line 314 "file_util.m"
        {
#line 314 "file_util.m"
          libs__file_util__Msg_11 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) "io.file_type failed: ", libs__file_util__V_16_16);
        }
#line 316 "file_util.m"
        {
#line 316 "file_util.m"
          libs__file_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "file_util.m"
          MR_hl_field(MR_mktag(0), libs__file_util__V_17_17, 0) = ((MR_Box) (libs__file_util__FileName_4));
#line 316 "file_util.m"
          MR_hl_field(MR_mktag(0), libs__file_util__V_17_17, 1) = ((MR_Box) (libs__file_util__Msg_11));
#line 316 "file_util.m"
        }
#line 316 "file_util.m"
        {
#line 316 "file_util.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, ((MR_Box) (libs__file_util__V_17_17)));
#line 316 "file_util.m"
          return;
        }
#line 313 "file_util.m"
      }
#line 312 "file_util.m"
    else
#line 305 "file_util.m"
      {
#line 305 "file_util.m"
        MR_Word libs__file_util__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__MaybeType_7, (MR_Integer) 0)));

#line 360 "file_util.m"
        if ((libs__file_util__Type_8 == (MR_Integer) 0))
#line 360 "file_util.m"
          libs__file_util__succeeded = MR_TRUE;
#line 360 "file_util.m"
        else
#line 360 "file_util.m"
        if ((libs__file_util__Type_8 == (MR_Integer) 10))
#line 361 "file_util.m"
          libs__file_util__succeeded = MR_TRUE;
#line 360 "file_util.m"
        else
#line 360 "file_util.m"
          libs__file_util__succeeded = MR_FALSE;
#line 309 "file_util.m"
        if (libs__file_util__succeeded)
#line 307 "file_util.m"
          {
#line 307 "file_util.m"
            MR_Word libs__file_util__OutputStream_9;
#line 307 "file_util.m"
            MR_Word libs__file_util__OpenRes_29;

#line 307 "file_util.m"
            {
#line 307 "file_util.m"
              mercury__io__output_stream_3_p_0(&libs__file_util__OutputStream_9);
            }
#line 323 "file_util.m"
            {
#line 323 "file_util.m"
              mercury__io__open_input_4_p_0(libs__file_util__FileName_4, &libs__file_util__OpenRes_29);
            }
#line 339 "file_util.m"
            if (((MR_tag((MR_Word) libs__file_util__OpenRes_29)) == (MR_mktag((MR_Integer) 1))))
#line 340 "file_util.m"
              {
#line 340 "file_util.m"
                MR_Word libs__file_util__V_35_35;
#line 340 "file_util.m"
                MR_String libs__file_util__V_36_36;
#line 340 "file_util.m"
                MR_Word libs__file_util__Error_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__OpenRes_29, (MR_Integer) 0)));

#line 341 "file_util.m"
                {
#line 341 "file_util.m"
                  libs__file_util__V_36_36 = mercury__io__error_message_1_f_0(libs__file_util__Error_42);
                }
#line 341 "file_util.m"
                {
#line 341 "file_util.m"
                  libs__file_util__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 341 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_35_35, 0) = ((MR_Box) (libs__file_util__FileName_4));
#line 341 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_35_35, 1) = ((MR_Box) (libs__file_util__V_36_36));
#line 341 "file_util.m"
                }
#line 341 "file_util.m"
                {
#line 341 "file_util.m"
                  mercury__exception__throw_1_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, ((MR_Box) (libs__file_util__V_35_35)));
#line 341 "file_util.m"
                  return;
                }
#line 340 "file_util.m"
              }
#line 339 "file_util.m"
            else
#line 325 "file_util.m"
              {
#line 325 "file_util.m"
                MR_Word libs__file_util__InputStream_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__OpenRes_29, (MR_Integer) 0)));
#line 325 "file_util.m"
                MR_Word libs__file_util__TryResult_31;
#line 327 "file_util.m"
                MR_Word libs__file_util__V_37_37;

#line 327 "file_util.m"
                {
#line 327 "file_util.m"
                  libs__file_util__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 327 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 0) = ((MR_Box) (&libs__file_util_scalar_common_4[0]));
#line 327 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 1) = ((MR_Box) (libs__file_util__write_include_file_contents_3_p_0_1));
#line 327 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 327 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 3) = ((MR_Box) (libs__file_util__OutputStream_9));
#line 327 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 4) = ((MR_Box) (libs__file_util__InputStream_30));
#line 327 "file_util.m"
                }
#line 327 "file_util.m"
                {
#line 327 "file_util.m"
                  mercury__exception__try_io_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_res_0, libs__file_util__V_37_37, &libs__file_util__TryResult_31);
                }
#line 329 "file_util.m"
                {
#line 329 "file_util.m"
                  mercury__io__close_input_3_p_0(libs__file_util__InputStream_30);
                }
#line 332 "file_util.m"
                if (((MR_tag((MR_Word) libs__file_util__TryResult_31)) == (MR_mktag((MR_Integer) 2))))
#line 336 "file_util.m"
                  {
#line 337 "file_util.m"
                    {
#line 337 "file_util.m"
                      mercury__exception__rethrow_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_res_0, libs__file_util__TryResult_31);
#line 337 "file_util.m"
                      return;
                    }
#line 336 "file_util.m"
                  }
#line 332 "file_util.m"
                else
#line 332 "file_util.m"
                  {
#line 332 "file_util.m"
                    MR_Word libs__file_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__TryResult_31, (MR_Integer) 0)));

#line 332 "file_util.m"
                    if ((libs__file_util__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "file_util.m"
                      {
#line 331 "file_util.m"
                      }
#line 332 "file_util.m"
                    else
#line 333 "file_util.m"
                      {
#line 333 "file_util.m"
                        MR_Word libs__file_util__Error_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__V_50_50, (MR_Integer) 0)));

#line 334 "file_util.m"
                        {
#line 334 "file_util.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (libs__file_util__Error_32)));
#line 334 "file_util.m"
                          return;
                        }
#line 333 "file_util.m"
                      }
#line 332 "file_util.m"
                  }
#line 325 "file_util.m"
              }
#line 307 "file_util.m"
          }
#line 309 "file_util.m"
        else
#line 310 "file_util.m"
          {
#line 310 "file_util.m"
            MR_Word libs__file_util__V_20_20;

#line 310 "file_util.m"
            {
#line 310 "file_util.m"
              libs__file_util__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "file_util.m"
              MR_hl_field(MR_mktag(0), libs__file_util__V_20_20, 0) = ((MR_Box) (libs__file_util__FileName_4));
#line 310 "file_util.m"
              MR_hl_field(MR_mktag(0), libs__file_util__V_20_20, 1) = ((MR_Box) ((MR_String) "Not a regular file"));
#line 310 "file_util.m"
            }
#line 310 "file_util.m"
            {
#line 310 "file_util.m"
              mercury__exception__throw_1_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, ((MR_Box) (libs__file_util__V_20_20)));
#line 310 "file_util.m"
              return;
            }
#line 310 "file_util.m"
          }
#line 305 "file_util.m"
      }
#line 301 "file_util.m"
  }
#line 92 "file_util.m"
}

#line 84 "file_util.m"
void MR_CALL 
libs__file_util__output_to_file_return_result_6_p_0(
#line 84 "file_util.m"
  MR_Word libs__file_util__TypeInfo_for_T_63,
#line 84 "file_util.m"
  MR_Word libs__file_util__Globals_7,
#line 84 "file_util.m"
  MR_String libs__file_util__FileName_8,
#line 84 "file_util.m"
  MR_Word libs__file_util__Action_9,
#line 84 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 84 "file_util.m"
{
#line 256 "file_util.m"
  {
#line 256 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 256 "file_util.m"
    MR_Word libs__file_util__Verbose_12;
#line 256 "file_util.m"
    MR_Word libs__file_util__Stats_13;
#line 256 "file_util.m"
    MR_Word libs__file_util__Res_14;

#line 257 "file_util.m"
    {
#line 257 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 45, &libs__file_util__Verbose_12);
    }
#line 258 "file_util.m"
    {
#line 258 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 55, &libs__file_util__Stats_13);
    }
#line 2766 "libs.file_util.c"
    if ((libs__file_util__Verbose_12 == (MR_Integer) 0))
#line 395 "file_util.m"
      {
#line 395 "file_util.m"
      }
#line 2772 "libs.file_util.c"
    else
#line 2774 "libs.file_util.c"
      {
#line 390 "file_util.m"
        {
#line 390 "file_util.m"
          mercury__io__write_string_3_p_0((MR_String) "% Writing to file \140");
        }
#line 390 "file_util.m"
        {
#line 390 "file_util.m"
          mercury__io__write_string_3_p_0(libs__file_util__FileName_8);
        }
#line 390 "file_util.m"
        {
#line 390 "file_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\'...\n");
        }
#line 394 "file_util.m"
        {
#line 394 "file_util.m"
          mercury__io__flush_output_2_p_0();
        }
#line 2796 "libs.file_util.c"
      }
#line 263 "file_util.m"
    {
#line 263 "file_util.m"
      mercury__io__open_output_4_p_0(libs__file_util__FileName_8, &libs__file_util__Res_14);
    }
#line 290 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__Res_14)) == (MR_mktag((MR_Integer) 1))))
#line 291 "file_util.m"
      {
#line 291 "file_util.m"
        MR_Word libs__file_util__V_39_39;
#line 291 "file_util.m"
        MR_Word libs__file_util__V_41_41;
#line 291 "file_util.m"
        MR_String libs__file_util__ErrorMessage_62;

#line 292 "file_util.m"
        {
#line 292 "file_util.m"
          libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "\n");
        }
#line 293 "file_util.m"
        {
#line 293 "file_util.m"
          libs__file_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_41_41, 0) = ((MR_Box) (libs__file_util__FileName_8));
#line 293 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__file_util_scalar_common_2[0])));
#line 293 "file_util.m"
        }
#line 293 "file_util.m"
        {
#line 293 "file_util.m"
          libs__file_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_39_39, 0) = ((MR_Box) ((MR_String) "can\'t open file \140"));
#line 293 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_39_39, 1) = ((MR_Box) (libs__file_util__V_41_41));
#line 293 "file_util.m"
        }
#line 293 "file_util.m"
        {
#line 293 "file_util.m"
          mercury__string__append_list_2_p_0(libs__file_util__V_39_39, &libs__file_util__ErrorMessage_62);
        }
#line 295 "file_util.m"
        {
#line 295 "file_util.m"
          libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_62);
        }
#line 296 "file_util.m"
        *libs__file_util__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 291 "file_util.m"
      }
#line 290 "file_util.m"
    else
#line 265 "file_util.m"
      {
#line 265 "file_util.m"
        MR_Word libs__file_util__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Res_14, (MR_Integer) 0)));
#line 265 "file_util.m"
        MR_Word libs__file_util__OrigOutputStream_16;
#line 265 "file_util.m"
        MR_Word libs__file_util__TryResult_17;
#line 270 "file_util.m"
        MR_Word libs__file_util__V_18_18;

#line 266 "file_util.m"
        {
#line 266 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__FileStream_15, &libs__file_util__OrigOutputStream_16);
        }
#line 268 "file_util.m"
        {
#line 268 "file_util.m"
          mercury__exception__try_io_4_p_0(libs__file_util__TypeInfo_for_T_63, libs__file_util__Action_9, &libs__file_util__TryResult_17);
        }
#line 270 "file_util.m"
        {
#line 270 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__OrigOutputStream_16, &libs__file_util__V_18_18);
        }
#line 271 "file_util.m"
        {
#line 271 "file_util.m"
          mercury__io__close_output_3_p_0(libs__file_util__FileStream_15);
        }
#line 272 "file_util.m"
        {
#line 272 "file_util.m"
          libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "% done.\n");
        }
#line 273 "file_util.m"
        {
#line 273 "file_util.m"
          libs__file_util__maybe_report_stats_3_p_0(libs__file_util__Stats_13);
        }
#line 277 "file_util.m"
        if (((MR_tag((MR_Word) libs__file_util__TryResult_17)) == (MR_mktag((MR_Integer) 2))))
#line 278 "file_util.m"
          {
#line 278 "file_util.m"
            MR_Word libs__file_util__Univ_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__file_util__TryResult_17, (MR_Integer) 0)));
#line 286 "file_util.m"
            MR_Word libs__file_util__IncludeError_21;
#line 279 "file_util.m"
            MR_Box libs__file_util__conv0_IncludeError_21;

#line 279 "file_util.m"
            {
#line 279 "file_util.m"
              libs__file_util__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, libs__file_util__Univ_20, &libs__file_util__conv0_IncludeError_21);
            }
#line 279 "file_util.m"
            if (libs__file_util__succeeded)
#line 279 "file_util.m"
              {
#line 279 "file_util.m"
                libs__file_util__IncludeError_21 = ((MR_Word) libs__file_util__conv0_IncludeError_21);
#line 279 "file_util.m"
                libs__file_util__succeeded = MR_TRUE;
#line 279 "file_util.m"
              }
#line 286 "file_util.m"
            if (libs__file_util__succeeded)
#line 280 "file_util.m"
              {
#line 280 "file_util.m"
                MR_String libs__file_util__IncludeFileName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__IncludeError_21, (MR_Integer) 0)));
#line 280 "file_util.m"
                MR_String libs__file_util__Detail_23 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__IncludeError_21, (MR_Integer) 1)));
#line 280 "file_util.m"
                MR_String libs__file_util__ErrorMessage_24;
#line 280 "file_util.m"
                MR_String libs__file_util__V_65_65;
#line 280 "file_util.m"
                MR_Word libs__file_util__V_71_71 = (MR_Word) &libs__file_util_scalar_common_3[0];
#line 280 "file_util.m"
                MR_String libs__file_util__V_73_73;
#line 280 "file_util.m"
                MR_String libs__file_util__V_74_74;
#line 280 "file_util.m"
                MR_String libs__file_util__V_81_81;

#line 282 "file_util.m"
                {
#line 282 "file_util.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__file_util__V_71_71, libs__file_util__Detail_23, &libs__file_util__V_65_65);
                }
#line 281 "file_util.m"
                {
#line 281 "file_util.m"
                  libs__file_util__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "\' for input: ", libs__file_util__V_65_65);
                }
#line 282 "file_util.m"
                {
#line 282 "file_util.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__file_util__V_71_71, libs__file_util__IncludeFileName_22, &libs__file_util__V_74_74);
                }
#line 281 "file_util.m"
                {
#line 281 "file_util.m"
                  libs__file_util__V_81_81 = mercury__string__f_43_43_2_f_0(libs__file_util__V_74_74, libs__file_util__V_73_73);
                }
#line 281 "file_util.m"
                {
#line 281 "file_util.m"
                  libs__file_util__ErrorMessage_24 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open \140", libs__file_util__V_81_81);
                }
#line 283 "file_util.m"
                {
#line 283 "file_util.m"
                  libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "\n");
                }
#line 284 "file_util.m"
                {
#line 284 "file_util.m"
                  libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_24);
                }
#line 285 "file_util.m"
                *libs__file_util__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 280 "file_util.m"
              }
#line 286 "file_util.m"
            else
#line 287 "file_util.m"
              {
#line 287 "file_util.m"
                mercury__exception__rethrow_1_p_0(libs__file_util__TypeInfo_for_T_63, libs__file_util__TryResult_17);
#line 287 "file_util.m"
                return;
              }
#line 278 "file_util.m"
          }
#line 277 "file_util.m"
        else
#line 275 "file_util.m"
          {
#line 275 "file_util.m"
            MR_Box libs__file_util__ActionResult_19 = (MR_hl_field(MR_mktag(1), libs__file_util__TryResult_17, (MR_Integer) 0));

#line 276 "file_util.m"
            {
#line 276 "file_util.m"
              MR_Word base;
#line 276 "file_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 276 "file_util.m"
              *libs__file_util__Result_10 = base;
#line 276 "file_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = libs__file_util__ActionResult_19;
#line 276 "file_util.m"
            }
#line 275 "file_util.m"
          }
#line 265 "file_util.m"
      }
#line 256 "file_util.m"
  }
#line 84 "file_util.m"
}

#line 246 "file_util.m"
static void MR_CALL 
libs__file_util__output_to_file_6_p_0_1(
#line 246 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 246 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 246 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_2,
#line 246 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_3)
#line 246 "file_util.m"
{
#line 246 "file_util.m"
  {
#line 246 "file_util.m"
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
#line 246 "file_util.m"
    MR_Integer libs__file_util__conv0_HeadVar__2_19;

#line 246 "file_util.m"
    {
#line 246 "file_util.m"
      libs__file_util__IntroducedFrom__pred__output_to_file__246__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__closure, (MR_Integer) 3))), &libs__file_util__conv0_HeadVar__2_19);
    }
#line 246 "file_util.m"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__2_19));
#line 246 "file_util.m"
  }
#line 246 "file_util.m"
}

#line 78 "file_util.m"
void MR_CALL 
libs__file_util__output_to_file_6_p_0(
#line 78 "file_util.m"
  MR_Word libs__file_util__Globals_7,
#line 78 "file_util.m"
  MR_String libs__file_util__FileName_8,
#line 78 "file_util.m"
  MR_Word libs__file_util__Action_9,
#line 78 "file_util.m"
  MR_Word * libs__file_util__Succeeded_10)
#line 78 "file_util.m"
{
#line 245 "file_util.m"
  {
#line 245 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 245 "file_util.m"
    MR_Word libs__file_util__NewAction_12;
#line 245 "file_util.m"
    MR_Word libs__file_util__Result_13;

#line 246 "file_util.m"
    {
#line 246 "file_util.m"
      libs__file_util__NewAction_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 246 "file_util.m"
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 0) = ((MR_Box) (&libs__file_util_scalar_common_1[0]));
#line 246 "file_util.m"
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 1) = ((MR_Box) (libs__file_util__output_to_file_6_p_0_1));
#line 246 "file_util.m"
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 246 "file_util.m"
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 3) = ((MR_Box) (libs__file_util__Action_9));
#line 246 "file_util.m"
    }
#line 247 "file_util.m"
    {
#line 247 "file_util.m"
      libs__file_util__output_to_file_return_result_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__file_util__Globals_7, libs__file_util__FileName_8, libs__file_util__NewAction_12, &libs__file_util__Result_13);
    }
#line 251 "file_util.m"
    if ((libs__file_util__Result_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 253 "file_util.m"
      *libs__file_util__Succeeded_10 = (MR_Integer) 0;
#line 251 "file_util.m"
    else
#line 250 "file_util.m"
      *libs__file_util__Succeeded_10 = (MR_Integer) 1;
#line 245 "file_util.m"
  }
#line 78 "file_util.m"
}

#line 69 "file_util.m"
void MR_CALL 
libs__file_util__search_for_file_mod_time_5_p_0(
#line 69 "file_util.m"
  MR_Word libs__file_util__Dirs_6,
#line 69 "file_util.m"
  MR_String libs__file_util__FileName_7,
#line 69 "file_util.m"
  MR_Word * libs__file_util__Result_8)
#line 69 "file_util.m"
{
#line 195 "file_util.m"
  {
#line 195 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 195 "file_util.m"
    MR_Word libs__file_util__MaybeTime_10;

#line 196 "file_util.m"
    {
#line 196 "file_util.m"
      libs__file_util__do_search_for_file__ho1_6_p_0(libs__file_util__Dirs_6, libs__file_util__FileName_7, &libs__file_util__MaybeTime_10);
    }
#line 200 "file_util.m"
    if ((libs__file_util__MaybeTime_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 201 "file_util.m"
      {
#line 201 "file_util.m"
        MR_String libs__file_util__Msg_12;
#line 201 "file_util.m"
        MR_String libs__file_util__V_18_18;
#line 201 "file_util.m"
        MR_String libs__file_util__V_19_19;
#line 201 "file_util.m"
        MR_String libs__file_util__V_21_21;

#line 203 "file_util.m"
        {
#line 203 "file_util.m"
          libs__file_util__V_21_21 = mercury__string__join_list_2_f_0((MR_String) ", ", libs__file_util__Dirs_6);
        }
#line 202 "file_util.m"
        {
#line 202 "file_util.m"
          libs__file_util__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", libs__file_util__V_21_21);
        }
#line 202 "file_util.m"
        {
#line 202 "file_util.m"
          libs__file_util__V_18_18 = mercury__string__f_43_43_2_f_0(libs__file_util__FileName_7, libs__file_util__V_19_19);
        }
#line 202 "file_util.m"
        {
#line 202 "file_util.m"
          libs__file_util__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", libs__file_util__V_18_18);
        }
#line 204 "file_util.m"
        {
#line 204 "file_util.m"
          MR_Word base;
#line 204 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 204 "file_util.m"
          *libs__file_util__Result_8 = base;
#line 204 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Msg_12));
#line 204 "file_util.m"
        }
#line 201 "file_util.m"
      }
#line 200 "file_util.m"
    else
#line 198 "file_util.m"
      {
#line 198 "file_util.m"
        MR_Word libs__file_util__Time_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeTime_10, (MR_Integer) 0)));

#line 199 "file_util.m"
        {
#line 199 "file_util.m"
          MR_Word base;
#line 199 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 199 "file_util.m"
          *libs__file_util__Result_8 = base;
#line 199 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Time_11));
#line 199 "file_util.m"
        }
#line 198 "file_util.m"
      }
#line 195 "file_util.m"
  }
#line 69 "file_util.m"
}

#line 61 "file_util.m"
void MR_CALL 
libs__file_util__search_for_file_returning_dir_6_p_0(
#line 61 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 61 "file_util.m"
  MR_Word libs__file_util__Dirs_8,
#line 61 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 61 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 61 "file_util.m"
{
#line 161 "file_util.m"
  {
#line 161 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 161 "file_util.m"
    MR_Word libs__file_util__MaybeDir_12;

#line 162 "file_util.m"
    {
#line 162 "file_util.m"
      libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_50_95_95_91_50_93_95_48_6_p_0(libs__file_util__MaybeOpen_7, libs__file_util__Dirs_8, libs__file_util__FileName_9, &libs__file_util__MaybeDir_12);
    }
#line 167 "file_util.m"
    if ((libs__file_util__MaybeDir_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "file_util.m"
      {
#line 168 "file_util.m"
        MR_String libs__file_util__Msg_14;
#line 168 "file_util.m"
        MR_String libs__file_util__V_20_20;
#line 168 "file_util.m"
        MR_String libs__file_util__V_21_21;
#line 168 "file_util.m"
        MR_String libs__file_util__V_23_23;

#line 170 "file_util.m"
        {
#line 170 "file_util.m"
          libs__file_util__V_23_23 = mercury__string__join_list_2_f_0((MR_String) ", ", libs__file_util__Dirs_8);
        }
#line 169 "file_util.m"
        {
#line 169 "file_util.m"
          libs__file_util__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", libs__file_util__V_23_23);
        }
#line 169 "file_util.m"
        {
#line 169 "file_util.m"
          libs__file_util__V_20_20 = mercury__string__f_43_43_2_f_0(libs__file_util__FileName_9, libs__file_util__V_21_21);
        }
#line 169 "file_util.m"
        {
#line 169 "file_util.m"
          libs__file_util__Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", libs__file_util__V_20_20);
        }
#line 171 "file_util.m"
        {
#line 171 "file_util.m"
          MR_Word base;
#line 171 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 171 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 171 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Msg_14));
#line 171 "file_util.m"
        }
#line 168 "file_util.m"
      }
#line 167 "file_util.m"
    else
#line 165 "file_util.m"
      {
#line 165 "file_util.m"
        MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeDir_12, (MR_Integer) 0)));

#line 166 "file_util.m"
        {
#line 166 "file_util.m"
          MR_Word base;
#line 166 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 166 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 166 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Dir_13));
#line 166 "file_util.m"
        }
#line 165 "file_util.m"
      }
#line 161 "file_util.m"
  }
#line 61 "file_util.m"
}

#line 51 "file_util.m"
void MR_CALL 
libs__file_util__search_for_file_6_p_0(
#line 51 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 51 "file_util.m"
  MR_Word libs__file_util__Dirs_8,
#line 51 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 51 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 51 "file_util.m"
{
#line 146 "file_util.m"
  {
#line 146 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 146 "file_util.m"
    MR_Word libs__file_util__Result0_12;

#line 147 "file_util.m"
    {
#line 147 "file_util.m"
      libs__file_util__search_for_file_returning_dir_6_p_0(libs__file_util__MaybeOpen_7, libs__file_util__Dirs_8, libs__file_util__FileName_9, &libs__file_util__Result0_12);
    }
#line 156 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__Result0_12)) == (MR_mktag((MR_Integer) 1))))
#line 158 "file_util.m"
      *libs__file_util__Result_10 = libs__file_util__Result0_12;
#line 156 "file_util.m"
    else
#line 149 "file_util.m"
      {
#line 149 "file_util.m"
        MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_12, (MR_Integer) 0)));
#line 149 "file_util.m"
        MR_String libs__file_util__PathName_14;
#line 150 "file_util.m"
        MR_String libs__file_util__V_19_19;

#line 150 "file_util.m"
        {
#line 150 "file_util.m"
          mercury__dir__this_directory_1_p_0(&libs__file_util__V_19_19);
        }
#line 150 "file_util.m"
        libs__file_util__succeeded = (strcmp(libs__file_util__Dir_13, libs__file_util__V_19_19) == 0);
#line 152 "file_util.m"
        if (libs__file_util__succeeded)
#line 151 "file_util.m"
          libs__file_util__PathName_14 = libs__file_util__FileName_9;
#line 152 "file_util.m"
        else
#line 153 "file_util.m"
          {
#line 153 "file_util.m"
            libs__file_util__PathName_14 = mercury__dir__make_path_name_2_f_0(libs__file_util__Dir_13, libs__file_util__FileName_9);
          }
#line 155 "file_util.m"
        {
#line 155 "file_util.m"
          MR_Word base;
#line 155 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 155 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 155 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__PathName_14));
#line 155 "file_util.m"
        }
#line 149 "file_util.m"
      }
#line 146 "file_util.m"
  }
#line 51 "file_util.m"
}

void mercury__libs__file_util__init(void)
{
}

void mercury__libs__file_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_dir_name_0);
	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_file_name_0);
	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_include_file_error_0);
	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_maybe_open_file_0);
	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_open_file_pred_1);
}

void mercury__libs__file_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.file_util. */
