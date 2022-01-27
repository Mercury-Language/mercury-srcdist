/*
** Automatically generated from `read_modules.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module parse_tree.read_modules. */
/* :- implementation. */

/*
INIT mercury__parse_tree__read_modules__init
ENDINIT
*/

#include "parse_tree.read_modules.mih"


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
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_find.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 141 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 144 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 147 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 150 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_0_0[5];

#line 153 "parse_tree.read_modules.c"
static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_0_0;

#line 156 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_0_0[1];

#line 159 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_0[1];

#line 162 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_0[1];

#line 165 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_0[1];

#line 168 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 171 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0parse_tree__read_modules__type_ctor_info_have_read_module_0;

#line 174 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0;

#line 177 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1;

#line 180 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0[2];

#line 183 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2];

#line 186 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2];

#line 189 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_0_0_10001(
#line 192 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 194 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 197 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_0_0_10001(
#line 200 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 202 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 204 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 207 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_0_0_10001(
#line 210 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 212 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 215 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_0_0_10001(
#line 218 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 220 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 222 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 225 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
#line 228 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 230 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 233 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
#line 236 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 238 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 240 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 152 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(
#line 152 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 152 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 152 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3);

#line 152 "read_modules.m"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(
#line 152 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_1,
#line 152 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2);

#line 357 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__check_timestamp_6_p_0(
#line 357 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_7,
#line 357 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_8,
#line 357 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestamp0_9,
#line 357 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_10);

#line 215 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__do_read_module_15_p_0_2(
#line 215 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 215 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 215 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 215 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3);

#line 212 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__do_read_module_15_p_0_1(
#line 212 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 212 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 212 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 212 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3);

#line 174 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__do_read_module_15_p_0(
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_16,
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_17,
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_18,
#line 174 "read_modules.m"
  MR_String parse_tree__read_modules__Extension_19,
#line 174 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_20,
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_21,
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeOldTimestamp_22,
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_23,
#line 174 "read_modules.m"
  MR_Word * parse_tree__read_modules__Items_24,
#line 174 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_25,
#line 174 "read_modules.m"
  MR_Word * parse_tree__read_modules__Error_26,
#line 174 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_27,
#line 174 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_28);

#line 297 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_from_file_13_p_0_1(
#line 297 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 297 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 297 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 297 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[2][2];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[1][9];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_4[1][10];




static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__file_util__libs__file_util__type_ctor_info_maybe_open_file_0)),
    ((MR_Box) (&parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 429 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 437 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 446 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 454 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 462 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_0_0[5] = {
  (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_module_error_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 471 "parse_tree.read_modules.c"
static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_0_0 = {
  (MR_String) "have_read_module",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_0_0,
  NULL,
  NULL,
  NULL
};

#line 486 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_0_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_0_0
};

#line 491 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_0_0
  }
};

#line 500 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_0_0
};

#line 505 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_0[1] = {
  (MR_Integer) 0
};

#line 510 "parse_tree.read_modules.c"
const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module",
  {
    parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_0
  },
  {
    parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_0
};

#line 531 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 540 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0parse_tree__read_modules__type_ctor_info_have_read_module_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0
  }
};

#line 549 "parse_tree.read_modules.c"
const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0parse_tree__read_modules__type_ctor_info_have_read_module_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 570 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0 = {
  (MR_String) "ignore_errors",
  (MR_Integer) 0
};

#line 576 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1 = {
  (MR_String) "do_not_ignore_errors",
  (MR_Integer) 1
};

#line 582 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1
};

#line 588 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0
};

#line 594 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 600 "parse_tree.read_modules.c"
const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "maybe_ignore_errors",
  {
    parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0
  },
  {
    parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0
};

#line 621 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_0_0_10001(
#line 624 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 626 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 628 "parse_tree.read_modules.c"
{
#line 630 "parse_tree.read_modules.c"
  {
#line 632 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 635 "parse_tree.read_modules.c"
    {
#line 637 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 640 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 642 "parse_tree.read_modules.c"
  }
#line 644 "parse_tree.read_modules.c"
}

#line 647 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_0_0_10001(
#line 650 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 652 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 654 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 656 "parse_tree.read_modules.c"
{
#line 658 "parse_tree.read_modules.c"
  {
#line 660 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 663 "parse_tree.read_modules.c"
    {
#line 665 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 668 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 670 "parse_tree.read_modules.c"
  }
#line 672 "parse_tree.read_modules.c"
}

#line 675 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_0_0_10001(
#line 678 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 680 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 682 "parse_tree.read_modules.c"
{
#line 684 "parse_tree.read_modules.c"
  {
#line 686 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 689 "parse_tree.read_modules.c"
    {
#line 691 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 694 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 696 "parse_tree.read_modules.c"
  }
#line 698 "parse_tree.read_modules.c"
}

#line 701 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_0_0_10001(
#line 704 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 706 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 708 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 710 "parse_tree.read_modules.c"
{
#line 712 "parse_tree.read_modules.c"
  {
#line 714 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 717 "parse_tree.read_modules.c"
    {
#line 719 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 722 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 724 "parse_tree.read_modules.c"
  }
#line 726 "parse_tree.read_modules.c"
}

#line 729 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
#line 732 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 734 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 736 "parse_tree.read_modules.c"
{
#line 738 "parse_tree.read_modules.c"
  {
#line 740 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 743 "parse_tree.read_modules.c"
    {
#line 745 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 748 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 750 "parse_tree.read_modules.c"
  }
#line 752 "parse_tree.read_modules.c"
}

#line 755 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
#line 758 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 760 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 762 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 764 "parse_tree.read_modules.c"
{
#line 766 "parse_tree.read_modules.c"
  {
#line 768 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 771 "parse_tree.read_modules.c"
    {
#line 773 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 776 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 778 "parse_tree.read_modules.c"
  }
#line 780 "parse_tree.read_modules.c"
}

#line 152 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(
#line 152 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 152 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 152 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 152 "read_modules.m"
{
#line 152 "read_modules.m"
  {
#line 152 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 152 "read_modules.m"
    MR_Integer parse_tree__read_modules__Cast_HeadVar1_4 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
#line 152 "read_modules.m"
    MR_Integer parse_tree__read_modules__Cast_HeadVar2_5 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

#line 152 "read_modules.m"
    {
#line 152 "read_modules.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__read_modules__HeadVar__1_1, parse_tree__read_modules__Cast_HeadVar1_4, parse_tree__read_modules__Cast_HeadVar2_5);
#line 152 "read_modules.m"
      return;
    }
#line 152 "read_modules.m"
  }
#line 152 "read_modules.m"
}

#line 152 "read_modules.m"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(
#line 152 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_1,
#line 152 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 152 "read_modules.m"
{
#line 824 "parse_tree.read_modules.c"
  {
#line 826 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded = (parse_tree__read_modules__HeadVar__2_1 == parse_tree__read_modules__HeadVar__2_2);

#line 829 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 831 "parse_tree.read_modules.c"
  }
#line 152 "read_modules.m"
}

#line 37 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_0_0(
#line 37 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 37 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 37 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 37 "read_modules.m"
{
#line 37 "read_modules.m"
  {
#line 37 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 37 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
#line 37 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

#line 37 "read_modules.m"
    {
#line 37 "read_modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[1], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_5)));
#line 37 "read_modules.m"
      return;
    }
#line 37 "read_modules.m"
  }
#line 37 "read_modules.m"
}

#line 37 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_0_0(
#line 37 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 37 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 37 "read_modules.m"
{
#line 37 "read_modules.m"
  {
#line 37 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 37 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
#line 37 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

#line 37 "read_modules.m"
    {
#line 37 "read_modules.m"
      return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[1], ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_4)));
    }
#line 37 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 37 "read_modules.m"
  }
#line 37 "read_modules.m"
}

#line 40 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_0_0(
#line 40 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 40 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 40 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 40 "read_modules.m"
{
#line 40 "read_modules.m"
  {
#line 40 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 40 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_18 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
#line 40 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_19 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

#line 40 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_18 == parse_tree__read_modules__CastY_19);
#line 40 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 922 "parse_tree.read_modules.c"
      *parse_tree__read_modules__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "read_modules.m"
    else
#line 40 "read_modules.m"
      {
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 3)));
#line 40 "read_modules.m"
        MR_String parse_tree__read_modules__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 4)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 2)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 3)));
