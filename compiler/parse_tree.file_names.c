/*
** Automatically generated from `file_names.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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


/* :- module parse_tree.file_names. */
/* :- implementation. */

/*
INIT mercury__parse_tree__file_names__init
ENDINIT
*/

#include "parse_tree.file_names.mih"


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
#include "library.mih"
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
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 509 "file_names.m"
struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s {
#line 509 "file_names.m"
  MR_Word parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1;
#line 509 "file_names.m"
  MR_String parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2;
#line 511 "file_names.m"
  MR_bool parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded;
#line 576 "file_names.m"
  jmp_buf parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__commit_0;
#line 576 "file_names.m"
  MR_String parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16;
#line 509 "file_names.m"
};


#line 154 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0;

#line 157 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1;

#line 160 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0[2];

#line 163 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0[2];

#line 166 "parse_tree.file_names.c"
static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0[2];

#line 169 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0;

#line 172 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1;

#line 175 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0[2];

#line 178 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0[2];

#line 181 "parse_tree.file_names.c"
static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0[2];

#line 184 "parse_tree.file_names.c"
static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
#line 187 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_1,
#line 189 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2);

#line 192 "parse_tree.file_names.c"
static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
#line 195 "parse_tree.file_names.c"
  MR_Box * parse_tree__file_names__wrapper_arg_1,
#line 197 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2,
#line 199 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_3);

#line 202 "parse_tree.file_names.c"
static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
#line 205 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_1,
#line 207 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2);

#line 210 "parse_tree.file_names.c"
static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
#line 213 "parse_tree.file_names.c"
  MR_Box * parse_tree__file_names__wrapper_arg_1,
#line 215 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2,
#line 217 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_3);

#line 261 "file_names.m"
static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(
#line 261 "file_names.m"
  MR_Word parse_tree__file_names__Globals_11,
#line 261 "file_names.m"
  MR_Word parse_tree__file_names__BaseParentDirs_13,
#line 261 "file_names.m"
  MR_String parse_tree__file_names__BaseName_14,
#line 261 "file_names.m"
  MR_String parse_tree__file_names__Ext_15,
#line 261 "file_names.m"
  MR_Word parse_tree__file_names__Search_16,
#line 261 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_17,
#line 261 "file_names.m"
  MR_String * parse_tree__file_names__FileName_18);

#line 576 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_1(
#line 576 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg);

#line 576 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_2(
#line 576 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg);

#line 576 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_3(
#line 576 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg);

#line 509 "file_names.m"
static MR_bool MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0(
#line 509 "file_names.m"
  MR_Word parse_tree__file_names__Globals_1,
#line 509 "file_names.m"
  MR_String parse_tree__file_names__HeadVar__2_2);

#line 451 "file_names.m"
static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0(
#line 451 "file_names.m"
  MR_Word parse_tree__file_names__Globals_10,
#line 451 "file_names.m"
  MR_Word parse_tree__file_names__SubDirNames_11,
#line 451 "file_names.m"
  MR_Word parse_tree__file_names__Search_12,
#line 451 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_13,
#line 451 "file_names.m"
  MR_String parse_tree__file_names__BaseName_14,
#line 451 "file_names.m"
  MR_String parse_tree__file_names__Ext_15,
#line 451 "file_names.m"
  MR_String * parse_tree__file_names__FileName_16);


static /* final */ const MR_Box parse_tree__file_names_scalar_common_1[1][2];




static /* final */ const MR_Box parse_tree__file_names_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "jmercury")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



#line 315 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0 = {
  (MR_String) "do_create_dirs",
  (MR_Integer) 0
};

#line 321 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1 = {
  (MR_String) "do_not_create_dirs",
  (MR_Integer) 1
};

#line 327 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1
};

#line 333 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1
};

#line 339 "parse_tree.file_names.c"
static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 345 "parse_tree.file_names.c"
const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_create_dirs",
  {
    parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0
  },
  {
    parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0
};

#line 366 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0 = {
  (MR_String) "do_search",
  (MR_Integer) 0
};

#line 372 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1 = {
  (MR_String) "do_not_search",
  (MR_Integer) 1
};

#line 378 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1
};

#line 384 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0
};

#line 390 "parse_tree.file_names.c"
static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 396 "parse_tree.file_names.c"
const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_search_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_search_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_search",
  {
    parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0
  },
  {
    parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0
};

#line 417 "parse_tree.file_names.c"
static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
#line 420 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_1,
#line 422 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2)
#line 424 "parse_tree.file_names.c"
{
#line 426 "parse_tree.file_names.c"
  {
#line 428 "parse_tree.file_names.c"
    MR_bool parse_tree__file_names__succeeded;

#line 431 "parse_tree.file_names.c"
    {
#line 433 "parse_tree.file_names.c"
      parse_tree__file_names__succeeded = parse_tree__file_names____Unify____maybe_create_dirs_0_0(((MR_Word) parse_tree__file_names__wrapper_arg_1), ((MR_Word) parse_tree__file_names__wrapper_arg_2));
    }
#line 436 "parse_tree.file_names.c"
    return parse_tree__file_names__succeeded;
#line 438 "parse_tree.file_names.c"
  }
#line 440 "parse_tree.file_names.c"
}

#line 443 "parse_tree.file_names.c"
static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
#line 446 "parse_tree.file_names.c"
  MR_Box * parse_tree__file_names__wrapper_arg_1,
#line 448 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2,
#line 450 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_3)
#line 452 "parse_tree.file_names.c"
{
#line 454 "parse_tree.file_names.c"
  {
#line 456 "parse_tree.file_names.c"
    MR_Word parse_tree__file_names__conv0_HeadVar__1_1;

#line 459 "parse_tree.file_names.c"
    {
#line 461 "parse_tree.file_names.c"
      parse_tree__file_names____Compare____maybe_create_dirs_0_0(&parse_tree__file_names__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_names__wrapper_arg_2), ((MR_Word) parse_tree__file_names__wrapper_arg_3));
    }
#line 464 "parse_tree.file_names.c"
    *parse_tree__file_names__wrapper_arg_1 = ((MR_Box) (parse_tree__file_names__conv0_HeadVar__1_1));
#line 466 "parse_tree.file_names.c"
  }
#line 468 "parse_tree.file_names.c"
}

#line 471 "parse_tree.file_names.c"
static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
#line 474 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_1,
#line 476 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2)
#line 478 "parse_tree.file_names.c"
{
#line 480 "parse_tree.file_names.c"
  {
#line 482 "parse_tree.file_names.c"
    MR_bool parse_tree__file_names__succeeded;

#line 485 "parse_tree.file_names.c"
    {
#line 487 "parse_tree.file_names.c"
      parse_tree__file_names__succeeded = parse_tree__file_names____Unify____maybe_search_0_0(((MR_Word) parse_tree__file_names__wrapper_arg_1), ((MR_Word) parse_tree__file_names__wrapper_arg_2));
    }
#line 490 "parse_tree.file_names.c"
    return parse_tree__file_names__succeeded;
#line 492 "parse_tree.file_names.c"
  }
#line 494 "parse_tree.file_names.c"
}

#line 497 "parse_tree.file_names.c"
static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
#line 500 "parse_tree.file_names.c"
  MR_Box * parse_tree__file_names__wrapper_arg_1,
#line 502 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2,
#line 504 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_3)
#line 506 "parse_tree.file_names.c"
{
#line 508 "parse_tree.file_names.c"
  {
#line 510 "parse_tree.file_names.c"
    MR_Word parse_tree__file_names__conv0_HeadVar__1_1;

#line 513 "parse_tree.file_names.c"
    {
#line 515 "parse_tree.file_names.c"
      parse_tree__file_names____Compare____maybe_search_0_0(&parse_tree__file_names__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_names__wrapper_arg_2), ((MR_Word) parse_tree__file_names__wrapper_arg_3));
    }
#line 518 "parse_tree.file_names.c"
    *parse_tree__file_names__wrapper_arg_1 = ((MR_Box) (parse_tree__file_names__conv0_HeadVar__1_1));
#line 520 "parse_tree.file_names.c"
  }
#line 522 "parse_tree.file_names.c"
}

#line 261 "file_names.m"
static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(
#line 261 "file_names.m"
  MR_Word parse_tree__file_names__Globals_11,
#line 261 "file_names.m"
  MR_Word parse_tree__file_names__BaseParentDirs_13,
#line 261 "file_names.m"
  MR_String parse_tree__file_names__BaseName_14,
#line 261 "file_names.m"
  MR_String parse_tree__file_names__Ext_15,
#line 261 "file_names.m"
  MR_Word parse_tree__file_names__Search_16,
#line 261 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_17,
#line 261 "file_names.m"
  MR_String * parse_tree__file_names__FileName_18)
#line 261 "file_names.m"
{
#line 266 "file_names.m"
  {
#line 266 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 266 "file_names.m"
    MR_Word parse_tree__file_names__UseSubdirs_20;
#line 266 "file_names.m"
    MR_Word parse_tree__file_names__UseGradeSubdirs_21;
#line 266 "file_names.m"
    MR_String parse_tree__file_names__LibExt_22;
#line 266 "file_names.m"
    MR_String parse_tree__file_names__SharedLibExt_23;

#line 267 "file_names.m"
    {
#line 267 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 644, &parse_tree__file_names__UseSubdirs_20);
    }
#line 268 "file_names.m"
    {
#line 268 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 645, &parse_tree__file_names__UseGradeSubdirs_21);
    }
#line 269 "file_names.m"
    {
#line 269 "file_names.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 573, &parse_tree__file_names__LibExt_22);
    }
#line 270 "file_names.m"
    {
#line 270 "file_names.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 572, &parse_tree__file_names__SharedLibExt_23);
    }
#line 281 "file_names.m"
    parse_tree__file_names__succeeded = (parse_tree__file_names__Search_16 == (MR_Integer) 0);
#line 281 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 283 "file_names.m"
      {
#line 283 "file_names.m"
        if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".hrl") == 0))
#line 284 "file_names.m"
          parse_tree__file_names__succeeded = MR_TRUE;
#line 283 "file_names.m"
        else
#line 283 "file_names.m"
          if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".mih") == 0))
#line 282 "file_names.m"
            parse_tree__file_names__succeeded = MR_TRUE;
#line 283 "file_names.m"
          else
#line 283 "file_names.m"
            if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".hrl.tmp") == 0))
#line 285 "file_names.m"
              parse_tree__file_names__succeeded = MR_TRUE;
#line 283 "file_names.m"
            else
#line 283 "file_names.m"
              if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".mih.tmp") == 0))
#line 283 "file_names.m"
                parse_tree__file_names__succeeded = MR_TRUE;
#line 283 "file_names.m"
              else
#line 283 "file_names.m"
                parse_tree__file_names__succeeded = MR_FALSE;
#line 283 "file_names.m"
      }
#line 289 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 288 "file_names.m"
      *parse_tree__file_names__FileName_18 = parse_tree__file_names__BaseName_14;
#line 289 "file_names.m"
    else
