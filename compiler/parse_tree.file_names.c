/*
** Automatically generated from `file_names.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.source_file_map.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 508 "file_names.m"
struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s {
#line 508 "file_names.m"
  MR_Word parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1;
#line 508 "file_names.m"
  MR_String parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2;
#line 510 "file_names.m"
  MR_bool parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded;
#line 578 "file_names.m"
  jmp_buf parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__commit_1;
#line 578 "file_names.m"
  MR_String parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16;
#line 508 "file_names.m"
};


#line 104 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0;

#line 107 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1;

#line 110 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0[2];

#line 113 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0[2];

#line 116 "parse_tree.file_names.c"
static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0[2];

#line 119 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0;

#line 122 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1;

#line 125 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0[2];

#line 128 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0[2];

#line 131 "parse_tree.file_names.c"
static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0[2];

#line 134 "parse_tree.file_names.c"
static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
#line 137 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_1,
#line 139 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2);

#line 142 "parse_tree.file_names.c"
static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
#line 145 "parse_tree.file_names.c"
  MR_Box * parse_tree__file_names__wrapper_arg_1,
#line 147 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2,
#line 149 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_3);

#line 152 "parse_tree.file_names.c"
static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
#line 155 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_1,
#line 157 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2);

#line 160 "parse_tree.file_names.c"
static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
#line 163 "parse_tree.file_names.c"
  MR_Box * parse_tree__file_names__wrapper_arg_1,
#line 165 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2,
#line 167 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_3);

#line 259 "file_names.m"
static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(
#line 259 "file_names.m"
  MR_Word parse_tree__file_names__Globals_11,
#line 259 "file_names.m"
  MR_Word parse_tree__file_names__BaseParentDirs_13,
#line 259 "file_names.m"
  MR_String parse_tree__file_names__BaseName_14,
#line 259 "file_names.m"
  MR_String parse_tree__file_names__Ext_15,
#line 259 "file_names.m"
  MR_Word parse_tree__file_names__Search_16,
#line 259 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_17,
#line 259 "file_names.m"
  MR_String * parse_tree__file_names__FileName_18);

#line 578 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_1(
#line 578 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg);

#line 578 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_2(
#line 578 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg);

#line 578 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_3(
#line 578 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg);

#line 508 "file_names.m"
static MR_bool MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0(
#line 508 "file_names.m"
  MR_Word parse_tree__file_names__Globals_1,
#line 508 "file_names.m"
  MR_String parse_tree__file_names__HeadVar__2_2);

#line 450 "file_names.m"
static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0(
#line 450 "file_names.m"
  MR_Word parse_tree__file_names__Globals_10,
#line 450 "file_names.m"
  MR_Word parse_tree__file_names__SubDirNames_11,
#line 450 "file_names.m"
  MR_Word parse_tree__file_names__Search_12,
#line 450 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_13,
#line 450 "file_names.m"
  MR_String parse_tree__file_names__BaseName_14,
#line 450 "file_names.m"
  MR_String parse_tree__file_names__Ext_15,
#line 450 "file_names.m"
  MR_String * parse_tree__file_names__FileName_16);


static /* final */ const MR_Box parse_tree__file_names_scalar_common_1[1][2];


#line 469 "file_names.m"
/* sealed */ struct parse_tree__file_names__vector_common_type_2_0_s {
#line 469 "file_names.m"
  const MR_String parse_tree__file_names__vector_common_type_2_0__vct_2_f_0;
#line 469 "file_names.m"
};

static /* final */ const struct parse_tree__file_names__vector_common_type_2_0_s parse_tree__file_names_vector_common_2[46];



static /* final */ const MR_Box parse_tree__file_names_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "jmercury")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};


static /* final */ const struct parse_tree__file_names__vector_common_type_2_0_s parse_tree__file_names_vector_common_2[46] = {
  /* row 0 */   {     (MR_String) ".analysis" },
  /* row 1 */   {     (MR_String) ".imdg" },
  /* row 2 */   {     (MR_String) ".opt" },
  /* row 3 */   {     (MR_String) ".request" },
  /* row 4 */   {     (MR_String) ".trans_opt" },
  /* row 5 */   {     (MR_String) ".hrl" },
  /* row 6 */   {     (MR_String) ".hrl.tmp" },
  /* row 7 */   {     (MR_String) ".mih" },
  /* row 8 */   {     (MR_String) ".mih.tmp" },
  /* row 9 */   {     (MR_String) ".analysis" },
  /* row 10 */   {     (MR_String) ".imdg" },
  /* row 11 */   {     (MR_String) ".opt" },
  /* row 12 */   {     (MR_String) ".request" },
  /* row 13 */   {     (MR_String) ".trans_opt" },
  /* row 14 */   {     (MR_String) "_init.pic_o" },
  /* row 15 */   {     NULL },
  /* row 16 */   {     (MR_String) ".\044O" },
  /* row 17 */   {     (MR_String) ".lpic_o" },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     (MR_String) "_init.lpic_o" },
  /* row 26 */   {     (MR_String) "_init.\044O" },
  /* row 27 */   {     (MR_String) "_init.\044(EXT_FOR_PIC_OBJECTS)" },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
  /* row 32 */   {     NULL },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     NULL },
  /* row 36 */   {     (MR_String) "\044(EXT_FOR_PIC_OBJECTS)" },
  /* row 37 */   {     (MR_String) "_init.o" },
  /* row 38 */   {     NULL },
  /* row 39 */   {     NULL },
  /* row 40 */   {     NULL },
  /* row 41 */   {     NULL },
  /* row 42 */   {     NULL },
  /* row 43 */   {     NULL },
  /* row 44 */   {     (MR_String) ".pic_o" },
  /* row 45 */   {     (MR_String) ".o" },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 314 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0 = {
  (MR_String) "do_create_dirs",
  (MR_Integer) 0
};

#line 320 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1 = {
  (MR_String) "do_not_create_dirs",
  (MR_Integer) 1
};

#line 326 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1
};

#line 332 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1
};

#line 338 "parse_tree.file_names.c"
static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 344 "parse_tree.file_names.c"
const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_create_dirs",
  {     parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0 },
  {     parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0
};

#line 361 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0 = {
  (MR_String) "do_search",
  (MR_Integer) 0
};

#line 367 "parse_tree.file_names.c"
static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1 = {
  (MR_String) "do_not_search",
  (MR_Integer) 1
};

#line 373 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1
};

#line 379 "parse_tree.file_names.c"
static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0
};

#line 385 "parse_tree.file_names.c"
static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 391 "parse_tree.file_names.c"
const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_search_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_search_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_search",
  {     parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0 },
  {     parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0
};

#line 408 "parse_tree.file_names.c"
static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
#line 411 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_1,
#line 413 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2)
#line 415 "parse_tree.file_names.c"
{
#line 417 "parse_tree.file_names.c"
  {
#line 419 "parse_tree.file_names.c"
    MR_bool parse_tree__file_names__succeeded;

#line 422 "parse_tree.file_names.c"
    {
#line 424 "parse_tree.file_names.c"
      parse_tree__file_names__succeeded = parse_tree__file_names____Unify____maybe_create_dirs_0_0(((MR_Word) parse_tree__file_names__wrapper_arg_1), ((MR_Word) parse_tree__file_names__wrapper_arg_2));
    }
#line 427 "parse_tree.file_names.c"
    return parse_tree__file_names__succeeded;
#line 429 "parse_tree.file_names.c"
  }
#line 431 "parse_tree.file_names.c"
}

#line 434 "parse_tree.file_names.c"
static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
#line 437 "parse_tree.file_names.c"
  MR_Box * parse_tree__file_names__wrapper_arg_1,
#line 439 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2,
#line 441 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_3)
#line 443 "parse_tree.file_names.c"
{
#line 445 "parse_tree.file_names.c"
  {
#line 447 "parse_tree.file_names.c"
    MR_Word parse_tree__file_names__conv0_HeadVar__1_1;

#line 450 "parse_tree.file_names.c"
    {
#line 452 "parse_tree.file_names.c"
      parse_tree__file_names____Compare____maybe_create_dirs_0_0(&parse_tree__file_names__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_names__wrapper_arg_2), ((MR_Word) parse_tree__file_names__wrapper_arg_3));
    }
#line 455 "parse_tree.file_names.c"
    *parse_tree__file_names__wrapper_arg_1 = ((MR_Box) (parse_tree__file_names__conv0_HeadVar__1_1));
#line 457 "parse_tree.file_names.c"
  }
#line 459 "parse_tree.file_names.c"
}

#line 462 "parse_tree.file_names.c"
static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
#line 465 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_1,
#line 467 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2)
#line 469 "parse_tree.file_names.c"
{
#line 471 "parse_tree.file_names.c"
  {
#line 473 "parse_tree.file_names.c"
    MR_bool parse_tree__file_names__succeeded;

#line 476 "parse_tree.file_names.c"
    {
#line 478 "parse_tree.file_names.c"
      parse_tree__file_names__succeeded = parse_tree__file_names____Unify____maybe_search_0_0(((MR_Word) parse_tree__file_names__wrapper_arg_1), ((MR_Word) parse_tree__file_names__wrapper_arg_2));
    }
#line 481 "parse_tree.file_names.c"
    return parse_tree__file_names__succeeded;
#line 483 "parse_tree.file_names.c"
  }
#line 485 "parse_tree.file_names.c"
}

#line 488 "parse_tree.file_names.c"
static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
#line 491 "parse_tree.file_names.c"
  MR_Box * parse_tree__file_names__wrapper_arg_1,
#line 493 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_2,
#line 495 "parse_tree.file_names.c"
  MR_Box parse_tree__file_names__wrapper_arg_3)
#line 497 "parse_tree.file_names.c"
{
#line 499 "parse_tree.file_names.c"
  {
#line 501 "parse_tree.file_names.c"
    MR_Word parse_tree__file_names__conv0_HeadVar__1_1;

#line 504 "parse_tree.file_names.c"
    {
#line 506 "parse_tree.file_names.c"
      parse_tree__file_names____Compare____maybe_search_0_0(&parse_tree__file_names__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_names__wrapper_arg_2), ((MR_Word) parse_tree__file_names__wrapper_arg_3));
    }
#line 509 "parse_tree.file_names.c"
    *parse_tree__file_names__wrapper_arg_1 = ((MR_Box) (parse_tree__file_names__conv0_HeadVar__1_1));
#line 511 "parse_tree.file_names.c"
  }
#line 513 "parse_tree.file_names.c"
}

#line 259 "file_names.m"
static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(
#line 259 "file_names.m"
  MR_Word parse_tree__file_names__Globals_11,
#line 259 "file_names.m"
  MR_Word parse_tree__file_names__BaseParentDirs_13,
#line 259 "file_names.m"
  MR_String parse_tree__file_names__BaseName_14,
#line 259 "file_names.m"
  MR_String parse_tree__file_names__Ext_15,
#line 259 "file_names.m"
  MR_Word parse_tree__file_names__Search_16,
#line 259 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_17,
#line 259 "file_names.m"
  MR_String * parse_tree__file_names__FileName_18)