#line 40 "read_modules.m"
        MR_String parse_tree__read_modules__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 4)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_14_14;

#line 40 "read_modules.m"
        {
#line 40 "read_modules.m"
          parse_tree__module_imports____Compare____module_timestamp_0_0(&parse_tree__read_modules__V_14_14, parse_tree__read_modules__V_4_4, parse_tree__read_modules__V_9_9);
        }
#line 956 "parse_tree.read_modules.c"
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_14_14 == (MR_Integer) 0);
#line 40 "read_modules.m"
        parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 40 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 40 "read_modules.m"
          *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_14_14;
#line 40 "read_modules.m"
        else
#line 40 "read_modules.m"
          {
#line 40 "read_modules.m"
            MR_Word parse_tree__read_modules__V_15_15;

#line 40 "read_modules.m"
            {
#line 40 "read_modules.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[0], &parse_tree__read_modules__V_15_15, ((MR_Box) (parse_tree__read_modules__V_5_5)), ((MR_Box) (parse_tree__read_modules__V_10_10)));
            }
#line 976 "parse_tree.read_modules.c"
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_15_15 == (MR_Integer) 0);
#line 40 "read_modules.m"
            parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 40 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 40 "read_modules.m"
              *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_15_15;
#line 40 "read_modules.m"
            else
#line 40 "read_modules.m"
              {
#line 40 "read_modules.m"
                MR_Word parse_tree__read_modules__V_16_16;

#line 40 "read_modules.m"
                {
#line 40 "read_modules.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], &parse_tree__read_modules__V_16_16, ((MR_Box) (parse_tree__read_modules__V_6_6)), ((MR_Box) (parse_tree__read_modules__V_11_11)));
                }
#line 996 "parse_tree.read_modules.c"
                parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_16_16 == (MR_Integer) 0);
#line 40 "read_modules.m"
                parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 40 "read_modules.m"
                if (parse_tree__read_modules__succeeded)
#line 40 "read_modules.m"
                  *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_16_16;
#line 40 "read_modules.m"
                else
#line 40 "read_modules.m"
                  {
#line 40 "read_modules.m"
                    MR_Word parse_tree__read_modules__V_17_17;
#line 40 "read_modules.m"
                    MR_Integer parse_tree__read_modules__V_25_25 = (MR_Integer) parse_tree__read_modules__V_7_7;
#line 40 "read_modules.m"
                    MR_Integer parse_tree__read_modules__V_26_26 = (MR_Integer) parse_tree__read_modules__V_12_12;

#line 40 "read_modules.m"
                    {
#line 40 "read_modules.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__read_modules__V_17_17, parse_tree__read_modules__V_25_25, parse_tree__read_modules__V_26_26);
                    }
#line 1020 "parse_tree.read_modules.c"
                    parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_17_17 == (MR_Integer) 0);
#line 40 "read_modules.m"
                    parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 40 "read_modules.m"
                    if (parse_tree__read_modules__succeeded)
#line 40 "read_modules.m"
                      *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_17_17;
#line 40 "read_modules.m"
                    else
#line 40 "read_modules.m"
                      {
#line 40 "read_modules.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__read_modules__HeadVar__1_1, parse_tree__read_modules__V_8_8, parse_tree__read_modules__V_13_13);
#line 40 "read_modules.m"
                        return;
                      }
#line 40 "read_modules.m"
                  }
#line 40 "read_modules.m"
              }
#line 40 "read_modules.m"
          }
#line 40 "read_modules.m"
      }
#line 40 "read_modules.m"
  }
#line 40 "read_modules.m"
}

#line 40 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_0_0(
#line 40 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 40 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 40 "read_modules.m"
{
#line 40 "read_modules.m"
  {
#line 40 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 40 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_13 = (MR_Integer) parse_tree__read_modules__HeadVar__1_1;
#line 40 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_14 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;

#line 40 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_13 == parse_tree__read_modules__CastY_14);
#line 40 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 40 "read_modules.m"
      parse_tree__read_modules__succeeded = MR_TRUE;
#line 40 "read_modules.m"
    else
#line 40 "read_modules.m"
      {
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeInfo_16_16;
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeInfo_17_17;
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 2)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 3)));
#line 40 "read_modules.m"
        MR_String parse_tree__read_modules__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 4)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2)));
#line 40 "read_modules.m"
        MR_Word parse_tree__read_modules__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 3)));
#line 40 "read_modules.m"
        MR_String parse_tree__read_modules__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 4)));

#line 1103 "parse_tree.read_modules.c"
        {
#line 1105 "parse_tree.read_modules.c"
          parse_tree__read_modules__succeeded = parse_tree__module_imports____Unify____module_timestamp_0_0(parse_tree__read_modules__V_3_3, parse_tree__read_modules__V_8_8);
        }
#line 40 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 40 "read_modules.m"
          {
#line 1112 "parse_tree.read_modules.c"
            parse_tree__read_modules__TypeInfo_16_16 = (MR_Word) &parse_tree__read_modules_scalar_common_2[0];
#line 1114 "parse_tree.read_modules.c"
            {
#line 1116 "parse_tree.read_modules.c"
              parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_16_16, ((MR_Box) (parse_tree__read_modules__V_4_4)), ((MR_Box) (parse_tree__read_modules__V_9_9)));
            }
