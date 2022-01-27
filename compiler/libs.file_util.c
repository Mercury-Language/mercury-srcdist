/*
** Automatically generated from `file_util.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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




#line 130 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0;

#line 133 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1;

#line 136 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0[2];

#line 139 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0[2];

#line 142 "libs.file_util.c"
static const MR_Integer libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0[2];

#line 145 "libs.file_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 148 "libs.file_util.c"
static const MR_VA_PseudoTypeInfo_Struct3 libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 151 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
#line 154 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 156 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2);

#line 159 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
#line 162 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 164 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 166 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 169 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
#line 172 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 174 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2);

#line 177 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
#line 180 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 182 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 184 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 187 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0_10001(
#line 190 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 192 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2);

#line 195 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0_10001(
#line 198 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 200 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 202 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 205 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0_10001(
#line 208 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 210 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 212 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 215 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0_10001(
#line 218 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 220 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_2,
#line 222 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3,
#line 224 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_4);

#line 188 "file_util.m"
static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_p_0(
#line 188 "file_util.m"
  MR_Word libs__file_util__V_26_26,
#line 188 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 188 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 188 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4);

#line 83 "file_util.m"
static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_52_93_95_48_6_p_0(
#line 83 "file_util.m"
  MR_Word libs__file_util__V_49_49,
#line 83 "file_util.m"
  MR_Word libs__file_util__Globals_7,
#line 83 "file_util.m"
  MR_String libs__file_util__FileName_8,
#line 83 "file_util.m"
  MR_Word * libs__file_util__Result_10);

#line 188 "file_util.m"
static void MR_CALL 
libs__file_util__do_search_for_file__ho2_6_p_0(
#line 188 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 188 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 188 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4);

#line 220 "file_util.m"
static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file__220__1_4_p_0(
#line 220 "file_util.m"
  MR_Word libs__file_util__Action_8,
#line 220 "file_util.m"
  MR_Integer * libs__file_util__HeadVar__2_16);

#line 181 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_mod_time_5_p_0(
#line 181 "file_util.m"
  MR_String libs__file_util__Dir_6,
#line 181 "file_util.m"
  MR_String libs__file_util__FileName_7,
#line 181 "file_util.m"
  MR_Word * libs__file_util__Result_8);

#line 148 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_return_dir_6_p_0(
#line 148 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 148 "file_util.m"
  MR_String libs__file_util__Dir_8,
#line 148 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 148 "file_util.m"
  MR_Word * libs__file_util__Result_10);


static /* final */ const MR_Box libs__file_util_scalar_common_1[1][2];




static /* final */ const MR_Box libs__file_util_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\' for output.")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



#line 324 "libs.file_util.c"
const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_dir_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__file_util____Unify____dir_name_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____dir_name_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "dir_name",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 345 "libs.file_util.c"
const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_file_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__file_util____Unify____file_name_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____file_name_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "file_name",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 366 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0 = {
  (MR_String) "open_file",
  (MR_Integer) 0
};

#line 372 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1 = {
  (MR_String) "do_not_open_file",
  (MR_Integer) 1
};

#line 378 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0[2] = {
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0,
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1
};

#line 384 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0[2] = {
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1,
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0
};

#line 390 "libs.file_util.c"
static const MR_Integer libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 396 "libs.file_util.c"
const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_maybe_open_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__file_util____Unify____maybe_open_file_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____maybe_open_file_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "maybe_open_file",
  {
    libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0
  },
  {
    libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0
};

#line 417 "libs.file_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 426 "libs.file_util.c"
static const MR_VA_PseudoTypeInfo_Struct3 libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 437 "libs.file_util.c"
const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_open_file_pred_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__file_util____Unify____open_file_pred_1_0_10001)),
  ((MR_Box) (libs__file_util____Compare____open_file_pred_1_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "open_file_pred",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 458 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
#line 461 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 463 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 465 "libs.file_util.c"
{
#line 467 "libs.file_util.c"
  {
#line 469 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 472 "libs.file_util.c"
    {
#line 474 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____dir_name_0_0(((MR_String) libs__file_util__wrapper_arg_1), ((MR_String) libs__file_util__wrapper_arg_2));
    }
#line 477 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 479 "libs.file_util.c"
  }
#line 481 "libs.file_util.c"
}

#line 484 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
#line 487 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 489 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 491 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 493 "libs.file_util.c"
{
#line 495 "libs.file_util.c"
  {
#line 497 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 500 "libs.file_util.c"
    {
#line 502 "libs.file_util.c"
      libs__file_util____Compare____dir_name_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_String) libs__file_util__wrapper_arg_2), ((MR_String) libs__file_util__wrapper_arg_3));
    }
#line 505 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 507 "libs.file_util.c"
  }
#line 509 "libs.file_util.c"
}

#line 512 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
#line 515 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 517 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 519 "libs.file_util.c"
{
#line 521 "libs.file_util.c"
  {
#line 523 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 526 "libs.file_util.c"
    {
#line 528 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____file_name_0_0(((MR_String) libs__file_util__wrapper_arg_1), ((MR_String) libs__file_util__wrapper_arg_2));
    }
#line 531 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 533 "libs.file_util.c"
  }
#line 535 "libs.file_util.c"
}

#line 538 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
#line 541 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 543 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 545 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 547 "libs.file_util.c"
{
#line 549 "libs.file_util.c"
  {
#line 551 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 554 "libs.file_util.c"
    {
#line 556 "libs.file_util.c"
      libs__file_util____Compare____file_name_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_String) libs__file_util__wrapper_arg_2), ((MR_String) libs__file_util__wrapper_arg_3));
    }
#line 559 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 561 "libs.file_util.c"
  }
#line 563 "libs.file_util.c"
}

#line 566 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0_10001(
#line 569 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 571 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 573 "libs.file_util.c"
{
#line 575 "libs.file_util.c"
  {
#line 577 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 580 "libs.file_util.c"
    {
#line 582 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____maybe_open_file_0_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2));
    }
#line 585 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 587 "libs.file_util.c"
  }
#line 589 "libs.file_util.c"
}