#line 297 "file_names.m"
      {
#line 290 "file_names.m"
        parse_tree__file_names__succeeded = (parse_tree__file_names__UseSubdirs_20 == (MR_Integer) 0);
#line 297 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 456 "file_names.m"
          {
#line 456 "file_names.m"
            MR_Word parse_tree__file_names__UseGradeSubdirs_65;
#line 456 "file_names.m"
            MR_Word parse_tree__file_names__UseSubdirs_66;
#line 456 "file_names.m"
            MR_Word parse_tree__file_names__DirComponents_69;

#line 457 "file_names.m"
            {
#line 457 "file_names.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 645, &parse_tree__file_names__UseGradeSubdirs_65);
            }
#line 458 "file_names.m"
            {
#line 458 "file_names.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 644, &parse_tree__file_names__UseSubdirs_66);
            }
#line 460 "file_names.m"
            parse_tree__file_names__succeeded = (parse_tree__file_names__UseGradeSubdirs_65 == (MR_Integer) 1);
#line 460 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 460 "file_names.m"
              {
#line 461 "file_names.m"
                {
#line 461 "file_names.m"
                  parse_tree__file_names__succeeded = parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0(parse_tree__file_names__Globals_11, parse_tree__file_names__Ext_15);
                }
#line 460 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 460 "file_names.m"
                  {
#line 468 "file_names.m"
                    parse_tree__file_names__succeeded = (parse_tree__file_names__Search_16 == (MR_Integer) 0);
#line 468 "file_names.m"
                    if (parse_tree__file_names__succeeded)
#line 470 "file_names.m"
                      {
#line 470 "file_names.m"
                        if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".opt") == 0))
#line 469 "file_names.m"
                          parse_tree__file_names__succeeded = MR_TRUE;
#line 470 "file_names.m"
                        else
#line 470 "file_names.m"
                          if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".imdg") == 0))
#line 472 "file_names.m"
                            parse_tree__file_names__succeeded = MR_TRUE;
#line 470 "file_names.m"
                          else
#line 470 "file_names.m"
                            if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".request") == 0))
#line 473 "file_names.m"
                              parse_tree__file_names__succeeded = MR_TRUE;
#line 470 "file_names.m"
                            else
#line 470 "file_names.m"
                              if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".analysis") == 0))
#line 471 "file_names.m"
                                parse_tree__file_names__succeeded = MR_TRUE;
#line 470 "file_names.m"
                              else
#line 470 "file_names.m"
                                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".trans_opt") == 0))
#line 470 "file_names.m"
                                  parse_tree__file_names__succeeded = MR_TRUE;
#line 470 "file_names.m"
                                else
#line 470 "file_names.m"
                                  parse_tree__file_names__succeeded = MR_FALSE;
#line 470 "file_names.m"
                      }
#line 467 "file_names.m"
                    parse_tree__file_names__succeeded = !(parse_tree__file_names__succeeded);
#line 460 "file_names.m"
                  }
#line 460 "file_names.m"
              }
#line 486 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 477 "file_names.m"
              {
#line 477 "file_names.m"
                MR_String parse_tree__file_names__Grade_67;
#line 477 "file_names.m"
                MR_String parse_tree__file_names__TargetArch_68;
#line 477 "file_names.m"
                MR_Word parse_tree__file_names__V_79_79;
#line 477 "file_names.m"
                MR_Word parse_tree__file_names__V_80_80;
#line 477 "file_names.m"
                MR_Word parse_tree__file_names__V_81_81;

#line 477 "file_names.m"
                {
#line 477 "file_names.m"
                  libs__handle_options__grade_directory_component_2_p_0(parse_tree__file_names__Globals_11, &parse_tree__file_names__Grade_67);
                }
#line 478 "file_names.m"
                {
#line 478 "file_names.m"
                  libs__globals__lookup_string_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 663, &parse_tree__file_names__TargetArch_68);
                }
#line 485 "file_names.m"
                {
#line 485 "file_names.m"
                  parse_tree__file_names__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_81_81, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 485 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_81_81, 1) = ((MR_Box) (parse_tree__file_names__BaseParentDirs_13));
#line 485 "file_names.m"
                }
#line 485 "file_names.m"
                {
#line 485 "file_names.m"
                  parse_tree__file_names__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_80_80, 0) = ((MR_Box) (parse_tree__file_names__TargetArch_68));
#line 485 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_80_80, 1) = ((MR_Box) (parse_tree__file_names__V_81_81));
#line 485 "file_names.m"
                }
#line 485 "file_names.m"
                {
#line 485 "file_names.m"
                  parse_tree__file_names__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_79_79, 0) = ((MR_Box) (parse_tree__file_names__Grade_67));
#line 485 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_79_79, 1) = ((MR_Box) (parse_tree__file_names__V_80_80));
#line 485 "file_names.m"
                }
#line 485 "file_names.m"
                {
#line 485 "file_names.m"
                  parse_tree__file_names__DirComponents_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_69, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 485 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_69, 1) = ((MR_Box) (parse_tree__file_names__V_79_79));
#line 485 "file_names.m"
                }
#line 477 "file_names.m"
              }
#line 486 "file_names.m"
            else
#line 490 "file_names.m"
              {
#line 487 "file_names.m"
                parse_tree__file_names__succeeded = (parse_tree__file_names__UseSubdirs_66 == (MR_Integer) 1);
#line 490 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 489 "file_names.m"
                  {
#line 489 "file_names.m"
                    {
#line 489 "file_names.m"
                      parse_tree__file_names__DirComponents_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "file_names.m"
                      MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_69, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 489 "file_names.m"
                      MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_69, 1) = ((MR_Box) (parse_tree__file_names__BaseParentDirs_13));
#line 489 "file_names.m"
                    }
#line 489 "file_names.m"
                  }
#line 490 "file_names.m"
                else
#line 491 "file_names.m"
                  parse_tree__file_names__DirComponents_69 = parse_tree__file_names__BaseParentDirs_13;
#line 490 "file_names.m"
              }
#line 496 "file_names.m"
            if ((parse_tree__file_names__DirComponents_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "file_names.m"
              *parse_tree__file_names__FileName_18 = parse_tree__file_names__BaseName_14;
#line 496 "file_names.m"
            else
#line 497 "file_names.m"
              {
#line 497 "file_names.m"
                MR_Word parse_tree__file_names__Components_74;
#line 497 "file_names.m"
                MR_Word parse_tree__file_names__V_85_85;

#line 502 "file_names.m"
                if ((parse_tree__file_names__MkDir_17 == (MR_Integer) 0))
#line 499 "file_names.m"
                  {
#line 499 "file_names.m"
                    MR_String parse_tree__file_names__DirName_72;
#line 501 "file_names.m"
                    MR_Word parse_tree__file_names__V_73_73;

#line 500 "file_names.m"
                    {
#line 500 "file_names.m"
                      parse_tree__file_names__DirName_72 = mercury__dir__relative_path_name_from_components_1_f_0(parse_tree__file_names__DirComponents_69);
                    }
#line 501 "file_names.m"
                    {
#line 501 "file_names.m"
                      mercury__dir__make_directory_4_p_0(parse_tree__file_names__DirName_72, &parse_tree__file_names__V_73_73);
                    }
#line 499 "file_names.m"
                  }
#line 502 "file_names.m"
                else
#line 503 "file_names.m"
                  {
#line 503 "file_names.m"
                  }
#line 505 "file_names.m"
                {
#line 505 "file_names.m"
                  parse_tree__file_names__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_85_85, 0) = ((MR_Box) (parse_tree__file_names__BaseName_14));
#line 505 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "file_names.m"
                }
#line 505 "file_names.m"
                {
#line 505 "file_names.m"
                  parse_tree__file_names__Components_74 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__file_names__DirComponents_69, parse_tree__file_names__V_85_85);
                }
#line 506 "file_names.m"
                {
#line 506 "file_names.m"
                  *parse_tree__file_names__FileName_18 = mercury__dir__relative_path_name_from_components_1_f_0(parse_tree__file_names__Components_74);
                }
#line 497 "file_names.m"
              }
#line 456 "file_names.m"
          }
#line 297 "file_names.m"
        else
#line 373 "file_names.m"
          {
#line 303 "file_names.m"
            parse_tree__file_names__succeeded = (parse_tree__file_names__UseGradeSubdirs_21 == (MR_Integer) 1);
#line 303 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 304 "file_names.m"
              {
#line 304 "file_names.m"
                parse_tree__file_names__succeeded = parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0(parse_tree__file_names__Globals_11, parse_tree__file_names__Ext_15);
              }
#line 302 "file_names.m"
            parse_tree__file_names__succeeded = !(parse_tree__file_names__succeeded);
#line 305 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 305 "file_names.m"
              {
#line 364 "file_names.m"
                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) "") == 0))
#line 308 "file_names.m"
                  parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                else
#line 364 "file_names.m"
                  if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".a") == 0))
#line 314 "file_names.m"
                    parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                  else
#line 364 "file_names.m"
                    if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".\044A") == 0))
#line 315 "file_names.m"
                      parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                    else
#line 364 "file_names.m"
                      if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".mh") == 0))
#line 330 "file_names.m"
                        parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                      else
#line 364 "file_names.m"
                        if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".so") == 0))
#line 316 "file_names.m"
                          parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                        else
#line 364 "file_names.m"
                          if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".bat") == 0))
#line 309 "file_names.m"
                            parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                          else
#line 364 "file_names.m"
                            if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dll") == 0))
#line 311 "file_names.m"
                              parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                            else
#line 364 "file_names.m"
                              if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".err") == 0))
#line 335 "file_names.m"
                                parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                              else
#line 364 "file_names.m"
                                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".exe") == 0))
#line 310 "file_names.m"
                                  parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                else
#line 364 "file_names.m"
                                  if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".ils") == 0))
#line 352 "file_names.m"
                                    parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                  else
#line 364 "file_names.m"
                                    if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".jar") == 0))
#line 319 "file_names.m"
                                      parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                    else
#line 364 "file_names.m"
                                      if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".erls") == 0))
#line 355 "file_names.m"
                                        parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                      else
#line 364 "file_names.m"
                                        if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".init") == 0))
#line 321 "file_names.m"
                                          parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                        else
#line 364 "file_names.m"
                                          if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".ints") == 0))
#line 350 "file_names.m"
                                            parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                          else
#line 364 "file_names.m"
                                            if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".opts") == 0))
#line 357 "file_names.m"
                                              parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                            else
#line 364 "file_names.m"
                                              if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".ugly") == 0))
#line 336 "file_names.m"
                                                parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                              else
#line 364 "file_names.m"
                                                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".beams") == 0))
#line 364 "file_names.m"
                                                  parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                else
#line 364 "file_names.m"
                                                  if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".check") == 0))
#line 349 "file_names.m"
                                                    parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                  else
#line 364 "file_names.m"
                                                    if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".clean") == 0))
#line 342 "file_names.m"
                                                      parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                    else
#line 364 "file_names.m"
                                                      if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dylib") == 0))
#line 317 "file_names.m"
                                                        parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                      else
#line 364 "file_names.m"
                                                        if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".int3s") == 0))
#line 351 "file_names.m"
                                                          parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                        else
#line 364 "file_names.m"
                                                          if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".javas") == 0))
#line 353 "file_names.m"
                                                            parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                          else
#line 364 "file_names.m"
                                                            if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".order") == 0))
#line 340 "file_names.m"
                                                              parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                            else
#line 364 "file_names.m"
                                                              if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".depend") == 0))
#line 344 "file_names.m"
                                                                parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                              else
#line 364 "file_names.m"
                                                                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".mh.tmp") == 0))