#line 259 "file_names.m"
{
#line 264 "file_names.m"
  {
#line 264 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 264 "file_names.m"
    MR_Word parse_tree__file_names__UseSubdirs_20;
#line 264 "file_names.m"
    MR_Word parse_tree__file_names__UseGradeSubdirs_21;
#line 264 "file_names.m"
    MR_String parse_tree__file_names__LibExt_22;
#line 264 "file_names.m"
    MR_String parse_tree__file_names__SharedLibExt_23;
#line 281 "file_names.m"
    MR_Integer parse_tree__file_names__lo_0;
#line 281 "file_names.m"
    MR_Integer parse_tree__file_names__hi_1;
#line 281 "file_names.m"
    MR_Integer parse_tree__file_names__mid_2;
#line 281 "file_names.m"
    MR_Integer parse_tree__file_names__result_3;

#line 265 "file_names.m"
    {
#line 265 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 648, &parse_tree__file_names__UseSubdirs_20);
    }
#line 266 "file_names.m"
    {
#line 266 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 649, &parse_tree__file_names__UseGradeSubdirs_21);
    }
#line 267 "file_names.m"
    {
#line 267 "file_names.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 577, &parse_tree__file_names__LibExt_22);
    }
#line 268 "file_names.m"
    {
#line 268 "file_names.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 576, &parse_tree__file_names__SharedLibExt_23);
    }
#line 279 "file_names.m"
    parse_tree__file_names__succeeded = (parse_tree__file_names__Search_16 == (MR_Integer) 0);
#line 279 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 279 "file_names.m"
      {
#line 281 "file_names.m"
        /* binary string simple lookup switch */
#line 281 "file_names.m"
        parse_tree__file_names__lo_0 = (MR_Integer) 0;
#line 281 "file_names.m"
        parse_tree__file_names__hi_1 = (MR_Integer) 3;
#line 281 "file_names.m"
        do
#line 281 "file_names.m"
          {
#line 281 "file_names.m"
            parse_tree__file_names__mid_2 = (((parse_tree__file_names__lo_0 + parse_tree__file_names__hi_1)) / (MR_Integer) 2);
#line 281 "file_names.m"
            parse_tree__file_names__result_3 = MR_strcmp(parse_tree__file_names__Ext_15, ((&parse_tree__file_names_vector_common_2[5 + parse_tree__file_names__mid_2]))->parse_tree__file_names__vector_common_type_2_0__vct_2_f_0);
#line 281 "file_names.m"
            if ((parse_tree__file_names__result_3 == (MR_Integer) 0))
#line 281 "file_names.m"
              {
#line 281 "file_names.m"
                parse_tree__file_names__succeeded = MR_TRUE;
#line 281 "file_names.m"
                /* jump out of search loop */
#line 281 "file_names.m"
                goto label_0;
#line 281 "file_names.m"
              }
#line 281 "file_names.m"
            else
#line 281 "file_names.m"
            if ((parse_tree__file_names__result_3 < (MR_Integer) 0))
#line 281 "file_names.m"
              parse_tree__file_names__hi_1 = (parse_tree__file_names__mid_2 - (MR_Integer) 1);
#line 281 "file_names.m"
            else
#line 281 "file_names.m"
              parse_tree__file_names__lo_0 = (parse_tree__file_names__mid_2 + (MR_Integer) 1);
#line 281 "file_names.m"
          }
#line 281 "file_names.m"
        while ((parse_tree__file_names__lo_0 <= parse_tree__file_names__hi_1));
#line 281 "file_names.m"
        parse_tree__file_names__succeeded = MR_FALSE;
#line 281 "file_names.m"
      label_0:;
#line 279 "file_names.m"
      }
#line 287 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 286 "file_names.m"
      *parse_tree__file_names__FileName_18 = parse_tree__file_names__BaseName_14;
#line 287 "file_names.m"
    else
#line 295 "file_names.m"
      {
#line 288 "file_names.m"
        parse_tree__file_names__succeeded = (parse_tree__file_names__UseSubdirs_20 == (MR_Integer) 0);
#line 295 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 455 "file_names.m"
          {
#line 455 "file_names.m"
            MR_Word parse_tree__file_names__UseGradeSubdirs_65;
#line 455 "file_names.m"
            MR_Word parse_tree__file_names__UseSubdirs_66;
#line 455 "file_names.m"
            MR_Word parse_tree__file_names__DirComponents_69;
#line 469 "file_names.m"
            MR_Integer parse_tree__file_names__lo_4;
#line 469 "file_names.m"
            MR_Integer parse_tree__file_names__hi_5;
#line 469 "file_names.m"
            MR_Integer parse_tree__file_names__mid_6;
#line 469 "file_names.m"
            MR_Integer parse_tree__file_names__result_7;

#line 456 "file_names.m"
            {
#line 456 "file_names.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 649, &parse_tree__file_names__UseGradeSubdirs_65);
            }
#line 457 "file_names.m"
            {
#line 457 "file_names.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 648, &parse_tree__file_names__UseSubdirs_66);
            }
#line 459 "file_names.m"
            parse_tree__file_names__succeeded = (parse_tree__file_names__UseGradeSubdirs_65 == (MR_Integer) 1);
#line 459 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 459 "file_names.m"
              {
#line 460 "file_names.m"
                {
#line 460 "file_names.m"
                  parse_tree__file_names__succeeded = parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0(parse_tree__file_names__Globals_11, parse_tree__file_names__Ext_15);
                }
#line 459 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 459 "file_names.m"
                  {
#line 467 "file_names.m"
                    parse_tree__file_names__succeeded = (parse_tree__file_names__Search_16 == (MR_Integer) 0);
#line 467 "file_names.m"
                    if (parse_tree__file_names__succeeded)
#line 467 "file_names.m"
                      {
#line 469 "file_names.m"
                        /* binary string simple lookup switch */
#line 469 "file_names.m"
                        parse_tree__file_names__lo_4 = (MR_Integer) 0;
#line 469 "file_names.m"
                        parse_tree__file_names__hi_5 = (MR_Integer) 4;
#line 469 "file_names.m"
                        do
#line 469 "file_names.m"
                          {
#line 469 "file_names.m"
                            parse_tree__file_names__mid_6 = (((parse_tree__file_names__lo_4 + parse_tree__file_names__hi_5)) / (MR_Integer) 2);
#line 469 "file_names.m"
                            parse_tree__file_names__result_7 = MR_strcmp(parse_tree__file_names__Ext_15, ((&parse_tree__file_names_vector_common_2[9 + parse_tree__file_names__mid_6]))->parse_tree__file_names__vector_common_type_2_0__vct_2_f_0);
#line 469 "file_names.m"
                            if ((parse_tree__file_names__result_7 == (MR_Integer) 0))
#line 469 "file_names.m"
                              {
#line 469 "file_names.m"
                                parse_tree__file_names__succeeded = MR_TRUE;
#line 469 "file_names.m"
                                /* jump out of search loop */
#line 469 "file_names.m"
                                goto label_1;
#line 469 "file_names.m"
                              }
#line 469 "file_names.m"
                            else
#line 469 "file_names.m"
                            if ((parse_tree__file_names__result_7 < (MR_Integer) 0))
#line 469 "file_names.m"
                              parse_tree__file_names__hi_5 = (parse_tree__file_names__mid_6 - (MR_Integer) 1);
#line 469 "file_names.m"
                            else
#line 469 "file_names.m"
                              parse_tree__file_names__lo_4 = (parse_tree__file_names__mid_6 + (MR_Integer) 1);
#line 469 "file_names.m"
                          }
#line 469 "file_names.m"
                        while ((parse_tree__file_names__lo_4 <= parse_tree__file_names__hi_5));
#line 469 "file_names.m"
                        parse_tree__file_names__succeeded = MR_FALSE;
#line 469 "file_names.m"
                      label_1:;
#line 467 "file_names.m"
                      }
#line 466 "file_names.m"
                    parse_tree__file_names__succeeded = !(parse_tree__file_names__succeeded);
#line 459 "file_names.m"
                  }
#line 459 "file_names.m"
              }
#line 485 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 476 "file_names.m"
              {
#line 476 "file_names.m"
                MR_String parse_tree__file_names__Grade_67;
#line 476 "file_names.m"
                MR_String parse_tree__file_names__TargetArch_68;
#line 476 "file_names.m"
                MR_Word parse_tree__file_names__V_79_79;
#line 476 "file_names.m"
                MR_Word parse_tree__file_names__V_80_80;
#line 476 "file_names.m"
                MR_Word parse_tree__file_names__V_81_81;

#line 476 "file_names.m"
                {
#line 476 "file_names.m"
                  libs__handle_options__grade_directory_component_2_p_0(parse_tree__file_names__Globals_11, &parse_tree__file_names__Grade_67);
                }
#line 477 "file_names.m"
                {
#line 477 "file_names.m"
                  libs__globals__lookup_string_option_3_p_0(parse_tree__file_names__Globals_11, (MR_Integer) 667, &parse_tree__file_names__TargetArch_68);
                }
#line 484 "file_names.m"
                {
#line 484 "file_names.m"
                  parse_tree__file_names__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_81_81, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 484 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_81_81, 1) = ((MR_Box) (parse_tree__file_names__BaseParentDirs_13));
#line 484 "file_names.m"
                }
#line 484 "file_names.m"
                {
#line 484 "file_names.m"
                  parse_tree__file_names__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_80_80, 0) = ((MR_Box) (parse_tree__file_names__TargetArch_68));
#line 484 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_80_80, 1) = ((MR_Box) (parse_tree__file_names__V_81_81));
#line 484 "file_names.m"
                }
#line 484 "file_names.m"
                {
#line 484 "file_names.m"
                  parse_tree__file_names__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_79_79, 0) = ((MR_Box) (parse_tree__file_names__Grade_67));
#line 484 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_79_79, 1) = ((MR_Box) (parse_tree__file_names__V_80_80));
#line 484 "file_names.m"
                }
#line 484 "file_names.m"
                {
#line 484 "file_names.m"
                  parse_tree__file_names__DirComponents_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_69, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 484 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_69, 1) = ((MR_Box) (parse_tree__file_names__V_79_79));
#line 484 "file_names.m"
                }
#line 476 "file_names.m"
              }
#line 485 "file_names.m"
            else
#line 489 "file_names.m"
              {
#line 486 "file_names.m"
                parse_tree__file_names__succeeded = (parse_tree__file_names__UseSubdirs_66 == (MR_Integer) 1);
#line 489 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 488 "file_names.m"
                  {
#line 488 "file_names.m"
                    {
#line 488 "file_names.m"
                      parse_tree__file_names__DirComponents_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "file_names.m"
                      MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_69, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 488 "file_names.m"
                      MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_69, 1) = ((MR_Box) (parse_tree__file_names__BaseParentDirs_13));
#line 488 "file_names.m"
                    }
#line 488 "file_names.m"
                  }
#line 489 "file_names.m"
                else
#line 490 "file_names.m"
                  parse_tree__file_names__DirComponents_69 = parse_tree__file_names__BaseParentDirs_13;
#line 489 "file_names.m"
              }
#line 495 "file_names.m"
            if ((parse_tree__file_names__DirComponents_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "file_names.m"
              *parse_tree__file_names__FileName_18 = parse_tree__file_names__BaseName_14;
#line 495 "file_names.m"
            else
#line 496 "file_names.m"
              {
#line 496 "file_names.m"
                MR_Word parse_tree__file_names__Components_74;
#line 496 "file_names.m"
                MR_Word parse_tree__file_names__V_85_85;

#line 501 "file_names.m"
#line 501 "file_names.m"
                switch (parse_tree__file_names__MkDir_17) {
#line 501 "file_names.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 501 "file_names.m"
                  case (MR_Integer) 0:
#line 498 "file_names.m"
                    {
#line 498 "file_names.m"
                      MR_String parse_tree__file_names__DirName_72;
#line 500 "file_names.m"
                      MR_Word parse_tree__file_names__V_73_73;

#line 499 "file_names.m"
                      {
#line 499 "file_names.m"
                        parse_tree__file_names__DirName_72 = mercury__dir__relative_path_name_from_components_1_f_0(parse_tree__file_names__DirComponents_69);
                      }
#line 500 "file_names.m"
                      {
#line 500 "file_names.m"
                        mercury__dir__make_directory_4_p_0(parse_tree__file_names__DirName_72, &parse_tree__file_names__V_73_73);
                      }
#line 498 "file_names.m"
                    }
#line 501 "file_names.m"
                    break;
#line 501 "file_names.m"
                  case (MR_Integer) 1:
#line 502 "file_names.m"
                    {
#line 502 "file_names.m"
                    }
#line 501 "file_names.m"
                    break;
#line 501 "file_names.m"
                }
#line 504 "file_names.m"
                {
#line 504 "file_names.m"
                  parse_tree__file_names__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_85_85, 0) = ((MR_Box) (parse_tree__file_names__BaseName_14));
#line 504 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "file_names.m"
                }
#line 504 "file_names.m"
                {
#line 504 "file_names.m"
                  parse_tree__file_names__Components_74 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__file_names__DirComponents_69, parse_tree__file_names__V_85_85);
                }
#line 505 "file_names.m"
                {
#line 505 "file_names.m"
                  *parse_tree__file_names__FileName_18 = mercury__dir__relative_path_name_from_components_1_f_0(parse_tree__file_names__Components_74);
                }
#line 496 "file_names.m"
              }
#line 455 "file_names.m"
          }
#line 295 "file_names.m"
        else
#line 372 "file_names.m"
          {
#line 301 "file_names.m"
            parse_tree__file_names__succeeded = (parse_tree__file_names__UseGradeSubdirs_21 == (MR_Integer) 1);
#line 301 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 302 "file_names.m"
              {
#line 302 "file_names.m"
                parse_tree__file_names__succeeded = parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0(parse_tree__file_names__Globals_11, parse_tree__file_names__Ext_15);
              }
#line 300 "file_names.m"
            parse_tree__file_names__succeeded = !(parse_tree__file_names__succeeded);
#line 303 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 303 "file_names.m"
              {
#line 363 "file_names.m"
                {
#line 363 "file_names.m"
                  MR_Integer parse_tree__file_names__case_num_8 = (MR_Integer) -1;

#line 363 "file_names.m"
#line 363 "file_names.m"
                  switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 0)) {
#line 363 "file_names.m"
                    case (MR_Integer) 0:
#line 363 "file_names.m"
                      parse_tree__file_names__case_num_8 = (MR_Integer) 0;
#line 363 "file_names.m"
                      break;
#line 363 "file_names.m"
                    case (MR_Integer) 46:
#line 363 "file_names.m"
#line 363 "file_names.m"
                      switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 1)) {
#line 363 "file_names.m"
                        case (MR_Integer) 36:
#line 363 "file_names.m"
#line 363 "file_names.m"
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
#line 363 "file_names.m"
                            case (MR_Integer) 40:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".\044(EXT_FOR_SHARED_LIB)"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 1;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                            case (MR_Integer) 65:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".\044A"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 2;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                          }
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 97:
#line 363 "file_names.m"
#line 363 "file_names.m"
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
#line 363 "file_names.m"
                            case (MR_Integer) 0:
#line 363 "file_names.m"
                              parse_tree__file_names__case_num_8 = (MR_Integer) 3;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                            case (MR_Integer) 108:
#line 363 "file_names.m"
                              if (((((MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 4)) == (MR_Integer) 95))))
#line 363 "file_names.m"
#line 363 "file_names.m"
                                switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 5)) {
#line 363 "file_names.m"
                                  case (MR_Integer) 105:
#line 363 "file_names.m"
                                    if (((((MR_nth_code_unit(parse_tree__file_names__Ext_15, 6)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 7)) == (MR_Integer) 116))))