#line 592 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0_10001(
#line 595 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 597 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 599 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 601 "libs.file_util.c"
{
#line 603 "libs.file_util.c"
  {
#line 605 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 608 "libs.file_util.c"
    {
#line 610 "libs.file_util.c"
      libs__file_util____Compare____maybe_open_file_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
#line 613 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 615 "libs.file_util.c"
  }
#line 617 "libs.file_util.c"
}

#line 620 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0_10001(
#line 623 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 625 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 627 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 629 "libs.file_util.c"
{
#line 631 "libs.file_util.c"
  {
#line 633 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 636 "libs.file_util.c"
    {
#line 638 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____open_file_pred_1_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
#line 641 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 643 "libs.file_util.c"
  }
#line 645 "libs.file_util.c"
}

#line 648 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0_10001(
#line 651 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 653 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_2,
#line 655 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3,
#line 657 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_4)
#line 659 "libs.file_util.c"
{
#line 661 "libs.file_util.c"
  {
#line 663 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 666 "libs.file_util.c"
    {
#line 668 "libs.file_util.c"
      libs__file_util____Compare____open_file_pred_1_0(((MR_Word) libs__file_util__wrapper_arg_1), &libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_3), ((MR_Word) libs__file_util__wrapper_arg_4));
    }
#line 671 "libs.file_util.c"
    *libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 673 "libs.file_util.c"
  }
#line 675 "libs.file_util.c"
}

#line 188 "file_util.m"
static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_p_0(
#line 188 "file_util.m"
  MR_Word libs__file_util__V_26_26,
#line 188 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 188 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 188 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4)
#line 188 "file_util.m"
{
#line 193 "file_util.m"
  while (MR_TRUE)
#line 193 "file_util.m"
    {
#line 193 "file_util.m"
      /* tailcall optimized into a loop */
#line 193 "file_util.m"
      {
#line 193 "file_util.m"
        MR_bool libs__file_util__succeeded;

#line 193 "file_util.m"
        if ((libs__file_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "file_util.m"
          *libs__file_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "file_util.m"
        else
#line 194 "file_util.m"
          {
#line 194 "file_util.m"
            MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 194 "file_util.m"
            MR_Word libs__file_util__Dirs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
#line 194 "file_util.m"
            MR_Word libs__file_util__Result0_18;

#line 195 "file_util.m"
            {
#line 195 "file_util.m"
              libs__file_util__check_file_return_dir_6_p_0(libs__file_util__V_26_26, libs__file_util__Dir_13, libs__file_util__HeadVar__3_3, &libs__file_util__Result0_18);
            }
#line 199 "file_util.m"
            if (((MR_tag((MR_Word) libs__file_util__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 201 "file_util.m"
              {
#line 201 "file_util.m"
                /* direct tailcall eliminated */
#line 201 "file_util.m"
                {
#line 201 "file_util.m"
                  MR_Word libs__file_util__HeadVar__2__tmp_copy_2 = libs__file_util__Dirs_14;

#line 201 "file_util.m"
                  libs__file_util__HeadVar__2_2 = libs__file_util__HeadVar__2__tmp_copy_2;
#line 201 "file_util.m"
                }
#line 201 "file_util.m"
                continue;
#line 201 "file_util.m"
              }
#line 199 "file_util.m"
            else
#line 197 "file_util.m"
              {
#line 197 "file_util.m"
                MR_String libs__file_util__TimeT_19 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_18, (MR_Integer) 0)));

#line 198 "file_util.m"
                {
#line 198 "file_util.m"
                  MR_Word base;
#line 198 "file_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 198 "file_util.m"
                  *libs__file_util__HeadVar__4_4 = base;
#line 198 "file_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__TimeT_19));
#line 198 "file_util.m"
                }
#line 197 "file_util.m"
              }
#line 194 "file_util.m"
          }
#line 193 "file_util.m"
      }
#line 193 "file_util.m"
      break;
#line 193 "file_util.m"
    }
#line 188 "file_util.m"
}

#line 83 "file_util.m"
static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_52_93_95_48_6_p_0(
#line 83 "file_util.m"
  MR_Word libs__file_util__V_49_49,
#line 83 "file_util.m"
  MR_Word libs__file_util__Globals_7,
#line 83 "file_util.m"
  MR_String libs__file_util__FileName_8,
#line 83 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 83 "file_util.m"
{
#line 223 "file_util.m"
  {
#line 223 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 223 "file_util.m"
    MR_Word libs__file_util__Verbose_12;
#line 223 "file_util.m"
    MR_Word libs__file_util__Stats_13;
#line 223 "file_util.m"
    MR_Word libs__file_util__Res_14;

#line 224 "file_util.m"
    {
#line 224 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 44, &libs__file_util__Verbose_12);
    }
#line 225 "file_util.m"
    {
#line 225 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 54, &libs__file_util__Stats_13);
    }
#line 807 "libs.file_util.c"
    if ((libs__file_util__Verbose_12 == (MR_Integer) 0))
#line 281 "file_util.m"
      {
#line 281 "file_util.m"
      }
#line 813 "libs.file_util.c"
    else
#line 815 "libs.file_util.c"
      {
#line 276 "file_util.m"
        {
#line 276 "file_util.m"
          mercury__io__write_string_3_p_0((MR_String) "% Writing to file \140");
        }
#line 276 "file_util.m"
        {
#line 276 "file_util.m"
          mercury__io__write_string_3_p_0(libs__file_util__FileName_8);
        }
#line 276 "file_util.m"
        {
#line 276 "file_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\'...\n");
        }
#line 280 "file_util.m"
        {
#line 280 "file_util.m"
          mercury__io__flush_output_2_p_0();
        }
#line 837 "libs.file_util.c"
      }
#line 230 "file_util.m"
    {
#line 230 "file_util.m"
      mercury__io__open_output_4_p_0(libs__file_util__FileName_8, &libs__file_util__Res_14);
    }
#line 240 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__Res_14)) == (MR_mktag((MR_Integer) 1))))
#line 241 "file_util.m"
      {
#line 241 "file_util.m"
        MR_String libs__file_util__ErrorMessage_20;
#line 241 "file_util.m"
        MR_Word libs__file_util__V_34_34;
#line 241 "file_util.m"
        MR_Word libs__file_util__V_36_36;

#line 275 "file_util.m"
        if ((libs__file_util__Verbose_12 == (MR_Integer) 0))
#line 277 "file_util.m"
          {
#line 277 "file_util.m"
          }
#line 275 "file_util.m"
        else
#line 276 "file_util.m"
          {
#line 276 "file_util.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 243 "file_util.m"
        {
#line 243 "file_util.m"
          libs__file_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_36_36, 0) = ((MR_Box) (libs__file_util__FileName_8));
#line 243 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__file_util_scalar_common_1[0])));
#line 243 "file_util.m"
        }
#line 243 "file_util.m"
        {
#line 243 "file_util.m"
          libs__file_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_34_34, 0) = ((MR_Box) ((MR_String) "can\'t open file \140"));
#line 243 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_34_34, 1) = ((MR_Box) (libs__file_util__V_36_36));
#line 243 "file_util.m"
        }
#line 243 "file_util.m"
        {
#line 243 "file_util.m"
          mercury__string__append_list_2_p_0(libs__file_util__V_34_34, &libs__file_util__ErrorMessage_20);
        }
#line 245 "file_util.m"
        {
#line 245 "file_util.m"
          libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_20);
        }
#line 246 "file_util.m"
        *libs__file_util__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 241 "file_util.m"
      }
#line 240 "file_util.m"
    else
#line 232 "file_util.m"
      {
#line 232 "file_util.m"
        MR_Word libs__file_util__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Res_14, (MR_Integer) 0)));
#line 232 "file_util.m"
        MR_Word libs__file_util__OutputStream_16;
#line 232 "file_util.m"
        MR_Integer libs__file_util__ActionResult_17;
#line 235 "file_util.m"
        MR_Word libs__file_util__V_18_18;

#line 233 "file_util.m"
        {
#line 233 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__FileStream_15, &libs__file_util__OutputStream_16);
        }
#line 234 "file_util.m"
        {
#line 234 "file_util.m"
          libs__file_util__IntroducedFrom__pred__output_to_file__220__1_4_p_0(libs__file_util__V_49_49, &libs__file_util__ActionResult_17);
        }
#line 235 "file_util.m"
        {
#line 235 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__OutputStream_16, &libs__file_util__V_18_18);
        }
#line 236 "file_util.m"
        {
#line 236 "file_util.m"
          mercury__io__close_output_3_p_0(libs__file_util__FileStream_15);
        }
#line 237 "file_util.m"
        {
#line 237 "file_util.m"
          libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "% done.\n");
        }
#line 238 "file_util.m"
        {
#line 238 "file_util.m"
          libs__file_util__maybe_report_stats_3_p_0(libs__file_util__Stats_13);
        }
#line 239 "file_util.m"
        {
#line 239 "file_util.m"
          MR_Word base;
#line 239 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 239 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 239 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__ActionResult_17));
#line 239 "file_util.m"
        }
#line 232 "file_util.m"
      }
#line 223 "file_util.m"
  }
#line 83 "file_util.m"
}