#line 40 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 40 "read_modules.m"
              {
#line 1123 "parse_tree.read_modules.c"
                parse_tree__read_modules__TypeInfo_17_17 = (MR_Word) &parse_tree__read_modules_scalar_common_2[1];
#line 1125 "parse_tree.read_modules.c"
                {
#line 1127 "parse_tree.read_modules.c"
                  parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_17_17, ((MR_Box) (parse_tree__read_modules__V_5_5)), ((MR_Box) (parse_tree__read_modules__V_10_10)));
                }
#line 40 "read_modules.m"
                if (parse_tree__read_modules__succeeded)
#line 40 "read_modules.m"
                  {
#line 1134 "parse_tree.read_modules.c"
                    parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_6_6 == parse_tree__read_modules__V_11_11);
#line 40 "read_modules.m"
                    if (parse_tree__read_modules__succeeded)
#line 1138 "parse_tree.read_modules.c"
                      parse_tree__read_modules__succeeded = (strcmp(parse_tree__read_modules__V_7_7, parse_tree__read_modules__V_12_12) == 0);
#line 40 "read_modules.m"
                  }
#line 40 "read_modules.m"
              }
#line 40 "read_modules.m"
          }
#line 40 "read_modules.m"
      }
#line 40 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 40 "read_modules.m"
  }
#line 40 "read_modules.m"
}

#line 357 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__check_timestamp_6_p_0(
#line 357 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_7,
#line 357 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_8,
#line 357 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestamp0_9,
#line 357 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_10)
#line 357 "read_modules.m"
{
#line 363 "read_modules.m"
  {
#line 363 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;

#line 363 "read_modules.m"
    if ((parse_tree__read_modules__MaybeTimestamp0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "read_modules.m"
      *parse_tree__read_modules__MaybeTimestamp_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 363 "read_modules.m"
    else
#line 363 "read_modules.m"
      {
#line 363 "read_modules.m"
        MR_Word parse_tree__read_modules__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeTimestamp0_9, (MR_Integer) 0)));

#line 363 "read_modules.m"
        if (((MR_tag((MR_Word) parse_tree__read_modules__V_21_21)) == (MR_mktag((MR_Integer) 1))))
#line 366 "read_modules.m"
          {
#line 366 "read_modules.m"
            MR_Word parse_tree__read_modules__IOError_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_21_21, (MR_Integer) 0)));
#line 366 "read_modules.m"
            MR_Word parse_tree__read_modules__SmartRecompilation_14;

#line 367 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 368 "read_modules.m"
            {
#line 368 "read_modules.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 111, &parse_tree__read_modules__SmartRecompilation_14);
            }
#line 375 "read_modules.m"
            if ((parse_tree__read_modules__SmartRecompilation_14 == (MR_Integer) 0))
#line 376 "read_modules.m"
              {
#line 376 "read_modules.m"
              }
#line 375 "read_modules.m"
            else
#line 386 "read_modules.m"
              {
#line 386 "read_modules.m"
                MR_Word parse_tree__read_modules__Warn_28;

#line 387 "read_modules.m"
                {
#line 387 "read_modules.m"
                  libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                }
#line 388 "read_modules.m"
                {
#line 388 "read_modules.m"
                  libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
                }
#line 389 "read_modules.m"
                {
#line 389 "read_modules.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 23, &parse_tree__read_modules__Warn_28);
                }
#line 407 "read_modules.m"
                if ((parse_tree__read_modules__Warn_28 == (MR_Integer) 0))
#line 408 "read_modules.m"
                  {
#line 408 "read_modules.m"
                  }
#line 407 "read_modules.m"
                else
#line 391 "read_modules.m"
                  {
#line 391 "read_modules.m"
                    MR_String parse_tree__read_modules__Msg_29;
#line 391 "read_modules.m"
                    MR_Word parse_tree__read_modules__HaltAtWarn_30;

#line 392 "read_modules.m"
                    {
#line 392 "read_modules.m"
                      mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                    }
#line 393 "read_modules.m"
                    {
#line 393 "read_modules.m"
                      mercury__io__write_string_3_p_0(parse_tree__read_modules__FileName_8);
                    }
#line 394 "read_modules.m"
                    {
#line 394 "read_modules.m"
                      mercury__io__write_string_3_p_0((MR_String) ":\n");
                    }
#line 395 "read_modules.m"
                    {
#line 395 "read_modules.m"
                      mercury__io__error_message_2_p_0(parse_tree__read_modules__IOError_13, &parse_tree__read_modules__Msg_29);
                    }
#line 396 "read_modules.m"
                    {
#line 396 "read_modules.m"
                      mercury__io__write_string_3_p_0((MR_String) "  ");
                    }
#line 397 "read_modules.m"
                    {
#line 397 "read_modules.m"
                      mercury__io__write_string_3_p_0(parse_tree__read_modules__Msg_29);
                    }
#line 398 "read_modules.m"
                    {
#line 398 "read_modules.m"
                      mercury__io__write_string_3_p_0((MR_String) ".\n");
                    }
#line 399 "read_modules.m"
                    {
#line 399 "read_modules.m"
                      mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                    }
#line 400 "read_modules.m"
                    {
#line 400 "read_modules.m"
                      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 2, &parse_tree__read_modules__HaltAtWarn_30);
                    }
#line 404 "read_modules.m"
                    if ((parse_tree__read_modules__HaltAtWarn_30 == (MR_Integer) 0))
#line 405 "read_modules.m"
                      {
#line 405 "read_modules.m"
                      }
#line 404 "read_modules.m"
                    else
#line 402 "read_modules.m"
                      {
#line 403 "read_modules.m"
                        {
#line 403 "read_modules.m"
                          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 403 "read_modules.m"
                          return;
                        }
#line 402 "read_modules.m"
                      }
#line 391 "read_modules.m"
                  }
#line 386 "read_modules.m"
              }
#line 366 "read_modules.m"
          }
#line 363 "read_modules.m"
        else
#line 363 "read_modules.m"
          {
#line 363 "read_modules.m"
            MR_Word parse_tree__read_modules__Timestamp_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_21_21, (MR_Integer) 0)));

#line 364 "read_modules.m"
            {
#line 364 "read_modules.m"
              MR_Word base;
#line 364 "read_modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 364 "read_modules.m"
              *parse_tree__read_modules__MaybeTimestamp_10 = base;
#line 364 "read_modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_12));
#line 364 "read_modules.m"
            }
#line 363 "read_modules.m"
          }
#line 363 "read_modules.m"
      }
#line 363 "read_modules.m"
  }
#line 357 "read_modules.m"
}

#line 215 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__do_read_module_15_p_0_2(
#line 215 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 215 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 215 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 215 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3)
#line 215 "read_modules.m"
{
#line 215 "read_modules.m"
  {
#line 215 "read_modules.m"
    MR_Box parse_tree__read_modules__closure = parse_tree__read_modules__closure_arg;
#line 215 "read_modules.m"
    MR_Word parse_tree__read_modules__conv1_HeadVar__4_4;

#line 215 "read_modules.m"
    {
#line 215 "read_modules.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 5))), &parse_tree__read_modules__conv1_HeadVar__4_4);
    }
#line 215 "read_modules.m"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv1_HeadVar__4_4));
#line 215 "read_modules.m"
  }
#line 215 "read_modules.m"
}