#line 363 "file_names.m"
#line 363 "file_names.m"
                                      switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 8)) {
#line 363 "file_names.m"
                                        case (MR_Integer) 51:
#line 363 "file_names.m"
                                          if (MR_offset_streq(9, parse_tree__file_names__Ext_15, (MR_String) ".all_int3s"))
#line 363 "file_names.m"
                                            parse_tree__file_names__case_num_8 = (MR_Integer) 4;
#line 363 "file_names.m"
                                          break;
#line 363 "file_names.m"
                                        case (MR_Integer) 115:
#line 363 "file_names.m"
                                          if (MR_offset_streq(9, parse_tree__file_names__Ext_15, (MR_String) ".all_ints"))
#line 363 "file_names.m"
                                            parse_tree__file_names__case_num_8 = (MR_Integer) 5;
#line 363 "file_names.m"
                                          break;
#line 363 "file_names.m"
                                      }
#line 363 "file_names.m"
                                    break;
#line 363 "file_names.m"
                                  case (MR_Integer) 111:
#line 363 "file_names.m"
                                    if (MR_offset_streq(6, parse_tree__file_names__Ext_15, (MR_String) ".all_opts"))
#line 363 "file_names.m"
                                      parse_tree__file_names__case_num_8 = (MR_Integer) 6;
#line 363 "file_names.m"
                                    break;
#line 363 "file_names.m"
                                  case (MR_Integer) 116:
#line 363 "file_names.m"
                                    if (MR_offset_streq(6, parse_tree__file_names__Ext_15, (MR_String) ".all_trans_opts"))
#line 363 "file_names.m"
                                      parse_tree__file_names__case_num_8 = (MR_Integer) 7;
#line 363 "file_names.m"
                                    break;
#line 363 "file_names.m"
                                }
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                          }
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 98:
#line 363 "file_names.m"
#line 363 "file_names.m"
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
#line 363 "file_names.m"
                            case (MR_Integer) 97:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".bat"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 8;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                            case (MR_Integer) 101:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".beams"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 9;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                          }
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 99:
#line 363 "file_names.m"
#line 363 "file_names.m"
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
#line 363 "file_names.m"
                            case (MR_Integer) 104:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".check"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 10;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                            case (MR_Integer) 108:
#line 363 "file_names.m"
#line 363 "file_names.m"
                              switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) {
#line 363 "file_names.m"
                                case (MR_Integer) 97:
#line 363 "file_names.m"
                                  if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".classes"))
#line 363 "file_names.m"
                                    parse_tree__file_names__case_num_8 = (MR_Integer) 11;
#line 363 "file_names.m"
                                  break;
#line 363 "file_names.m"
                                case (MR_Integer) 101:
#line 363 "file_names.m"
                                  if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".clean"))
#line 363 "file_names.m"
                                    parse_tree__file_names__case_num_8 = (MR_Integer) 12;
#line 363 "file_names.m"
                                  break;
#line 363 "file_names.m"
                              }
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                          }
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 100:
#line 363 "file_names.m"
#line 363 "file_names.m"
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
#line 363 "file_names.m"
                            case (MR_Integer) 101:
#line 363 "file_names.m"
                              if (((((((((MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) == (MR_Integer) 112)) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 5)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 6)) == (MR_Integer) 100))))
#line 363 "file_names.m"
#line 363 "file_names.m"
                                switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 7)) {
#line 363 "file_names.m"
                                  case (MR_Integer) 0:
#line 363 "file_names.m"
                                    parse_tree__file_names__case_num_8 = (MR_Integer) 13;
#line 363 "file_names.m"
                                    break;
#line 363 "file_names.m"
                                  case (MR_Integer) 101:
#line 363 "file_names.m"
                                    if (MR_offset_streq(8, parse_tree__file_names__Ext_15, (MR_String) ".dependency_graph"))
#line 363 "file_names.m"
                                      parse_tree__file_names__case_num_8 = (MR_Integer) 14;
#line 363 "file_names.m"
                                    break;
#line 363 "file_names.m"
                                }
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                            case (MR_Integer) 108:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".dll"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 15;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                            case (MR_Integer) 121:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".dylib"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 16;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                          }
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 101:
#line 363 "file_names.m"
#line 363 "file_names.m"
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
#line 363 "file_names.m"
                            case (MR_Integer) 114:
#line 363 "file_names.m"
#line 363 "file_names.m"
                              switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) {
#line 363 "file_names.m"
                                case (MR_Integer) 108:
#line 363 "file_names.m"
                                  if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".erls"))
#line 363 "file_names.m"
                                    parse_tree__file_names__case_num_8 = (MR_Integer) 17;
#line 363 "file_names.m"
                                  break;
#line 363 "file_names.m"
                                case (MR_Integer) 114:
#line 363 "file_names.m"
                                  if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".err"))
#line 363 "file_names.m"
                                    parse_tree__file_names__case_num_8 = (MR_Integer) 18;
#line 363 "file_names.m"
                                  break;
#line 363 "file_names.m"
                              }
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                            case (MR_Integer) 120:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".exe"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 19;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                          }
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 104:
#line 363 "file_names.m"
                          if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".hlds_dump"))
#line 363 "file_names.m"
                            parse_tree__file_names__case_num_8 = (MR_Integer) 20;
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 105:
#line 363 "file_names.m"
#line 363 "file_names.m"
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
#line 363 "file_names.m"
                            case (MR_Integer) 108:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".ils"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 21;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                            case (MR_Integer) 110:
#line 363 "file_names.m"
#line 363 "file_names.m"
                              switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) {
#line 363 "file_names.m"
                                case (MR_Integer) 105:
#line 363 "file_names.m"
                                  if (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 4)) == (MR_Integer) 116))
#line 363 "file_names.m"
#line 363 "file_names.m"
                                    switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 5)) {
#line 363 "file_names.m"
                                      case (MR_Integer) 0:
#line 363 "file_names.m"
                                        parse_tree__file_names__case_num_8 = (MR_Integer) 22;
#line 363 "file_names.m"
                                        break;
#line 363 "file_names.m"
                                      case (MR_Integer) 46:
#line 363 "file_names.m"
                                        if (MR_offset_streq(6, parse_tree__file_names__Ext_15, (MR_String) ".init.tmp"))
#line 363 "file_names.m"
                                          parse_tree__file_names__case_num_8 = (MR_Integer) 23;
#line 363 "file_names.m"
                                        break;
#line 363 "file_names.m"
                                    }
#line 363 "file_names.m"
                                  break;
#line 363 "file_names.m"
                                case (MR_Integer) 115:
#line 363 "file_names.m"
                                  if (((((((((((MR_nth_code_unit(parse_tree__file_names__Ext_15, 4)) == (MR_Integer) 116)) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 7)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 8)) == (MR_Integer) 95))))
#line 363 "file_names.m"
#line 363 "file_names.m"
                                    switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 9)) {
#line 363 "file_names.m"
                                      case (MR_Integer) 103:
#line 363 "file_names.m"
                                        if (MR_offset_streq(10, parse_tree__file_names__Ext_15, (MR_String) ".install_grade_hdrs"))
#line 363 "file_names.m"
                                          parse_tree__file_names__case_num_8 = (MR_Integer) 24;
#line 363 "file_names.m"
                                        break;
#line 363 "file_names.m"
                                      case (MR_Integer) 104:
#line 363 "file_names.m"
                                        if (MR_offset_streq(10, parse_tree__file_names__Ext_15, (MR_String) ".install_hdrs"))
#line 363 "file_names.m"
                                          parse_tree__file_names__case_num_8 = (MR_Integer) 25;
#line 363 "file_names.m"
                                        break;
#line 363 "file_names.m"
                                      case (MR_Integer) 105:
#line 363 "file_names.m"
                                        if (MR_offset_streq(10, parse_tree__file_names__Ext_15, (MR_String) ".install_ints"))
#line 363 "file_names.m"
                                          parse_tree__file_names__case_num_8 = (MR_Integer) 26;
#line 363 "file_names.m"
                                        break;
#line 363 "file_names.m"
                                      case (MR_Integer) 111:
#line 363 "file_names.m"
                                        if (MR_offset_streq(10, parse_tree__file_names__Ext_15, (MR_String) ".install_opts"))
#line 363 "file_names.m"
                                          parse_tree__file_names__case_num_8 = (MR_Integer) 27;
#line 363 "file_names.m"
                                        break;
#line 363 "file_names.m"
                                    }
#line 363 "file_names.m"
                                  break;
#line 363 "file_names.m"
                                case (MR_Integer) 116:
#line 363 "file_names.m"
#line 363 "file_names.m"
                                  switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 4)) {
#line 363 "file_names.m"
                                    case (MR_Integer) 51:
#line 363 "file_names.m"
                                      if (MR_offset_streq(5, parse_tree__file_names__Ext_15, (MR_String) ".int3s"))
#line 363 "file_names.m"
                                        parse_tree__file_names__case_num_8 = (MR_Integer) 28;
#line 363 "file_names.m"
                                      break;
#line 363 "file_names.m"
                                    case (MR_Integer) 115:
#line 363 "file_names.m"
                                      if (MR_offset_streq(5, parse_tree__file_names__Ext_15, (MR_String) ".ints"))
#line 363 "file_names.m"
                                        parse_tree__file_names__case_num_8 = (MR_Integer) 29;
#line 363 "file_names.m"
                                      break;
#line 363 "file_names.m"
                                  }
#line 363 "file_names.m"
                                  break;
#line 363 "file_names.m"
                              }
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                          }
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 106:
#line 363 "file_names.m"
                          if (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) == (MR_Integer) 97))
#line 363 "file_names.m"
#line 363 "file_names.m"
                            switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) {
#line 363 "file_names.m"
                              case (MR_Integer) 114:
#line 363 "file_names.m"
                                if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".jar"))
#line 363 "file_names.m"
                                  parse_tree__file_names__case_num_8 = (MR_Integer) 30;
#line 363 "file_names.m"
                                break;
#line 363 "file_names.m"
                              case (MR_Integer) 118:
#line 363 "file_names.m"
                                if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".javas"))
#line 363 "file_names.m"
                                  parse_tree__file_names__case_num_8 = (MR_Integer) 31;
#line 363 "file_names.m"
                                break;
#line 363 "file_names.m"
                            }
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 108:
#line 363 "file_names.m"
                          if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".lib"))
#line 363 "file_names.m"
                            parse_tree__file_names__case_num_8 = (MR_Integer) 32;
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 109:
#line 363 "file_names.m"
#line 363 "file_names.m"
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
#line 363 "file_names.m"
                            case (MR_Integer) 104:
#line 363 "file_names.m"
#line 363 "file_names.m"
                              switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) {
#line 363 "file_names.m"
                                case (MR_Integer) 0:
#line 363 "file_names.m"
                                  parse_tree__file_names__case_num_8 = (MR_Integer) 33;
#line 363 "file_names.m"
                                  break;
#line 363 "file_names.m"
                                case (MR_Integer) 46:
#line 363 "file_names.m"
                                  if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".mh.tmp"))
#line 363 "file_names.m"
                                    parse_tree__file_names__case_num_8 = (MR_Integer) 34;
#line 363 "file_names.m"
                                  break;
#line 363 "file_names.m"
                              }
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                            case (MR_Integer) 108:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".mlds_dump"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 35;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                          }
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 111:
#line 363 "file_names.m"
#line 363 "file_names.m"
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
#line 363 "file_names.m"
                            case (MR_Integer) 112:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".opts"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 36;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                            case (MR_Integer) 114:
#line 363 "file_names.m"
                              if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".order"))
#line 363 "file_names.m"
                                parse_tree__file_names__case_num_8 = (MR_Integer) 37;
#line 363 "file_names.m"
                              break;
#line 363 "file_names.m"
                          }
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 114:
#line 363 "file_names.m"
                          if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".realclean"))
#line 363 "file_names.m"
                            parse_tree__file_names__case_num_8 = (MR_Integer) 38;
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 115:
#line 363 "file_names.m"
                          if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".so"))
#line 363 "file_names.m"
                            parse_tree__file_names__case_num_8 = (MR_Integer) 39;
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 116:
#line 363 "file_names.m"
                          if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".trans_opts"))
#line 363 "file_names.m"
                            parse_tree__file_names__case_num_8 = (MR_Integer) 40;
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                        case (MR_Integer) 117:
#line 363 "file_names.m"
                          if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".ugly"))
#line 363 "file_names.m"
                            parse_tree__file_names__case_num_8 = (MR_Integer) 41;
#line 363 "file_names.m"
                          break;
#line 363 "file_names.m"
                      }
#line 363 "file_names.m"
                      break;
#line 363 "file_names.m"
                  }
#line 363 "file_names.m"
                  if ((parse_tree__file_names__case_num_8 < (MR_Integer) 0))
#line 363 "file_names.m"
                    parse_tree__file_names__succeeded = MR_FALSE;
#line 363 "file_names.m"
                  else
#line 363 "file_names.m"
                    {
#line 363 "file_names.m"
                      /* we found a match; look up the results */
#line 363 "file_names.m"
                      parse_tree__file_names__succeeded = MR_TRUE;
#line 363 "file_names.m"
                    }
#line 363 "file_names.m"
                }
#line 363 "file_names.m"
                if (!(parse_tree__file_names__succeeded))
