/*
** Automatically generated from `file_util.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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

#line 202 "file_util.m"
static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_p_0(
#line 202 "file_util.m"
  MR_Word libs__file_util__V_26_26,
#line 202 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 202 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 202 "file_util.m"
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

#line 202 "file_util.m"
static void MR_CALL 
libs__file_util__do_search_for_file__ho2_6_p_0(
#line 202 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 202 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 202 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4);

#line 234 "file_util.m"
static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file__234__1_4_p_0(
#line 234 "file_util.m"
  MR_Word libs__file_util__Action_8,
#line 234 "file_util.m"
  MR_Integer * libs__file_util__HeadVar__2_16);

#line 195 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_mod_time_5_p_0(
#line 195 "file_util.m"
  MR_String libs__file_util__Dir_6,
#line 195 "file_util.m"
  MR_String libs__file_util__FileName_7,
#line 195 "file_util.m"
  MR_Word * libs__file_util__Result_8);

#line 162 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_return_dir_6_p_0(
#line 162 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 162 "file_util.m"
  MR_String libs__file_util__Dir_8,
#line 162 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 162 "file_util.m"
  MR_Word * libs__file_util__Result_10);

#line 332 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_dir_command_3_f_0_1(
#line 332 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 332 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1);

#line 318 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
#line 318 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 318 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1);


static /* final */ const MR_Box libs__file_util_scalar_common_1[1][2];

static /* final */ const MR_Box libs__file_util_scalar_common_2[1][5];

static /* final */ const MR_Box libs__file_util_scalar_common_3[2][3];




static /* final */ const MR_Box libs__file_util_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\' for output.")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__file_util_scalar_common_2[0])),
    ((MR_Box) (libs__file_util__make_install_file_command_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__file_util_scalar_common_2[0])),
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



#line 370 "libs.file_util.c"
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

#line 391 "libs.file_util.c"
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

#line 412 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0 = {
  (MR_String) "open_file",
  (MR_Integer) 0
};

#line 418 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1 = {
  (MR_String) "do_not_open_file",
  (MR_Integer) 1
};

#line 424 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0[2] = {
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0,
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1
};

#line 430 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0[2] = {
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1,
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0
};

#line 436 "libs.file_util.c"
static const MR_Integer libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 442 "libs.file_util.c"
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

#line 463 "libs.file_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 472 "libs.file_util.c"
static const MR_VA_PseudoTypeInfo_Struct3 libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 483 "libs.file_util.c"
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

#line 504 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
#line 507 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 509 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 511 "libs.file_util.c"
{
#line 513 "libs.file_util.c"
  {
#line 515 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 518 "libs.file_util.c"
    {
#line 520 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____dir_name_0_0(((MR_String) libs__file_util__wrapper_arg_1), ((MR_String) libs__file_util__wrapper_arg_2));
    }
#line 523 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 525 "libs.file_util.c"
  }
#line 527 "libs.file_util.c"
}

#line 530 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
#line 533 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 535 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 537 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 539 "libs.file_util.c"
{
#line 541 "libs.file_util.c"
  {
#line 543 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 546 "libs.file_util.c"
    {
#line 548 "libs.file_util.c"
      libs__file_util____Compare____dir_name_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_String) libs__file_util__wrapper_arg_2), ((MR_String) libs__file_util__wrapper_arg_3));
    }
#line 551 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 553 "libs.file_util.c"
  }
#line 555 "libs.file_util.c"
}

#line 558 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
#line 561 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 563 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 565 "libs.file_util.c"
{
#line 567 "libs.file_util.c"
  {
#line 569 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 572 "libs.file_util.c"
    {
#line 574 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____file_name_0_0(((MR_String) libs__file_util__wrapper_arg_1), ((MR_String) libs__file_util__wrapper_arg_2));
    }
#line 577 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 579 "libs.file_util.c"
  }
#line 581 "libs.file_util.c"
}

#line 584 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
#line 587 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 589 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 591 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 593 "libs.file_util.c"
{
#line 595 "libs.file_util.c"
  {
#line 597 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 600 "libs.file_util.c"
    {
#line 602 "libs.file_util.c"
      libs__file_util____Compare____file_name_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_String) libs__file_util__wrapper_arg_2), ((MR_String) libs__file_util__wrapper_arg_3));
    }
#line 605 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 607 "libs.file_util.c"
  }
#line 609 "libs.file_util.c"
}

#line 612 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0_10001(
#line 615 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 617 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 619 "libs.file_util.c"
{
#line 621 "libs.file_util.c"
  {
#line 623 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 626 "libs.file_util.c"
    {
#line 628 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____maybe_open_file_0_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2));
    }
#line 631 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 633 "libs.file_util.c"
  }
#line 635 "libs.file_util.c"
}