#line 188 "file_util.m"
static void MR_CALL 
libs__file_util__do_search_for_file__ho2_6_p_0(
#line 188 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 188 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 188 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4)
#line 188 "file_util.m"
{
#line 193 "file_util.m"
  while (MR_TRUE)
#line 193 "file_util.m"
    {
#line 193 "file_util.m"
      /* tailcall optimized into a loop */
#line 193 "file_util.m"
      {
#line 193 "file_util.m"
        MR_bool libs__file_util__succeeded;

#line 193 "file_util.m"
        if ((libs__file_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "file_util.m"
          *libs__file_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "file_util.m"
        else
#line 194 "file_util.m"
          {
#line 194 "file_util.m"
            MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 194 "file_util.m"
            MR_Word libs__file_util__Dirs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
#line 194 "file_util.m"
            MR_Word libs__file_util__Result0_18;

#line 195 "file_util.m"
            {
#line 195 "file_util.m"
              libs__file_util__check_file_mod_time_5_p_0(libs__file_util__Dir_13, libs__file_util__HeadVar__3_3, &libs__file_util__Result0_18);
            }
#line 199 "file_util.m"
            if (((MR_tag((MR_Word) libs__file_util__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 201 "file_util.m"
              {
#line 201 "file_util.m"
                /* direct tailcall eliminated */
#line 201 "file_util.m"
                {
#line 201 "file_util.m"
                  MR_Word libs__file_util__HeadVar__2__tmp_copy_2 = libs__file_util__Dirs_14;

#line 201 "file_util.m"
                  libs__file_util__HeadVar__2_2 = libs__file_util__HeadVar__2__tmp_copy_2;
#line 201 "file_util.m"
                }
#line 201 "file_util.m"
                continue;
#line 201 "file_util.m"
              }
#line 199 "file_util.m"
            else
#line 197 "file_util.m"
              {
#line 197 "file_util.m"
                MR_Word libs__file_util__TimeT_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_18, (MR_Integer) 0)));

#line 198 "file_util.m"
                {
#line 198 "file_util.m"
                  MR_Word base;
#line 198 "file_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 198 "file_util.m"
                  *libs__file_util__HeadVar__4_4 = base;
#line 198 "file_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__TimeT_19));
#line 198 "file_util.m"
                }
#line 197 "file_util.m"
              }
#line 194 "file_util.m"
          }
#line 193 "file_util.m"
      }
#line 193 "file_util.m"
      break;
#line 193 "file_util.m"
    }
#line 188 "file_util.m"
}

#line 220 "file_util.m"
static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file__220__1_4_p_0(
#line 220 "file_util.m"
  MR_Word libs__file_util__Action_8,
#line 220 "file_util.m"
  MR_Integer * libs__file_util__HeadVar__2_16)
#line 220 "file_util.m"
{
#line 220 "file_util.m"
  {
#line 220 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 220 "file_util.m"
    void MR_CALL (* libs__file_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__file_util__Action_8, (MR_Integer) 1)));
#line 220 "file_util.m"
    MR_Box libs__file_util__conv1_HeadVar__4_18;

#line 220 "file_util.m"
    {
#line 220 "file_util.m"
      libs__file_util__func_0(((MR_Box) libs__file_util__Action_8), ((MR_Box) ((MR_Integer) 0)), &libs__file_util__conv1_HeadVar__4_18);
    }
#line 220 "file_util.m"
    *libs__file_util__HeadVar__2_16 = (MR_Integer) 0;
#line 220 "file_util.m"
  }
#line 220 "file_util.m"
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
#line 1194 "libs.file_util.c"
  {
#line 1196 "libs.file_util.c"
    MR_bool libs__file_util__succeeded = (libs__file_util__HeadVar__2_1 == libs__file_util__HeadVar__2_2);

#line 1199 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 1201 "libs.file_util.c"
  }
#line 38 "file_util.m"
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

#line 181 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_mod_time_5_p_0(
#line 181 "file_util.m"
  MR_String libs__file_util__Dir_6,
#line 181 "file_util.m"
  MR_String libs__file_util__FileName_7,
#line 181 "file_util.m"
  MR_Word * libs__file_util__Result_8)
#line 181 "file_util.m"
{
#line 184 "file_util.m"
  {
#line 184 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 184 "file_util.m"
    MR_String libs__file_util__PathName_10;
#line 208 "file_util.m"
    MR_String libs__file_util__V_23_23;

#line 208 "file_util.m"
    {
#line 208 "file_util.m"
      mercury__dir__this_directory_1_p_0(&libs__file_util__V_23_23);
    }
#line 208 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Dir_6, libs__file_util__V_23_23) == 0);
#line 210 "file_util.m"
    if (libs__file_util__succeeded)
#line 209 "file_util.m"
      libs__file_util__PathName_10 = libs__file_util__FileName_7;
#line 210 "file_util.m"
    else
#line 213 "file_util.m"
      {
#line 213 "file_util.m"
        MR_String libs__file_util__Sep_17;
#line 213 "file_util.m"
        MR_Char libs__file_util__V_18_18;
#line 213 "file_util.m"
        MR_Word libs__file_util__V_19_19;
#line 213 "file_util.m"
        MR_Word libs__file_util__V_20_20;
#line 213 "file_util.m"
        MR_Word libs__file_util__V_21_21;

#line 213 "file_util.m"
        {
#line 213 "file_util.m"
          libs__file_util__V_18_18 = mercury__dir__directory_separator_0_f_0();
        }
#line 213 "file_util.m"
        {
#line 213 "file_util.m"
          libs__file_util__Sep_17 = mercury__string__from_char_1_f_0(libs__file_util__V_18_18);
        }
#line 214 "file_util.m"
        {
#line 214 "file_util.m"
          libs__file_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_21_21, 0) = ((MR_Box) (libs__file_util__FileName_7));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "file_util.m"
        }
#line 214 "file_util.m"
        {
#line 214 "file_util.m"
          libs__file_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_20_20, 0) = ((MR_Box) (libs__file_util__Sep_17));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_20_20, 1) = ((MR_Box) (libs__file_util__V_21_21));
#line 214 "file_util.m"
        }
#line 214 "file_util.m"
        {
#line 214 "file_util.m"
          libs__file_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_19_19, 0) = ((MR_Box) (libs__file_util__Dir_6));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_19_19, 1) = ((MR_Box) (libs__file_util__V_20_20));
#line 214 "file_util.m"
        }