#line 363 "file_names.m"
                  {
#line 367 "file_names.m"
                    {
#line 367 "file_names.m"
                      parse_tree__file_names__succeeded = mercury__string__prefix_2_p_0(parse_tree__file_names__Ext_15, (MR_String) ".mih_dump");
                    }
#line 363 "file_names.m"
                    if (!(parse_tree__file_names__succeeded))
#line 366 "file_names.m"
                      {
#line 366 "file_names.m"
                        {
#line 366 "file_names.m"
                          parse_tree__file_names__succeeded = mercury__string__prefix_2_p_0(parse_tree__file_names__Ext_15, (MR_String) ".c_dump");
                        }
#line 366 "file_names.m"
                      }
#line 363 "file_names.m"
                  }
#line 303 "file_names.m"
              }
#line 372 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 371 "file_names.m"
              *parse_tree__file_names__FileName_18 = parse_tree__file_names__BaseName_14;
#line 372 "file_names.m"
            else
#line 435 "file_names.m"
              {
#line 435 "file_names.m"
                MR_String parse_tree__file_names__SubDirName_24;
#line 435 "file_names.m"
                MR_Word parse_tree__file_names__V_49_49;

#line 377 "file_names.m"
                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dir/*.o") == 0))
#line 376 "file_names.m"
                  parse_tree__file_names__succeeded = MR_TRUE;
#line 377 "file_names.m"
                else
#line 377 "file_names.m"
                if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dir/*.\044O") == 0))
#line 377 "file_names.m"
                  parse_tree__file_names__succeeded = MR_TRUE;
#line 377 "file_names.m"
                else
#line 377 "file_names.m"
                  parse_tree__file_names__succeeded = MR_FALSE;
#line 381 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 380 "file_names.m"
                  parse_tree__file_names__SubDirName_24 = (MR_String) "dirs";
#line 381 "file_names.m"
                else
#line 397 "file_names.m"
                  {
#line 385 "file_names.m"
                    MR_Integer parse_tree__file_names__slot_9;
#line 385 "file_names.m"
                    MR_String parse_tree__file_names__str_10;

#line 385 "file_names.m"
                    /* hashed string simple lookup switch */
#line 385 "file_names.m"
                    /* compute the hash value of the input string */
#line 385 "file_names.m"
                    parse_tree__file_names__slot_9 = ((MR_hash_string6(parse_tree__file_names__Ext_15)) & (MR_Integer) 31);
#line 385 "file_names.m"
                    /* no collisions; no hash chain loop */
#line 385 "file_names.m"
                    /* lookup the string for this hash slot */
#line 385 "file_names.m"
                    parse_tree__file_names__str_10 = ((&parse_tree__file_names_vector_common_2[14 + parse_tree__file_names__slot_9]))->parse_tree__file_names__vector_common_type_2_0__vct_2_f_0;
#line 385 "file_names.m"
                    /* did we find a match? */
#line 385 "file_names.m"
                    if ((((parse_tree__file_names__str_10 != NULL)) && ((strcmp(parse_tree__file_names__str_10, parse_tree__file_names__Ext_15) == 0))))
#line 385 "file_names.m"
                      {
#line 385 "file_names.m"
                        /* we found a match; look up the results */
#line 385 "file_names.m"
                        parse_tree__file_names__succeeded = MR_TRUE;
#line 385 "file_names.m"
                        /* jump out of search loop */
#line 385 "file_names.m"
                        goto label_2;
#line 385 "file_names.m"
                      }
#line 385 "file_names.m"
                    parse_tree__file_names__succeeded = MR_FALSE;
#line 385 "file_names.m"
                  label_2:;
#line 397 "file_names.m"
                    if (parse_tree__file_names__succeeded)
#line 396 "file_names.m"
                      parse_tree__file_names__SubDirName_24 = (MR_String) "os";
#line 397 "file_names.m"
                    else
#line 403 "file_names.m"
                      {
#line 403 "file_names.m"
                        MR_String parse_tree__file_names__ExtName_25;

#line 400 "file_names.m"
                        {
#line 400 "file_names.m"
                          parse_tree__file_names__succeeded = mercury__string__append_3_p_1((MR_String) "_init.", &parse_tree__file_names__ExtName_25, parse_tree__file_names__Ext_15);
                        }
#line 403 "file_names.m"
                        if (parse_tree__file_names__succeeded)
#line 402 "file_names.m"
                          {
#line 402 "file_names.m"
                            {
#line 402 "file_names.m"
                              mercury__string__append_3_p_2(parse_tree__file_names__ExtName_25, (MR_String) "s", &parse_tree__file_names__SubDirName_24);
                            }
#line 402 "file_names.m"
                          }
#line 403 "file_names.m"
                        else
#line 410 "file_names.m"
                          {
#line 410 "file_names.m"
                            MR_String parse_tree__file_names__ExtName_54;
#line 406 "file_names.m"
                            MR_String parse_tree__file_names__ExtName0_26;
#line 406 "file_names.m"
                            MR_String parse_tree__file_names__V_39_39;

#line 406 "file_names.m"
                            {
#line 406 "file_names.m"
                              parse_tree__file_names__succeeded = mercury__string__append_3_p_1((MR_String) ".", &parse_tree__file_names__ExtName0_26, parse_tree__file_names__Ext_15);
                            }
#line 406 "file_names.m"
                            if (parse_tree__file_names__succeeded)
#line 406 "file_names.m"
                              {
#line 407 "file_names.m"
                                parse_tree__file_names__V_39_39 = (MR_String) ".tmp";
#line 407 "file_names.m"
                                {
#line 407 "file_names.m"
                                  parse_tree__file_names__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__file_names__ExtName0_26, parse_tree__file_names__V_39_39, &parse_tree__file_names__ExtName_54);
                                }
#line 406 "file_names.m"
                              }
#line 410 "file_names.m"
                            if (parse_tree__file_names__succeeded)
#line 409 "file_names.m"
                              {
#line 409 "file_names.m"
                                {
#line 409 "file_names.m"
                                  mercury__string__append_3_p_2(parse_tree__file_names__ExtName_54, (MR_String) "s", &parse_tree__file_names__SubDirName_24);
                                }
#line 409 "file_names.m"
                              }
#line 410 "file_names.m"
                            else
#line 416 "file_names.m"
                              {
#line 413 "file_names.m"
                                parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dv") == 0);
#line 416 "file_names.m"
                                if (parse_tree__file_names__succeeded)
#line 415 "file_names.m"
                                  parse_tree__file_names__SubDirName_24 = (MR_String) "deps";
#line 416 "file_names.m"
                                else
#line 423 "file_names.m"
                                  {
#line 418 "file_names.m"
                                    parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_15, parse_tree__file_names__LibExt_22) == 0);
#line 419 "file_names.m"
                                    if (!(parse_tree__file_names__succeeded))
#line 419 "file_names.m"
                                      parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_15, parse_tree__file_names__SharedLibExt_23) == 0);
#line 423 "file_names.m"
                                    if (parse_tree__file_names__succeeded)
#line 422 "file_names.m"
                                      parse_tree__file_names__SubDirName_24 = (MR_String) "lib";
#line 423 "file_names.m"
                                    else
#line 428 "file_names.m"
                                      {
#line 428 "file_names.m"
                                        MR_String parse_tree__file_names__ExtName_51;

#line 425 "file_names.m"
                                        {
#line 425 "file_names.m"
                                          parse_tree__file_names__succeeded = mercury__string__append_3_p_1((MR_String) ".", &parse_tree__file_names__ExtName_51, parse_tree__file_names__Ext_15);
                                        }
#line 428 "file_names.m"
                                        if (parse_tree__file_names__succeeded)
#line 427 "file_names.m"
                                          {
#line 427 "file_names.m"
                                            {
#line 427 "file_names.m"
                                              mercury__string__append_3_p_2(parse_tree__file_names__ExtName_51, (MR_String) "s", &parse_tree__file_names__SubDirName_24);
                                            }
#line 427 "file_names.m"
                                          }
#line 428 "file_names.m"
                                        else
#line 433 "file_names.m"
                                          {
#line 430 "file_names.m"
                                            parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_15, (MR_String) "") == 0);
#line 433 "file_names.m"
                                            if (parse_tree__file_names__succeeded)
#line 432 "file_names.m"
                                              parse_tree__file_names__SubDirName_24 = (MR_String) "bin";
#line 433 "file_names.m"
                                            else
#line 434 "file_names.m"
                                              {
#line 434 "file_names.m"
                                                MR_String parse_tree__file_names__V_45_45;
#line 434 "file_names.m"
                                                MR_String parse_tree__file_names__V_47_47;

#line 434 "file_names.m"
                                                {
#line 434 "file_names.m"
                                                  parse_tree__file_names__V_47_47 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__Ext_15, (MR_String) "\'");
                                                }
#line 434 "file_names.m"
                                                {
#line 434 "file_names.m"
                                                  parse_tree__file_names__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "unknown extension \140", parse_tree__file_names__V_47_47);
                                                }
#line 434 "file_names.m"
                                                {
#line 434 "file_names.m"
                                                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.file_names", (MR_String) "predicate \140parse_tree.file_names.choose_file_name\'/10", parse_tree__file_names__V_45_45);
#line 434 "file_names.m"
                                                  return;
                                                }
#line 434 "file_names.m"
                                              }
#line 433 "file_names.m"
                                          }
#line 428 "file_names.m"
                                      }
#line 423 "file_names.m"
                                  }
#line 416 "file_names.m"
                              }
#line 410 "file_names.m"
                          }
#line 403 "file_names.m"
                      }
#line 397 "file_names.m"
                  }
#line 437 "file_names.m"
                {
#line 437 "file_names.m"
                  parse_tree__file_names__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_49_49, 0) = ((MR_Box) (parse_tree__file_names__SubDirName_24));
#line 437 "file_names.m"
                  MR_hl_field(MR_mktag(1), parse_tree__file_names__V_49_49, 1) = ((MR_Box) (parse_tree__file_names__BaseParentDirs_13));
#line 437 "file_names.m"
                }
#line 437 "file_names.m"
                {
#line 437 "file_names.m"
                  parse_tree__file_names__make_file_name_9_p_0(parse_tree__file_names__Globals_11, parse_tree__file_names__V_49_49, parse_tree__file_names__Search_16, parse_tree__file_names__MkDir_17, parse_tree__file_names__BaseName_14, parse_tree__file_names__Ext_15, parse_tree__file_names__FileName_18);
#line 437 "file_names.m"
                  return;
                }
#line 435 "file_names.m"
              }
#line 372 "file_names.m"
          }
#line 295 "file_names.m"
      }
#line 264 "file_names.m"
  }
#line 259 "file_names.m"
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
#line 248 "file_names.m"
  {
#line 248 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 248 "file_names.m"
    MR_String parse_tree__file_names__BaseName_16;

#line 249 "file_names.m"
    {
#line 249 "file_names.m"
      parse_tree__file_names__BaseName_16 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__ExtraLinkObjName_11, parse_tree__file_names__Ext_12);
    }
#line 250 "file_names.m"
    {
#line 250 "file_names.m"
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_16, parse_tree__file_names__Ext_12, (MR_Integer) 1, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
#line 250 "file_names.m"
      return;
    }
#line 248 "file_names.m"
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
#line 248 "file_names.m"
  {
#line 248 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 248 "file_names.m"
    MR_String parse_tree__file_names__BaseName_28;

#line 249 "file_names.m"
    {
#line 249 "file_names.m"
      parse_tree__file_names__BaseName_28 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__FactTableFileName_11, parse_tree__file_names__Ext_12);
    }
#line 250 "file_names.m"
    {
#line 250 "file_names.m"
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_28, parse_tree__file_names__Ext_12, (MR_Integer) 1, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
#line 250 "file_names.m"
      return;
    }
#line 248 "file_names.m"
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
#line 1891 "parse_tree.file_names.c"
  {
#line 1893 "parse_tree.file_names.c"
    MR_bool parse_tree__file_names__succeeded = (parse_tree__file_names__HeadVar__2_1 == parse_tree__file_names__HeadVar__2_2);

#line 1896 "parse_tree.file_names.c"
    return parse_tree__file_names__succeeded;
#line 1898 "parse_tree.file_names.c"
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
#line 1944 "parse_tree.file_names.c"
  {
#line 1946 "parse_tree.file_names.c"
    MR_bool parse_tree__file_names__succeeded = (parse_tree__file_names__HeadVar__2_1 == parse_tree__file_names__HeadVar__2_2);

#line 1949 "parse_tree.file_names.c"
    return parse_tree__file_names__succeeded;
#line 1951 "parse_tree.file_names.c"
  }
#line 40 "file_names.m"
}

#line 578 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_1(
#line 578 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg)
#line 578 "file_names.m"
{
#line 578 "file_names.m"
  {
#line 578 "file_names.m"
    struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s *) parse_tree__file_names__env_ptr_arg;

#line 578 "file_names.m"
    MR_builtin_longjmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__commit_1, 1);
#line 578 "file_names.m"
  }
#line 578 "file_names.m"
}

#line 578 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_2(
#line 578 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg)
#line 578 "file_names.m"
{
#line 578 "file_names.m"
  {
#line 578 "file_names.m"
    struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s *) parse_tree__file_names__env_ptr_arg;

#line 590 "file_names.m"
    (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16) == 0);