#line 638 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0_10001(
#line 641 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 643 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 645 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 647 "libs.file_util.c"
{
#line 649 "libs.file_util.c"
  {
#line 651 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 654 "libs.file_util.c"
    {
#line 656 "libs.file_util.c"
      libs__file_util____Compare____maybe_open_file_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
#line 659 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 661 "libs.file_util.c"
  }
#line 663 "libs.file_util.c"
}

#line 666 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0_10001(
#line 669 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 671 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 673 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 675 "libs.file_util.c"
{
#line 677 "libs.file_util.c"
  {
#line 679 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 682 "libs.file_util.c"
    {
#line 684 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____open_file_pred_1_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
#line 687 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 689 "libs.file_util.c"
  }
#line 691 "libs.file_util.c"
}

#line 694 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0_10001(
#line 697 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 699 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_2,
#line 701 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3,
#line 703 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_4)
#line 705 "libs.file_util.c"
{
#line 707 "libs.file_util.c"
  {
#line 709 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 712 "libs.file_util.c"
    {
#line 714 "libs.file_util.c"
      libs__file_util____Compare____open_file_pred_1_0(((MR_Word) libs__file_util__wrapper_arg_1), &libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_3), ((MR_Word) libs__file_util__wrapper_arg_4));
    }
#line 717 "libs.file_util.c"
    *libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 719 "libs.file_util.c"
  }
#line 721 "libs.file_util.c"
}

#line 202 "file_util.m"
static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_p_0(
#line 202 "file_util.m"
  MR_Word libs__file_util__V_26_26,
#line 202 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 202 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 202 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4)
#line 202 "file_util.m"
{
#line 207 "file_util.m"
  while (MR_TRUE)
#line 207 "file_util.m"
    {
#line 207 "file_util.m"
      /* tailcall optimized into a loop */
#line 207 "file_util.m"
      {
#line 207 "file_util.m"
        MR_bool libs__file_util__succeeded;

#line 207 "file_util.m"
        if ((libs__file_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "file_util.m"
          *libs__file_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 207 "file_util.m"
        else
#line 208 "file_util.m"
          {
#line 208 "file_util.m"
            MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 208 "file_util.m"
            MR_Word libs__file_util__Dirs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
#line 208 "file_util.m"
            MR_Word libs__file_util__Result0_18;

#line 209 "file_util.m"
            {
#line 209 "file_util.m"
              libs__file_util__check_file_return_dir_6_p_0(libs__file_util__V_26_26, libs__file_util__Dir_13, libs__file_util__HeadVar__3_3, &libs__file_util__Result0_18);
            }
#line 213 "file_util.m"
            if (((MR_tag((MR_Word) libs__file_util__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 215 "file_util.m"
              {
#line 215 "file_util.m"
                /* direct tailcall eliminated */
#line 215 "file_util.m"
                {
#line 215 "file_util.m"
                  MR_Word libs__file_util__HeadVar__2__tmp_copy_2 = libs__file_util__Dirs_14;

#line 215 "file_util.m"
                  libs__file_util__HeadVar__2_2 = libs__file_util__HeadVar__2__tmp_copy_2;
#line 215 "file_util.m"
                }
#line 215 "file_util.m"
                continue;
#line 215 "file_util.m"
              }
#line 213 "file_util.m"
            else
#line 211 "file_util.m"
              {
#line 211 "file_util.m"
                MR_String libs__file_util__TimeT_19 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_18, (MR_Integer) 0)));

#line 212 "file_util.m"
                {
#line 212 "file_util.m"
                  MR_Word base;
#line 212 "file_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 212 "file_util.m"
                  *libs__file_util__HeadVar__4_4 = base;
#line 212 "file_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__TimeT_19));
#line 212 "file_util.m"
                }
#line 211 "file_util.m"
              }
#line 208 "file_util.m"
          }
#line 207 "file_util.m"
      }
#line 207 "file_util.m"
      break;
#line 207 "file_util.m"
    }
#line 202 "file_util.m"
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
#line 237 "file_util.m"
  {
#line 237 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 237 "file_util.m"
    MR_Word libs__file_util__Verbose_12;
#line 237 "file_util.m"
    MR_Word libs__file_util__Stats_13;
#line 237 "file_util.m"
    MR_Word libs__file_util__Res_14;

#line 238 "file_util.m"
    {
#line 238 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 44, &libs__file_util__Verbose_12);
    }
#line 239 "file_util.m"
    {
#line 239 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 54, &libs__file_util__Stats_13);
    }
#line 853 "libs.file_util.c"
    if ((libs__file_util__Verbose_12 == (MR_Integer) 0))
#line 295 "file_util.m"
      {
#line 295 "file_util.m"
      }
#line 859 "libs.file_util.c"
    else
#line 861 "libs.file_util.c"
      {
#line 290 "file_util.m"
        {
#line 290 "file_util.m"
          mercury__io__write_string_3_p_0((MR_String) "% Writing to file \140");
        }
#line 290 "file_util.m"
        {
#line 290 "file_util.m"
          mercury__io__write_string_3_p_0(libs__file_util__FileName_8);
        }
#line 290 "file_util.m"
        {
#line 290 "file_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\'...\n");
        }
#line 294 "file_util.m"
        {
#line 294 "file_util.m"
          mercury__io__flush_output_2_p_0();
        }
#line 883 "libs.file_util.c"
      }
#line 244 "file_util.m"
    {
#line 244 "file_util.m"
      mercury__io__open_output_4_p_0(libs__file_util__FileName_8, &libs__file_util__Res_14);
    }
#line 254 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__Res_14)) == (MR_mktag((MR_Integer) 1))))
#line 255 "file_util.m"
      {
#line 255 "file_util.m"
        MR_String libs__file_util__ErrorMessage_20;
#line 255 "file_util.m"
        MR_Word libs__file_util__V_34_34;
#line 255 "file_util.m"
        MR_Word libs__file_util__V_36_36;

#line 289 "file_util.m"
        if ((libs__file_util__Verbose_12 == (MR_Integer) 0))
#line 291 "file_util.m"
          {
#line 291 "file_util.m"
          }
#line 289 "file_util.m"
        else
#line 290 "file_util.m"
          {
#line 290 "file_util.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 257 "file_util.m"
        {
#line 257 "file_util.m"
          libs__file_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_36_36, 0) = ((MR_Box) (libs__file_util__FileName_8));
#line 257 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__file_util_scalar_common_1[0])));
#line 257 "file_util.m"
        }
#line 257 "file_util.m"
        {
#line 257 "file_util.m"
          libs__file_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_34_34, 0) = ((MR_Box) ((MR_String) "can\'t open file \140"));
#line 257 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_34_34, 1) = ((MR_Box) (libs__file_util__V_36_36));
#line 257 "file_util.m"
        }
#line 257 "file_util.m"
        {
#line 257 "file_util.m"
          mercury__string__append_list_2_p_0(libs__file_util__V_34_34, &libs__file_util__ErrorMessage_20);
        }
#line 259 "file_util.m"
        {
#line 259 "file_util.m"
          libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_20);
        }
#line 260 "file_util.m"
        *libs__file_util__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 255 "file_util.m"
      }
#line 254 "file_util.m"
    else
#line 246 "file_util.m"
      {
#line 246 "file_util.m"
        MR_Word libs__file_util__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Res_14, (MR_Integer) 0)));
#line 246 "file_util.m"
        MR_Word libs__file_util__OutputStream_16;
#line 246 "file_util.m"
        MR_Integer libs__file_util__ActionResult_17;
#line 249 "file_util.m"
        MR_Word libs__file_util__V_18_18;

#line 247 "file_util.m"
        {
#line 247 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__FileStream_15, &libs__file_util__OutputStream_16);
        }
#line 248 "file_util.m"
        {
#line 248 "file_util.m"
          libs__file_util__IntroducedFrom__pred__output_to_file__234__1_4_p_0(libs__file_util__V_49_49, &libs__file_util__ActionResult_17);
        }
#line 249 "file_util.m"
        {
#line 249 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__OutputStream_16, &libs__file_util__V_18_18);
        }
#line 250 "file_util.m"
        {
#line 250 "file_util.m"
          mercury__io__close_output_3_p_0(libs__file_util__FileStream_15);
        }
#line 251 "file_util.m"
        {
#line 251 "file_util.m"
          libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "% done.\n");
        }
#line 252 "file_util.m"
        {
#line 252 "file_util.m"
          libs__file_util__maybe_report_stats_3_p_0(libs__file_util__Stats_13);
        }
#line 253 "file_util.m"
        {
#line 253 "file_util.m"
          MR_Word base;
#line 253 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 253 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 253 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__ActionResult_17));
#line 253 "file_util.m"
        }
#line 246 "file_util.m"
      }
#line 237 "file_util.m"
  }