#line 334 "file_names.m"
                                                                  parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                else
#line 364 "file_names.m"
                                                                  if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".classes") == 0))
#line 354 "file_names.m"
                                                                    parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                  else
#line 364 "file_names.m"
                                                                    if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".all_ints") == 0))
#line 359 "file_names.m"
                                                                      parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                    else
#line 364 "file_names.m"
                                                                      if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".all_opts") == 0))
#line 361 "file_names.m"
                                                                        parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                      else
#line 364 "file_names.m"
                                                                        if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".init.tmp") == 0))
#line 325 "file_names.m"
                                                                          parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                        else
#line 364 "file_names.m"
                                                                          if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".all_int3s") == 0))
#line 360 "file_names.m"
                                                                            parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                          else
#line 364 "file_names.m"
                                                                            if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".hlds_dump") == 0))
#line 337 "file_names.m"
                                                                              parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                            else
#line 364 "file_names.m"
                                                                              if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".mlds_dump") == 0))
#line 338 "file_names.m"
                                                                                parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                              else
#line 364 "file_names.m"
                                                                                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".realclean") == 0))
#line 343 "file_names.m"
                                                                                  parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                                else
#line 364 "file_names.m"
                                                                                  if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".trans_opts") == 0))
#line 358 "file_names.m"
                                                                                    parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                                  else
#line 364 "file_names.m"
                                                                                    if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".install_hdrs") == 0))
#line 347 "file_names.m"
                                                                                      parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                                    else
#line 364 "file_names.m"
                                                                                      if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".install_ints") == 0))
#line 345 "file_names.m"
                                                                                        parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                                      else
#line 364 "file_names.m"
                                                                                        if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".install_opts") == 0))
#line 346 "file_names.m"
                                                                                          parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                                        else
#line 364 "file_names.m"
                                                                                          if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".all_trans_opts") == 0))
#line 362 "file_names.m"
                                                                                            parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                                          else
#line 364 "file_names.m"
                                                                                            if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dependency_graph") == 0))
#line 339 "file_names.m"
                                                                                              parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                                            else
#line 364 "file_names.m"
                                                                                              if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".install_grade_hdrs") == 0))
#line 348 "file_names.m"
                                                                                                parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                                              else
#line 364 "file_names.m"
                                                                                                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".\044(EXT_FOR_SHARED_LIB)") == 0))
#line 318 "file_names.m"
                                                                                                  parse_tree__file_names__succeeded = MR_TRUE;
#line 364 "file_names.m"
                                                                                                else
#line 364 "file_names.m"
                                                                                                  parse_tree__file_names__succeeded = MR_FALSE;
#line 364 "file_names.m"
                if (!(parse_tree__file_names__succeeded))
#line 364 "file_names.m"
                  {
#line 368 "file_names.m"
                    {
#line 368 "file_names.m"
                      parse_tree__file_names__succeeded = mercury__string__prefix_2_p_0(parse_tree__file_names__Ext_15, (MR_String) ".mih_dump");
                    }
#line 364 "file_names.m"
                    if (!(parse_tree__file_names__succeeded))
#line 367 "file_names.m"
                      {
#line 367 "file_names.m"
                        {
#line 367 "file_names.m"
                          parse_tree__file_names__succeeded = mercury__string__prefix_2_p_0(parse_tree__file_names__Ext_15, (MR_String) ".c_dump");
                        }
#line 367 "file_names.m"
                      }
#line 364 "file_names.m"
                  }
#line 305 "file_names.m"
              }
#line 373 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 372 "file_names.m"
              *parse_tree__file_names__FileName_18 = parse_tree__file_names__BaseName_14;
#line 373 "file_names.m"
            else