#line 591 "file_names.m"
    if (!((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded))
#line 592 "file_names.m"
      {
#line 592 "file_names.m"
        MR_String parse_tree__file_names__V_25_25;

#line 592 "file_names.m"
        {
#line 592 "file_names.m"
          parse_tree__file_names__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "_init", (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16);
        }
#line 592 "file_names.m"
        (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, parse_tree__file_names__V_25_25) == 0);
#line 592 "file_names.m"
      }
#line 591 "file_names.m"
    if ((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded)
#line 591 "file_names.m"
      {
#line 591 "file_names.m"
        parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_1(parse_tree__file_names__env_ptr);
#line 591 "file_names.m"
        return;
      }
#line 578 "file_names.m"
  }
#line 578 "file_names.m"
}

#line 578 "file_names.m"
static void MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_3(
#line 578 "file_names.m"
  void * parse_tree__file_names__env_ptr_arg)
#line 578 "file_names.m"
{
#line 578 "file_names.m"
  {
#line 578 "file_names.m"
    struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s *) parse_tree__file_names__env_ptr_arg;

#line 578 "file_names.m"
    if (MR_builtin_setjmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__commit_1) == 0)
#line 578 "file_names.m"
      {
#line 580 "file_names.m"
        {
#line 580 "file_names.m"
          {
#line 580 "file_names.m"
            libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 512, &(parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16);
          }
#line 580 "file_names.m"
          {
#line 580 "file_names.m"
            parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_2(parse_tree__file_names__env_ptr);
          }
#line 580 "file_names.m"
        }
#line 583 "file_names.m"
        {
#line 583 "file_names.m"
          {
#line 583 "file_names.m"
            libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 513, &(parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16);
          }
#line 583 "file_names.m"
          {
#line 583 "file_names.m"
            parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_2(parse_tree__file_names__env_ptr);
          }
#line 583 "file_names.m"
        }
#line 586 "file_names.m"
        {
#line 586 "file_names.m"
          {
#line 586 "file_names.m"
            libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 514, &(parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__ObjExt_16);
          }
#line 586 "file_names.m"
          {
#line 586 "file_names.m"
            parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_2(parse_tree__file_names__env_ptr);
          }
#line 586 "file_names.m"
        }
#line 578 "file_names.m"
        (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_FALSE;
#line 578 "file_names.m"
      }
#line 578 "file_names.m"
    else
#line 578 "file_names.m"
      (parse_tree__file_names__env_ptr)->parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 578 "file_names.m"
  }
#line 578 "file_names.m"
}

#line 508 "file_names.m"
static MR_bool MR_CALL 
parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0(
#line 508 "file_names.m"
  MR_Word parse_tree__file_names__Globals_1,
#line 508 "file_names.m"
  MR_String parse_tree__file_names__HeadVar__2_2)
#line 508 "file_names.m"
{
#line 508 "file_names.m"
  {
#line 508 "file_names.m"
    struct parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0_s parse_tree__file_names__env;

#line 508 "file_names.m"
    (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1 = parse_tree__file_names__Globals_1;
#line 508 "file_names.m"
    (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2 = parse_tree__file_names__HeadVar__2_2;
#line 510 "file_names.m"
    while (MR_TRUE)
#line 510 "file_names.m"
      {
#line 510 "file_names.m"
        /* tailcall optimized into a loop */
#line 525 "file_names.m"
        {
#line 525 "file_names.m"
          MR_Integer parse_tree__file_names__case_num_0 = (MR_Integer) -1;

#line 525 "file_names.m"
#line 525 "file_names.m"
          switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 0)) {
#line 525 "file_names.m"
            case (MR_Integer) 0:
#line 525 "file_names.m"
              parse_tree__file_names__case_num_0 = (MR_Integer) 0;
#line 525 "file_names.m"
              break;
#line 525 "file_names.m"
            case (MR_Integer) 46:
#line 525 "file_names.m"
#line 525 "file_names.m"
              switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 1)) {
#line 525 "file_names.m"
                case (MR_Integer) 36:
#line 525 "file_names.m"
                  if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".\044A"))
#line 525 "file_names.m"
                    parse_tree__file_names__case_num_0 = (MR_Integer) 1;
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 97:
#line 525 "file_names.m"
#line 525 "file_names.m"
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) {
#line 525 "file_names.m"
                    case (MR_Integer) 0:
#line 525 "file_names.m"
                      parse_tree__file_names__case_num_0 = (MR_Integer) 2;
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                    case (MR_Integer) 110:
#line 525 "file_names.m"
                      if (((((((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 6)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 7)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 8)) == (MR_Integer) 115))))
#line 525 "file_names.m"
#line 525 "file_names.m"
                        switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 9)) {
#line 525 "file_names.m"
                          case (MR_Integer) 0:
#line 525 "file_names.m"
                            parse_tree__file_names__case_num_0 = (MR_Integer) 3;
#line 525 "file_names.m"
                            break;
#line 525 "file_names.m"
                          case (MR_Integer) 95:
#line 525 "file_names.m"
#line 525 "file_names.m"
                            switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 10)) {
#line 525 "file_names.m"
                              case (MR_Integer) 100:
#line 525 "file_names.m"
                                if (MR_offset_streq(11, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".analysis_date"))
#line 525 "file_names.m"
                                  parse_tree__file_names__case_num_0 = (MR_Integer) 4;
#line 525 "file_names.m"
                                break;
#line 525 "file_names.m"
                              case (MR_Integer) 115:
#line 525 "file_names.m"
                                if (MR_offset_streq(11, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".analysis_status"))
#line 525 "file_names.m"
                                  parse_tree__file_names__case_num_0 = (MR_Integer) 5;
#line 525 "file_names.m"
                                break;
#line 525 "file_names.m"
                            }
#line 525 "file_names.m"
                            break;
#line 525 "file_names.m"
                        }
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                  }
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 98:
#line 525 "file_names.m"
#line 525 "file_names.m"
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) {
#line 525 "file_names.m"
                    case (MR_Integer) 97:
#line 525 "file_names.m"
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".bat"))
#line 525 "file_names.m"
                        parse_tree__file_names__case_num_0 = (MR_Integer) 6;
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                    case (MR_Integer) 101:
#line 525 "file_names.m"
                      if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 4)) == (MR_Integer) 109))))
#line 525 "file_names.m"
#line 525 "file_names.m"
                        switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 5)) {
#line 525 "file_names.m"
                          case (MR_Integer) 0:
#line 525 "file_names.m"
                            parse_tree__file_names__case_num_0 = (MR_Integer) 7;
#line 525 "file_names.m"
                            break;
#line 525 "file_names.m"
                          case (MR_Integer) 115:
#line 525 "file_names.m"
                            if (MR_offset_streq(6, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".beams"))
#line 525 "file_names.m"
                              parse_tree__file_names__case_num_0 = (MR_Integer) 8;
#line 525 "file_names.m"
                            break;
#line 525 "file_names.m"
                        }
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                  }
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 99:
#line 525 "file_names.m"
#line 525 "file_names.m"
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) {
#line 525 "file_names.m"
                    case (MR_Integer) 0:
#line 525 "file_names.m"
                      parse_tree__file_names__case_num_0 = (MR_Integer) 9;
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                    case (MR_Integer) 95:
#line 525 "file_names.m"
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".c_date"))
#line 525 "file_names.m"
                        parse_tree__file_names__case_num_0 = (MR_Integer) 10;
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                    case (MR_Integer) 108:
#line 525 "file_names.m"
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".class"))
#line 525 "file_names.m"
                        parse_tree__file_names__case_num_0 = (MR_Integer) 11;
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                    case (MR_Integer) 115:
#line 525 "file_names.m"
#line 525 "file_names.m"
                      switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 3)) {
#line 525 "file_names.m"
                        case (MR_Integer) 0:
#line 525 "file_names.m"
                          parse_tree__file_names__case_num_0 = (MR_Integer) 12;
#line 525 "file_names.m"
                          break;
#line 525 "file_names.m"
                        case (MR_Integer) 95:
#line 525 "file_names.m"
                          if (MR_offset_streq(4, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".cs_date"))
#line 525 "file_names.m"
                            parse_tree__file_names__case_num_0 = (MR_Integer) 13;
#line 525 "file_names.m"
                          break;
#line 525 "file_names.m"
                      }
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                  }
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 100:
#line 525 "file_names.m"
#line 525 "file_names.m"
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) {
#line 525 "file_names.m"
                    case (MR_Integer) 105:
#line 525 "file_names.m"
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".dir"))
#line 525 "file_names.m"
                        parse_tree__file_names__case_num_0 = (MR_Integer) 14;
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                    case (MR_Integer) 108:
#line 525 "file_names.m"
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".dll"))
#line 525 "file_names.m"
                        parse_tree__file_names__case_num_0 = (MR_Integer) 15;
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                  }
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 101:
#line 525 "file_names.m"
                  if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 3)) == (MR_Integer) 108))))
#line 525 "file_names.m"
#line 525 "file_names.m"
                    switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 4)) {
#line 525 "file_names.m"
                      case (MR_Integer) 0:
#line 525 "file_names.m"
                        parse_tree__file_names__case_num_0 = (MR_Integer) 16;
#line 525 "file_names.m"
                        break;
#line 525 "file_names.m"
                      case (MR_Integer) 95:
#line 525 "file_names.m"
                        if (MR_offset_streq(5, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".erl_date"))
#line 525 "file_names.m"
                          parse_tree__file_names__case_num_0 = (MR_Integer) 17;
#line 525 "file_names.m"
                        break;
#line 525 "file_names.m"
                    }
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 104:
#line 525 "file_names.m"
                  if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".hrl"))
#line 525 "file_names.m"
                    parse_tree__file_names__case_num_0 = (MR_Integer) 18;
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 105:
#line 525 "file_names.m"
#line 525 "file_names.m"
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) {
#line 525 "file_names.m"
                    case (MR_Integer) 108:
#line 525 "file_names.m"
#line 525 "file_names.m"
                      switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 3)) {
#line 525 "file_names.m"
                        case (MR_Integer) 0:
#line 525 "file_names.m"
                          parse_tree__file_names__case_num_0 = (MR_Integer) 19;
#line 525 "file_names.m"
                          break;
#line 525 "file_names.m"
                        case (MR_Integer) 95:
#line 525 "file_names.m"
                          if (MR_offset_streq(4, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".il_date"))
#line 525 "file_names.m"
                            parse_tree__file_names__case_num_0 = (MR_Integer) 20;
#line 525 "file_names.m"
                          break;
#line 525 "file_names.m"
                      }
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                    case (MR_Integer) 109:
#line 525 "file_names.m"
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".imdg"))
#line 525 "file_names.m"
                        parse_tree__file_names__case_num_0 = (MR_Integer) 21;
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                    case (MR_Integer) 110:
#line 525 "file_names.m"
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".init"))
#line 525 "file_names.m"
                        parse_tree__file_names__case_num_0 = (MR_Integer) 22;
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                  }
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 106:
#line 525 "file_names.m"
                  if (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) == (MR_Integer) 97))
#line 525 "file_names.m"
#line 525 "file_names.m"
                    switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 3)) {
#line 525 "file_names.m"
                      case (MR_Integer) 114:
#line 525 "file_names.m"
                        if (MR_offset_streq(4, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".jar"))
#line 525 "file_names.m"
                          parse_tree__file_names__case_num_0 = (MR_Integer) 23;
#line 525 "file_names.m"
                        break;
#line 525 "file_names.m"
                      case (MR_Integer) 118:
#line 525 "file_names.m"
                        if (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 4)) == (MR_Integer) 97))
#line 525 "file_names.m"
#line 525 "file_names.m"
                          switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 5)) {
#line 525 "file_names.m"
                            case (MR_Integer) 0:
#line 525 "file_names.m"
                              parse_tree__file_names__case_num_0 = (MR_Integer) 24;
#line 525 "file_names.m"
                              break;
#line 525 "file_names.m"
                            case (MR_Integer) 95:
#line 525 "file_names.m"
                              if (MR_offset_streq(6, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".java_date"))
#line 525 "file_names.m"
                                parse_tree__file_names__case_num_0 = (MR_Integer) 25;
#line 525 "file_names.m"
                              break;
#line 525 "file_names.m"
                          }
#line 525 "file_names.m"
                        break;
#line 525 "file_names.m"
                    }
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 109:
#line 525 "file_names.m"
                  if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".mih"))
#line 525 "file_names.m"
                    parse_tree__file_names__case_num_0 = (MR_Integer) 26;
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 111:
#line 525 "file_names.m"
                  if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 3)) == (MR_Integer) 116))))
#line 525 "file_names.m"
#line 525 "file_names.m"
                    switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 4)) {
#line 525 "file_names.m"
                      case (MR_Integer) 0:
#line 525 "file_names.m"
                        parse_tree__file_names__case_num_0 = (MR_Integer) 27;
#line 525 "file_names.m"
                        break;
#line 525 "file_names.m"
                      case (MR_Integer) 100:
#line 525 "file_names.m"
                        if (MR_offset_streq(5, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".optdate"))
#line 525 "file_names.m"
                          parse_tree__file_names__case_num_0 = (MR_Integer) 28;
#line 525 "file_names.m"
                        break;
#line 525 "file_names.m"
                    }
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 112:
#line 525 "file_names.m"
                  if (((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 5)) == (MR_Integer) 115))))