#line 83 "file_util.m"
}

#line 202 "file_util.m"
static void MR_CALL 
libs__file_util__do_search_for_file__ho2_6_p_0(
#line 202 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 202 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 202 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4)
#line 202 "file_util.m"
{
#line 207 "file_util.m"
  while (MR_TRUE)
#line 207 "file_util.m"
    {
#line 207 "file_util.m"
      /* tailcall optimized into a loop */
#line 207 "file_util.m"
      {
#line 207 "file_util.m"
        MR_bool libs__file_util__succeeded;

#line 207 "file_util.m"
        if ((libs__file_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "file_util.m"
          *libs__file_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 207 "file_util.m"
        else
#line 208 "file_util.m"
          {
#line 208 "file_util.m"
            MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 208 "file_util.m"
            MR_Word libs__file_util__Dirs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
#line 208 "file_util.m"
            MR_Word libs__file_util__Result0_18;

#line 209 "file_util.m"
            {
#line 209 "file_util.m"
              libs__file_util__check_file_mod_time_5_p_0(libs__file_util__Dir_13, libs__file_util__HeadVar__3_3, &libs__file_util__Result0_18);
            }
#line 213 "file_util.m"
            if (((MR_tag((MR_Word) libs__file_util__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 215 "file_util.m"
              {
#line 215 "file_util.m"
                /* direct tailcall eliminated */
#line 215 "file_util.m"
                {
#line 215 "file_util.m"
                  MR_Word libs__file_util__HeadVar__2__tmp_copy_2 = libs__file_util__Dirs_14;

#line 215 "file_util.m"
                  libs__file_util__HeadVar__2_2 = libs__file_util__HeadVar__2__tmp_copy_2;
#line 215 "file_util.m"
                }
#line 215 "file_util.m"
                continue;
#line 215 "file_util.m"
              }
#line 213 "file_util.m"
            else
#line 211 "file_util.m"
              {
#line 211 "file_util.m"
                MR_Word libs__file_util__TimeT_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_18, (MR_Integer) 0)));

#line 212 "file_util.m"
                {
#line 212 "file_util.m"
                  MR_Word base;
#line 212 "file_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 212 "file_util.m"
                  *libs__file_util__HeadVar__4_4 = base;
#line 212 "file_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__TimeT_19));
#line 212 "file_util.m"
                }
#line 211 "file_util.m"
              }
#line 208 "file_util.m"
          }
#line 207 "file_util.m"
      }
#line 207 "file_util.m"
      break;
#line 207 "file_util.m"
    }
#line 202 "file_util.m"
}

#line 234 "file_util.m"
static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file__234__1_4_p_0(
#line 234 "file_util.m"
  MR_Word libs__file_util__Action_8,
#line 234 "file_util.m"
  MR_Integer * libs__file_util__HeadVar__2_16)
#line 234 "file_util.m"
{
#line 234 "file_util.m"
  {
#line 234 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 234 "file_util.m"
    void MR_CALL (* libs__file_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__file_util__Action_8, (MR_Integer) 1)));
#line 234 "file_util.m"
    MR_Box libs__file_util__conv1_HeadVar__4_18;

#line 234 "file_util.m"
    {
#line 234 "file_util.m"
      libs__file_util__func_0(((MR_Box) libs__file_util__Action_8), ((MR_Box) ((MR_Integer) 0)), &libs__file_util__conv1_HeadVar__4_18);
    }
#line 234 "file_util.m"
    *libs__file_util__HeadVar__2_16 = (MR_Integer) 0;
#line 234 "file_util.m"
  }
#line 234 "file_util.m"
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
#line 1240 "libs.file_util.c"
  {
#line 1242 "libs.file_util.c"
    MR_bool libs__file_util__succeeded = (libs__file_util__HeadVar__2_1 == libs__file_util__HeadVar__2_2);

#line 1245 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 1247 "libs.file_util.c"
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

#line 195 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_mod_time_5_p_0(
#line 195 "file_util.m"
  MR_String libs__file_util__Dir_6,
#line 195 "file_util.m"
  MR_String libs__file_util__FileName_7,
#line 195 "file_util.m"
  MR_Word * libs__file_util__Result_8)
#line 195 "file_util.m"
{
#line 198 "file_util.m"
  {
#line 198 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 198 "file_util.m"
    MR_String libs__file_util__PathName_10;
#line 222 "file_util.m"
    MR_String libs__file_util__V_23_23;

#line 222 "file_util.m"
    {
#line 222 "file_util.m"
      mercury__dir__this_directory_1_p_0(&libs__file_util__V_23_23);
    }
#line 222 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Dir_6, libs__file_util__V_23_23) == 0);
#line 224 "file_util.m"
    if (libs__file_util__succeeded)
#line 223 "file_util.m"
      libs__file_util__PathName_10 = libs__file_util__FileName_7;
#line 224 "file_util.m"
    else
#line 227 "file_util.m"
      {
#line 227 "file_util.m"
        MR_String libs__file_util__Sep_17;
#line 227 "file_util.m"
        MR_Char libs__file_util__V_18_18;
#line 227 "file_util.m"
        MR_Word libs__file_util__V_19_19;
#line 227 "file_util.m"
        MR_Word libs__file_util__V_20_20;
#line 227 "file_util.m"
        MR_Word libs__file_util__V_21_21;

#line 227 "file_util.m"
        {
#line 227 "file_util.m"
          libs__file_util__V_18_18 = mercury__dir__directory_separator_0_f_0();
        }
#line 227 "file_util.m"
        {
#line 227 "file_util.m"
          libs__file_util__Sep_17 = mercury__string__from_char_1_f_0(libs__file_util__V_18_18);
        }
#line 228 "file_util.m"
        {
#line 228 "file_util.m"
          libs__file_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_21_21, 0) = ((MR_Box) (libs__file_util__FileName_7));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "file_util.m"
        }
#line 228 "file_util.m"
        {
#line 228 "file_util.m"
          libs__file_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_20_20, 0) = ((MR_Box) (libs__file_util__Sep_17));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_20_20, 1) = ((MR_Box) (libs__file_util__V_21_21));
#line 228 "file_util.m"
        }
#line 228 "file_util.m"
        {
#line 228 "file_util.m"
          libs__file_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_19_19, 0) = ((MR_Box) (libs__file_util__Dir_6));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_19_19, 1) = ((MR_Box) (libs__file_util__V_20_20));
#line 228 "file_util.m"
        }
#line 228 "file_util.m"
        {
#line 228 "file_util.m"
          libs__file_util__PathName_10 = mercury__string__append_list_1_f_0(libs__file_util__V_19_19);
        }
#line 227 "file_util.m"
      }