#line 436 "file_names.m"
              {
#line 436 "file_names.m"
                MR_String parse_tree__file_names__SubDirName_24;
#line 436 "file_names.m"
                MR_Word parse_tree__file_names__V_49_49;

#line 378 "file_names.m"
                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dir/*.o") == 0))
#line 377 "file_names.m"
                  parse_tree__file_names__succeeded = MR_TRUE;
#line 378 "file_names.m"
                else
#line 378 "file_names.m"
                  if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dir/*.\044O") == 0))
#line 378 "file_names.m"
                    parse_tree__file_names__succeeded = MR_TRUE;
#line 378 "file_names.m"
                  else
#line 378 "file_names.m"
                    parse_tree__file_names__succeeded = MR_FALSE;
#line 382 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 381 "file_names.m"
                  parse_tree__file_names__SubDirName_24 = (MR_String) "dirs";
#line 382 "file_names.m"
                else
#line 398 "file_names.m"
                  {
#line 386 "file_names.m"
                    if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".o") == 0))
#line 385 "file_names.m"
                      parse_tree__file_names__succeeded = MR_TRUE;
#line 386 "file_names.m"
                    else
#line 386 "file_names.m"
                      if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".\044O") == 0))
#line 386 "file_names.m"
                        parse_tree__file_names__succeeded = MR_TRUE;
#line 386 "file_names.m"
                      else
#line 386 "file_names.m"
                        if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".pic_o") == 0))
#line 388 "file_names.m"
                          parse_tree__file_names__succeeded = MR_TRUE;
#line 386 "file_names.m"
                        else
#line 386 "file_names.m"
                          if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".lpic_o") == 0))
#line 387 "file_names.m"
                            parse_tree__file_names__succeeded = MR_TRUE;
#line 386 "file_names.m"
                          else
#line 386 "file_names.m"
                            if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) "_init.o") == 0))
#line 390 "file_names.m"
                              parse_tree__file_names__succeeded = MR_TRUE;
#line 386 "file_names.m"
                            else
#line 386 "file_names.m"
                              if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) "_init.\044O") == 0))
#line 391 "file_names.m"
                                parse_tree__file_names__succeeded = MR_TRUE;
#line 386 "file_names.m"
                              else
#line 386 "file_names.m"
                                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) "_init.pic_o") == 0))
#line 393 "file_names.m"
                                  parse_tree__file_names__succeeded = MR_TRUE;
#line 386 "file_names.m"
                                else
#line 386 "file_names.m"
                                  if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) "_init.lpic_o") == 0))
#line 392 "file_names.m"
                                    parse_tree__file_names__succeeded = MR_TRUE;
#line 386 "file_names.m"
                                  else
#line 386 "file_names.m"
                                    if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) "\044(EXT_FOR_PIC_OBJECTS)") == 0))
#line 389 "file_names.m"
                                      parse_tree__file_names__succeeded = MR_TRUE;
#line 386 "file_names.m"
                                    else
#line 386 "file_names.m"
                                      if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) "_init.\044(EXT_FOR_PIC_OBJECTS)") == 0))
#line 394 "file_names.m"
                                        parse_tree__file_names__succeeded = MR_TRUE;
#line 386 "file_names.m"
                                      else
#line 386 "file_names.m"
                                        parse_tree__file_names__succeeded = MR_FALSE;
#line 398 "file_names.m"
                    if (parse_tree__file_names__succeeded)
#line 397 "file_names.m"
                      parse_tree__file_names__SubDirName_24 = (MR_String) "os";
#line 398 "file_names.m"
                    else
#line 404 "file_names.m"
                      {
#line 404 "file_names.m"
                        MR_String parse_tree__file_names__ExtName_25;

#line 401 "file_names.m"
                        {
#line 401 "file_names.m"
                          parse_tree__file_names__succeeded = mercury__string__append_3_p_1((MR_String) "_init.", &parse_tree__file_names__ExtName_25, parse_tree__file_names__Ext_15);
                        }
#line 404 "file_names.m"
                        if (parse_tree__file_names__succeeded)
#line 403 "file_names.m"
                          {
#line 403 "file_names.m"
                            {
#line 403 "file_names.m"
                              mercury__string__append_3_p_2(parse_tree__file_names__ExtName_25, (MR_String) "s", &parse_tree__file_names__SubDirName_24);
                            }
#line 403 "file_names.m"
                          }
#line 404 "file_names.m"
                        else
#line 411 "file_names.m"
                          {
#line 411 "file_names.m"
                            MR_String parse_tree__file_names__ExtName_54;
#line 407 "file_names.m"
                            MR_String parse_tree__file_names__ExtName0_26;
#line 407 "file_names.m"
                            MR_String parse_tree__file_names__V_39_39;

#line 407 "file_names.m"
                            {
#line 407 "file_names.m"
                              parse_tree__file_names__succeeded = mercury__string__append_3_p_1((MR_String) ".", &parse_tree__file_names__ExtName0_26, parse_tree__file_names__Ext_15);
                            }
#line 407 "file_names.m"
                            if (parse_tree__file_names__succeeded)
#line 407 "file_names.m"
                              {
#line 408 "file_names.m"
                                parse_tree__file_names__V_39_39 = (MR_String) ".tmp";
#line 408 "file_names.m"
                                {
#line 408 "file_names.m"
                                  parse_tree__file_names__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__file_names__ExtName0_26, parse_tree__file_names__V_39_39, &parse_tree__file_names__ExtName_54);
                                }
#line 407 "file_names.m"
                              }
#line 411 "file_names.m"
                            if (parse_tree__file_names__succeeded)
#line 410 "file_names.m"
                              {
#line 410 "file_names.m"
                                {
#line 410 "file_names.m"
                                  mercury__string__append_3_p_2(parse_tree__file_names__ExtName_54, (MR_String) "s", &parse_tree__file_names__SubDirName_24);
                                }
#line 410 "file_names.m"
                              }
#line 411 "file_names.m"
                            else
#line 417 "file_names.m"
                              {
#line 414 "file_names.m"
                                parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dv") == 0);
#line 417 "file_names.m"
                                if (parse_tree__file_names__succeeded)
#line 416 "file_names.m"
                                  parse_tree__file_names__SubDirName_24 = (MR_String) "deps";
#line 417 "file_names.m"
                                else
#line 424 "file_names.m"
                                  {
#line 419 "file_names.m"
                                    parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_15, parse_tree__file_names__LibExt_22) == 0);
#line 420 "file_names.m"
                                    if (!(parse_tree__file_names__succeeded))
#line 420 "file_names.m"
                                      parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_15, parse_tree__file_names__SharedLibExt_23) == 0);
#line 424 "file_names.m"
                                    if (parse_tree__file_names__succeeded)
#line 423 "file_names.m"
                                      parse_tree__file_names__SubDirName_24 = (MR_String) "lib";
#line 424 "file_names.m"
                                    else
#line 429 "file_names.m"
                                      {
#line 429 "file_names.m"
                                        MR_String parse_tree__file_names__ExtName_51;

#line 426 "file_names.m"
                                        {
#line 426 "file_names.m"
                                          parse_tree__file_names__succeeded = mercury__string__append_3_p_1((MR_String) ".", &parse_tree__file_names__ExtName_51, parse_tree__file_names__Ext_15);
                                        }
#line 429 "file_names.m"
                                        if (parse_tree__file_names__succeeded)
#line 428 "file_names.m"
                                          {
#line 428 "file_names.m"
                                            {
#line 428 "file_names.m"
                                              mercury__string__append_3_p_2(parse_tree__file_names__ExtName_51, (MR_String) "s", &parse_tree__file_names__SubDirName_24);
                                            }
#line 428 "file_names.m"
                                          }
#line 429 "file_names.m"
                                        else
#line 434 "file_names.m"
                                          {
#line 431 "file_names.m"
                                            parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_15, (MR_String) "") == 0);
#line 434 "file_names.m"
                                            if (parse_tree__file_names__succeeded)
#line 433 "file_names.m"
                                              parse_tree__file_names__SubDirName_24 = (MR_String) "bin";
#line 434 "file_names.m"
                                            else
#line 435 "file_names.m"
                                              {
#line 435 "file_names.m"
                                                MR_String parse_tree__file_names__V_45_45;
#line 435 "file_names.m"
                                                MR_String parse_tree__file_names__V_47_47;

#line 435 "file_names.m"
                                                {
#line 435 "file_names.m"
                                                  parse_tree__file_names__V_47_47 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__Ext_15, (MR_String) "\'");
                                                }
#line 435 "file_names.m"
                                                {
#line 435 "file_names.m"
                                                  parse_tree__file_names__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "unknown extension \140", parse_tree__file_names__V_47_47);
                                                }
#line 435 "file_names.m"
                                                {
#line 435 "file_names.m"
                                                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.file_names", (MR_String) "predicate \140parse_tree.file_names.choose_file_name\'/10", parse_tree__file_names__V_45_45);
#line 435 "file_names.m"
                                                  return;
                                                }
#line 435 "file_names.m"
                                              }
#line 434 "file_names.m"
                                          }
#line 429 "file_names.m"
                                      }
#line 424 "file_names.m"
                                  }
#line 417 "file_names.m"
                              }
#line 411 "file_names.m"
                          }
#line 404 "file_names.m"
                      }
#line 398 "file_names.m"
                  }
#line 438 "file_names.m"
                {
#line 438 "file_names.m"
                  parse_tree__file_names__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_49_49, 0) = ((MR_Box) (parse_tree__file_names__SubDirName_24));
#line 438 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_49_49, 1) = ((MR_Box) (parse_tree__file_names__BaseParentDirs_13));
#line 438 "file_names.m"
                }
#line 438 "file_names.m"
                {
#line 438 "file_names.m"
                  parse_tree__file_names__make_file_name_9_p_0(parse_tree__file_names__Globals_11, parse_tree__file_names__V_49_49, parse_tree__file_names__Search_16, parse_tree__file_names__MkDir_17, parse_tree__file_names__BaseName_14, parse_tree__file_names__Ext_15, parse_tree__file_names__FileName_18);
#line 438 "file_names.m"
                  return;
                }
#line 436 "file_names.m"
              }
#line 373 "file_names.m"
          }
#line 297 "file_names.m"
      }
#line 266 "file_names.m"
  }
#line 261 "file_names.m"
}

#line 115 "file_names.m"
void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
#line 115 "file_names.m"
  MR_Word parse_tree__file_names__Globals_9,
#line 115 "file_names.m"
  MR_String parse_tree__file_names__ExtraLinkObjName_11,
#line 115 "file_names.m"
  MR_String parse_tree__file_names__Ext_12,
#line 115 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_13,
#line 115 "file_names.m"
  MR_String * parse_tree__file_names__FileName_14)
#line 115 "file_names.m"
{
#line 250 "file_names.m"
  {
#line 250 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 250 "file_names.m"
    MR_String parse_tree__file_names__BaseName_16;

#line 251 "file_names.m"
    {
#line 251 "file_names.m"
      parse_tree__file_names__BaseName_16 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__ExtraLinkObjName_11, parse_tree__file_names__Ext_12);
    }
#line 252 "file_names.m"
    {
#line 252 "file_names.m"
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_16, parse_tree__file_names__Ext_12, (MR_Integer) 1, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
#line 252 "file_names.m"
      return;
    }
#line 250 "file_names.m"
  }
#line 115 "file_names.m"
}

#line 105 "file_names.m"
void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
#line 105 "file_names.m"
  MR_Word parse_tree__file_names__Globals_9,
#line 105 "file_names.m"
  MR_String parse_tree__file_names__FactTableFileName_11,
#line 105 "file_names.m"
  MR_String parse_tree__file_names__Ext_12,
#line 105 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_13,
#line 105 "file_names.m"
  MR_String * parse_tree__file_names__FileName_14)
#line 105 "file_names.m"
{
#line 250 "file_names.m"
  {
#line 250 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 250 "file_names.m"
    MR_String parse_tree__file_names__BaseName_28;

#line 251 "file_names.m"
    {
#line 251 "file_names.m"
      parse_tree__file_names__BaseName_28 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__FactTableFileName_11, parse_tree__file_names__Ext_12);
    }
#line 252 "file_names.m"
    {
#line 252 "file_names.m"
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_28, parse_tree__file_names__Ext_12, (MR_Integer) 1, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
#line 252 "file_names.m"
      return;
    }
#line 250 "file_names.m"
  }
#line 105 "file_names.m"
}

#line 86 "file_names.m"
void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0(
#line 86 "file_names.m"
  MR_Word * parse_tree__file_names__HeadVar__1_1,
#line 86 "file_names.m"
  MR_Word parse_tree__file_names__HeadVar__2_2,
#line 86 "file_names.m"
  MR_Word parse_tree__file_names__HeadVar__3_3)
#line 86 "file_names.m"
{
#line 86 "file_names.m"
  {
#line 86 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 86 "file_names.m"
    MR_Integer parse_tree__file_names__Cast_HeadVar1_4 = (MR_Integer) parse_tree__file_names__HeadVar__2_2;
#line 86 "file_names.m"
    MR_Integer parse_tree__file_names__Cast_HeadVar2_5 = (MR_Integer) parse_tree__file_names__HeadVar__3_3;

#line 86 "file_names.m"
    {
#line 86 "file_names.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_names__HeadVar__1_1, parse_tree__file_names__Cast_HeadVar1_4, parse_tree__file_names__Cast_HeadVar2_5);
#line 86 "file_names.m"
      return;
    }
#line 86 "file_names.m"
  }
#line 86 "file_names.m"
}

#line 86 "file_names.m"
MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0(
#line 86 "file_names.m"
  MR_Word parse_tree__file_names__HeadVar__2_1,
#line 86 "file_names.m"
  MR_Word parse_tree__file_names__HeadVar__2_2)
#line 86 "file_names.m"
{
#line 1563 "parse_tree.file_names.c"
  {
#line 1565 "parse_tree.file_names.c"
    MR_bool parse_tree__file_names__succeeded = (parse_tree__file_names__HeadVar__2_1 == parse_tree__file_names__HeadVar__2_2);

#line 1568 "parse_tree.file_names.c"
    return parse_tree__file_names__succeeded;
#line 1570 "parse_tree.file_names.c"
  }
#line 86 "file_names.m"
}

#line 40 "file_names.m"
void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0(
#line 40 "file_names.m"
  MR_Word * parse_tree__file_names__HeadVar__1_1,
#line 40 "file_names.m"
  MR_Word parse_tree__file_names__HeadVar__2_2,
#line 40 "file_names.m"
  MR_Word parse_tree__file_names__HeadVar__3_3)
#line 40 "file_names.m"
{
#line 40 "file_names.m"
  {
#line 40 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 40 "file_names.m"
    MR_Integer parse_tree__file_names__Cast_HeadVar1_4 = (MR_Integer) parse_tree__file_names__HeadVar__2_2;
#line 40 "file_names.m"
    MR_Integer parse_tree__file_names__Cast_HeadVar2_5 = (MR_Integer) parse_tree__file_names__HeadVar__3_3;

#line 40 "file_names.m"
    {
#line 40 "file_names.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_names__HeadVar__1_1, parse_tree__file_names__Cast_HeadVar1_4, parse_tree__file_names__Cast_HeadVar2_5);
#line 40 "file_names.m"
      return;
    }
#line 40 "file_names.m"
  }
#line 40 "file_names.m"
}

#line 40 "file_names.m"
MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0(
#line 40 "file_names.m"
  MR_Word parse_tree__file_names__HeadVar__2_1,
#line 40 "file_names.m"
  MR_Word parse_tree__file_names__HeadVar__2_2)
#line 40 "file_names.m"
{
#line 1616 "parse_tree.file_names.c"
  {
#line 1618 "parse_tree.file_names.c"
    MR_bool parse_tree__file_names__succeeded = (parse_tree__file_names__HeadVar__2_1 == parse_tree__file_names__HeadVar__2_2);

#line 1621 "parse_tree.file_names.c"
    return parse_tree__file_names__succeeded;
#line 1623 "parse_tree.file_names.c"
  }
#line 40 "file_names.m"
}

#line 576 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_1(
#line 576 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg)
#line 576 "file_names.m"
{
#line 576 "file_names.m"
  {
#line 576 "file_names.m"
    struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s *) parse_tree__file_names__env_ptr_arg;

#line 576 "file_names.m"
    MR_builtin_longjmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__commit_0, 1);
#line 576 "file_names.m"
  }
#line 576 "file_names.m"
}

#line 576 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_2(
#line 576 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg)
#line 576 "file_names.m"
{
#line 576 "file_names.m"
  {
#line 576 "file_names.m"
    struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s *) parse_tree__file_names__env_ptr_arg;

#line 588 "file_names.m"
    (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16) == 0);
#line 589 "file_names.m"
    if (!((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded))
#line 590 "file_names.m"
      {
#line 590 "file_names.m"
        MR_String parse_tree__file_names__V_25_25;

#line 590 "file_names.m"
        {
#line 590 "file_names.m"
          parse_tree__file_names__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "_init", (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16);
        }
#line 590 "file_names.m"
        (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, parse_tree__file_names__V_25_25) == 0);
#line 590 "file_names.m"
      }
#line 589 "file_names.m"
    if ((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded)
#line 589 "file_names.m"
      {
#line 589 "file_names.m"
        parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_1(parse_tree__file_names__env_ptr);
#line 589 "file_names.m"
        return;
      }
#line 576 "file_names.m"
  }
#line 576 "file_names.m"
}

#line 576 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_3(
#line 576 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg)
#line 576 "file_names.m"
{
#line 576 "file_names.m"
  {
#line 576 "file_names.m"
    struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s *) parse_tree__file_names__env_ptr_arg;

#line 576 "file_names.m"
    if (MR_builtin_setjmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__commit_0) == 0)
#line 576 "file_names.m"
      {
#line 578 "file_names.m"
        {
#line 578 "file_names.m"
          {
#line 578 "file_names.m"
            libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 508, &(parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16);
          }
#line 578 "file_names.m"
          {
#line 578 "file_names.m"
            parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_2(parse_tree__file_names__env_ptr);
          }
#line 578 "file_names.m"
        }
#line 581 "file_names.m"
        {
#line 581 "file_names.m"
          {
#line 581 "file_names.m"
            libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 509, &(parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16);
          }
#line 581 "file_names.m"
          {
#line 581 "file_names.m"
            parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_2(parse_tree__file_names__env_ptr);
          }
#line 581 "file_names.m"
        }
#line 584 "file_names.m"
        {
#line 584 "file_names.m"
          {
#line 584 "file_names.m"
            libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 510, &(parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16);
          }
#line 584 "file_names.m"
          {
#line 584 "file_names.m"
            parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_2(parse_tree__file_names__env_ptr);
          }
#line 584 "file_names.m"
        }
#line 576 "file_names.m"
        (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_FALSE;
#line 576 "file_names.m"
      }
#line 576 "file_names.m"
    else
#line 576 "file_names.m"
      (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 576 "file_names.m"
  }
#line 576 "file_names.m"
}

#line 509 "file_names.m"
static MR_bool MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0(
#line 509 "file_names.m"
  MR_Word parse_tree__file_names__Globals_1,
#line 509 "file_names.m"
  MR_String parse_tree__file_names__HeadVar__2_2)
#line 509 "file_names.m"
{
#line 509 "file_names.m"
  {
#line 509 "file_names.m"
    struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s parse_tree__file_names__env;

#line 509 "file_names.m"
    (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1 = parse_tree__file_names__Globals_1;
#line 509 "file_names.m"
    (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2 = parse_tree__file_names__HeadVar__2_2;
#line 511 "file_names.m"
    while (MR_TRUE)
#line 511 "file_names.m"
      {
#line 511 "file_names.m"
        /* tailcall optimized into a loop */
#line 526 "file_names.m"
        if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".a") == 0))