#line 525 "file_names.m"
#line 525 "file_names.m"
                    switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 6)) {
#line 525 "file_names.m"
                      case (MR_Integer) 0:
#line 525 "file_names.m"
                        parse_tree__file_names__case_num_0 = (MR_Integer) 29;
#line 525 "file_names.m"
                        break;
#line 525 "file_names.m"
                      case (MR_Integer) 95:
#line 525 "file_names.m"
                        if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".pic_s_date"))
#line 525 "file_names.m"
                          parse_tree__file_names__case_num_0 = (MR_Integer) 30;
#line 525 "file_names.m"
                        break;
#line 525 "file_names.m"
                    }
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 114:
#line 525 "file_names.m"
                  if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".request"))
#line 525 "file_names.m"
                    parse_tree__file_names__case_num_0 = (MR_Integer) 31;
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 115:
#line 525 "file_names.m"
#line 525 "file_names.m"
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) {
#line 525 "file_names.m"
                    case (MR_Integer) 0:
#line 525 "file_names.m"
                      parse_tree__file_names__case_num_0 = (MR_Integer) 32;
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                    case (MR_Integer) 95:
#line 525 "file_names.m"
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".s_date"))
#line 525 "file_names.m"
                        parse_tree__file_names__case_num_0 = (MR_Integer) 33;
#line 525 "file_names.m"
                      break;
#line 525 "file_names.m"
                  }
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 116:
#line 525 "file_names.m"
                  if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 3)) == (MR_Integer) 97))))
#line 525 "file_names.m"
#line 525 "file_names.m"
                    switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 4)) {
#line 525 "file_names.m"
                      case (MR_Integer) 99:
#line 525 "file_names.m"
                        if (MR_offset_streq(5, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".track_flags"))
#line 525 "file_names.m"
                          parse_tree__file_names__case_num_0 = (MR_Integer) 34;
#line 525 "file_names.m"
                        break;
#line 525 "file_names.m"
                      case (MR_Integer) 110:
#line 525 "file_names.m"
                        if (((((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 5)) == (MR_Integer) 115)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 7)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 8)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 9)) == (MR_Integer) 116))))
#line 525 "file_names.m"
#line 525 "file_names.m"
                          switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 10)) {
#line 525 "file_names.m"
                            case (MR_Integer) 0:
#line 525 "file_names.m"
                              parse_tree__file_names__case_num_0 = (MR_Integer) 35;
#line 525 "file_names.m"
                              break;
#line 525 "file_names.m"
                            case (MR_Integer) 95:
#line 525 "file_names.m"
                              if (MR_offset_streq(11, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".trans_opt_date"))
#line 525 "file_names.m"
                                parse_tree__file_names__case_num_0 = (MR_Integer) 36;
#line 525 "file_names.m"
                              break;
#line 525 "file_names.m"
                          }
#line 525 "file_names.m"
                        break;
#line 525 "file_names.m"
                    }
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
                case (MR_Integer) 117:
#line 525 "file_names.m"
                  if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".used"))
#line 525 "file_names.m"
                    parse_tree__file_names__case_num_0 = (MR_Integer) 37;
#line 525 "file_names.m"
                  break;
#line 525 "file_names.m"
              }
#line 525 "file_names.m"
              break;
#line 525 "file_names.m"
            case (MR_Integer) 95:
#line 525 "file_names.m"
              if (((((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 3)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 5)) == (MR_Integer) 46))))
#line 525 "file_names.m"
#line 525 "file_names.m"
                switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2), 6)) {
#line 525 "file_names.m"
                  case (MR_Integer) 36:
#line 525 "file_names.m"
                    if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) "_init.\044O"))
#line 525 "file_names.m"
                      parse_tree__file_names__case_num_0 = (MR_Integer) 38;
#line 525 "file_names.m"
                    break;
#line 525 "file_names.m"
                  case (MR_Integer) 98:
#line 525 "file_names.m"
                    if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) "_init.beam"))
#line 525 "file_names.m"
                      parse_tree__file_names__case_num_0 = (MR_Integer) 39;
#line 525 "file_names.m"
                    break;
#line 525 "file_names.m"
                  case (MR_Integer) 99:
#line 525 "file_names.m"
                    if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) "_init.c"))
#line 525 "file_names.m"
                      parse_tree__file_names__case_num_0 = (MR_Integer) 40;
#line 525 "file_names.m"
                    break;
#line 525 "file_names.m"
                  case (MR_Integer) 101:
#line 525 "file_names.m"
                    if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) "_init.erl"))
#line 525 "file_names.m"
                      parse_tree__file_names__case_num_0 = (MR_Integer) 41;
#line 525 "file_names.m"
                    break;
#line 525 "file_names.m"
                }
#line 525 "file_names.m"
              break;
#line 525 "file_names.m"
          }
#line 525 "file_names.m"
          if ((parse_tree__file_names__case_num_0 < (MR_Integer) 0))
#line 525 "file_names.m"
            (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_FALSE;
#line 525 "file_names.m"
          else
#line 525 "file_names.m"
            {
#line 525 "file_names.m"
              /* we found a match; look up the results */
#line 525 "file_names.m"
              (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = MR_TRUE;
#line 525 "file_names.m"
            }
#line 525 "file_names.m"
        }
#line 510 "file_names.m"
        if (!((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded))
#line 516 "file_names.m"
          {
#line 516 "file_names.m"
            MR_String parse_tree__file_names__Ext_7;

#line 514 "file_names.m"
            {
#line 514 "file_names.m"
              (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = mercury__string__remove_suffix_3_p_0((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, (MR_String) ".tmp", &parse_tree__file_names__Ext_7);
            }
#line 516 "file_names.m"
            if ((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded)
#line 515 "file_names.m"
              {
#line 515 "file_names.m"
                /* direct tailcall eliminated */
#line 515 "file_names.m"
                {
#line 515 "file_names.m"
                  MR_String parse_tree__file_names__HeadVar__2__tmp_copy_2 = parse_tree__file_names__Ext_7;

#line 515 "file_names.m"
                  (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2 = parse_tree__file_names__HeadVar__2__tmp_copy_2;
#line 515 "file_names.m"
                }
#line 515 "file_names.m"
                continue;
#line 515 "file_names.m"
              }
#line 516 "file_names.m"
            else
#line 570 "file_names.m"
              {
#line 572 "file_names.m"
                {
#line 572 "file_names.m"
                  MR_String parse_tree__file_names__V_21_21;

#line 572 "file_names.m"
                  {
#line 572 "file_names.m"
                    libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 578, &parse_tree__file_names__V_21_21);
                  }
#line 572 "file_names.m"
                  (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, parse_tree__file_names__V_21_21) == 0);
#line 572 "file_names.m"
                }
#line 573 "file_names.m"
                if (!((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded))
#line 573 "file_names.m"
                  {
#line 574 "file_names.m"
                    {
#line 574 "file_names.m"
                      MR_String parse_tree__file_names__V_22_22;

#line 574 "file_names.m"
                      {
#line 574 "file_names.m"
                        libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 577, &parse_tree__file_names__V_22_22);
                      }
#line 574 "file_names.m"
                      (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, parse_tree__file_names__V_22_22) == 0);
#line 574 "file_names.m"
                    }
#line 573 "file_names.m"
                    if (!((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded))
#line 576 "file_names.m"
                      {
#line 576 "file_names.m"
                        MR_String parse_tree__file_names__V_23_23;

#line 576 "file_names.m"
                        {
#line 576 "file_names.m"
                          libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__Globals_1, (MR_Integer) 576, &parse_tree__file_names__V_23_23);
                        }
#line 576 "file_names.m"
                        (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__HeadVar__2_2, parse_tree__file_names__V_23_23) == 0);
#line 576 "file_names.m"
                      }
#line 573 "file_names.m"
                  }
#line 570 "file_names.m"
                if (!((parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded))
#line 578 "file_names.m"
                  {
#line 578 "file_names.m"
                    {
#line 578 "file_names.m"
                      parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_3(&parse_tree__file_names__env);
                    }
#line 578 "file_names.m"
                  }
#line 570 "file_names.m"
              }
#line 516 "file_names.m"
          }
#line 510 "file_names.m"
        return (parse_tree__file_names__env).parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0_env_0__succeeded;
#line 510 "file_names.m"
        break;
#line 510 "file_names.m"
      }
#line 508 "file_names.m"
  }
#line 508 "file_names.m"
}

#line 450 "file_names.m"
static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0(
#line 450 "file_names.m"
  MR_Word parse_tree__file_names__Globals_10,
#line 450 "file_names.m"
  MR_Word parse_tree__file_names__SubDirNames_11,
#line 450 "file_names.m"
  MR_Word parse_tree__file_names__Search_12,
#line 450 "file_names.m"
  MR_Word parse_tree__file_names__MkDir_13,
#line 450 "file_names.m"
  MR_String parse_tree__file_names__BaseName_14,
#line 450 "file_names.m"
  MR_String parse_tree__file_names__Ext_15,
#line 450 "file_names.m"
  MR_String * parse_tree__file_names__FileName_16)
#line 450 "file_names.m"
{
#line 455 "file_names.m"
  {
#line 455 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 455 "file_names.m"
    MR_Word parse_tree__file_names__UseGradeSubdirs_18;
#line 455 "file_names.m"
    MR_Word parse_tree__file_names__UseSubdirs_19;
#line 455 "file_names.m"
    MR_Word parse_tree__file_names__DirComponents_22;
#line 469 "file_names.m"
    MR_Integer parse_tree__file_names__lo_0;
#line 469 "file_names.m"
    MR_Integer parse_tree__file_names__hi_1;
#line 469 "file_names.m"
    MR_Integer parse_tree__file_names__mid_2;
#line 469 "file_names.m"
    MR_Integer parse_tree__file_names__result_3;

#line 456 "file_names.m"
    {
#line 456 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_10, (MR_Integer) 649, &parse_tree__file_names__UseGradeSubdirs_18);
    }
#line 457 "file_names.m"
    {
#line 457 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_10, (MR_Integer) 648, &parse_tree__file_names__UseSubdirs_19);
    }
#line 459 "file_names.m"
    parse_tree__file_names__succeeded = (parse_tree__file_names__UseGradeSubdirs_18 == (MR_Integer) 1);
#line 459 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 459 "file_names.m"
      {
#line 460 "file_names.m"
        {
#line 460 "file_names.m"
          parse_tree__file_names__succeeded = parse_tree__file_names__file_is_arch_or_grade_dependent_2_p_0(parse_tree__file_names__Globals_10, parse_tree__file_names__Ext_15);
        }
#line 459 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 459 "file_names.m"
          {
#line 467 "file_names.m"
            parse_tree__file_names__succeeded = (parse_tree__file_names__Search_12 == (MR_Integer) 0);
#line 467 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 467 "file_names.m"
              {
#line 469 "file_names.m"
                /* binary string simple lookup switch */
#line 469 "file_names.m"
                parse_tree__file_names__lo_0 = (MR_Integer) 0;
#line 469 "file_names.m"
                parse_tree__file_names__hi_1 = (MR_Integer) 4;
#line 469 "file_names.m"
                do
#line 469 "file_names.m"
                  {
#line 469 "file_names.m"
                    parse_tree__file_names__mid_2 = (((parse_tree__file_names__lo_0 + parse_tree__file_names__hi_1)) / (MR_Integer) 2);
#line 469 "file_names.m"
                    parse_tree__file_names__result_3 = MR_strcmp(parse_tree__file_names__Ext_15, ((&parse_tree__file_names_vector_common_2[0 + parse_tree__file_names__mid_2]))->parse_tree__file_names__vector_common_type_2_0__vct_2_f_0);
#line 469 "file_names.m"
                    if ((parse_tree__file_names__result_3 == (MR_Integer) 0))
#line 469 "file_names.m"
                      {
#line 469 "file_names.m"
                        parse_tree__file_names__succeeded = MR_TRUE;
#line 469 "file_names.m"
                        /* jump out of search loop */
#line 469 "file_names.m"
                        goto label_0;
#line 469 "file_names.m"
                      }
#line 469 "file_names.m"
                    else
#line 469 "file_names.m"
                    if ((parse_tree__file_names__result_3 < (MR_Integer) 0))
#line 469 "file_names.m"
                      parse_tree__file_names__hi_1 = (parse_tree__file_names__mid_2 - (MR_Integer) 1);
#line 469 "file_names.m"
                    else
#line 469 "file_names.m"
                      parse_tree__file_names__lo_0 = (parse_tree__file_names__mid_2 + (MR_Integer) 1);
#line 469 "file_names.m"
                  }
#line 469 "file_names.m"
                while ((parse_tree__file_names__lo_0 <= parse_tree__file_names__hi_1));
#line 469 "file_names.m"
                parse_tree__file_names__succeeded = MR_FALSE;
#line 469 "file_names.m"
              label_0:;
#line 467 "file_names.m"
              }
#line 466 "file_names.m"
            parse_tree__file_names__succeeded = !(parse_tree__file_names__succeeded);
#line 459 "file_names.m"
          }
#line 459 "file_names.m"
      }
#line 485 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 476 "file_names.m"
      {
#line 476 "file_names.m"
        MR_String parse_tree__file_names__Grade_20;
#line 476 "file_names.m"
        MR_String parse_tree__file_names__TargetArch_21;
#line 476 "file_names.m"
        MR_Word parse_tree__file_names__V_34_34;
#line 476 "file_names.m"
        MR_Word parse_tree__file_names__V_35_35;
#line 476 "file_names.m"
        MR_Word parse_tree__file_names__V_36_36;

#line 476 "file_names.m"
        {
#line 476 "file_names.m"
          libs__handle_options__grade_directory_component_2_p_0(parse_tree__file_names__Globals_10, &parse_tree__file_names__Grade_20);
        }
#line 477 "file_names.m"
        {
#line 477 "file_names.m"
          libs__globals__lookup_string_option_3_p_0(parse_tree__file_names__Globals_10, (MR_Integer) 667, &parse_tree__file_names__TargetArch_21);
        }
#line 484 "file_names.m"
        {
#line 484 "file_names.m"
          parse_tree__file_names__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_36_36, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 484 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_36_36, 1) = ((MR_Box) (parse_tree__file_names__SubDirNames_11));
#line 484 "file_names.m"
        }
#line 484 "file_names.m"
        {
#line 484 "file_names.m"
          parse_tree__file_names__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_35_35, 0) = ((MR_Box) (parse_tree__file_names__TargetArch_21));
#line 484 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_35_35, 1) = ((MR_Box) (parse_tree__file_names__V_36_36));
#line 484 "file_names.m"
        }
#line 484 "file_names.m"
        {
#line 484 "file_names.m"
          parse_tree__file_names__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_34_34, 0) = ((MR_Box) (parse_tree__file_names__Grade_20));
#line 484 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_34_34, 1) = ((MR_Box) (parse_tree__file_names__V_35_35));
#line 484 "file_names.m"
        }