#line 214 "file_util.m"
        {
#line 214 "file_util.m"
          libs__file_util__PathName_10 = mercury__string__append_list_1_f_0(libs__file_util__V_19_19);
        }
#line 213 "file_util.m"
      }
#line 186 "file_util.m"
    {
#line 186 "file_util.m"
      mercury__io__file_modification_time_4_p_0(libs__file_util__PathName_10, libs__file_util__Result_8);
#line 186 "file_util.m"
      return;
    }
#line 184 "file_util.m"
  }
#line 181 "file_util.m"
}

#line 148 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_return_dir_6_p_0(
#line 148 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 148 "file_util.m"
  MR_String libs__file_util__Dir_8,
#line 148 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 148 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 148 "file_util.m"
{
#line 151 "file_util.m"
  {
#line 151 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 151 "file_util.m"
    MR_String libs__file_util__PathName_12;
#line 151 "file_util.m"
    MR_Word libs__file_util__OpenResult_13;
#line 208 "file_util.m"
    MR_String libs__file_util__V_31_31;

#line 208 "file_util.m"
    {
#line 208 "file_util.m"
      mercury__dir__this_directory_1_p_0(&libs__file_util__V_31_31);
    }
#line 208 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Dir_8, libs__file_util__V_31_31) == 0);
#line 210 "file_util.m"
    if (libs__file_util__succeeded)
#line 209 "file_util.m"
      libs__file_util__PathName_12 = libs__file_util__FileName_9;
#line 210 "file_util.m"
    else
#line 213 "file_util.m"
      {
#line 213 "file_util.m"
        MR_String libs__file_util__Sep_25;
#line 213 "file_util.m"
        MR_Char libs__file_util__V_26_26;
#line 213 "file_util.m"
        MR_Word libs__file_util__V_27_27;
#line 213 "file_util.m"
        MR_Word libs__file_util__V_28_28;
#line 213 "file_util.m"
        MR_Word libs__file_util__V_29_29;

#line 213 "file_util.m"
        {
#line 213 "file_util.m"
          libs__file_util__V_26_26 = mercury__dir__directory_separator_0_f_0();
        }
#line 213 "file_util.m"
        {
#line 213 "file_util.m"
          libs__file_util__Sep_25 = mercury__string__from_char_1_f_0(libs__file_util__V_26_26);
        }
#line 214 "file_util.m"
        {
#line 214 "file_util.m"
          libs__file_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_29_29, 0) = ((MR_Box) (libs__file_util__FileName_9));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "file_util.m"
        }
#line 214 "file_util.m"
        {
#line 214 "file_util.m"
          libs__file_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_28_28, 0) = ((MR_Box) (libs__file_util__Sep_25));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_28_28, 1) = ((MR_Box) (libs__file_util__V_29_29));
#line 214 "file_util.m"
        }