#line 560 "file_names.m"
          (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
        else
#line 526 "file_names.m"
          if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".c") == 0))
#line 539 "file_names.m"
            (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
          else
#line 526 "file_names.m"
            if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".s") == 0))
#line 541 "file_names.m"
              (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
            else
#line 526 "file_names.m"
              if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".\044A") == 0))
#line 559 "file_names.m"
                (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
              else
#line 526 "file_names.m"
                if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".cs") == 0))
#line 547 "file_names.m"
                  (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                else
#line 526 "file_names.m"
                  if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".il") == 0))
#line 545 "file_names.m"
                    (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                  else
#line 526 "file_names.m"
                    if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".dir") == 0))
#line 557 "file_names.m"
                      (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                    else
#line 526 "file_names.m"
                      if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".dll") == 0))
#line 558 "file_names.m"
                        (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                      else
#line 526 "file_names.m"
                        if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".erl") == 0))
#line 552 "file_names.m"
                          (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                        else
#line 526 "file_names.m"
                          if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".hrl") == 0))
#line 556 "file_names.m"
                            (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                          else
#line 526 "file_names.m"
                            if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".mih") == 0))
#line 538 "file_names.m"
                              (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                            else
#line 526 "file_names.m"
                              if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".opt") == 0))
#line 527 "file_names.m"
                                (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                              else
#line 526 "file_names.m"
                                if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".beam") == 0))
#line 554 "file_names.m"
                                  (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                else
#line 526 "file_names.m"
                                  if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".imdg") == 0))
#line 534 "file_names.m"
                                    (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                  else
#line 526 "file_names.m"
                                    if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".init") == 0))
#line 536 "file_names.m"
                                      (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                    else
#line 526 "file_names.m"
                                      if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".java") == 0))
#line 549 "file_names.m"
                                        (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                      else
#line 526 "file_names.m"
                                        if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".used") == 0))
#line 526 "file_names.m"
                                          (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                        else
#line 526 "file_names.m"
                                          if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".beams") == 0))
#line 555 "file_names.m"
                                            (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                          else
#line 526 "file_names.m"
                                            if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".class") == 0))
#line 551 "file_names.m"
                                              (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                            else
#line 526 "file_names.m"
                                              if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".pic_s") == 0))
#line 543 "file_names.m"
                                                (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                              else
#line 526 "file_names.m"
                                                if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".c_date") == 0))
#line 540 "file_names.m"
                                                  (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                else
#line 526 "file_names.m"
                                                  if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".s_date") == 0))
#line 542 "file_names.m"
                                                    (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                  else
#line 526 "file_names.m"
                                                    if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) "_init.c") == 0))
#line 561 "file_names.m"
                                                      (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                    else
#line 526 "file_names.m"
                                                      if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".cs_date") == 0))
#line 548 "file_names.m"
                                                        (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                      else
#line 526 "file_names.m"
                                                        if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".il_date") == 0))
#line 546 "file_names.m"
                                                          (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                        else
#line 526 "file_names.m"
                                                          if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".optdate") == 0))
#line 528 "file_names.m"
                                                            (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                          else
#line 526 "file_names.m"
                                                            if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".request") == 0))
#line 537 "file_names.m"
                                                              (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                            else
#line 526 "file_names.m"
                                                              if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) "_init.\044O") == 0))
#line 562 "file_names.m"
                                                                (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                              else
#line 526 "file_names.m"
                                                                if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".analysis") == 0))
#line 531 "file_names.m"
                                                                  (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                                else
#line 526 "file_names.m"
                                                                  if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".erl_date") == 0))
#line 553 "file_names.m"
                                                                    (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                                  else
#line 526 "file_names.m"
                                                                    if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) "_init.erl") == 0))
#line 563 "file_names.m"
                                                                      (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                                    else
#line 526 "file_names.m"
                                                                      if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".java_date") == 0))
#line 550 "file_names.m"
                                                                        (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                                      else
#line 526 "file_names.m"
                                                                        if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".trans_opt") == 0))
#line 529 "file_names.m"
                                                                          (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                                        else
#line 526 "file_names.m"
                                                                          if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) "_init.beam") == 0))
#line 564 "file_names.m"
                                                                            (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                                          else
#line 526 "file_names.m"
                                                                            if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".pic_s_date") == 0))
#line 544 "file_names.m"
                                                                              (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                                            else
#line 526 "file_names.m"
                                                                              if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".track_flags") == 0))
#line 535 "file_names.m"
                                                                                (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                                              else
#line 526 "file_names.m"
                                                                                if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".analysis_date") == 0))
#line 532 "file_names.m"
                                                                                  (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                                                else
#line 526 "file_names.m"
                                                                                  if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".trans_opt_date") == 0))
#line 530 "file_names.m"
                                                                                    (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                                                  else
#line 526 "file_names.m"
                                                                                    if ((strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".analysis_status") == 0))
#line 533 "file_names.m"
                                                                                      (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 526 "file_names.m"
                                                                                    else
#line 526 "file_names.m"
                                                                                      (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_FALSE;
#line 511 "file_names.m"
        if (!((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded))
#line 517 "file_names.m"
          {
#line 517 "file_names.m"
            MR_String parse_tree__file_names__Ext_7;

#line 515 "file_names.m"
            {
#line 515 "file_names.m"
              (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = mercury__string__remove_suffix_3_p_0((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".tmp", &parse_tree__file_names__Ext_7);
            }
#line 517 "file_names.m"
            if ((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded)
#line 516 "file_names.m"
              {
#line 516 "file_names.m"
                /* direct tailcall eliminated */
#line 516 "file_names.m"
                {
#line 516 "file_names.m"
                  MR_String parse_tree__file_names__HeadVar__2__tmp_copy_2 = parse_tree__file_names__Ext_7;

#line 516 "file_names.m"
                  (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2 = parse_tree__file_names__HeadVar__2__tmp_copy_2;
#line 516 "file_names.m"
                }
#line 516 "file_names.m"
                continue;
#line 516 "file_names.m"
              }
#line 517 "file_names.m"
            else
#line 568 "file_names.m"
              {
#line 570 "file_names.m"
                {
#line 570 "file_names.m"
                  MR_String parse_tree__file_names__V_21_21;

#line 570 "file_names.m"
                  {
#line 570 "file_names.m"
                    libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 574, &parse_tree__file_names__V_21_21);
                  }
#line 570 "file_names.m"
                  (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, parse_tree__file_names__V_21_21) == 0);
#line 570 "file_names.m"
                }
#line 571 "file_names.m"
                if (!((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded))
#line 571 "file_names.m"
                  {
#line 572 "file_names.m"
                    {
#line 572 "file_names.m"
                      MR_String parse_tree__file_names__V_22_22;

#line 572 "file_names.m"
                      {
#line 572 "file_names.m"
                        libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 573, &parse_tree__file_names__V_22_22);
                      }
#line 572 "file_names.m"
                      (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, parse_tree__file_names__V_22_22) == 0);
#line 572 "file_names.m"
                    }
#line 571 "file_names.m"
                    if (!((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded))
#line 574 "file_names.m"
                      {
#line 574 "file_names.m"
                        MR_String parse_tree__file_names__V_23_23;

#line 574 "file_names.m"
                        {
#line 574 "file_names.m"
                          libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 572, &parse_tree__file_names__V_23_23);
                        }
#line 574 "file_names.m"
                        (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, parse_tree__file_names__V_23_23) == 0);
#line 574 "file_names.m"
                      }
#line 571 "file_names.m"
                  }
#line 568 "file_names.m"
                if (!((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded))
#line 576 "file_names.m"
                  {
#line 576 "file_names.m"
                    {
#line 576 "file_names.m"
                      parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_3(&parse_tree__file_names__env);
                    }
#line 576 "file_names.m"
                  }
#line 568 "file_names.m"
              }
#line 517 "file_names.m"
          }
#line 511 "file_names.m"
        return (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded;
#line 511 "file_names.m"
        break;
#line 511 "file_names.m"
      }
#line 509 "file_names.m"
  }
#line 509 "file_names.m"
}

#line 451 "file_names.m"
static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0(
#line 451 "file_names.m"
  MR_Word parse_tree__file_names__Globals_10,
#line 451 "file_names.m"
  MR_Word parse_tree__file_names__SubDirNames_11,
#line 451 "file_names.m"
  MR_Word parse_tree__file_names__Search_12,
#line 451 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_13,
#line 451 "file_names.m"
  MR_String parse_tree__file_names__BaseName_14,
#line 451 "file_names.m"
  MR_String parse_tree__file_names__Ext_15,
#line 451 "file_names.m"
  MR_String * parse_tree__file_names__FileName_16)
#line 451 "file_names.m"
{
#line 456 "file_names.m"
  {
#line 456 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 456 "file_names.m"
    MR_Word parse_tree__file_names__UseGradeSubdirs_18;
#line 456 "file_names.m"
    MR_Word parse_tree__file_names__UseSubdirs_19;
#line 456 "file_names.m"
    MR_Word parse_tree__file_names__DirComponents_22;

#line 457 "file_names.m"
    {
#line 457 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_10, (MR_Integer) 645, &parse_tree__file_names__UseGradeSubdirs_18);
    }
#line 458 "file_names.m"
    {
#line 458 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_10, (MR_Integer) 644, &parse_tree__file_names__UseSubdirs_19);
    }
#line 460 "file_names.m"
    parse_tree__file_names__succeeded = (parse_tree__file_names__UseGradeSubdirs_18 == (MR_Integer) 1);
#line 460 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 460 "file_names.m"
      {
#line 461 "file_names.m"
        {
#line 461 "file_names.m"
          parse_tree__file_names__succeeded = parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0(parse_tree__file_names__Globals_10, parse_tree__file_names__Ext_15);
        }
#line 460 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 460 "file_names.m"
          {
#line 468 "file_names.m"
            parse_tree__file_names__succeeded = (parse_tree__file_names__Search_12 == (MR_Integer) 0);
#line 468 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 470 "file_names.m"
              {
#line 470 "file_names.m"
                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".opt") == 0))
#line 469 "file_names.m"
                  parse_tree__file_names__succeeded = MR_TRUE;
#line 470 "file_names.m"
                else
#line 470 "file_names.m"
                  if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".imdg") == 0))
#line 472 "file_names.m"
                    parse_tree__file_names__succeeded = MR_TRUE;
#line 470 "file_names.m"
                  else
#line 470 "file_names.m"
                    if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".request") == 0))