#line 484 "file_names.m"
        {
#line 484 "file_names.m"
          parse_tree__file_names__DirComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 484 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 1) = ((MR_Box) (parse_tree__file_names__V_34_34));
#line 484 "file_names.m"
        }
#line 476 "file_names.m"
      }
#line 485 "file_names.m"
    else
#line 489 "file_names.m"
      {
#line 486 "file_names.m"
        parse_tree__file_names__succeeded = (parse_tree__file_names__UseSubdirs_19 == (MR_Integer) 1);
#line 489 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 488 "file_names.m"
          {
#line 488 "file_names.m"
            {
#line 488 "file_names.m"
              parse_tree__file_names__DirComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "file_names.m"
              MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 0) = ((MR_Box) ((MR_String) "Mercury"));
#line 488 "file_names.m"
              MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 1) = ((MR_Box) (parse_tree__file_names__SubDirNames_11));
#line 488 "file_names.m"
            }
#line 488 "file_names.m"
          }
#line 489 "file_names.m"
        else
#line 490 "file_names.m"
          parse_tree__file_names__DirComponents_22 = parse_tree__file_names__SubDirNames_11;
#line 489 "file_names.m"
      }
#line 495 "file_names.m"
    if ((parse_tree__file_names__DirComponents_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "file_names.m"
      *parse_tree__file_names__FileName_16 = parse_tree__file_names__BaseName_14;
#line 495 "file_names.m"
    else
#line 496 "file_names.m"
      {
#line 496 "file_names.m"
        MR_Word parse_tree__file_names__Components_27;
#line 496 "file_names.m"
        MR_Word parse_tree__file_names__V_40_40;

#line 501 "file_names.m"
#line 501 "file_names.m"
        switch (parse_tree__file_names__MkDir_13) {
#line 501 "file_names.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 501 "file_names.m"
          case (MR_Integer) 0:
#line 498 "file_names.m"
            {
#line 498 "file_names.m"
              MR_String parse_tree__file_names__DirName_25;
#line 500 "file_names.m"
              MR_Word parse_tree__file_names__V_26_26;

#line 499 "file_names.m"
              {
#line 499 "file_names.m"
                parse_tree__file_names__DirName_25 = mercury__dir__relative_path_name_from_components_1_f_0(parse_tree__file_names__DirComponents_22);
              }
#line 500 "file_names.m"
              {
#line 500 "file_names.m"
                mercury__dir__make_directory_4_p_0(parse_tree__file_names__DirName_25, &parse_tree__file_names__V_26_26);
              }
#line 498 "file_names.m"
            }
#line 501 "file_names.m"
            break;
#line 501 "file_names.m"
          case (MR_Integer) 1:
#line 502 "file_names.m"
            {
#line 502 "file_names.m"
            }
#line 501 "file_names.m"
            break;
#line 501 "file_names.m"
        }
#line 504 "file_names.m"
        {
#line 504 "file_names.m"
          parse_tree__file_names__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_40_40, 0) = ((MR_Box) (parse_tree__file_names__BaseName_14));
#line 504 "file_names.m"
          MR_hl_field(MR_mktag(1), parse_tree__file_names__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "file_names.m"
        }
#line 504 "file_names.m"
        {
#line 504 "file_names.m"
          parse_tree__file_names__Components_27 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__file_names__DirComponents_22, parse_tree__file_names__V_40_40);
        }
#line 505 "file_names.m"
        {
#line 505 "file_names.m"
          *parse_tree__file_names__FileName_16 = mercury__dir__relative_path_name_from_components_1_f_0(parse_tree__file_names__Components_27);
        }
#line 496 "file_names.m"
      }
#line 455 "file_names.m"
  }
#line 450 "file_names.m"
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
#line 619 "file_names.m"
  {
#line 619 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 617 "file_names.m"
    {
#line 617 "file_names.m"
      parse_tree__file_names__succeeded = mercury__dir__path_name_is_absolute_1_p_0(parse_tree__file_names__OrigFileName_5);
    }
#line 619 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 618 "file_names.m"
      *parse_tree__file_names__Path_6 = parse_tree__file_names__OrigFileName_5;
#line 619 "file_names.m"
    else
#line 623 "file_names.m"
      {
#line 623 "file_names.m"
        MR_String parse_tree__file_names__V_7_7;

#line 623 "file_names.m"
        {
#line 623 "file_names.m"
          parse_tree__file_names__V_7_7 = mercury__dir__dirname_1_f_0(parse_tree__file_names__ModuleSourceFileName_4);
        }
#line 623 "file_names.m"
        {
#line 623 "file_names.m"
          *parse_tree__file_names__Path_6 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__V_7_7, parse_tree__file_names__OrigFileName_5);
        }
#line 623 "file_names.m"
      }
#line 619 "file_names.m"
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
#line 597 "file_names.m"
  {
#line 597 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 597 "file_names.m"
    MR_Word parse_tree__file_names__UseGradeSubdirs_5;
#line 597 "file_names.m"
    MR_Word parse_tree__file_names__UseSubdirs_6;

#line 598 "file_names.m"
    {
#line 598 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_3, (MR_Integer) 649, &parse_tree__file_names__UseGradeSubdirs_5);
    }
#line 599 "file_names.m"
    {
#line 599 "file_names.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_3, (MR_Integer) 648, &parse_tree__file_names__UseSubdirs_6);
    }
#line 601 "file_names.m"
    parse_tree__file_names__succeeded = (parse_tree__file_names__UseGradeSubdirs_5 == (MR_Integer) 1);
#line 606 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 603 "file_names.m"
      {
#line 603 "file_names.m"
        MR_String parse_tree__file_names__Grade_7;
#line 603 "file_names.m"
        MR_String parse_tree__file_names__TargetArch_8;
#line 603 "file_names.m"
        MR_String parse_tree__file_names__V_12_12;
#line 603 "file_names.m"
        MR_String parse_tree__file_names__V_13_13;
#line 603 "file_names.m"
        MR_String parse_tree__file_names__V_14_14;

#line 603 "file_names.m"
        {
#line 603 "file_names.m"
          libs__handle_options__grade_directory_component_2_p_0(parse_tree__file_names__Globals_3, &parse_tree__file_names__Grade_7);
        }
#line 604 "file_names.m"
        {
#line 604 "file_names.m"
          libs__globals__lookup_string_option_3_p_0(parse_tree__file_names__Globals_3, (MR_Integer) 667, &parse_tree__file_names__TargetArch_8);
        }
#line 605 "file_names.m"
        {
#line 605 "file_names.m"
          parse_tree__file_names__V_14_14 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", parse_tree__file_names__Grade_7);
        }
#line 605 "file_names.m"
        {
#line 605 "file_names.m"
          parse_tree__file_names__V_13_13 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__V_14_14, parse_tree__file_names__TargetArch_8);
        }
#line 605 "file_names.m"
        {
#line 605 "file_names.m"
          parse_tree__file_names__V_12_12 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__V_13_13, (MR_String) "Mercury");
        }
#line 605 "file_names.m"
        {
#line 605 "file_names.m"
          *parse_tree__file_names__ClassDirName_4 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__V_12_12, (MR_String) "classs");
        }
#line 603 "file_names.m"
      }
#line 606 "file_names.m"
    else
#line 610 "file_names.m"
      {
#line 607 "file_names.m"
        parse_tree__file_names__succeeded = (parse_tree__file_names__UseSubdirs_6 == (MR_Integer) 1);
#line 610 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 609 "file_names.m"
          {
#line 609 "file_names.m"
            {
#line 609 "file_names.m"
              *parse_tree__file_names__ClassDirName_4 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "classs");
            }
#line 609 "file_names.m"
          }
#line 610 "file_names.m"
        else
#line 611 "file_names.m"
          *parse_tree__file_names__ClassDirName_4 = (MR_String) ".";
#line 610 "file_names.m"
      }
#line 597 "file_names.m"
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
#line 448 "file_names.m"
  {
#line 448 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 448 "file_names.m"
    {
#line 448 "file_names.m"
      *parse_tree__file_names__MakeVarName_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_3);
    }
#line 448 "file_names.m"
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
#line 445 "file_names.m"
  {
#line 445 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 445 "file_names.m"
    {
#line 445 "file_names.m"
      *parse_tree__file_names__FileName_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_3);
    }
#line 445 "file_names.m"
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
#line 442 "file_names.m"
  {
#line 442 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 442 "file_names.m"
    {
#line 442 "file_names.m"
      *parse_tree__file_names__ModuleName_4 = mdbcomp__sym_name__string_to_sym_name_1_f_0(parse_tree__file_names__FileName_3);
    }
#line 442 "file_names.m"
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
#line 248 "file_names.m"
  {
#line 248 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 248 "file_names.m"
    {
#line 248 "file_names.m"
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(parse_tree__file_names__Globals_9, parse_tree__file_names__ExtraLinkObjName_11, parse_tree__file_names__Ext_12, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
#line 248 "file_names.m"
      return;
    }
#line 248 "file_names.m"
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
#line 248 "file_names.m"
  {
#line 248 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 248 "file_names.m"
    {
#line 248 "file_names.m"
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(parse_tree__file_names__Globals_9, parse_tree__file_names__FactTableFileName_11, parse_tree__file_names__Ext_12, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
#line 248 "file_names.m"
      return;
    }
#line 248 "file_names.m"
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
#line 236 "file_names.m"
  {
#line 236 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 236 "file_names.m"
    MR_String parse_tree__file_names__BaseFileName_16;
#line 236 "file_names.m"
    MR_String parse_tree__file_names__BaseName_17;
#line 236 "file_names.m"
    MR_String parse_tree__file_names__V_20_20;

#line 237 "file_names.m"
    {
#line 237 "file_names.m"
      parse_tree__file_names__BaseFileName_16 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_11);
    }
#line 238 "file_names.m"
    {
#line 238 "file_names.m"
      parse_tree__file_names__V_20_20 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__BaseFileName_16, parse_tree__file_names__Ext_12);
    }
#line 238 "file_names.m"
    {
#line 238 "file_names.m"
      parse_tree__file_names__BaseName_17 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__Prefix_10, parse_tree__file_names__V_20_20);
    }
#line 239 "file_names.m"
    {
#line 239 "file_names.m"
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_17, parse_tree__file_names__Ext_12, (MR_Integer) 1, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
#line 239 "file_names.m"
      return;
    }
#line 236 "file_names.m"
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
#line 190 "file_names.m"
  {
#line 190 "file_names.m"
    MR_bool parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_9, (MR_String) ".m") == 0);

#line 203 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 202 "file_names.m"
      {
#line 202 "file_names.m"
        parse_tree__source_file_map__lookup_module_source_file_4_p_0(parse_tree__file_names__ModuleName_8, parse_tree__file_names__FileName_10);
#line 202 "file_names.m"
        return;
      }
#line 203 "file_names.m"
    else
#line 216 "file_names.m"
      {
#line 206 "file_names.m"
        {
#line 206 "file_names.m"
          parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_9, (MR_String) ".java");
        }
#line 207 "file_names.m"
        if (!(parse_tree__file_names__succeeded))
#line 207 "file_names.m"
          {
#line 207 "file_names.m"
            {
#line 207 "file_names.m"
              parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_9, (MR_String) ".class");
            }
#line 207 "file_names.m"
          }
#line 216 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 210 "file_names.m"
          {
#line 210 "file_names.m"
            MR_String parse_tree__file_names__MangledModuleName_27;
#line 210 "file_names.m"
            MR_String parse_tree__file_names__BaseName_28;

#line 211 "file_names.m"
            {
#line 211 "file_names.m"
              parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__file_names__ModuleName_8, (MR_Integer) 0, (MR_String) "__", &parse_tree__file_names__MangledModuleName_27);
            }
#line 213 "file_names.m"
            {
#line 213 "file_names.m"
              parse_tree__file_names__BaseName_28 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__MangledModuleName_27, parse_tree__file_names__Ext_9);
            }