#line 212 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__do_read_module_15_p_0_1(
#line 212 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 212 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 212 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 212 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3)
#line 212 "read_modules.m"
{
#line 212 "read_modules.m"
  {
#line 212 "read_modules.m"
    MR_Box parse_tree__read_modules__closure = parse_tree__read_modules__closure_arg;
#line 212 "read_modules.m"
    MR_Word parse_tree__read_modules__conv0_HeadVar__5_5;

#line 212 "read_modules.m"
    {
#line 212 "read_modules.m"
      parse_tree__prog_io_find__search_for_module_source_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 6))), &parse_tree__read_modules__conv0_HeadVar__5_5);
    }
#line 212 "read_modules.m"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__5_5));
#line 212 "read_modules.m"
  }
#line 212 "read_modules.m"
}

#line 174 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__do_read_module_15_p_0(
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_16,
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_17,
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_18,
#line 174 "read_modules.m"
  MR_String parse_tree__read_modules__Extension_19,
#line 174 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_20,
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_21,
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeOldTimestamp_22,
#line 174 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_23,
#line 174 "read_modules.m"
  MR_Word * parse_tree__read_modules__Items_24,
#line 174 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_25,
#line 174 "read_modules.m"
  MR_Word * parse_tree__read_modules__Error_26,
#line 174 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_27,
#line 174 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_28)
#line 174 "read_modules.m"
{
#line 182 "read_modules.m"
  {
#line 182 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 182 "read_modules.m"
    MR_String parse_tree__read_modules__FileName0_30;
#line 182 "read_modules.m"
    MR_Word parse_tree__read_modules__VeryVerbose_31;
#line 182 "read_modules.m"
    MR_String parse_tree__read_modules__Msg_32;
#line 182 "read_modules.m"
    MR_Word parse_tree__read_modules__InterfaceSearchDirs_33;
#line 182 "read_modules.m"
    MR_Word parse_tree__read_modules__SearchDirs_34;
#line 182 "read_modules.m"
    MR_Word parse_tree__read_modules__OpenFile_35;
#line 182 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeFileName_37;
#line 182 "read_modules.m"
    MR_Word parse_tree__read_modules__ActualModuleName_38;
#line 182 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleSpecs_39;
#line 182 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestamp0_40;
#line 182 "read_modules.m"
    MR_Word parse_tree__read_modules__NameSpecs_41;
#line 182 "read_modules.m"
    MR_String parse_tree__read_modules__V_50_50;
#line 182 "read_modules.m"
    MR_String parse_tree__read_modules__V_51_51;
#line 182 "read_modules.m"
    MR_String parse_tree__read_modules__V_53_53;

#line 192 "read_modules.m"
    {
#line 192 "read_modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_16, (MR_Integer) 45, &parse_tree__read_modules__VeryVerbose_31);
    }
#line 197 "read_modules.m"
    {
#line 197 "read_modules.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_16, (MR_Integer) 642, &parse_tree__read_modules__InterfaceSearchDirs_33);
    }
#line 1479 "parse_tree.read_modules.c"
    if ((parse_tree__read_modules__Search_21 == (MR_Integer) 1))
#line 1481 "parse_tree.read_modules.c"
      {
#line 1483 "parse_tree.read_modules.c"
        MR_String parse_tree__read_modules__V_58_58;

#line 189 "read_modules.m"
        {
#line 189 "read_modules.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__read_modules__Globals_16, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__Extension_19, (MR_Integer) 1, &parse_tree__read_modules__FileName0_30);
        }
#line 204 "read_modules.m"
        {
#line 204 "read_modules.m"
          parse_tree__read_modules__V_58_58 = mercury__dir__this_directory_0_f_0();
        }
#line 204 "read_modules.m"
        {
#line 204 "read_modules.m"
          parse_tree__read_modules__SearchDirs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "read_modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_34, 0) = ((MR_Box) (parse_tree__read_modules__V_58_58));
#line 204 "read_modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "read_modules.m"
        }
#line 1506 "parse_tree.read_modules.c"
      }
#line 1508 "parse_tree.read_modules.c"
    else
#line 1510 "parse_tree.read_modules.c"
      {
#line 185 "read_modules.m"
        {
#line 185 "read_modules.m"
          parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__read_modules__Globals_16, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__Extension_19, &parse_tree__read_modules__FileName0_30);
        }
#line 201 "read_modules.m"
        parse_tree__read_modules__SearchDirs_34 = parse_tree__read_modules__InterfaceSearchDirs_33;
#line 1519 "parse_tree.read_modules.c"
      }
#line 193 "read_modules.m"
    {
#line 193 "read_modules.m"
      parse_tree__read_modules__V_53_53 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName0_30, (MR_String) "\'... ");
    }
#line 193 "read_modules.m"
    {
#line 193 "read_modules.m"
      parse_tree__read_modules__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) " \140", parse_tree__read_modules__V_53_53);
    }
#line 193 "read_modules.m"
    {
#line 193 "read_modules.m"
      parse_tree__read_modules__V_50_50 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__Descr_20, parse_tree__read_modules__V_51_51);
    }
#line 193 "read_modules.m"
    {
#line 193 "read_modules.m"
      parse_tree__read_modules__Msg_32 = mercury__string__f_43_43_2_f_0((MR_String) "% ", parse_tree__read_modules__V_50_50);
    }
#line 194 "read_modules.m"
    {
#line 194 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_31, parse_tree__read_modules__Msg_32);
    }
#line 195 "read_modules.m"
    {
#line 195 "read_modules.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_31);
    }
#line 206 "read_modules.m"
    parse_tree__read_modules__succeeded = (strcmp(parse_tree__read_modules__Extension_19, (MR_String) ".m") == 0);
#line 214 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 212 "read_modules.m"
      {
#line 212 "read_modules.m"
        parse_tree__read_modules__OpenFile_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 212 "read_modules.m"
        MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
#line 212 "read_modules.m"
        MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 1) = ((MR_Box) (parse_tree__read_modules__do_read_module_15_p_0_1));
#line 212 "read_modules.m"
        MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 212 "read_modules.m"
        MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 3) = ((MR_Box) (parse_tree__read_modules__Globals_16));
#line 212 "read_modules.m"
        MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 4) = ((MR_Box) (parse_tree__read_modules__SearchDirs_34));
#line 212 "read_modules.m"
        MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 5) = ((MR_Box) (parse_tree__read_modules__InterfaceSearchDirs_33));
#line 212 "read_modules.m"
        MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 6) = ((MR_Box) (parse_tree__read_modules__ModuleName_18));