#line 200 "file_util.m"
    {
#line 200 "file_util.m"
      mercury__io__file_modification_time_4_p_0(libs__file_util__PathName_10, libs__file_util__Result_8);
#line 200 "file_util.m"
      return;
    }
#line 198 "file_util.m"
  }
#line 195 "file_util.m"
}

#line 162 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_return_dir_6_p_0(
#line 162 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 162 "file_util.m"
  MR_String libs__file_util__Dir_8,
#line 162 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 162 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 162 "file_util.m"
{
#line 165 "file_util.m"
  {
#line 165 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 165 "file_util.m"
    MR_String libs__file_util__PathName_12;
#line 165 "file_util.m"
    MR_Word libs__file_util__OpenResult_13;
#line 222 "file_util.m"
    MR_String libs__file_util__V_31_31;

#line 222 "file_util.m"
    {
#line 222 "file_util.m"
      mercury__dir__this_directory_1_p_0(&libs__file_util__V_31_31);
    }
#line 222 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Dir_8, libs__file_util__V_31_31) == 0);
#line 224 "file_util.m"
    if (libs__file_util__succeeded)
#line 223 "file_util.m"
      libs__file_util__PathName_12 = libs__file_util__FileName_9;
#line 224 "file_util.m"
    else
#line 227 "file_util.m"
      {
#line 227 "file_util.m"
        MR_String libs__file_util__Sep_25;
#line 227 "file_util.m"
        MR_Char libs__file_util__V_26_26;
#line 227 "file_util.m"
        MR_Word libs__file_util__V_27_27;
#line 227 "file_util.m"
        MR_Word libs__file_util__V_28_28;
#line 227 "file_util.m"
        MR_Word libs__file_util__V_29_29;

#line 227 "file_util.m"
        {
#line 227 "file_util.m"
          libs__file_util__V_26_26 = mercury__dir__directory_separator_0_f_0();
        }
#line 227 "file_util.m"
        {
#line 227 "file_util.m"
          libs__file_util__Sep_25 = mercury__string__from_char_1_f_0(libs__file_util__V_26_26);
        }
#line 228 "file_util.m"
        {
#line 228 "file_util.m"
          libs__file_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_29_29, 0) = ((MR_Box) (libs__file_util__FileName_9));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "file_util.m"
        }
#line 228 "file_util.m"
        {
#line 228 "file_util.m"
          libs__file_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_28_28, 0) = ((MR_Box) (libs__file_util__Sep_25));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_28_28, 1) = ((MR_Box) (libs__file_util__V_29_29));
#line 228 "file_util.m"
        }
#line 228 "file_util.m"
        {
#line 228 "file_util.m"
          libs__file_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_27_27, 0) = ((MR_Box) (libs__file_util__Dir_8));
#line 228 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_27_27, 1) = ((MR_Box) (libs__file_util__V_28_28));
#line 228 "file_util.m"
        }
#line 228 "file_util.m"
        {
#line 228 "file_util.m"
          libs__file_util__PathName_12 = mercury__string__append_list_1_f_0(libs__file_util__V_27_27);
        }
#line 227 "file_util.m"
      }
#line 167 "file_util.m"
    {
#line 167 "file_util.m"
      mercury__io__open_input_4_p_0(libs__file_util__PathName_12, &libs__file_util__OpenResult_13);
    }
#line 178 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 180 "file_util.m"
      *libs__file_util__Result_10 = (MR_Word) libs__file_util__OpenResult_13;
#line 178 "file_util.m"
    else
#line 169 "file_util.m"
      {
#line 169 "file_util.m"
        MR_Word libs__file_util__Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__OpenResult_13, (MR_Integer) 0)));

#line 173 "file_util.m"
        if ((libs__file_util__MaybeOpen_7 == (MR_Integer) 1))
#line 175 "file_util.m"
          {
#line 175 "file_util.m"
            mercury__io__close_input_3_p_0(libs__file_util__Stream_14);
          }
#line 173 "file_util.m"
        else
#line 172 "file_util.m"
          {
#line 172 "file_util.m"
            MR_Word libs__file_util__V_15_15;

#line 172 "file_util.m"
            {
#line 172 "file_util.m"
              mercury__io__set_input_stream_4_p_0(libs__file_util__Stream_14, &libs__file_util__V_15_15);
            }
#line 172 "file_util.m"
          }
#line 177 "file_util.m"
        {
#line 177 "file_util.m"
          MR_Word base;
#line 177 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 177 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 177 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Dir_8));
#line 177 "file_util.m"
        }
#line 169 "file_util.m"
      }
#line 165 "file_util.m"
  }
#line 162 "file_util.m"
}

#line 332 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_dir_command_3_f_0_1(
#line 332 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 332 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1)
#line 332 "file_util.m"
{
#line 332 "file_util.m"
  {
#line 332 "file_util.m"
    MR_Box libs__file_util__wrapper_arg_2;
#line 332 "file_util.m"
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
#line 332 "file_util.m"
    MR_String libs__file_util__conv0_HeadVar__2_2;

#line 332 "file_util.m"
    {
#line 332 "file_util.m"
      libs__file_util__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) libs__file_util__wrapper_arg_1));
    }
#line 332 "file_util.m"
    libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__2_2));
#line 332 "file_util.m"
    return libs__file_util__wrapper_arg_2;
#line 332 "file_util.m"
  }
#line 332 "file_util.m"
}

#line 119 "file_util.m"
MR_String MR_CALL 
libs__file_util__make_install_dir_command_3_f_0(
#line 119 "file_util.m"
  MR_Word libs__file_util__Globals_5,
#line 119 "file_util.m"
  MR_String libs__file_util__SourceDirName_6,
#line 119 "file_util.m"
  MR_String libs__file_util__InstallDir_7)