#line 214 "file_names.m"
            {
#line 214 "file_names.m"
              parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_7, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__file_names_scalar_common_1[0]), parse_tree__file_names__BaseName_28, parse_tree__file_names__Ext_9, (MR_Integer) 0, (MR_Integer) 1, parse_tree__file_names__FileName_10);
#line 214 "file_names.m"
              return;
            }
#line 210 "file_names.m"
          }
#line 216 "file_names.m"
        else
#line 229 "file_names.m"
          {
#line 220 "file_names.m"
            {
#line 220 "file_names.m"
              parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_9, (MR_String) ".erl");
            }
#line 221 "file_names.m"
            if (!(parse_tree__file_names__succeeded))
#line 221 "file_names.m"
              {
#line 221 "file_names.m"
                {
#line 221 "file_names.m"
                  parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_9, (MR_String) ".hrl");
                }
#line 221 "file_names.m"
                if (!(parse_tree__file_names__succeeded))
#line 222 "file_names.m"
                  {
#line 222 "file_names.m"
                    {
#line 222 "file_names.m"
                      parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_9, (MR_String) ".beam");
                    }
#line 222 "file_names.m"
                  }
#line 221 "file_names.m"
              }
#line 229 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 225 "file_names.m"
              {
#line 225 "file_names.m"
                MR_Word parse_tree__file_names__ErlangModuleName_29;
#line 225 "file_names.m"
                MR_String parse_tree__file_names__V_41_41;
#line 225 "file_names.m"
                MR_String parse_tree__file_names__BaseName_49;

#line 174 "file_names.m"
                {
#line 174 "file_names.m"
                  parse_tree__file_names__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__file_names__ModuleName_8);
                }
#line 176 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 175 "file_names.m"
                  {
#line 175 "file_names.m"
                    {
#line 175 "file_names.m"
                      parse_tree__file_names__ErlangModuleName_29 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__file_names__ModuleName_8);
                    }
#line 175 "file_names.m"
                  }
#line 176 "file_names.m"
                else
#line 177 "file_names.m"
                  parse_tree__file_names__ErlangModuleName_29 = parse_tree__file_names__ModuleName_8;
#line 226 "file_names.m"
                {
#line 226 "file_names.m"
                  parse_tree__file_names__V_41_41 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ErlangModuleName_29, (MR_String) "__");
                }
#line 226 "file_names.m"
                {
#line 226 "file_names.m"
                  parse_tree__file_names__BaseName_49 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__V_41_41, parse_tree__file_names__Ext_9);
                }
#line 227 "file_names.m"
                {
#line 227 "file_names.m"
                  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_49, parse_tree__file_names__Ext_9, (MR_Integer) 0, (MR_Integer) 1, parse_tree__file_names__FileName_10);
#line 227 "file_names.m"
                  return;
                }
#line 225 "file_names.m"
              }
#line 229 "file_names.m"
            else
#line 230 "file_names.m"
              {
#line 230 "file_names.m"
                MR_String parse_tree__file_names__V_45_45;
#line 230 "file_names.m"
                MR_String parse_tree__file_names__BaseName_50;

#line 230 "file_names.m"
                {
#line 230 "file_names.m"
                  parse_tree__file_names__V_45_45 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ModuleName_8, (MR_String) ".");
                }
#line 230 "file_names.m"
                {
#line 230 "file_names.m"
                  parse_tree__file_names__BaseName_50 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__V_45_45, parse_tree__file_names__Ext_9);
                }
#line 231 "file_names.m"
                {
#line 231 "file_names.m"
                  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_50, parse_tree__file_names__Ext_9, (MR_Integer) 0, (MR_Integer) 1, parse_tree__file_names__FileName_10);
#line 231 "file_names.m"
                  return;
                }
#line 230 "file_names.m"
              }
#line 229 "file_names.m"
          }
#line 216 "file_names.m"
      }
#line 190 "file_names.m"
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
#line 186 "file_names.m"
  {
#line 186 "file_names.m"
    MR_bool parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_10, (MR_String) ".m") == 0);

#line 203 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 202 "file_names.m"
      {
#line 202 "file_names.m"
        parse_tree__source_file_map__lookup_module_source_file_4_p_0(parse_tree__file_names__ModuleName_9, parse_tree__file_names__FileName_12);
#line 202 "file_names.m"
        return;
      }
#line 203 "file_names.m"
    else
#line 216 "file_names.m"
      {
#line 206 "file_names.m"
        {
#line 206 "file_names.m"
          parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".java");
        }
#line 207 "file_names.m"
        if (!(parse_tree__file_names__succeeded))
#line 207 "file_names.m"
          {
#line 207 "file_names.m"
            {
#line 207 "file_names.m"
              parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".class");
            }
#line 207 "file_names.m"
          }
#line 216 "file_names.m"
        if (parse_tree__file_names__succeeded)
#line 210 "file_names.m"
          {
#line 210 "file_names.m"
            MR_String parse_tree__file_names__MangledModuleName_28;
#line 210 "file_names.m"
            MR_String parse_tree__file_names__BaseName_29;

#line 211 "file_names.m"
            {
#line 211 "file_names.m"
              parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__file_names__ModuleName_9, (MR_Integer) 0, (MR_String) "__", &parse_tree__file_names__MangledModuleName_28);
            }
#line 213 "file_names.m"
            {
#line 213 "file_names.m"
              parse_tree__file_names__BaseName_29 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__MangledModuleName_28, parse_tree__file_names__Ext_10);
            }
#line 214 "file_names.m"
            {
#line 214 "file_names.m"
              parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__file_names_scalar_common_1[0]), parse_tree__file_names__BaseName_29, parse_tree__file_names__Ext_10, (MR_Integer) 1, parse_tree__file_names__MkDir_11, parse_tree__file_names__FileName_12);
#line 214 "file_names.m"
              return;
            }
#line 210 "file_names.m"
          }
#line 216 "file_names.m"
        else
#line 229 "file_names.m"
          {
#line 220 "file_names.m"
            {
#line 220 "file_names.m"
              parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".erl");
            }
#line 221 "file_names.m"
            if (!(parse_tree__file_names__succeeded))
#line 221 "file_names.m"
              {
#line 221 "file_names.m"
                {
#line 221 "file_names.m"
                  parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".hrl");
                }
#line 221 "file_names.m"
                if (!(parse_tree__file_names__succeeded))
#line 222 "file_names.m"
                  {
#line 222 "file_names.m"
                    {
#line 222 "file_names.m"
                      parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".beam");
                    }
#line 222 "file_names.m"
                  }
#line 221 "file_names.m"
              }
#line 229 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 225 "file_names.m"
              {
#line 225 "file_names.m"
                MR_Word parse_tree__file_names__ErlangModuleName_30;
#line 225 "file_names.m"
                MR_String parse_tree__file_names__V_42_42;
#line 225 "file_names.m"
                MR_String parse_tree__file_names__BaseName_50;

#line 174 "file_names.m"
                {
#line 174 "file_names.m"
                  parse_tree__file_names__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__file_names__ModuleName_9);
                }
#line 176 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 175 "file_names.m"
                  {
#line 175 "file_names.m"
                    {
#line 175 "file_names.m"
                      parse_tree__file_names__ErlangModuleName_30 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__file_names__ModuleName_9);
                    }
#line 175 "file_names.m"
                  }
#line 176 "file_names.m"
                else
#line 177 "file_names.m"
                  parse_tree__file_names__ErlangModuleName_30 = parse_tree__file_names__ModuleName_9;
#line 226 "file_names.m"
                {
#line 226 "file_names.m"
                  parse_tree__file_names__V_42_42 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ErlangModuleName_30, (MR_String) "__");
                }
#line 226 "file_names.m"
                {
#line 226 "file_names.m"
                  parse_tree__file_names__BaseName_50 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__V_42_42, parse_tree__file_names__Ext_10);
                }
#line 227 "file_names.m"
                {
#line 227 "file_names.m"
                  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_50, parse_tree__file_names__Ext_10, (MR_Integer) 1, parse_tree__file_names__MkDir_11, parse_tree__file_names__FileName_12);
#line 227 "file_names.m"
                  return;
                }
#line 225 "file_names.m"
              }
#line 229 "file_names.m"
            else
#line 230 "file_names.m"
              {
#line 230 "file_names.m"
                MR_String parse_tree__file_names__V_46_46;
#line 230 "file_names.m"
                MR_String parse_tree__file_names__BaseName_51;

#line 230 "file_names.m"
                {
#line 230 "file_names.m"
                  parse_tree__file_names__V_46_46 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ModuleName_9, (MR_String) ".");
                }
#line 230 "file_names.m"
                {
#line 230 "file_names.m"
                  parse_tree__file_names__BaseName_51 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__V_46_46, parse_tree__file_names__Ext_10);
                }
#line 231 "file_names.m"
                {
#line 231 "file_names.m"
                  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_51, parse_tree__file_names__Ext_10, (MR_Integer) 1, parse_tree__file_names__MkDir_11, parse_tree__file_names__FileName_12);
#line 231 "file_names.m"
                  return;
                }
#line 230 "file_names.m"
              }
#line 229 "file_names.m"
          }
#line 216 "file_names.m"
      }
#line 186 "file_names.m"
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
#line 182 "file_names.m"
  {
#line 182 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 183 "file_names.m"
    {
#line 183 "file_names.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__file_names__Globals_6, parse_tree__file_names__ModuleName_7, (MR_String) ".m", (MR_Integer) 1, parse_tree__file_names__SourceFileName_8);
#line 183 "file_names.m"
      return;
    }
#line 182 "file_names.m"
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
#line 176 "file_names.m"
  {
#line 176 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;
#line 176 "file_names.m"
    MR_Word parse_tree__file_names__QualModuleName_4;

#line 174 "file_names.m"
    {
#line 174 "file_names.m"
      parse_tree__file_names__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__file_names__ModuleName_3);
    }
#line 176 "file_names.m"
    if (parse_tree__file_names__succeeded)
#line 175 "file_names.m"
      {
#line 175 "file_names.m"
        {
#line 175 "file_names.m"
          return parse_tree__file_names__QualModuleName_4 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__file_names__ModuleName_3);
        }
#line 175 "file_names.m"
      }
#line 176 "file_names.m"
    else
#line 177 "file_names.m"
      parse_tree__file_names__QualModuleName_4 = parse_tree__file_names__ModuleName_3;
#line 176 "file_names.m"
    return parse_tree__file_names__QualModuleName_4;
#line 176 "file_names.m"
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
#line 163 "file_names.m"
  {
#line 163 "file_names.m"
    MR_bool parse_tree__file_names__succeeded;

#line 163 "file_names.m"
    if (((MR_tag((MR_Word) parse_tree__file_names__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 163 "file_names.m"
      {
#line 165 "file_names.m"
        {
#line 165 "file_names.m"
          MR_String parse_tree__file_names__ModuleNameStr_5;

#line 445 "file_names.m"
          {
#line 445 "file_names.m"
            parse_tree__file_names__ModuleNameStr_5 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__HeadVar__1_1);
          }
#line 167 "file_names.m"
          {
#line 167 "file_names.m"
            parse_tree__file_names__succeeded = mercury__library__mercury_std_library_module_1_p_0(parse_tree__file_names__ModuleNameStr_5);
          }
#line 165 "file_names.m"
        }
#line 163 "file_names.m"
        if (!(parse_tree__file_names__succeeded))
#line 168 "file_names.m"
          {
#line 168 "file_names.m"
            MR_Word parse_tree__file_names__ModuleName_9;
#line 168 "file_names.m"
            MR_String parse_tree__file_names__ModuleNameStr_10;
#line 168 "file_names.m"
            MR_String parse_tree__file_names__V_13_13;

#line 169 "file_names.m"
            {
#line 169 "file_names.m"
              parse_tree__file_names__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(parse_tree__file_names__HeadVar__1_1, &parse_tree__file_names__V_13_13, &parse_tree__file_names__ModuleName_9);
            }
#line 168 "file_names.m"
            if (parse_tree__file_names__succeeded)
#line 168 "file_names.m"
              {
#line 169 "file_names.m"
                parse_tree__file_names__succeeded = (strcmp((MR_String) "mercury", parse_tree__file_names__V_13_13) == 0);
#line 168 "file_names.m"
                if (parse_tree__file_names__succeeded)
#line 168 "file_names.m"
                  {
#line 445 "file_names.m"
                    {
#line 445 "file_names.m"
                      parse_tree__file_names__ModuleNameStr_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_9);
                    }
#line 171 "file_names.m"
                    {
#line 171 "file_names.m"
                      return parse_tree__file_names__succeeded = mercury__library__mercury_std_library_module_1_p_0(parse_tree__file_names__ModuleNameStr_10);
                    }
#line 168 "file_names.m"
                  }
#line 168 "file_names.m"
              }
#line 168 "file_names.m"
          }
#line 163 "file_names.m"
      }
#line 163 "file_names.m"
    else
#line 163 "file_names.m"
      {
#line 163 "file_names.m"
        MR_String parse_tree__file_names__Name_2 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__file_names__HeadVar__1_1, (MR_Integer) 0)));

#line 164 "file_names.m"
        {
#line 164 "file_names.m"
          return parse_tree__file_names__succeeded = mercury__library__mercury_std_library_module_1_p_0(parse_tree__file_names__Name_2);
        }
#line 163 "file_names.m"
      }
#line 163 "file_names.m"
    return parse_tree__file_names__succeeded;
#line 163 "file_names.m"
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