#line 212 "read_modules.m"
      }
#line 214 "read_modules.m"
    else
#line 215 "read_modules.m"
      {
#line 215 "read_modules.m"
        {
#line 215 "read_modules.m"
          parse_tree__read_modules__OpenFile_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 215 "read_modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_3[0]));
#line 215 "read_modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 1) = ((MR_Box) (parse_tree__read_modules__do_read_module_15_p_0_2));
#line 215 "read_modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 215 "read_modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 3) = ((MR_Box) ((MR_Integer) 0));
#line 215 "read_modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 4) = ((MR_Box) (parse_tree__read_modules__SearchDirs_34));
#line 215 "read_modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_35, 5) = ((MR_Box) (parse_tree__read_modules__FileName0_30));
#line 215 "read_modules.m"
        }
#line 215 "read_modules.m"
      }
#line 222 "read_modules.m"
    if ((parse_tree__read_modules__MaybeOldTimestamp_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "read_modules.m"
      {
#line 224 "read_modules.m"
        {
#line 224 "read_modules.m"
          parse_tree__prog_io__actually_read_module_12_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__read_modules__Globals_16, parse_tree__read_modules__OpenFile_35, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__ReturnTimestamp_23, &parse_tree__read_modules__MaybeFileName_37, &parse_tree__read_modules__ActualModuleName_38, parse_tree__read_modules__Items_24, &parse_tree__read_modules__ModuleSpecs_39, parse_tree__read_modules__Error_26, &parse_tree__read_modules__MaybeTimestamp0_40);
        }
#line 223 "read_modules.m"
      }
#line 222 "read_modules.m"
    else
#line 218 "read_modules.m"
      {
#line 218 "read_modules.m"
        MR_Word parse_tree__read_modules__OldTimestamp_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeOldTimestamp_22, (MR_Integer) 0)));

#line 219 "read_modules.m"
        {
#line 219 "read_modules.m"
          parse_tree__prog_io__actually_read_module_if_changed_12_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__read_modules__Globals_16, parse_tree__read_modules__OpenFile_35, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__OldTimestamp_36, &parse_tree__read_modules__MaybeFileName_37, &parse_tree__read_modules__ActualModuleName_38, parse_tree__read_modules__Items_24, &parse_tree__read_modules__ModuleSpecs_39, parse_tree__read_modules__Error_26, &parse_tree__read_modules__MaybeTimestamp0_40);
        }
#line 218 "read_modules.m"
      }
#line 231 "read_modules.m"
    if ((parse_tree__read_modules__MaybeFileName_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 233 "read_modules.m"
      *parse_tree__read_modules__FileName_27 = parse_tree__read_modules__FileName0_30;
#line 231 "read_modules.m"
    else
#line 230 "read_modules.m"
      *parse_tree__read_modules__FileName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeFileName_37, (MR_Integer) 0)));
#line 235 "read_modules.m"
    {
#line 235 "read_modules.m"
      parse_tree__prog_io__check_module_has_expected_name_4_p_0(*parse_tree__read_modules__FileName_27, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__ActualModuleName_38, &parse_tree__read_modules__NameSpecs_41);
    }
#line 238 "read_modules.m"
    {
#line 238 "read_modules.m"
      parse_tree__read_modules__check_timestamp_6_p_0(parse_tree__read_modules__Globals_16, parse_tree__read_modules__FileName0_30, parse_tree__read_modules__MaybeTimestamp0_40, parse_tree__read_modules__MaybeTimestamp_28);
    }
#line 250 "read_modules.m"
    if ((parse_tree__read_modules__IgnoreErrors_17 == (MR_Integer) 1))
#line 251 "read_modules.m"
      {
#line 251 "read_modules.m"
        MR_Word parse_tree__read_modules__ModuleNameSpecs_42;

#line 252 "read_modules.m"
        {
#line 252 "read_modules.m"
          parse_tree__read_modules__ModuleNameSpecs_42 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__read_modules__NameSpecs_41, parse_tree__read_modules__ModuleSpecs_39);
        }
#line 259 "read_modules.m"
        if ((*parse_tree__read_modules__Error_26 == (MR_Integer) 2))
#line 254 "read_modules.m"
          {
#line 255 "read_modules.m"
            {
#line 255 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_31, (MR_String) "fatal error(s).\n");
            }
#line 256 "read_modules.m"
            {
#line 256 "read_modules.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_31, parse_tree__read_modules__Globals_16, parse_tree__read_modules__ModuleNameSpecs_42, parse_tree__read_modules__Specs_25);
            }
#line 258 "read_modules.m"
            {
#line 258 "read_modules.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 258 "read_modules.m"
              return;
            }
#line 254 "read_modules.m"
          }
#line 259 "read_modules.m"
        else
#line 259 "read_modules.m"
          if ((*parse_tree__read_modules__Error_26 == (MR_Integer) 0))
#line 266 "read_modules.m"
            {
#line 267 "read_modules.m"
              {
#line 267 "read_modules.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_31, (MR_String) "successful parse.\n");
              }
#line 268 "read_modules.m"
              *parse_tree__read_modules__Specs_25 = parse_tree__read_modules__ModuleNameSpecs_42;
#line 266 "read_modules.m"
            }
#line 259 "read_modules.m"
          else
#line 260 "read_modules.m"
            {
#line 261 "read_modules.m"
              {
#line 261 "read_modules.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_31, (MR_String) "parse error(s).\n");
              }
#line 262 "read_modules.m"
              {
#line 262 "read_modules.m"
                parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_31, parse_tree__read_modules__Globals_16, parse_tree__read_modules__ModuleNameSpecs_42, parse_tree__read_modules__Specs_25);
              }
#line 264 "read_modules.m"
              {
#line 264 "read_modules.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 264 "read_modules.m"
                return;
              }
#line 260 "read_modules.m"
            }
#line 251 "read_modules.m"
      }
#line 250 "read_modules.m"
    else
#line 240 "read_modules.m"
      {
#line 241 "read_modules.m"
        *parse_tree__read_modules__Specs_25 = parse_tree__read_modules__NameSpecs_41;
#line 243 "read_modules.m"
        parse_tree__read_modules__succeeded = (*parse_tree__read_modules__Error_26 == (MR_Integer) 2);
#line 243 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 244 "read_modules.m"
          parse_tree__read_modules__succeeded = (*parse_tree__read_modules__Items_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 246 "read_modules.m"
          {
#line 246 "read_modules.m"
            {
#line 246 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_31, (MR_String) "not found.\n");
#line 246 "read_modules.m"
              return;
            }
#line 246 "read_modules.m"
          }
#line 247 "read_modules.m"
        else
#line 248 "read_modules.m"
          {
#line 248 "read_modules.m"
            {
#line 248 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_31, (MR_String) "done.\n");
#line 248 "read_modules.m"
              return;
            }
#line 248 "read_modules.m"
          }
#line 240 "read_modules.m"
      }
#line 182 "read_modules.m"
  }