#line 473 "file_names.m"
                      parse_tree__file_names__succeeded = MR_TRUE;
#line 470 "file_names.m"
                    else
#line 470 "file_names.m"
                      if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".analysis") == 0))
#line 471 "file_names.m"
                        parse_tree__file_names__succeeded = MR_TRUE;
#line 470 "file_names.m"
                      else
#line 470 "file_names.m"
                        if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".trans_opt") == 0))
#line 470 "file_names.m"
                          parse_tree__file_names__succeeded = MR_TRUE;
#line 470 "file_names.m"
                        else
#line 470 "file_names.m"
                          parse_tree__file_names__succeeded = MR_FALSE;
#line 470 "file_names.m"
              }
#line 467 "file_names.m"
            parse_tree__file_names__succeeded = !(parse_tree__file_names__succeeded);
#line 460 "file_names.m"
          }
#line 460 "file_names.m"
      }
#line 486 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 477 "file_names.m"
      {
#line 477 "file_names.m"
        MR_String parse_tree__file_names__Grade_20;
#line 477 "file_names.m"
        MR_String parse_tree__file_names__TargetArch_21;
#line 477 "file_names.m"
        MR_Word parse_tree__file_names__V_34_34;
#line 477 "file_names.m"
        MR_Word parse_tree__file_names__V_35_35;
#line 477 "file_names.m"
        MR_Word parse_tree__file_names__V_36_36;

#line 477 "file_names.m"
        {
#line 477 "file_names.m"
          libs__handle_options__grade_directory_component_2_p_0(parse_tree__file_names__Globals_10, &parse_tree__file_names__Grade_20);
        }
#line 478 "file_names.m"
        {
#line 478 "file_names.m"
          libs__globals__lookup_string_option_3_p_0(parse_tree__file_names__Globals_10, (MR_Integer) 663, &parse_tree__file_names__TargetArch_21);
        }
#line 485 "file_names.m"
        {
#line 485 "file_names.m"
          parse_tree__file_names__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_36_36, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 485 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_36_36, 1) = ((MR_Box) (parse_tree__file_names__SubDirNames_11));
#line 485 "file_names.m"
        }
#line 485 "file_names.m"
        {
#line 485 "file_names.m"
          parse_tree__file_names__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_35_35, 0) = ((MR_Box) (parse_tree__file_names__TargetArch_21));
#line 485 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_35_35, 1) = ((MR_Box) (parse_tree__file_names__V_36_36));
#line 485 "file_names.m"
        }
#line 485 "file_names.m"
        {
#line 485 "file_names.m"
          parse_tree__file_names__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_34_34, 0) = ((MR_Box) (parse_tree__file_names__Grade_20));
#line 485 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_34_34, 1) = ((MR_Box) (parse_tree__file_names__V_35_35));
#line 485 "file_names.m"
        }
#line 485 "file_names.m"
        {
#line 485 "file_names.m"
          parse_tree__file_names__DirComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 485 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 1) = ((MR_Box) (parse_tree__file_names__V_34_34));
#line 485 "file_names.m"
        }
#line 477 "file_names.m"
      }
#line 486 "file_names.m"
    else
#line 490 "file_names.m"
      {
#line 487 "file_names.m"
        parse_tree__file_names__succeeded = (parse_tree__file_names__UseSubdirs_19 == (MR_Integer) 1);
#line 490 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 489 "file_names.m"
          {
#line 489 "file_names.m"
            {
#line 489 "file_names.m"
              parse_tree__file_names__DirComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "file_names.m"
              MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 489 "file_names.m"
              MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 1) = ((MR_Box) (parse_tree__file_names__SubDirNames_11));
#line 489 "file_names.m"
            }
#line 489 "file_names.m"
          }
#line 490 "file_names.m"
        else
#line 491 "file_names.m"
          parse_tree__file_names__DirComponents_22 = parse_tree__file_names__SubDirNames_11;
#line 490 "file_names.m"
      }
#line 496 "file_names.m"
    if ((parse_tree__file_names__DirComponents_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "file_names.m"
      *parse_tree__file_names__FileName_16 = parse_tree__file_names__BaseName_14;
#line 496 "file_names.m"
    else
#line 497 "file_names.m"
      {
#line 497 "file_names.m"
        MR_Word parse_tree__file_names__Components_27;
#line 497 "file_names.m"
        MR_Word parse_tree__file_names__V_40_40;

#line 502 "file_names.m"
        if ((parse_tree__file_names__MkDir_13 == (MR_Integer) 0))
#line 499 "file_names.m"
          {
#line 499 "file_names.m"
            MR_String parse_tree__file_names__DirName_25;
#line 501 "file_names.m"
            MR_Word parse_tree__file_names__V_26_26;

#line 500 "file_names.m"
            {
#line 500 "file_names.m"
              parse_tree__file_names__DirName_25 = mercury__dir__relative_path_name_from_components_1_f_0(parse_tree__file_names__DirComponents_22);
            }
#line 501 "file_names.m"
            {
#line 501 "file_names.m"
              mercury__dir__make_directory_4_p_0(parse_tree__file_names__DirName_25, &parse_tree__file_names__V_26_26);
            }
#line 499 "file_names.m"
          }
#line 502 "file_names.m"
        else
#line 503 "file_names.m"
          {
#line 503 "file_names.m"
          }
#line 505 "file_names.m"
        {
#line 505 "file_names.m"
          parse_tree__file_names__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_40_40, 0) = ((MR_Box) (parse_tree__file_names__BaseName_14));
#line 505 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "file_names.m"
        }
#line 505 "file_names.m"
        {
#line 505 "file_names.m"
          parse_tree__file_names__Components_27 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__file_names__DirComponents_22, parse_tree__file_names__V_40_40);
        }
#line 506 "file_names.m"
        {
#line 506 "file_names.m"
          *parse_tree__file_names__FileName_16 = mercury__dir__relative_path_name_from_components_1_f_0(parse_tree__file_names__Components_27);
        }
#line 497 "file_names.m"
      }
#line 456 "file_names.m"
  }
#line 451 "file_names.m"
}

#line 142 "file_names.m"
void MR_CALL 
parse_tree__file_names__make_include_file_path_3_p_0(
#line 142 "file_names.m"
  MR_String parse_tree__file_names__ModuleSourceFileName_4,
#line 142 "file_names.m"
  MR_String parse_tree__file_names__OrigFileName_5,
#line 142 "file_names.m"
  MR_String * parse_tree__file_names__Path_6)
#line 142 "file_names.m"
{
#line 617 "file_names.m"
  {
#line 617 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 615 "file_names.m"
    {
#line 615 "file_names.m"
      parse_tree__file_names__succeeded = mercury__dir__path_name_is_absolute_1_p_0(parse_tree__file_names__OrigFileName_5);
    }
#line 617 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 616 "file_names.m"
      *parse_tree__file_names__Path_6 = parse_tree__file_names__OrigFileName_5;
#line 617 "file_names.m"
    else
#line 621 "file_names.m"
      {
#line 621 "file_names.m"
        MR_String parse_tree__file_names__V_7_7;

#line 621 "file_names.m"
        {
#line 621 "file_names.m"
          parse_tree__file_names__V_7_7 = mercury__dir__dirname_1_f_0(parse_tree__file_names__ModuleSourceFileName_4);
        }
#line 621 "file_names.m"
        {
#line 621 "file_names.m"
          *parse_tree__file_names__Path_6 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__V_7_7, parse_tree__file_names__OrigFileName_5);
        }
#line 621 "file_names.m"
      }
#line 617 "file_names.m"
  }
#line 142 "file_names.m"
}

#line 136 "file_names.m"
void MR_CALL 
parse_tree__file_names__get_class_dir_name_2_p_0(
#line 136 "file_names.m"
  MR_Word parse_tree__file_names__Globals_3,
#line 136 "file_names.m"
  MR_String * parse_tree__file_names__ClassDirName_4)
#line 136 "file_names.m"
{
#line 595 "file_names.m"
  {
#line 595 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 595 "file_names.m"
    MR_Word parse_tree__file_names__UseGradeSubdirs_5;
#line 595 "file_names.m"
    MR_Word parse_tree__file_names__UseSubdirs_6;

#line 596 "file_names.m"
    {
#line 596 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_3, (MR_Integer) 645, &parse_tree__file_names__UseGradeSubdirs_5);
    }
#line 597 "file_names.m"
    {
#line 597 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_3, (MR_Integer) 644, &parse_tree__file_names__UseSubdirs_6);
    }
#line 599 "file_names.m"
    parse_tree__file_names__succeeded = (parse_tree__file_names__UseGradeSubdirs_5 == (MR_Integer) 1);
#line 604 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 601 "file_names.m"
      {
#line 601 "file_names.m"
        MR_String parse_tree__file_names__Grade_7;
#line 601 "file_names.m"
        MR_String parse_tree__file_names__TargetArch_8;
#line 601 "file_names.m"
        MR_String parse_tree__file_names__V_12_12;
#line 601 "file_names.m"
        MR_String parse_tree__file_names__V_13_13;
#line 601 "file_names.m"
        MR_String parse_tree__file_names__V_14_14;

#line 601 "file_names.m"
        {
#line 601 "file_names.m"
          libs__handle_options__grade_directory_component_2_p_0(parse_tree__file_names__Globals_3, &parse_tree__file_names__Grade_7);
        }
#line 602 "file_names.m"
        {
#line 602 "file_names.m"
          libs__globals__lookup_string_option_3_p_0(parse_tree__file_names__Globals_3, (MR_Integer) 663, &parse_tree__file_names__TargetArch_8);
        }
#line 603 "file_names.m"
        {
#line 603 "file_names.m"
          parse_tree__file_names__V_14_14 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", parse_tree__file_names__Grade_7);
        }
#line 603 "file_names.m"
        {
#line 603 "file_names.m"
          parse_tree__file_names__V_13_13 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__V_14_14, parse_tree__file_names__TargetArch_8);
        }
#line 603 "file_names.m"
        {
#line 603 "file_names.m"
          parse_tree__file_names__V_12_12 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__V_13_13, (MR_String) "Mercury");
        }
#line 603 "file_names.m"
        {
#line 603 "file_names.m"
          *parse_tree__file_names__ClassDirName_4 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__V_12_12, (MR_String) "classs");
        }
#line 601 "file_names.m"
      }
#line 604 "file_names.m"
    else
#line 608 "file_names.m"
      {
#line 605 "file_names.m"
        parse_tree__file_names__succeeded = (parse_tree__file_names__UseSubdirs_6 == (MR_Integer) 1);
#line 608 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 607 "file_names.m"
          {
#line 607 "file_names.m"
            {
#line 607 "file_names.m"
              *parse_tree__file_names__ClassDirName_4 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "classs");
            }
#line 607 "file_names.m"
          }
#line 608 "file_names.m"
        else
#line 609 "file_names.m"
          *parse_tree__file_names__ClassDirName_4 = (MR_String) ".";
#line 608 "file_names.m"
      }
#line 595 "file_names.m"
  }
#line 136 "file_names.m"
}