#line 119 "file_util.m"
{
#line 321 "file_util.m"
  {
#line 321 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 321 "file_util.m"
    MR_String libs__file_util__Command_8;
#line 321 "file_util.m"
    MR_Word libs__file_util__TypeCtorInfo_20_20;
#line 321 "file_util.m"
    MR_Word libs__file_util__FileInstallCmd_9;
#line 321 "file_util.m"
    MR_String libs__file_util__InstallCmd_10;
#line 321 "file_util.m"
    MR_String libs__file_util__InstallCmdDirOpt_11;
#line 321 "file_util.m"
    MR_Word libs__file_util__V_13_13;
#line 321 "file_util.m"
    MR_Word libs__file_util__V_15_15;
#line 321 "file_util.m"
    MR_Word libs__file_util__V_16_16;
#line 321 "file_util.m"
    MR_Word libs__file_util__V_17_17;
#line 321 "file_util.m"
    MR_Word libs__file_util__V_18_18;

#line 322 "file_util.m"
    {
#line 322 "file_util.m"
      libs__globals__get_file_install_cmd_2_p_0(libs__file_util__Globals_5, &libs__file_util__FileInstallCmd_9);
    }
#line 325 "file_util.m"
    if ((libs__file_util__FileInstallCmd_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "file_util.m"
      {
#line 327 "file_util.m"
        libs__file_util__InstallCmd_10 = (MR_String) "cp";
#line 330 "file_util.m"
        libs__file_util__InstallCmdDirOpt_11 = (MR_String) "-R";
#line 326 "file_util.m"
      }
#line 325 "file_util.m"
    else
#line 324 "file_util.m"
      {
#line 324 "file_util.m"
        libs__file_util__InstallCmd_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 0)));
#line 324 "file_util.m"
        libs__file_util__InstallCmdDirOpt_11 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 1)));
#line 324 "file_util.m"
      }
#line 1721 "libs.file_util.c"
    libs__file_util__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 333 "file_util.m"
    {
#line 333 "file_util.m"
      libs__file_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_18_18, 0) = ((MR_Box) (libs__file_util__InstallDir_7));
#line 333 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "file_util.m"
    }
#line 333 "file_util.m"
    {
#line 333 "file_util.m"
      libs__file_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 0) = ((MR_Box) (libs__file_util__SourceDirName_6));
#line 333 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 1) = ((MR_Box) (libs__file_util__V_18_18));
#line 333 "file_util.m"
    }
#line 333 "file_util.m"
    {
#line 333 "file_util.m"
      libs__file_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 0) = ((MR_Box) (libs__file_util__InstallCmdDirOpt_11));
#line 333 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 1) = ((MR_Box) (libs__file_util__V_17_17));
#line 333 "file_util.m"
    }
#line 332 "file_util.m"
    {
#line 332 "file_util.m"
      libs__file_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 0) = ((MR_Box) (libs__file_util__InstallCmd_10));
#line 332 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 1) = ((MR_Box) (libs__file_util__V_16_16));
#line 332 "file_util.m"
    }
#line 332 "file_util.m"
    {
#line 332 "file_util.m"
      libs__file_util__V_13_13 = mercury__list__map_2_f_0(libs__file_util__TypeCtorInfo_20_20, libs__file_util__TypeCtorInfo_20_20, (MR_Word) &libs__file_util_scalar_common_3[1], libs__file_util__V_15_15);
    }
#line 332 "file_util.m"
    {
#line 332 "file_util.m"
      return libs__file_util__Command_8 = mercury__string__join_list_2_f_0((MR_String) "   ", libs__file_util__V_13_13);
    }
#line 321 "file_util.m"
    return libs__file_util__Command_8;
#line 321 "file_util.m"
  }
#line 119 "file_util.m"
}

#line 318 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
#line 318 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 318 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1)
#line 318 "file_util.m"
{
#line 318 "file_util.m"
  {
#line 318 "file_util.m"
    MR_Box libs__file_util__wrapper_arg_2;
#line 318 "file_util.m"
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
#line 318 "file_util.m"
    MR_String libs__file_util__conv0_HeadVar__2_2;

#line 318 "file_util.m"
    {
#line 318 "file_util.m"
      libs__file_util__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) libs__file_util__wrapper_arg_1));
    }
#line 318 "file_util.m"
    libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__2_2));
#line 318 "file_util.m"
    return libs__file_util__wrapper_arg_2;
#line 318 "file_util.m"
  }
#line 318 "file_util.m"
}

#line 113 "file_util.m"
MR_String MR_CALL 
libs__file_util__make_install_file_command_3_f_0(
#line 113 "file_util.m"
  MR_Word libs__file_util__Globals_5,
#line 113 "file_util.m"
  MR_String libs__file_util__FileName_6,
#line 113 "file_util.m"
  MR_String libs__file_util__InstallDir_7)
#line 113 "file_util.m"
{
#line 310 "file_util.m"
  {
#line 310 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 310 "file_util.m"
    MR_String libs__file_util__Command_8;
#line 310 "file_util.m"
    MR_Word libs__file_util__TypeCtorInfo_19_19;
#line 310 "file_util.m"
    MR_Word libs__file_util__FileInstallCmd_9;
#line 310 "file_util.m"
    MR_String libs__file_util__InstallCmd_10;
#line 310 "file_util.m"
    MR_Word libs__file_util__V_13_13;
#line 310 "file_util.m"
    MR_Word libs__file_util__V_15_15;
#line 310 "file_util.m"
    MR_Word libs__file_util__V_16_16;
#line 310 "file_util.m"
    MR_Word libs__file_util__V_17_17;

#line 311 "file_util.m"
    {
#line 311 "file_util.m"
      libs__globals__get_file_install_cmd_2_p_0(libs__file_util__Globals_5, &libs__file_util__FileInstallCmd_9);
    }
#line 314 "file_util.m"
    if ((libs__file_util__FileInstallCmd_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "file_util.m"
      libs__file_util__InstallCmd_10 = (MR_String) "cp";
#line 314 "file_util.m"
    else
#line 313 "file_util.m"
      {
#line 313 "file_util.m"
        MR_String libs__file_util___InstallCmdDirOpt_11;

#line 313 "file_util.m"
        libs__file_util__InstallCmd_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 0)));
#line 313 "file_util.m"
        libs__file_util___InstallCmdDirOpt_11 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 1)));
#line 313 "file_util.m"
      }
#line 1866 "libs.file_util.c"
    libs__file_util__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 319 "file_util.m"
    {
#line 319 "file_util.m"
      libs__file_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 0) = ((MR_Box) (libs__file_util__InstallDir_7));
#line 319 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "file_util.m"
    }
#line 319 "file_util.m"
    {
#line 319 "file_util.m"
      libs__file_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 0) = ((MR_Box) (libs__file_util__FileName_6));
#line 319 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 1) = ((MR_Box) (libs__file_util__V_17_17));
#line 319 "file_util.m"
    }
#line 318 "file_util.m"
    {
#line 318 "file_util.m"
      libs__file_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 0) = ((MR_Box) (libs__file_util__InstallCmd_10));