#line 174 "read_modules.m"
}

#line 130 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_9_p_0(
#line 130 "read_modules.m"
  MR_Word parse_tree__read_modules__HaveReadModuleMap_10,
#line 130 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_11,
#line 130 "read_modules.m"
  MR_String parse_tree__read_modules__Suffix_12,
#line 130 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_13,
#line 130 "read_modules.m"
  MR_Word * parse_tree__read_modules__Items_14,
#line 130 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_15,
#line 130 "read_modules.m"
  MR_Word * parse_tree__read_modules__Error_16,
#line 130 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_17,
#line 130 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_18)
#line 130 "read_modules.m"
{
#line 342 "read_modules.m"
  {
#line 342 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 342 "read_modules.m"
    MR_Word parse_tree__read_modules__HaveReadModule_19;
#line 342 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleTimestamp_20;
#line 342 "read_modules.m"
    MR_Word parse_tree__read_modules__V_24_24;
#line 343 "read_modules.m"
    MR_Box parse_tree__read_modules__conv0_HaveReadModule_19;

#line 343 "read_modules.m"
    {
#line 343 "read_modules.m"
      parse_tree__read_modules__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 343 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_24_24, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_11));
#line 343 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_24_24, 1) = ((MR_Box) (parse_tree__read_modules__Suffix_12));
#line 343 "read_modules.m"
    }
#line 343 "read_modules.m"
    {
#line 343 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, parse_tree__read_modules__HaveReadModuleMap_10, ((MR_Box) (parse_tree__read_modules__V_24_24)), &parse_tree__read_modules__conv0_HaveReadModule_19);
    }
#line 343 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 343 "read_modules.m"
      {
#line 343 "read_modules.m"
        parse_tree__read_modules__HaveReadModule_19 = ((MR_Word) parse_tree__read_modules__conv0_HaveReadModule_19);
#line 343 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 343 "read_modules.m"
      }
#line 342 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 342 "read_modules.m"
      {
#line 344 "read_modules.m"
        parse_tree__read_modules__ModuleTimestamp_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_19, (MR_Integer) 0)));
#line 344 "read_modules.m"
        *parse_tree__read_modules__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_19, (MR_Integer) 1)));
#line 344 "read_modules.m"
        *parse_tree__read_modules__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_19, (MR_Integer) 2)));
#line 344 "read_modules.m"
        *parse_tree__read_modules__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_19, (MR_Integer) 3)));
#line 344 "read_modules.m"
        *parse_tree__read_modules__FileName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_19, (MR_Integer) 4)));
#line 350 "read_modules.m"
        if ((parse_tree__read_modules__ReturnTimestamp_13 == (MR_Integer) 1))
#line 352 "read_modules.m"
          *parse_tree__read_modules__MaybeTimestamp_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "read_modules.m"
        else
#line 347 "read_modules.m"
          {
#line 347 "read_modules.m"
            MR_Word parse_tree__read_modules__Timestamp_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_20, (MR_Integer) 1)));
#line 348 "read_modules.m"
            MR_String parse_tree__read_modules__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_20, (MR_Integer) 0)));
#line 348 "read_modules.m"
            MR_Word parse_tree__read_modules__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_20, (MR_Integer) 2)));

#line 349 "read_modules.m"
            {
#line 349 "read_modules.m"
              MR_Word base;
#line 349 "read_modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 349 "read_modules.m"
              *parse_tree__read_modules__MaybeTimestamp_18 = base;
#line 349 "read_modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_22));
#line 349 "read_modules.m"
            }
#line 347 "read_modules.m"
          }
#line 350 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 342 "read_modules.m"
      }
#line 342 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 342 "read_modules.m"
  }
#line 130 "read_modules.m"
}

#line 119 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__maybe_read_module_14_p_0(
#line 119 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_15,
#line 119 "read_modules.m"
  MR_Word parse_tree__read_modules__HaveReadModuleMap_16,
#line 119 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_17,
#line 119 "read_modules.m"
  MR_String parse_tree__read_modules__Extension_18,
#line 119 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_19,
#line 119 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_20,
#line 119 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_21,
#line 119 "read_modules.m"
  MR_Word * parse_tree__read_modules__Items_22,
#line 119 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_23,
#line 119 "read_modules.m"
  MR_Word * parse_tree__read_modules__Error_24,
#line 119 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_25,
#line 119 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_26)
#line 119 "read_modules.m"
{
#line 335 "read_modules.m"
  {
#line 335 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 335 "read_modules.m"
    MR_Word parse_tree__read_modules__ItemsPrime_28;
#line 335 "read_modules.m"
    MR_Word parse_tree__read_modules__SpecsPrime_29;
#line 335 "read_modules.m"
    MR_Word parse_tree__read_modules__ErrorPrime_30;
#line 335 "read_modules.m"
    MR_String parse_tree__read_modules__FileNamePrime_31;
#line 335 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampPrime_32;

#line 326 "read_modules.m"
    {
#line 326 "read_modules.m"
      parse_tree__read_modules__succeeded = parse_tree__read_modules__find_read_module_9_p_0(parse_tree__read_modules__HaveReadModuleMap_16, parse_tree__read_modules__ModuleName_17, parse_tree__read_modules__Extension_18, parse_tree__read_modules__ReturnTimestamp_21, &parse_tree__read_modules__ItemsPrime_28, &parse_tree__read_modules__SpecsPrime_29, &parse_tree__read_modules__ErrorPrime_30, &parse_tree__read_modules__FileNamePrime_31, &parse_tree__read_modules__MaybeTimestampPrime_32);
    }
#line 335 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 330 "read_modules.m"
      {
#line 330 "read_modules.m"
        *parse_tree__read_modules__Error_24 = parse_tree__read_modules__ErrorPrime_30;
#line 331 "read_modules.m"
        *parse_tree__read_modules__Items_22 = parse_tree__read_modules__ItemsPrime_28;
#line 332 "read_modules.m"
        *parse_tree__read_modules__Specs_23 = parse_tree__read_modules__SpecsPrime_29;
#line 333 "read_modules.m"
        *parse_tree__read_modules__MaybeTimestamp_26 = parse_tree__read_modules__MaybeTimestampPrime_32;
#line 334 "read_modules.m"
        *parse_tree__read_modules__FileName_25 = parse_tree__read_modules__FileNamePrime_31;
#line 330 "read_modules.m"
      }
#line 335 "read_modules.m"
    else
#line 157 "read_modules.m"
      {
#line 158 "read_modules.m"
        {
#line 158 "read_modules.m"
          parse_tree__read_modules__do_read_module_15_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 1, parse_tree__read_modules__ModuleName_17, parse_tree__read_modules__Extension_18, parse_tree__read_modules__Descr_19, parse_tree__read_modules__Search_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__read_modules__ReturnTimestamp_21, parse_tree__read_modules__Items_22, parse_tree__read_modules__Specs_23, parse_tree__read_modules__Error_24, parse_tree__read_modules__FileName_25, parse_tree__read_modules__MaybeTimestamp_26);
#line 158 "read_modules.m"
          return;
        }
#line 157 "read_modules.m"
      }
#line 335 "read_modules.m"
  }