#line 130 "file_names.m"
void MR_CALL 
parse_tree__file_names__module_name_to_make_var_name_2_p_0(
#line 130 "file_names.m"
  MR_Word parse_tree__file_names__ModuleName_3,
#line 130 "file_names.m"
  MR_String * parse_tree__file_names__MakeVarName_4)
#line 130 "file_names.m"
{
#line 449 "file_names.m"
  {
#line 449 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 449 "file_names.m"
    {
#line 449 "file_names.m"
      *parse_tree__file_names__MakeVarName_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_3);
    }
#line 449 "file_names.m"
  }
#line 130 "file_names.m"
}

#line 125 "file_names.m"
void MR_CALL 
parse_tree__file_names__module_name_to_file_name_stem_2_p_0(
#line 125 "file_names.m"
  MR_Word parse_tree__file_names__ModuleName_3,
#line 125 "file_names.m"
  MR_String * parse_tree__file_names__FileName_4)
#line 125 "file_names.m"
{
#line 446 "file_names.m"
  {
#line 446 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 446 "file_names.m"
    {
#line 446 "file_names.m"
      *parse_tree__file_names__FileName_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_3);
    }
#line 446 "file_names.m"
  }
#line 125 "file_names.m"
}

#line 121 "file_names.m"
void MR_CALL 
parse_tree__file_names__file_name_to_module_name_2_p_0(
#line 121 "file_names.m"
  MR_String parse_tree__file_names__FileName_3,
#line 121 "file_names.m"
  MR_Word * parse_tree__file_names__ModuleName_4)
#line 121 "file_names.m"
{
#line 443 "file_names.m"
  {
#line 443 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 443 "file_names.m"
    {
#line 443 "file_names.m"
      *parse_tree__file_names__ModuleName_4 = mdbcomp__sym_name__string_to_sym_name_1_f_0(parse_tree__file_names__FileName_3);
    }
#line 443 "file_names.m"
  }
#line 121 "file_names.m"
}

#line 115 "file_names.m"
void MR_CALL 
parse_tree__file_names__extra_link_obj_file_name_8_p_0(
#line 115 "file_names.m"
  MR_Word parse_tree__file_names__Globals_9,
#line 115 "file_names.m"
  MR_Word parse_tree__file_names__ModuleName_10,
#line 115 "file_names.m"
  MR_String parse_tree__file_names__ExtraLinkObjName_11,
#line 115 "file_names.m"
  MR_String parse_tree__file_names__Ext_12,
#line 115 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_13,
#line 115 "file_names.m"
  MR_String * parse_tree__file_names__FileName_14)
#line 115 "file_names.m"
{
#line 250 "file_names.m"
  {
#line 250 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 250 "file_names.m"
    {
#line 250 "file_names.m"
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(parse_tree__file_names__Globals_9, parse_tree__file_names__ExtraLinkObjName_11, parse_tree__file_names__Ext_12, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
#line 250 "file_names.m"
      return;
    }
#line 250 "file_names.m"
  }
#line 115 "file_names.m"
}

#line 105 "file_names.m"
void MR_CALL 
parse_tree__file_names__fact_table_file_name_8_p_0(
#line 105 "file_names.m"
  MR_Word parse_tree__file_names__Globals_9,
#line 105 "file_names.m"
  MR_Word parse_tree__file_names__ModuleName_10,
#line 105 "file_names.m"
  MR_String parse_tree__file_names__FactTableFileName_11,
#line 105 "file_names.m"
  MR_String parse_tree__file_names__Ext_12,
#line 105 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_13,
#line 105 "file_names.m"
  MR_String * parse_tree__file_names__FileName_14)
#line 105 "file_names.m"
{
#line 250 "file_names.m"
  {
#line 250 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 250 "file_names.m"
    {
#line 250 "file_names.m"
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(parse_tree__file_names__Globals_9, parse_tree__file_names__FactTableFileName_11, parse_tree__file_names__Ext_12, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
#line 250 "file_names.m"
      return;
    }
#line 250 "file_names.m"
  }
#line 105 "file_names.m"
}

#line 96 "file_names.m"
void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_8_p_0(
#line 96 "file_names.m"
  MR_Word parse_tree__file_names__Globals_9,
#line 96 "file_names.m"
  MR_String parse_tree__file_names__Prefix_10,
#line 96 "file_names.m"
  MR_Word parse_tree__file_names__ModuleName_11,
#line 96 "file_names.m"
  MR_String parse_tree__file_names__Ext_12,
#line 96 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_13,
#line 96 "file_names.m"
  MR_String * parse_tree__file_names__FileName_14)
#line 96 "file_names.m"
{
#line 238 "file_names.m"
  {
#line 238 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 238 "file_names.m"
    MR_String parse_tree__file_names__BaseFileName_16;
#line 238 "file_names.m"
    MR_String parse_tree__file_names__BaseName_17;
#line 238 "file_names.m"
    MR_String parse_tree__file_names__V_20_20;

#line 239 "file_names.m"
    {
#line 239 "file_names.m"
      parse_tree__file_names__BaseFileName_16 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_11);
    }
#line 240 "file_names.m"
    {
#line 240 "file_names.m"
      parse_tree__file_names__V_20_20 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__BaseFileName_16, parse_tree__file_names__Ext_12);
    }
#line 240 "file_names.m"
    {
#line 240 "file_names.m"
      parse_tree__file_names__BaseName_17 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__Prefix_10, parse_tree__file_names__V_20_20);
    }
#line 241 "file_names.m"
    {
#line 241 "file_names.m"
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_17, parse_tree__file_names__Ext_12, (MR_Integer) 1, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
#line 241 "file_names.m"
      return;
    }
#line 238 "file_names.m"
  }
#line 96 "file_names.m"
}

#line 83 "file_names.m"
void MR_CALL 
parse_tree__file_names__module_name_to_search_file_name_6_p_0(
#line 83 "file_names.m"
  MR_Word parse_tree__file_names__Globals_7,
#line 83 "file_names.m"
  MR_Word parse_tree__file_names__ModuleName_8,
#line 83 "file_names.m"
  MR_String parse_tree__file_names__Ext_9,
#line 83 "file_names.m"
  MR_String * parse_tree__file_names__FileName_10)
#line 83 "file_names.m"
{
#line 192 "file_names.m"
  {
#line 192 "file_names.m"
    MR_bool parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_9, (MR_String) ".m") == 0);

#line 205 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 204 "file_names.m"
      {
#line 204 "file_names.m"
        parse_tree__source_file_map__lookup_module_source_file_4_p_0(parse_tree__file_names__ModuleName_8, parse_tree__file_names__FileName_10);
#line 204 "file_names.m"
        return;
      }
#line 205 "file_names.m"
    else
#line 218 "file_names.m"
      {
#line 208 "file_names.m"
        {
#line 208 "file_names.m"
          parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_9, (MR_String) ".java");
        }
#line 209 "file_names.m"
        if (!(parse_tree__file_names__succeeded))
#line 209 "file_names.m"
          {
#line 209 "file_names.m"
            {
#line 209 "file_names.m"
              parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_9, (MR_String) ".class");
            }
#line 209 "file_names.m"
          }
#line 218 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 212 "file_names.m"
          {
#line 212 "file_names.m"
            MR_String parse_tree__file_names__MangledModuleName_27;
#line 212 "file_names.m"
            MR_String parse_tree__file_names__BaseName_28;

#line 213 "file_names.m"
            {
#line 213 "file_names.m"
              parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__file_names__ModuleName_8, (MR_Integer) 0, (MR_String) "__", &parse_tree__file_names__MangledModuleName_27);
            }
#line 215 "file_names.m"
            {
#line 215 "file_names.m"
              parse_tree__file_names__BaseName_28 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__MangledModuleName_27, parse_tree__file_names__Ext_9);
            }
#line 216 "file_names.m"
            {
#line 216 "file_names.m"
              parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_7, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__file_names_scalar_common_1[0]), parse_tree__file_names__BaseName_28, parse_tree__file_names__Ext_9, (MR_Integer) 0, (MR_Integer) 1, parse_tree__file_names__FileName_10);
#line 216 "file_names.m"
              return;
            }
#line 212 "file_names.m"
          }
#line 218 "file_names.m"
        else
#line 231 "file_names.m"
          {
#line 222 "file_names.m"
            {
#line 222 "file_names.m"
              parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_9, (MR_String) ".erl");
            }
#line 223 "file_names.m"
            if (!(parse_tree__file_names__succeeded))
#line 223 "file_names.m"
              {
#line 223 "file_names.m"
                {
#line 223 "file_names.m"
                  parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_9, (MR_String) ".hrl");
                }
#line 223 "file_names.m"
                if (!(parse_tree__file_names__succeeded))
#line 224 "file_names.m"
                  {
#line 224 "file_names.m"
                    {
#line 224 "file_names.m"
                      parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_9, (MR_String) ".beam");
                    }
#line 224 "file_names.m"
                  }
#line 223 "file_names.m"
              }
#line 231 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 227 "file_names.m"
              {
#line 227 "file_names.m"
                MR_Word parse_tree__file_names__ErlangModuleName_29;
#line 227 "file_names.m"
                MR_String parse_tree__file_names__V_41_41;
#line 227 "file_names.m"
                MR_String parse_tree__file_names__BaseName_49;

#line 176 "file_names.m"
                {
#line 176 "file_names.m"
                  parse_tree__file_names__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__file_names__ModuleName_8);
                }
#line 178 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 177 "file_names.m"
                  {
#line 177 "file_names.m"
                    {
#line 177 "file_names.m"
                      parse_tree__file_names__ErlangModuleName_29 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__file_names__ModuleName_8);
                    }
#line 177 "file_names.m"
                  }
#line 178 "file_names.m"
                else
#line 179 "file_names.m"
                  parse_tree__file_names__ErlangModuleName_29 = parse_tree__file_names__ModuleName_8;
#line 228 "file_names.m"
                {
#line 228 "file_names.m"
                  parse_tree__file_names__V_41_41 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ErlangModuleName_29, (MR_String) "__");
                }
#line 228 "file_names.m"
                {
#line 228 "file_names.m"
                  parse_tree__file_names__BaseName_49 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__V_41_41, parse_tree__file_names__Ext_9);
                }
#line 229 "file_names.m"
                {
#line 229 "file_names.m"
                  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_49, parse_tree__file_names__Ext_9, (MR_Integer) 0, (MR_Integer) 1, parse_tree__file_names__FileName_10);
#line 229 "file_names.m"
                  return;
                }
#line 227 "file_names.m"
              }
#line 231 "file_names.m"
            else
#line 232 "file_names.m"
              {
#line 232 "file_names.m"
                MR_String parse_tree__file_names__V_45_45;
#line 232 "file_names.m"
                MR_String parse_tree__file_names__BaseName_50;

#line 232 "file_names.m"
                {
#line 232 "file_names.m"
                  parse_tree__file_names__V_45_45 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ModuleName_8, (MR_String) ".");
                }
#line 232 "file_names.m"
                {
#line 232 "file_names.m"
                  parse_tree__file_names__BaseName_50 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__V_45_45, parse_tree__file_names__Ext_9);
                }
#line 233 "file_names.m"
                {
#line 233 "file_names.m"
                  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_50, parse_tree__file_names__Ext_9, (MR_Integer) 0, (MR_Integer) 1, parse_tree__file_names__FileName_10);
#line 233 "file_names.m"
                  return;
                }