#line 318 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 1) = ((MR_Box) (libs__file_util__V_16_16));
#line 318 "file_util.m"
    }
#line 318 "file_util.m"
    {
#line 318 "file_util.m"
      libs__file_util__V_13_13 = mercury__list__map_2_f_0(libs__file_util__TypeCtorInfo_19_19, libs__file_util__TypeCtorInfo_19_19, (MR_Word) &libs__file_util_scalar_common_3[0], libs__file_util__V_15_15);
    }
#line 318 "file_util.m"
    {
#line 318 "file_util.m"
      return libs__file_util__Command_8 = mercury__string__join_list_2_f_0((MR_String) "   ", libs__file_util__V_13_13);
    }
#line 310 "file_util.m"
    return libs__file_util__Command_8;
#line 310 "file_util.m"
  }
#line 113 "file_util.m"
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
#line 303 "file_util.m"
  {
#line 303 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 303 "file_util.m"
    MR_Word libs__file_util__OldStream_8;
#line 306 "file_util.m"
    MR_Word libs__file_util__V_9_9;

#line 304 "file_util.m"
    {
#line 304 "file_util.m"
      mercury__io__set_output_stream_4_p_0(libs__file_util__Stream_5, &libs__file_util__OldStream_8);
    }
#line 298 "file_util.m"
    {
#line 298 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "Error: ");
    }
#line 299 "file_util.m"
    {
#line 299 "file_util.m"
      mercury__io__write_string_3_p_0(libs__file_util__ErrorMessage_6);
    }
#line 300 "file_util.m"
    {
#line 300 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 301 "file_util.m"
    {
#line 301 "file_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
#line 306 "file_util.m"
    {
#line 306 "file_util.m"
      mercury__io__set_output_stream_4_p_0(libs__file_util__OldStream_8, &libs__file_util__V_9_9);
    }
#line 303 "file_util.m"
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
#line 297 "file_util.m"
  {
#line 297 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 298 "file_util.m"
    {
#line 298 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "Error: ");
    }
#line 299 "file_util.m"
    {
#line 299 "file_util.m"
      mercury__io__write_string_3_p_0(libs__file_util__ErrorMessage_4);
    }
#line 300 "file_util.m"
    {
#line 300 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 301 "file_util.m"
    {
#line 301 "file_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 301 "file_util.m"
      return;
    }
#line 297 "file_util.m"
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
#line 293 "file_util.m"
  {
#line 293 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 293 "file_util.m"
    if ((libs__file_util__HeadVar__1_1 == (MR_Integer) 0))
#line 295 "file_util.m"
      {
#line 295 "file_util.m"
      }
#line 293 "file_util.m"
    else
#line 294 "file_util.m"
      {
#line 294 "file_util.m"
        mercury__io__flush_output_2_p_0();
#line 294 "file_util.m"
        return;
      }
#line 293 "file_util.m"
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
#line 289 "file_util.m"
  {
#line 289 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 289 "file_util.m"
    if ((libs__file_util__HeadVar__1_1 == (MR_Integer) 0))
#line 291 "file_util.m"
      {
#line 291 "file_util.m"
      }
#line 289 "file_util.m"
    else
#line 290 "file_util.m"
      {
#line 290 "file_util.m"
        mercury__io__write_string_3_p_0(libs__file_util__String_2);
#line 290 "file_util.m"
        return;
      }
#line 289 "file_util.m"
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
#line 285 "file_util.m"
  {
#line 285 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 285 "file_util.m"
    if ((libs__file_util__HeadVar__1_1 == (MR_Integer) 0))
#line 287 "file_util.m"
      {
#line 287 "file_util.m"
      }
#line 285 "file_util.m"
    else
#line 286 "file_util.m"
      {
#line 286 "file_util.m"
        mercury__io__report_stats_2_p_0();
#line 286 "file_util.m"
        return;
      }
#line 285 "file_util.m"
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
#line 268 "file_util.m"
  {
#line 268 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 268 "file_util.m"
    MR_String libs__file_util__InstallNameFlag_7;
#line 268 "file_util.m"
    MR_String libs__file_util__InstallNamePath0_8;
#line 268 "file_util.m"
    MR_String libs__file_util__InstallNamePath_11;
#line 268 "file_util.m"
    MR_String libs__file_util__V_21_21;
#line 268 "file_util.m"
    MR_String libs__file_util__V_22_22;

#line 269 "file_util.m"
    {
#line 269 "file_util.m"
      libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 614, &libs__file_util__InstallNameFlag_7);
    }
#line 271 "file_util.m"
    {
#line 271 "file_util.m"
      libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 615, &libs__file_util__InstallNamePath0_8);
    }
#line 273 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__InstallNamePath0_8, (MR_String) "") == 0);
#line 277 "file_util.m"
    if (libs__file_util__succeeded)
#line 274 "file_util.m"
      {
#line 274 "file_util.m"
        MR_String libs__file_util__InstallPrefix_9;
#line 274 "file_util.m"
        MR_String libs__file_util__GradeDir_10;
#line 274 "file_util.m"
        MR_String libs__file_util__V_15_15;
#line 274 "file_util.m"
        MR_String libs__file_util__V_16_16;
#line 274 "file_util.m"
        MR_String libs__file_util__V_17_17;

#line 274 "file_util.m"
        {
#line 274 "file_util.m"
          libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 628, &libs__file_util__InstallPrefix_9);
        }
#line 275 "file_util.m"
        {
#line 275 "file_util.m"
          libs__handle_options__grade_directory_component_2_p_0(libs__file_util__Globals_4, &libs__file_util__GradeDir_10);
        }
#line 276 "file_util.m"
        {
#line 276 "file_util.m"
          libs__file_util__V_17_17 = mercury__dir__f_slash_2_f_0(libs__file_util__InstallPrefix_9, (MR_String) "lib");
        }
#line 276 "file_util.m"
        {
#line 276 "file_util.m"
          libs__file_util__V_16_16 = mercury__dir__f_slash_2_f_0(libs__file_util__V_17_17, (MR_String) "mercury");
        }
#line 276 "file_util.m"
        {
#line 276 "file_util.m"
          libs__file_util__V_15_15 = mercury__dir__f_slash_2_f_0(libs__file_util__V_16_16, (MR_String) "lib");
        }
#line 276 "file_util.m"
        {
#line 276 "file_util.m"
          libs__file_util__InstallNamePath_11 = mercury__dir__f_slash_2_f_0(libs__file_util__V_15_15, libs__file_util__GradeDir_10);
        }
#line 274 "file_util.m"
      }
#line 277 "file_util.m"
    else
#line 278 "file_util.m"
      libs__file_util__InstallNamePath_11 = libs__file_util__InstallNamePath0_8;
#line 281 "file_util.m"
    {
#line 281 "file_util.m"
      libs__file_util__V_22_22 = libs__options__quote_arg_1_f_0(libs__file_util__InstallNamePath_11);
    }
#line 280 "file_util.m"
    {
#line 280 "file_util.m"
      libs__file_util__V_21_21 = mercury__dir__f_slash_2_f_0(libs__file_util__V_22_22, libs__file_util__OutputFileName_5);
    }
#line 280 "file_util.m"
    {
#line 280 "file_util.m"
      *libs__file_util__InstallNameOpt_6 = mercury__string__f_43_43_2_f_0(libs__file_util__InstallNameFlag_7, libs__file_util__V_21_21);
    }
#line 268 "file_util.m"
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
#line 237 "file_util.m"
  {
#line 237 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 237 "file_util.m"
    MR_Word libs__file_util__Verbose_12;
#line 237 "file_util.m"
    MR_Word libs__file_util__Stats_13;
#line 237 "file_util.m"
    MR_Word libs__file_util__Res_14;

#line 238 "file_util.m"
    {
#line 238 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 44, &libs__file_util__Verbose_12);
    }
#line 239 "file_util.m"
    {
#line 239 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 54, &libs__file_util__Stats_13);
    }
#line 2250 "libs.file_util.c"
    if ((libs__file_util__Verbose_12 == (MR_Integer) 0))
#line 295 "file_util.m"
      {
#line 295 "file_util.m"
      }
#line 2256 "libs.file_util.c"
    else
#line 2258 "libs.file_util.c"
      {
#line 290 "file_util.m"
        {
#line 290 "file_util.m"
          mercury__io__write_string_3_p_0((MR_String) "% Writing to file \140");
        }
#line 290 "file_util.m"
        {
#line 290 "file_util.m"
          mercury__io__write_string_3_p_0(libs__file_util__FileName_8);
        }
#line 290 "file_util.m"
        {
#line 290 "file_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\'...\n");
        }
#line 294 "file_util.m"
        {
#line 294 "file_util.m"
          mercury__io__flush_output_2_p_0();
        }
#line 2280 "libs.file_util.c"
      }
#line 244 "file_util.m"
    {
#line 244 "file_util.m"
      mercury__io__open_output_4_p_0(libs__file_util__FileName_8, &libs__file_util__Res_14);
    }
#line 254 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__Res_14)) == (MR_mktag((MR_Integer) 1))))
#line 255 "file_util.m"
      {
#line 255 "file_util.m"
        MR_String libs__file_util__ErrorMessage_20;
#line 255 "file_util.m"
        MR_Word libs__file_util__V_34_34;
#line 255 "file_util.m"
        MR_Word libs__file_util__V_36_36;

#line 289 "file_util.m"
        if ((libs__file_util__Verbose_12 == (MR_Integer) 0))
#line 291 "file_util.m"
          {
#line 291 "file_util.m"
          }
#line 289 "file_util.m"
        else
#line 290 "file_util.m"
          {
#line 290 "file_util.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 257 "file_util.m"
        {
#line 257 "file_util.m"
          libs__file_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_36_36, 0) = ((MR_Box) (libs__file_util__FileName_8));
#line 257 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__file_util_scalar_common_1[0])));
#line 257 "file_util.m"
        }
#line 257 "file_util.m"
        {
#line 257 "file_util.m"
          libs__file_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_34_34, 0) = ((MR_Box) ((MR_String) "can\'t open file \140"));
#line 257 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_34_34, 1) = ((MR_Box) (libs__file_util__V_36_36));
#line 257 "file_util.m"
        }
#line 257 "file_util.m"
        {
#line 257 "file_util.m"
          mercury__string__append_list_2_p_0(libs__file_util__V_34_34, &libs__file_util__ErrorMessage_20);
        }
#line 259 "file_util.m"
        {
#line 259 "file_util.m"
          libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_20);
        }
#line 260 "file_util.m"
        *libs__file_util__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 255 "file_util.m"
      }
#line 254 "file_util.m"
    else
#line 246 "file_util.m"
      {
#line 246 "file_util.m"
        MR_Word libs__file_util__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Res_14, (MR_Integer) 0)));
#line 246 "file_util.m"
        MR_Word libs__file_util__OutputStream_16;
#line 246 "file_util.m"
        MR_Box libs__file_util__ActionResult_17;
#line 248 "file_util.m"
        void MR_CALL (* libs__file_util__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 248 "file_util.m"
        MR_Box libs__file_util__conv1_STATE_VARIABLE_IO_42_42;
#line 249 "file_util.m"
        MR_Word libs__file_util__V_18_18;

#line 247 "file_util.m"
        {
#line 247 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__FileStream_15, &libs__file_util__OutputStream_16);
        }
#line 248 "file_util.m"
        libs__file_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__file_util__Action_9, (MR_Integer) 1)));
#line 248 "file_util.m"
        {
#line 248 "file_util.m"
          libs__file_util__func_0(((MR_Box) libs__file_util__Action_9), &libs__file_util__ActionResult_17, ((MR_Box) ((MR_Integer) 0)), &libs__file_util__conv1_STATE_VARIABLE_IO_42_42);
        }
#line 249 "file_util.m"
        {
#line 249 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__OutputStream_16, &libs__file_util__V_18_18);
        }
#line 250 "file_util.m"
        {
#line 250 "file_util.m"
          mercury__io__close_output_3_p_0(libs__file_util__FileStream_15);
        }
#line 251 "file_util.m"
        {
#line 251 "file_util.m"
          libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "% done.\n");
        }