#line 214 "file_util.m"
        {
#line 214 "file_util.m"
          libs__file_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_27_27, 0) = ((MR_Box) (libs__file_util__Dir_8));
#line 214 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_27_27, 1) = ((MR_Box) (libs__file_util__V_28_28));
#line 214 "file_util.m"
        }
#line 214 "file_util.m"
        {
#line 214 "file_util.m"
          libs__file_util__PathName_12 = mercury__string__append_list_1_f_0(libs__file_util__V_27_27);
        }
#line 213 "file_util.m"
      }
#line 153 "file_util.m"
    {
#line 153 "file_util.m"
      mercury__io__open_input_4_p_0(libs__file_util__PathName_12, &libs__file_util__OpenResult_13);
    }
#line 164 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 166 "file_util.m"
      *libs__file_util__Result_10 = (MR_Word) libs__file_util__OpenResult_13;
#line 164 "file_util.m"
    else
#line 155 "file_util.m"
      {
#line 155 "file_util.m"
        MR_Word libs__file_util__Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__OpenResult_13, (MR_Integer) 0)));

#line 159 "file_util.m"
        if ((libs__file_util__MaybeOpen_7 == (MR_Integer) 1))
#line 161 "file_util.m"
          {
#line 161 "file_util.m"
            mercury__io__close_input_3_p_0(libs__file_util__Stream_14);
          }
#line 159 "file_util.m"
        else
#line 158 "file_util.m"
          {
#line 158 "file_util.m"
            MR_Word libs__file_util__V_15_15;

#line 158 "file_util.m"
            {
#line 158 "file_util.m"
              mercury__io__set_input_stream_4_p_0(libs__file_util__Stream_14, &libs__file_util__V_15_15);
            }
#line 158 "file_util.m"
          }
#line 163 "file_util.m"
        {
#line 163 "file_util.m"
          MR_Word base;
#line 163 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 163 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 163 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Dir_8));
#line 163 "file_util.m"
        }
#line 155 "file_util.m"
      }
#line 151 "file_util.m"
  }
#line 148 "file_util.m"
}

#line 104 "file_util.m"
void MR_CALL 
libs__file_util__report_error_to_stream_4_p_0(
#line 104 "file_util.m"
  MR_Word libs__file_util__Stream_5,
#line 104 "file_util.m"
  MR_String libs__file_util__ErrorMessage_6)