#line 232 "file_names.m"
              }
#line 231 "file_names.m"
          }
#line 218 "file_names.m"
      }
#line 192 "file_names.m"
  }
#line 83 "file_names.m"
}

#line 62 "file_names.m"
void MR_CALL 
parse_tree__file_names__module_name_to_file_name_7_p_0(
#line 62 "file_names.m"
  MR_Word parse_tree__file_names__Globals_8,
#line 62 "file_names.m"
  MR_Word parse_tree__file_names__ModuleName_9,
#line 62 "file_names.m"
  MR_String parse_tree__file_names__Ext_10,
#line 62 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_11,
#line 62 "file_names.m"
  MR_String * parse_tree__file_names__FileName_12)
#line 62 "file_names.m"
{
#line 188 "file_names.m"
  {
#line 188 "file_names.m"
    MR_bool parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_10, (MR_String) ".m") == 0);

#line 205 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 204 "file_names.m"
      {
#line 204 "file_names.m"
        parse_tree__source_file_map__lookup_module_source_file_4_p_0(parse_tree__file_names__ModuleName_9, parse_tree__file_names__FileName_12);
#line 204 "file_names.m"
        return;
      }
#line 205 "file_names.m"
    else
#line 218 "file_names.m"
      {
#line 208 "file_names.m"
        {
#line 208 "file_names.m"
          parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".java");
        }
#line 209 "file_names.m"
        if (!(parse_tree__file_names__succeeded))
#line 209 "file_names.m"
          {
#line 209 "file_names.m"
            {
#line 209 "file_names.m"
              parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".class");
            }
#line 209 "file_names.m"
          }
#line 218 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 212 "file_names.m"
          {
#line 212 "file_names.m"
            MR_String parse_tree__file_names__MangledModuleName_28;
#line 212 "file_names.m"
            MR_String parse_tree__file_names__BaseName_29;

#line 213 "file_names.m"
            {
#line 213 "file_names.m"
              parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__file_names__ModuleName_9, (MR_Integer) 0, (MR_String) "__", &parse_tree__file_names__MangledModuleName_28);
            }
#line 215 "file_names.m"
            {
#line 215 "file_names.m"
              parse_tree__file_names__BaseName_29 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__MangledModuleName_28, parse_tree__file_names__Ext_10);
            }
#line 216 "file_names.m"
            {
#line 216 "file_names.m"
              parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__file_names_scalar_common_1[0]), parse_tree__file_names__BaseName_29, parse_tree__file_names__Ext_10, (MR_Integer) 1, parse_tree__file_names__MkDir_11, parse_tree__file_names__FileName_12);
#line 216 "file_names.m"
              return;
            }
#line 212 "file_names.m"
          }
#line 218 "file_names.m"
        else
#line 231 "file_names.m"
          {
#line 222 "file_names.m"
            {
#line 222 "file_names.m"
              parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".erl");
            }
#line 223 "file_names.m"
            if (!(parse_tree__file_names__succeeded))
#line 223 "file_names.m"
              {
#line 223 "file_names.m"
                {
#line 223 "file_names.m"
                  parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".hrl");
                }
#line 223 "file_names.m"
                if (!(parse_tree__file_names__succeeded))
#line 224 "file_names.m"
                  {
#line 224 "file_names.m"
                    {
#line 224 "file_names.m"
                      parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".beam");
                    }
#line 224 "file_names.m"
                  }
#line 223 "file_names.m"
              }
#line 231 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 227 "file_names.m"
              {
#line 227 "file_names.m"
                MR_Word parse_tree__file_names__ErlangModuleName_30;
#line 227 "file_names.m"
                MR_String parse_tree__file_names__V_42_42;
#line 227 "file_names.m"
                MR_String parse_tree__file_names__BaseName_50;

#line 176 "file_names.m"
                {
#line 176 "file_names.m"
                  parse_tree__file_names__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__file_names__ModuleName_9);
                }
#line 178 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 177 "file_names.m"
                  {
#line 177 "file_names.m"
                    {
#line 177 "file_names.m"
                      parse_tree__file_names__ErlangModuleName_30 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__file_names__ModuleName_9);
                    }
#line 177 "file_names.m"
                  }
#line 178 "file_names.m"
                else
#line 179 "file_names.m"
                  parse_tree__file_names__ErlangModuleName_30 = parse_tree__file_names__ModuleName_9;
#line 228 "file_names.m"
                {
#line 228 "file_names.m"
                  parse_tree__file_names__V_42_42 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ErlangModuleName_30, (MR_String) "__");
                }
#line 228 "file_names.m"
                {
#line 228 "file_names.m"
                  parse_tree__file_names__BaseName_50 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__V_42_42, parse_tree__file_names__Ext_10);
                }
#line 229 "file_names.m"
                {
#line 229 "file_names.m"
                  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_50, parse_tree__file_names__Ext_10, (MR_Integer) 1, parse_tree__file_names__MkDir_11, parse_tree__file_names__FileName_12);
#line 229 "file_names.m"
                  return;
                }
#line 227 "file_names.m"
              }
#line 231 "file_names.m"
            else
#line 232 "file_names.m"
              {
#line 232 "file_names.m"
                MR_String parse_tree__file_names__V_46_46;
#line 232 "file_names.m"
                MR_String parse_tree__file_names__BaseName_51;

#line 232 "file_names.m"
                {
#line 232 "file_names.m"
                  parse_tree__file_names__V_46_46 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ModuleName_9, (MR_String) ".");
                }
#line 232 "file_names.m"
                {
#line 232 "file_names.m"
                  parse_tree__file_names__BaseName_51 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__V_46_46, parse_tree__file_names__Ext_10);
                }
#line 233 "file_names.m"
                {
#line 233 "file_names.m"
                  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_51, parse_tree__file_names__Ext_10, (MR_Integer) 1, parse_tree__file_names__MkDir_11, parse_tree__file_names__FileName_12);
#line 233 "file_names.m"
                  return;
                }
#line 232 "file_names.m"
              }
#line 231 "file_names.m"
          }
#line 218 "file_names.m"
      }
#line 188 "file_names.m"
  }
#line 62 "file_names.m"
}

#line 46 "file_names.m"
void MR_CALL 
parse_tree__file_names__module_source_filename_5_p_0(
#line 46 "file_names.m"
  MR_Word parse_tree__file_names__Globals_6,
#line 46 "file_names.m"
  MR_Word parse_tree__file_names__ModuleName_7,
#line 46 "file_names.m"
  MR_String * parse_tree__file_names__SourceFileName_8)
#line 46 "file_names.m"
{
#line 184 "file_names.m"
  {
#line 184 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 185 "file_names.m"
    {
#line 185 "file_names.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__file_names__Globals_6, parse_tree__file_names__ModuleName_7, (MR_String) ".m", (MR_Integer) 1, parse_tree__file_names__SourceFileName_8);
#line 185 "file_names.m"
      return;
    }
#line 184 "file_names.m"
  }
#line 46 "file_names.m"
}

#line 36 "file_names.m"
MR_Word MR_CALL 
parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(
#line 36 "file_names.m"
  MR_Word parse_tree__file_names__ModuleName_3)
#line 36 "file_names.m"
{
#line 178 "file_names.m"
  {
#line 178 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 178 "file_names.m"
    MR_Word parse_tree__file_names__QualModuleName_4;

#line 176 "file_names.m"
    {
#line 176 "file_names.m"
      parse_tree__file_names__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__file_names__ModuleName_3);
    }
#line 178 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 177 "file_names.m"
      {
#line 177 "file_names.m"
        {
#line 177 "file_names.m"
          return parse_tree__file_names__QualModuleName_4 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__file_names__ModuleName_3);
        }
#line 177 "file_names.m"
      }
#line 178 "file_names.m"
    else
#line 179 "file_names.m"
      parse_tree__file_names__QualModuleName_4 = parse_tree__file_names__ModuleName_3;
#line 178 "file_names.m"
    return parse_tree__file_names__QualModuleName_4;
#line 178 "file_names.m"
  }
#line 36 "file_names.m"
}

#line 29 "file_names.m"
MR_bool MR_CALL 
parse_tree__file_names__mercury_std_library_module_name_1_p_0(
#line 29 "file_names.m"
  MR_Word parse_tree__file_names__HeadVar__1_1)
#line 29 "file_names.m"
{
#line 165 "file_names.m"
  {
#line 165 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 165 "file_names.m"
    if (((MR_tag((MR_Word) parse_tree__file_names__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 165 "file_names.m"
      {
#line 167 "file_names.m"
        {
#line 167 "file_names.m"
          MR_String parse_tree__file_names__ModuleNameStr_5;

#line 446 "file_names.m"
          {
#line 446 "file_names.m"
            parse_tree__file_names__ModuleNameStr_5 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__HeadVar__1_1);
          }
#line 169 "file_names.m"
          {
#line 169 "file_names.m"
            parse_tree__file_names__succeeded = mercury__library__mercury_std_library_module_1_p_0(parse_tree__file_names__ModuleNameStr_5);
          }
#line 167 "file_names.m"
        }
#line 165 "file_names.m"
        if (!(parse_tree__file_names__succeeded))
#line 170 "file_names.m"
          {
#line 170 "file_names.m"
            MR_Word parse_tree__file_names__ModuleName_9;
#line 170 "file_names.m"
            MR_String parse_tree__file_names__ModuleNameStr_10;
#line 170 "file_names.m"
            MR_String parse_tree__file_names__V_13_13;

#line 171 "file_names.m"
            {
#line 171 "file_names.m"
              parse_tree__file_names__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(parse_tree__file_names__HeadVar__1_1, &parse_tree__file_names__V_13_13, &parse_tree__file_names__ModuleName_9);
            }
#line 170 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 170 "file_names.m"
              {
#line 171 "file_names.m"
                parse_tree__file_names__succeeded = (strcmp((MR_String) "mercury", parse_tree__file_names__V_13_13) == 0);
#line 170 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 170 "file_names.m"
                  {
#line 446 "file_names.m"
                    {
#line 446 "file_names.m"
                      parse_tree__file_names__ModuleNameStr_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_9);
                    }
#line 173 "file_names.m"
                    {
#line 173 "file_names.m"
                      return parse_tree__file_names__succeeded = mercury__library__mercury_std_library_module_1_p_0(parse_tree__file_names__ModuleNameStr_10);
                    }
#line 170 "file_names.m"
                  }
#line 170 "file_names.m"
              }
#line 170 "file_names.m"
          }
#line 165 "file_names.m"
      }
#line 165 "file_names.m"
    else
#line 165 "file_names.m"
      {
#line 165 "file_names.m"
        MR_String parse_tree__file_names__Name_2 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__file_names__HeadVar__1_1, (MR_Integer) 0)));

#line 166 "file_names.m"
        {
#line 166 "file_names.m"
          return parse_tree__file_names__succeeded = mercury__library__mercury_std_library_module_1_p_0(parse_tree__file_names__Name_2);
        }
#line 165 "file_names.m"
      }
#line 165 "file_names.m"
    return parse_tree__file_names__succeeded;
#line 165 "file_names.m"
  }
#line 29 "file_names.m"
}

void mercury__parse_tree__file_names__init(void)
{
}

void mercury__parse_tree__file_names__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0);
}

void mercury__parse_tree__file_names__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.file_names. */