#line 119 "read_modules.m"
}

#line 297 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_from_file_13_p_0_1(
#line 297 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 297 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 297 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 297 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3)
#line 297 "read_modules.m"
{
#line 297 "read_modules.m"
  {
#line 297 "read_modules.m"
    MR_Box parse_tree__read_modules__closure = parse_tree__read_modules__closure_arg;
#line 297 "read_modules.m"
    MR_Word parse_tree__read_modules__conv0_HeadVar__4_4;

#line 297 "read_modules.m"
    {
#line 297 "read_modules.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 5))), &parse_tree__read_modules__conv0_HeadVar__4_4);
    }
#line 297 "read_modules.m"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__4_4));
#line 297 "read_modules.m"
  }
#line 297 "read_modules.m"
}

#line 112 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__read_module_from_file_13_p_0(
#line 112 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_14,
#line 112 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_15,
#line 112 "read_modules.m"
  MR_String parse_tree__read_modules__Extension_16,
#line 112 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_17,
#line 112 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_18,
#line 112 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_19,
#line 112 "read_modules.m"
  MR_Word * parse_tree__read_modules__Items_20,
#line 112 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_21,
#line 112 "read_modules.m"
  MR_Word * parse_tree__read_modules__Error_22,
#line 112 "read_modules.m"
  MR_Word * parse_tree__read_modules__ModuleName_23,
#line 112 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_24)
#line 112 "read_modules.m"
{
#line 274 "read_modules.m"
  {
#line 274 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 274 "read_modules.m"
    MR_Word parse_tree__read_modules__VeryVerbose_26;
#line 274 "read_modules.m"
    MR_String parse_tree__read_modules__FullFileName_27;
#line 274 "read_modules.m"
    MR_String parse_tree__read_modules__BaseFileName_29;
#line 274 "read_modules.m"
    MR_Word parse_tree__read_modules__DefaultModuleName_30;
#line 274 "read_modules.m"
    MR_Word parse_tree__read_modules__SearchDirs_31;
#line 274 "read_modules.m"
    MR_Word parse_tree__read_modules__OpenFile_32;
#line 274 "read_modules.m"
    MR_Word parse_tree__read_modules__Specs0_34;
#line 274 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestamp0_35;
#line 285 "read_modules.m"
    MR_String parse_tree__read_modules__BaseFileNamePrime_28;
#line 298 "read_modules.m"
    MR_Word parse_tree__read_modules__V_33_33;

#line 275 "read_modules.m"
    {
#line 275 "read_modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 45, &parse_tree__read_modules__VeryVerbose_26);
    }
#line 276 "read_modules.m"
    {
#line 276 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_26, (MR_String) "% ");
    }
#line 277 "read_modules.m"
    {
#line 277 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_26, parse_tree__read_modules__Descr_17);
    }
#line 278 "read_modules.m"
    {
#line 278 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_26, (MR_String) " \140");
    }
#line 279 "read_modules.m"
    {
#line 279 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_26, parse_tree__read_modules__FileName_15);
    }
#line 280 "read_modules.m"
    {
#line 280 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_26, (MR_String) "\'... ");
    }
#line 281 "read_modules.m"
    {
#line 281 "read_modules.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_26);
    }
#line 282 "read_modules.m"
    {
#line 282 "read_modules.m"
      mercury__string__append_3_p_2(parse_tree__read_modules__FileName_15, parse_tree__read_modules__Extension_16, &parse_tree__read_modules__FullFileName_27);
    }
#line 283 "read_modules.m"
    {
#line 283 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__dir__basename_2_p_0(parse_tree__read_modules__FileName_15, &parse_tree__read_modules__BaseFileNamePrime_28);
    }
#line 285 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 284 "read_modules.m"
      parse_tree__read_modules__BaseFileName_29 = parse_tree__read_modules__BaseFileNamePrime_28;
#line 285 "read_modules.m"
    else
#line 286 "read_modules.m"
      parse_tree__read_modules__BaseFileName_29 = (MR_String) "";
#line 288 "read_modules.m"
    {
#line 288 "read_modules.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__read_modules__BaseFileName_29, &parse_tree__read_modules__DefaultModuleName_30);
    }
#line 293 "read_modules.m"
    if ((parse_tree__read_modules__Search_18 == (MR_Integer) 1))
#line 294 "read_modules.m"
      {
#line 294 "read_modules.m"
        MR_String parse_tree__read_modules__V_48_48;

#line 295 "read_modules.m"
        {
#line 295 "read_modules.m"
          parse_tree__read_modules__V_48_48 = mercury__dir__this_directory_0_f_0();
        }
#line 295 "read_modules.m"
        {
#line 295 "read_modules.m"
          parse_tree__read_modules__SearchDirs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "read_modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_31, 0) = ((MR_Box) (parse_tree__read_modules__V_48_48));
#line 295 "read_modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "read_modules.m"
        }
#line 294 "read_modules.m"
      }
#line 293 "read_modules.m"
    else
#line 290 "read_modules.m"
      {
#line 291 "read_modules.m"
        {
#line 291 "read_modules.m"
          libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 642, &parse_tree__read_modules__SearchDirs_31);
        }
#line 290 "read_modules.m"
      }
#line 297 "read_modules.m"
    {
#line 297 "read_modules.m"
      parse_tree__read_modules__OpenFile_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 297 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_3[0]));
#line 297 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 1) = ((MR_Box) (parse_tree__read_modules__read_module_from_file_13_p_0_1));
#line 297 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 297 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 3) = ((MR_Box) ((MR_Integer) 0));
#line 297 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 4) = ((MR_Box) (parse_tree__read_modules__SearchDirs_31));
#line 297 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 5) = ((MR_Box) (parse_tree__read_modules__FullFileName_27));
#line 297 "read_modules.m"
    }
#line 298 "read_modules.m"
    {
#line 298 "read_modules.m"
      parse_tree__prog_io__actually_read_module_12_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__read_modules__Globals_14, parse_tree__read_modules__OpenFile_32, parse_tree__read_modules__DefaultModuleName_30, parse_tree__read_modules__ReturnTimestamp_19, &parse_tree__read_modules__V_33_33, parse_tree__read_modules__ModuleName_23, parse_tree__read_modules__Items_20, &parse_tree__read_modules__Specs0_34, parse_tree__read_modules__Error_22, &parse_tree__read_modules__MaybeTimestamp0_35);
    }