#line 252 "file_util.m"
        {
#line 252 "file_util.m"
          libs__file_util__maybe_report_stats_3_p_0(libs__file_util__Stats_13);
        }
#line 253 "file_util.m"
        {
#line 253 "file_util.m"
          MR_Word base;
#line 253 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 253 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 253 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = libs__file_util__ActionResult_17;
#line 253 "file_util.m"
        }
#line 246 "file_util.m"
      }
#line 237 "file_util.m"
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
#line 235 "file_util.m"
  {
#line 235 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 235 "file_util.m"
    MR_Word libs__file_util___Result_11;

#line 235 "file_util.m"
    {
#line 235 "file_util.m"
      libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_52_93_95_48_6_p_0(libs__file_util__Action_8, libs__file_util__Globals_6, libs__file_util__FileName_7, &libs__file_util___Result_11);
    }
#line 235 "file_util.m"
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
#line 183 "file_util.m"
  {
#line 183 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 183 "file_util.m"
    MR_Word libs__file_util__MaybeTime_10;

#line 184 "file_util.m"
    {
#line 184 "file_util.m"
      libs__file_util__do_search_for_file__ho2_6_p_0(libs__file_util__Dirs_6, libs__file_util__FileName_7, &libs__file_util__MaybeTime_10);
    }
#line 188 "file_util.m"
    if ((libs__file_util__MaybeTime_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "file_util.m"
      {
#line 189 "file_util.m"
        MR_String libs__file_util__Msg_12;
#line 189 "file_util.m"
        MR_String libs__file_util__V_18_18;
#line 189 "file_util.m"
        MR_String libs__file_util__V_19_19;
#line 189 "file_util.m"
        MR_String libs__file_util__V_21_21;

#line 190 "file_util.m"
        {
#line 190 "file_util.m"
          libs__file_util__V_21_21 = mercury__string__join_list_2_f_0((MR_String) ", ", libs__file_util__Dirs_6);
        }
#line 190 "file_util.m"
        {
#line 190 "file_util.m"
          libs__file_util__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", libs__file_util__V_21_21);
        }
#line 190 "file_util.m"
        {
#line 190 "file_util.m"
          libs__file_util__V_18_18 = mercury__string__f_43_43_2_f_0(libs__file_util__FileName_7, libs__file_util__V_19_19);
        }
#line 190 "file_util.m"
        {
#line 190 "file_util.m"
          libs__file_util__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", libs__file_util__V_18_18);
        }
#line 192 "file_util.m"
        {
#line 192 "file_util.m"
          MR_Word base;
#line 192 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 192 "file_util.m"
          *libs__file_util__Result_8 = base;
#line 192 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Msg_12));
#line 192 "file_util.m"
        }
#line 189 "file_util.m"
      }
#line 188 "file_util.m"
    else
#line 186 "file_util.m"
      {
#line 186 "file_util.m"
        MR_Word libs__file_util__Time_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeTime_10, (MR_Integer) 0)));

#line 187 "file_util.m"
        {
#line 187 "file_util.m"
          MR_Word base;
#line 187 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 187 "file_util.m"
          *libs__file_util__Result_8 = base;
#line 187 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Time_11));
#line 187 "file_util.m"
        }
#line 186 "file_util.m"
      }
#line 183 "file_util.m"
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
#line 149 "file_util.m"
  {
#line 149 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 149 "file_util.m"
    MR_Word libs__file_util__MaybeDir_12;

#line 150 "file_util.m"
    {
#line 150 "file_util.m"
      libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_p_0(libs__file_util__MaybeOpen_7, libs__file_util__Dirs_8, libs__file_util__FileName_9, &libs__file_util__MaybeDir_12);
    }
#line 155 "file_util.m"
    if ((libs__file_util__MaybeDir_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "file_util.m"
      {
#line 156 "file_util.m"
        MR_String libs__file_util__Msg_14;
#line 156 "file_util.m"
        MR_String libs__file_util__V_20_20;
#line 156 "file_util.m"
        MR_String libs__file_util__V_21_21;
#line 156 "file_util.m"
        MR_String libs__file_util__V_23_23;

#line 157 "file_util.m"
        {
#line 157 "file_util.m"
          libs__file_util__V_23_23 = mercury__string__join_list_2_f_0((MR_String) ", ", libs__file_util__Dirs_8);
        }
#line 157 "file_util.m"
        {
#line 157 "file_util.m"
          libs__file_util__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", libs__file_util__V_23_23);
        }
#line 157 "file_util.m"
        {
#line 157 "file_util.m"
          libs__file_util__V_20_20 = mercury__string__f_43_43_2_f_0(libs__file_util__FileName_9, libs__file_util__V_21_21);
        }
#line 157 "file_util.m"
        {
#line 157 "file_util.m"
          libs__file_util__Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", libs__file_util__V_20_20);
        }
#line 159 "file_util.m"
        {
#line 159 "file_util.m"
          MR_Word base;
#line 159 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 159 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 159 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Msg_14));
#line 159 "file_util.m"
        }
#line 156 "file_util.m"
      }
#line 155 "file_util.m"
    else
#line 153 "file_util.m"
      {
#line 153 "file_util.m"
        MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeDir_12, (MR_Integer) 0)));

#line 154 "file_util.m"
        {
#line 154 "file_util.m"
          MR_Word base;
#line 154 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 154 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 154 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Dir_13));
#line 154 "file_util.m"
        }
#line 153 "file_util.m"
      }
#line 149 "file_util.m"
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
#line 134 "file_util.m"
  {
#line 134 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 134 "file_util.m"
    MR_Word libs__file_util__Result0_12;

#line 135 "file_util.m"
    {
#line 135 "file_util.m"
      libs__file_util__search_for_file_returning_dir_6_p_0(libs__file_util__MaybeOpen_7, libs__file_util__Dirs_8, libs__file_util__FileName_9, &libs__file_util__Result0_12);
    }
#line 144 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__Result0_12)) == (MR_mktag((MR_Integer) 1))))
#line 146 "file_util.m"
      *libs__file_util__Result_10 = libs__file_util__Result0_12;
#line 144 "file_util.m"
    else
#line 137 "file_util.m"
      {
#line 137 "file_util.m"
        MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_12, (MR_Integer) 0)));
#line 137 "file_util.m"
        MR_String libs__file_util__PathName_14;
#line 138 "file_util.m"
        MR_String libs__file_util__V_19_19;

#line 138 "file_util.m"
        {
#line 138 "file_util.m"
          mercury__dir__this_directory_1_p_0(&libs__file_util__V_19_19);
        }
#line 138 "file_util.m"
        libs__file_util__succeeded = (strcmp(libs__file_util__Dir_13, libs__file_util__V_19_19) == 0);
#line 140 "file_util.m"
        if (libs__file_util__succeeded)
#line 139 "file_util.m"
          libs__file_util__PathName_14 = libs__file_util__FileName_9;
#line 140 "file_util.m"
        else
#line 141 "file_util.m"
          {
#line 141 "file_util.m"
            libs__file_util__PathName_14 = mercury__dir__make_path_name_2_f_0(libs__file_util__Dir_13, libs__file_util__FileName_9);
          }
#line 143 "file_util.m"
        {
#line 143 "file_util.m"
          MR_Word base;
#line 143 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 143 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 143 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__PathName_14));
#line 143 "file_util.m"
        }
#line 137 "file_util.m"
      }
#line 134 "file_util.m"
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