#line 104 "file_util.m"
{
#line 289 "file_util.m"
  {
#line 289 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 289 "file_util.m"
    MR_Word libs__file_util__OldStream_8;
#line 292 "file_util.m"
    MR_Word libs__file_util__V_9_9;

#line 290 "file_util.m"
    {
#line 290 "file_util.m"
      mercury__io__set_output_stream_4_p_0(libs__file_util__Stream_5, &libs__file_util__OldStream_8);
    }
#line 284 "file_util.m"
    {
#line 284 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "Error: ");
    }
#line 285 "file_util.m"
    {
#line 285 "file_util.m"
      mercury__io__write_string_3_p_0(libs__file_util__ErrorMessage_6);
    }
#line 286 "file_util.m"
    {
#line 286 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 287 "file_util.m"
    {
#line 287 "file_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
#line 292 "file_util.m"
    {
#line 292 "file_util.m"
      mercury__io__set_output_stream_4_p_0(libs__file_util__OldStream_8, &libs__file_util__V_9_9);
    }
#line 289 "file_util.m"
  }
#line 104 "file_util.m"
}

#line 103 "file_util.m"
void MR_CALL 
libs__file_util__report_error_3_p_0(
#line 103 "file_util.m"
  MR_String libs__file_util__ErrorMessage_4)
#line 103 "file_util.m"
{
#line 283 "file_util.m"
  {
#line 283 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 284 "file_util.m"
    {
#line 284 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "Error: ");
    }
#line 285 "file_util.m"
    {
#line 285 "file_util.m"
      mercury__io__write_string_3_p_0(libs__file_util__ErrorMessage_4);
    }
#line 286 "file_util.m"
    {
#line 286 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 287 "file_util.m"
    {
#line 287 "file_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 287 "file_util.m"
      return;
    }
#line 283 "file_util.m"
  }
#line 103 "file_util.m"
}

#line 101 "file_util.m"
void MR_CALL 
libs__file_util__maybe_flush_output_3_p_0(
#line 101 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1)
#line 101 "file_util.m"
{
#line 279 "file_util.m"
  {
#line 279 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 279 "file_util.m"
    if ((libs__file_util__HeadVar__1_1 == (MR_Integer) 0))
#line 281 "file_util.m"
      {
#line 281 "file_util.m"
      }
#line 279 "file_util.m"
    else
#line 280 "file_util.m"
      {
#line 280 "file_util.m"
        mercury__io__flush_output_2_p_0();
#line 280 "file_util.m"
        return;
      }
#line 279 "file_util.m"
  }
#line 101 "file_util.m"
}

#line 100 "file_util.m"
void MR_CALL 
libs__file_util__maybe_write_string_4_p_0(
#line 100 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1,
#line 100 "file_util.m"
  MR_String libs__file_util__String_2)
#line 100 "file_util.m"
{
#line 275 "file_util.m"
  {
#line 275 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 275 "file_util.m"
    if ((libs__file_util__HeadVar__1_1 == (MR_Integer) 0))
#line 277 "file_util.m"
      {
#line 277 "file_util.m"
      }
#line 275 "file_util.m"
    else
#line 276 "file_util.m"
      {
#line 276 "file_util.m"
        mercury__io__write_string_3_p_0(libs__file_util__String_2);
#line 276 "file_util.m"
        return;
      }
#line 275 "file_util.m"
  }
#line 100 "file_util.m"
}

#line 99 "file_util.m"
void MR_CALL 
libs__file_util__maybe_report_stats_3_p_0(
#line 99 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1)
#line 99 "file_util.m"
{
#line 271 "file_util.m"
  {
#line 271 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 271 "file_util.m"
    if ((libs__file_util__HeadVar__1_1 == (MR_Integer) 0))
#line 273 "file_util.m"
      {
#line 273 "file_util.m"
      }
#line 271 "file_util.m"
    else
#line 272 "file_util.m"
      {
#line 272 "file_util.m"
        mercury__io__report_stats_2_p_0();
#line 272 "file_util.m"
        return;
      }
#line 271 "file_util.m"
  }
#line 99 "file_util.m"
}

#line 95 "file_util.m"
void MR_CALL 
libs__file_util__get_install_name_option_3_p_0(
#line 95 "file_util.m"
  MR_Word libs__file_util__Globals_4,
#line 95 "file_util.m"
  MR_String libs__file_util__OutputFileName_5,
#line 95 "file_util.m"
  MR_String * libs__file_util__InstallNameOpt_6)
#line 95 "file_util.m"
{
#line 254 "file_util.m"
  {
#line 254 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 254 "file_util.m"
    MR_String libs__file_util__InstallNameFlag_7;
#line 254 "file_util.m"
    MR_String libs__file_util__InstallNamePath0_8;
#line 254 "file_util.m"
    MR_String libs__file_util__InstallNamePath_11;
#line 254 "file_util.m"
    MR_String libs__file_util__V_21_21;
#line 254 "file_util.m"
    MR_String libs__file_util__V_22_22;

#line 255 "file_util.m"
    {
#line 255 "file_util.m"
      libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 614, &libs__file_util__InstallNameFlag_7);
    }
#line 257 "file_util.m"
    {
#line 257 "file_util.m"
      libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 615, &libs__file_util__InstallNamePath0_8);
    }
#line 259 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__InstallNamePath0_8, (MR_String) "") == 0);
#line 263 "file_util.m"
    if (libs__file_util__succeeded)
#line 260 "file_util.m"
      {
#line 260 "file_util.m"
        MR_String libs__file_util__InstallPrefix_9;
#line 260 "file_util.m"
        MR_String libs__file_util__GradeDir_10;
#line 260 "file_util.m"
        MR_String libs__file_util__V_15_15;
#line 260 "file_util.m"
        MR_String libs__file_util__V_16_16;
#line 260 "file_util.m"
        MR_String libs__file_util__V_17_17;

#line 260 "file_util.m"
        {
#line 260 "file_util.m"
          libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 625, &libs__file_util__InstallPrefix_9);
        }
#line 261 "file_util.m"
        {
#line 261 "file_util.m"
          libs__handle_options__grade_directory_component_2_p_0(libs__file_util__Globals_4, &libs__file_util__GradeDir_10);
        }
#line 262 "file_util.m"
        {
#line 262 "file_util.m"
          libs__file_util__V_17_17 = mercury__dir__f_slash_2_f_0(libs__file_util__InstallPrefix_9, (MR_String) "lib");
        }
#line 262 "file_util.m"
        {
#line 262 "file_util.m"
          libs__file_util__V_16_16 = mercury__dir__f_slash_2_f_0(libs__file_util__V_17_17, (MR_String) "mercury");
        }
#line 262 "file_util.m"
        {
#line 262 "file_util.m"
          libs__file_util__V_15_15 = mercury__dir__f_slash_2_f_0(libs__file_util__V_16_16, (MR_String) "lib");
        }
#line 262 "file_util.m"
        {
#line 262 "file_util.m"
          libs__file_util__InstallNamePath_11 = mercury__dir__f_slash_2_f_0(libs__file_util__V_15_15, libs__file_util__GradeDir_10);
        }
#line 260 "file_util.m"
      }
#line 263 "file_util.m"
    else
#line 264 "file_util.m"
      libs__file_util__InstallNamePath_11 = libs__file_util__InstallNamePath0_8;
#line 267 "file_util.m"
    {
#line 267 "file_util.m"
      libs__file_util__V_22_22 = libs__options__quote_arg_1_f_0(libs__file_util__InstallNamePath_11);
    }
#line 266 "file_util.m"
    {
#line 266 "file_util.m"
      libs__file_util__V_21_21 = mercury__dir__f_slash_2_f_0(libs__file_util__V_22_22, libs__file_util__OutputFileName_5);
    }
#line 266 "file_util.m"
    {
#line 266 "file_util.m"
      *libs__file_util__InstallNameOpt_6 = mercury__string__f_43_43_2_f_0(libs__file_util__InstallNameFlag_7, libs__file_util__V_21_21);
    }
#line 254 "file_util.m"
  }
#line 95 "file_util.m"
}

#line 83 "file_util.m"
void MR_CALL 
libs__file_util__output_to_file_return_result_6_p_0(
#line 83 "file_util.m"
  MR_Word libs__file_util__TypeInfo_for_T_48,
#line 83 "file_util.m"
  MR_Word libs__file_util__Globals_7,
#line 83 "file_util.m"
  MR_String libs__file_util__FileName_8,
#line 83 "file_util.m"
  MR_Word libs__file_util__Action_9,
#line 83 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 83 "file_util.m"
{
#line 223 "file_util.m"
  {
#line 223 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 223 "file_util.m"
    MR_Word libs__file_util__Verbose_12;
#line 223 "file_util.m"
    MR_Word libs__file_util__Stats_13;
#line 223 "file_util.m"
    MR_Word libs__file_util__Res_14;

#line 224 "file_util.m"
    {
#line 224 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 44, &libs__file_util__Verbose_12);
    }
#line 225 "file_util.m"
    {
#line 225 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 54, &libs__file_util__Stats_13);
    }
#line 1917 "libs.file_util.c"
    if ((libs__file_util__Verbose_12 == (MR_Integer) 0))
#line 281 "file_util.m"
      {
#line 281 "file_util.m"
      }
#line 1923 "libs.file_util.c"
    else
#line 1925 "libs.file_util.c"
      {
#line 276 "file_util.m"
        {
#line 276 "file_util.m"
          mercury__io__write_string_3_p_0((MR_String) "% Writing to file \140");
        }
#line 276 "file_util.m"
        {
#line 276 "file_util.m"
          mercury__io__write_string_3_p_0(libs__file_util__FileName_8);
        }
#line 276 "file_util.m"
        {
#line 276 "file_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\'...\n");
        }
#line 280 "file_util.m"
        {
#line 280 "file_util.m"
          mercury__io__flush_output_2_p_0();
        }
#line 1947 "libs.file_util.c"
      }
#line 230 "file_util.m"
    {
#line 230 "file_util.m"
      mercury__io__open_output_4_p_0(libs__file_util__FileName_8, &libs__file_util__Res_14);
    }
#line 240 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__Res_14)) == (MR_mktag((MR_Integer) 1))))
#line 241 "file_util.m"
      {
#line 241 "file_util.m"
        MR_String libs__file_util__ErrorMessage_20;
#line 241 "file_util.m"
        MR_Word libs__file_util__V_34_34;
#line 241 "file_util.m"
        MR_Word libs__file_util__V_36_36;

#line 275 "file_util.m"
        if ((libs__file_util__Verbose_12 == (MR_Integer) 0))
#line 277 "file_util.m"
          {
#line 277 "file_util.m"
          }
#line 275 "file_util.m"
        else
#line 276 "file_util.m"
          {
#line 276 "file_util.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 243 "file_util.m"
        {
#line 243 "file_util.m"
          libs__file_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_36_36, 0) = ((MR_Box) (libs__file_util__FileName_8));
#line 243 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__file_util_scalar_common_1[0])));
#line 243 "file_util.m"
        }
#line 243 "file_util.m"
        {
#line 243 "file_util.m"
          libs__file_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_34_34, 0) = ((MR_Box) ((MR_String) "can\'t open file \140"));
#line 243 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_34_34, 1) = ((MR_Box) (libs__file_util__V_36_36));
#line 243 "file_util.m"
        }
#line 243 "file_util.m"
        {
#line 243 "file_util.m"
          mercury__string__append_list_2_p_0(libs__file_util__V_34_34, &libs__file_util__ErrorMessage_20);
        }
#line 245 "file_util.m"
        {
#line 245 "file_util.m"
          libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_20);
        }
#line 246 "file_util.m"
        *libs__file_util__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 241 "file_util.m"
      }
#line 240 "file_util.m"
    else
#line 232 "file_util.m"
      {
#line 232 "file_util.m"
        MR_Word libs__file_util__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Res_14, (MR_Integer) 0)));
#line 232 "file_util.m"
        MR_Word libs__file_util__OutputStream_16;
#line 232 "file_util.m"
        MR_Box libs__file_util__ActionResult_17;
#line 234 "file_util.m"
        void MR_CALL (* libs__file_util__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 234 "file_util.m"
        MR_Box libs__file_util__conv1_STATE_VARIABLE_IO_42_42;
#line 235 "file_util.m"
        MR_Word libs__file_util__V_18_18;

#line 233 "file_util.m"
        {
#line 233 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__FileStream_15, &libs__file_util__OutputStream_16);
        }
#line 234 "file_util.m"
        libs__file_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__file_util__Action_9, (MR_Integer) 1)));