#line 300 "read_modules.m"
    {
#line 300 "read_modules.m"
      parse_tree__read_modules__check_timestamp_6_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__FullFileName_27, parse_tree__read_modules__MaybeTimestamp0_35, parse_tree__read_modules__MaybeTimestamp_24);
    }
#line 308 "read_modules.m"
    if ((*parse_tree__read_modules__Error_22 == (MR_Integer) 2))
#line 303 "read_modules.m"
      {
#line 304 "read_modules.m"
        {
#line 304 "read_modules.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_26, (MR_String) "fatal error(s).\n");
        }
#line 305 "read_modules.m"
        {
#line 305 "read_modules.m"
          parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_26, parse_tree__read_modules__Globals_14, parse_tree__read_modules__Specs0_34, parse_tree__read_modules__Specs_21);
        }
#line 307 "read_modules.m"
        {
#line 307 "read_modules.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 307 "read_modules.m"
          return;
        }
#line 303 "read_modules.m"
      }
#line 308 "read_modules.m"
    else
#line 308 "read_modules.m"
      if ((*parse_tree__read_modules__Error_22 == (MR_Integer) 0))
#line 315 "read_modules.m"
        {
#line 316 "read_modules.m"
          {
#line 316 "read_modules.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_26, (MR_String) "successful parse.\n");
          }
#line 317 "read_modules.m"
          *parse_tree__read_modules__Specs_21 = parse_tree__read_modules__Specs0_34;
#line 315 "read_modules.m"
        }
#line 308 "read_modules.m"
      else
#line 309 "read_modules.m"
        {
#line 310 "read_modules.m"
          {
#line 310 "read_modules.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_26, (MR_String) "parse error(s).\n");
          }
#line 311 "read_modules.m"
          {
#line 311 "read_modules.m"
            parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_26, parse_tree__read_modules__Globals_14, parse_tree__read_modules__Specs0_34, parse_tree__read_modules__Specs_21);
          }
#line 313 "read_modules.m"
          {
#line 313 "read_modules.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 313 "read_modules.m"
            return;
          }
#line 309 "read_modules.m"
        }
#line 274 "read_modules.m"
  }
#line 112 "read_modules.m"
}

#line 93 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__read_module_ignore_errors_12_p_0(
#line 93 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_13,
#line 93 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_14,
#line 93 "read_modules.m"
  MR_String parse_tree__read_modules__Extension_15,
#line 93 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_16,
#line 93 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_17,
#line 93 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_18,
#line 93 "read_modules.m"
  MR_Word * parse_tree__read_modules__Items_19,
#line 93 "read_modules.m"
  MR_Word * parse_tree__read_modules__Error_20,
#line 93 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_21,
#line 93 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_22)
#line 93 "read_modules.m"
{
#line 169 "read_modules.m"
  {
#line 169 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 170 "read_modules.m"
    MR_Word parse_tree__read_modules___Specs_24;

#line 170 "read_modules.m"
    {
#line 170 "read_modules.m"
      parse_tree__read_modules__do_read_module_15_p_0(parse_tree__read_modules__Globals_13, (MR_Integer) 0, parse_tree__read_modules__ModuleName_14, parse_tree__read_modules__Extension_15, parse_tree__read_modules__Descr_16, parse_tree__read_modules__Search_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__read_modules__ReturnTimestamp_18, parse_tree__read_modules__Items_19, &parse_tree__read_modules___Specs_24, parse_tree__read_modules__Error_20, parse_tree__read_modules__FileName_21, parse_tree__read_modules__MaybeTimestamp_22);
    }
#line 169 "read_modules.m"
  }
#line 93 "read_modules.m"
}

#line 86 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__read_module_if_changed_13_p_0(
#line 86 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_14,
#line 86 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_15,
#line 86 "read_modules.m"
  MR_String parse_tree__read_modules__Extension_16,
#line 86 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_17,
#line 86 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_18,
#line 86 "read_modules.m"
  MR_Word parse_tree__read_modules__OldTimestamp_19,
#line 86 "read_modules.m"
  MR_Word * parse_tree__read_modules__Items_20,
#line 86 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_21,
#line 86 "read_modules.m"
  MR_Word * parse_tree__read_modules__Error_22,
#line 86 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_23,
#line 86 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_24)
#line 86 "read_modules.m"
{
#line 163 "read_modules.m"
  {
#line 163 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 163 "read_modules.m"
    MR_Word parse_tree__read_modules__V_29_29;

#line 165 "read_modules.m"
    {
#line 165 "read_modules.m"
      parse_tree__read_modules__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 165 "read_modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_29_29, 0) = ((MR_Box) (parse_tree__read_modules__OldTimestamp_19));
#line 165 "read_modules.m"
    }
#line 164 "read_modules.m"
    {
#line 164 "read_modules.m"
      parse_tree__read_modules__do_read_module_15_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 1, parse_tree__read_modules__ModuleName_15, parse_tree__read_modules__Extension_16, parse_tree__read_modules__Descr_17, parse_tree__read_modules__Search_18, parse_tree__read_modules__V_29_29, (MR_Integer) 0, parse_tree__read_modules__Items_20, parse_tree__read_modules__Specs_21, parse_tree__read_modules__Error_22, parse_tree__read_modules__FileName_23, parse_tree__read_modules__MaybeTimestamp_24);
#line 164 "read_modules.m"
      return;
    }
#line 163 "read_modules.m"
  }
#line 86 "read_modules.m"
}

#line 69 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__read_module_13_p_0(
#line 69 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_14,
#line 69 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_15,
#line 69 "read_modules.m"
  MR_String parse_tree__read_modules__Extension_16,
#line 69 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_17,
#line 69 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_18,
#line 69 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_19,
#line 69 "read_modules.m"
  MR_Word * parse_tree__read_modules__Items_20,
#line 69 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_21,
#line 69 "read_modules.m"
  MR_Word * parse_tree__read_modules__Error_22,
#line 69 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_23,
#line 69 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_24)
#line 69 "read_modules.m"
{
#line 157 "read_modules.m"
  {
#line 157 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;

#line 158 "read_modules.m"
    {
#line 158 "read_modules.m"
      parse_tree__read_modules__do_read_module_15_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 1, parse_tree__read_modules__ModuleName_15, parse_tree__read_modules__Extension_16, parse_tree__read_modules__Descr_17, parse_tree__read_modules__Search_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__read_modules__ReturnTimestamp_19, parse_tree__read_modules__Items_20, parse_tree__read_modules__Specs_21, parse_tree__read_modules__Error_22, parse_tree__read_modules__FileName_23, parse_tree__read_modules__MaybeTimestamp_24);
#line 158 "read_modules.m"
      return;
    }
#line 157 "read_modules.m"
  }
#line 69 "read_modules.m"
}

void mercury__parse_tree__read_modules__init(void)
{
}

void mercury__parse_tree__read_modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0);
}

void mercury__parse_tree__read_modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.read_modules. */