#line 234 "file_util.m"
        {
#line 234 "file_util.m"
          libs__file_util__func_0(((MR_Box) libs__file_util__Action_9), &libs__file_util__ActionResult_17, ((MR_Box) ((MR_Integer) 0)), &libs__file_util__conv1_STATE_VARIABLE_IO_42_42);
        }
#line 235 "file_util.m"
        {
#line 235 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__OutputStream_16, &libs__file_util__V_18_18);
        }
#line 236 "file_util.m"
        {
#line 236 "file_util.m"
          mercury__io__close_output_3_p_0(libs__file_util__FileStream_15);
        }
#line 237 "file_util.m"
        {
#line 237 "file_util.m"
          libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "% done.\n");
        }
#line 238 "file_util.m"
        {
#line 238 "file_util.m"
          libs__file_util__maybe_report_stats_3_p_0(libs__file_util__Stats_13);
        }
#line 239 "file_util.m"
        {
#line 239 "file_util.m"
          MR_Word base;
#line 239 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 239 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 239 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = libs__file_util__ActionResult_17;
#line 239 "file_util.m"
        }
#line 232 "file_util.m"
      }
#line 223 "file_util.m"
  }
#line 83 "file_util.m"
}

#line 77 "file_util.m"
void MR_CALL 
libs__file_util__output_to_file_5_p_0(
#line 77 "file_util.m"
  MR_Word libs__file_util__Globals_6,
#line 77 "file_util.m"
  MR_String libs__file_util__FileName_7,
#line 77 "file_util.m"
  MR_Word libs__file_util__Action_8)
#line 77 "file_util.m"
{
#line 221 "file_util.m"
  {
#line 221 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 221 "file_util.m"
    MR_Word libs__file_util___Result_11;

#line 221 "file_util.m"
    {
#line 221 "file_util.m"
      libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_52_93_95_48_6_p_0(libs__file_util__Action_8, libs__file_util__Globals_6, libs__file_util__FileName_7, &libs__file_util___Result_11);
    }
#line 221 "file_util.m"
  }
#line 77 "file_util.m"
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
#line 169 "file_util.m"
  {
#line 169 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 169 "file_util.m"
    MR_Word libs__file_util__MaybeTime_10;

#line 170 "file_util.m"
    {
#line 170 "file_util.m"
      libs__file_util__do_search_for_file__ho2_6_p_0(libs__file_util__Dirs_6, libs__file_util__FileName_7, &libs__file_util__MaybeTime_10);
    }
#line 174 "file_util.m"
    if ((libs__file_util__MaybeTime_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "file_util.m"
      {
#line 175 "file_util.m"
        MR_String libs__file_util__Msg_12;
#line 175 "file_util.m"
        MR_String libs__file_util__V_18_18;
#line 175 "file_util.m"
        MR_String libs__file_util__V_19_19;
#line 175 "file_util.m"
        MR_String libs__file_util__V_21_21;

#line 176 "file_util.m"
        {
#line 176 "file_util.m"
          libs__file_util__V_21_21 = mercury__string__join_list_2_f_0((MR_String) ", ", libs__file_util__Dirs_6);
        }
#line 176 "file_util.m"
        {
#line 176 "file_util.m"
          libs__file_util__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", libs__file_util__V_21_21);
        }
#line 176 "file_util.m"
        {
#line 176 "file_util.m"
          libs__file_util__V_18_18 = mercury__string__f_43_43_2_f_0(libs__file_util__FileName_7, libs__file_util__V_19_19);
        }
#line 176 "file_util.m"
        {
#line 176 "file_util.m"
          libs__file_util__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", libs__file_util__V_18_18);
        }
#line 178 "file_util.m"
        {
#line 178 "file_util.m"
          MR_Word base;
#line 178 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "file_util.m"
          *libs__file_util__Result_8 = base;
#line 178 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Msg_12));
#line 178 "file_util.m"
        }
#line 175 "file_util.m"
      }
#line 174 "file_util.m"
    else
#line 172 "file_util.m"
      {
#line 172 "file_util.m"
        MR_Word libs__file_util__Time_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeTime_10, (MR_Integer) 0)));

#line 173 "file_util.m"
        {
#line 173 "file_util.m"
          MR_Word base;
#line 173 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 173 "file_util.m"
          *libs__file_util__Result_8 = base;
#line 173 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Time_11));
#line 173 "file_util.m"
        }
#line 172 "file_util.m"
      }
#line 169 "file_util.m"
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
#line 135 "file_util.m"
  {
#line 135 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 135 "file_util.m"
    MR_Word libs__file_util__MaybeDir_12;

#line 136 "file_util.m"
    {
#line 136 "file_util.m"
      libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_p_0(libs__file_util__MaybeOpen_7, libs__file_util__Dirs_8, libs__file_util__FileName_9, &libs__file_util__MaybeDir_12);
    }
#line 141 "file_util.m"
    if ((libs__file_util__MaybeDir_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "file_util.m"
      {
#line 142 "file_util.m"
        MR_String libs__file_util__Msg_14;
#line 142 "file_util.m"
        MR_String libs__file_util__V_20_20;
#line 142 "file_util.m"
        MR_String libs__file_util__V_21_21;
#line 142 "file_util.m"
        MR_String libs__file_util__V_23_23;

#line 143 "file_util.m"
        {
#line 143 "file_util.m"
          libs__file_util__V_23_23 = mercury__string__join_list_2_f_0((MR_String) ", ", libs__file_util__Dirs_8);
        }
#line 143 "file_util.m"
        {
#line 143 "file_util.m"
          libs__file_util__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", libs__file_util__V_23_23);
        }
#line 143 "file_util.m"
        {
#line 143 "file_util.m"
          libs__file_util__V_20_20 = mercury__string__f_43_43_2_f_0(libs__file_util__FileName_9, libs__file_util__V_21_21);
        }
#line 143 "file_util.m"
        {
#line 143 "file_util.m"
          libs__file_util__Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", libs__file_util__V_20_20);
        }
#line 145 "file_util.m"
        {
#line 145 "file_util.m"
          MR_Word base;
#line 145 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 145 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 145 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Msg_14));
#line 145 "file_util.m"
        }
#line 142 "file_util.m"
      }
#line 141 "file_util.m"
    else
#line 139 "file_util.m"
      {
#line 139 "file_util.m"
        MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeDir_12, (MR_Integer) 0)));

#line 140 "file_util.m"
        {
#line 140 "file_util.m"
          MR_Word base;
#line 140 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 140 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 140 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Dir_13));
#line 140 "file_util.m"
        }
#line 139 "file_util.m"
      }
#line 135 "file_util.m"
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
#line 120 "file_util.m"
  {
#line 120 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 120 "file_util.m"
    MR_Word libs__file_util__Result0_12;

#line 121 "file_util.m"
    {
#line 121 "file_util.m"
      libs__file_util__search_for_file_returning_dir_6_p_0(libs__file_util__MaybeOpen_7, libs__file_util__Dirs_8, libs__file_util__FileName_9, &libs__file_util__Result0_12);
    }
#line 130 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__Result0_12)) == (MR_mktag((MR_Integer) 1))))
#line 132 "file_util.m"
      *libs__file_util__Result_10 = libs__file_util__Result0_12;
#line 130 "file_util.m"
    else
#line 123 "file_util.m"
      {
#line 123 "file_util.m"
        MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_12, (MR_Integer) 0)));
#line 123 "file_util.m"
        MR_String libs__file_util__PathName_14;
#line 124 "file_util.m"
        MR_String libs__file_util__V_19_19;

#line 124 "file_util.m"
        {
#line 124 "file_util.m"
          mercury__dir__this_directory_1_p_0(&libs__file_util__V_19_19);
        }
#line 124 "file_util.m"
        libs__file_util__succeeded = (strcmp(libs__file_util__Dir_13, libs__file_util__V_19_19) == 0);
#line 126 "file_util.m"
        if (libs__file_util__succeeded)
#line 125 "file_util.m"
          libs__file_util__PathName_14 = libs__file_util__FileName_9;
#line 126 "file_util.m"
        else
#line 127 "file_util.m"
          {
#line 127 "file_util.m"
            libs__file_util__PathName_14 = mercury__dir__make_path_name_2_f_0(libs__file_util__Dir_13, libs__file_util__FileName_9);
          }
#line 129 "file_util.m"
        {
#line 129 "file_util.m"
          MR_Word base;
#line 129 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 129 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 129 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__PathName_14));
#line 129 "file_util.m"
        }
#line 123 "file_util.m"
      }
#line 120 "file_util.m"
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
